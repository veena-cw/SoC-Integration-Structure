// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49093,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9814,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9815,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8816,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8757,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8773,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47114,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__1__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__1__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49093,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9816,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9817,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8817,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8759,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8774,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47116,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__2__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__2__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49093,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9818,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9819,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8818,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8761,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8775,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47118,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__3__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__3__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49093,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9820,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9821,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8819,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8763,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8776,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47120,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__4__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__4__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49093,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9822,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9823,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8820,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8765,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8777,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47122,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__5__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__5__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49093,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9824,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9825,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8821,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8767,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8778,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47124,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__6__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__6__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49093,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9826,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9827,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8822,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8769,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8779,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47126,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__7__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__7__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49093,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9828,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9829,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8823,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8771,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8780,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47128,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__0__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49102,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9835,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9836,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8914,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8855,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8871,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47130,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__1__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__1__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49102,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9837,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9838,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8915,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8857,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8872,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47132,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__2__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__2__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49102,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9839,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9840,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8916,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8859,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8873,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47134,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__3__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__3__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49102,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9841,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9842,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8917,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8861,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8874,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47136,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__4__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__4__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49102,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9843,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9844,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8918,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8863,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8875,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47138,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__5__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__5__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49102,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9845,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9846,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8919,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8865,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8876,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47140,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__6__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__6__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49102,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9847,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9848,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8920,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8867,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8877,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47142,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__7__KET____DOT__data_mem__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__d__BRA__7__KET____DOT__data_mem__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+50383,"els_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50380,"addr_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50361,"data_width_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50359,"latch_last_read_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50365,"write_mask_width_lp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50357,"enable_clock_gating_p",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+49403,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49102,"reset_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9849,"v_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9850,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8921,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declQuad(c+8869,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+8878,"write_mask_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+47144,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+49403,"clk_lo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("bk[0] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[1] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[2] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[3] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[4] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[5] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[6] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("bk[7] ");
    tracep->pushNamePrefix("mem_1rw_sync ");
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(8);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__bp_be_pkg__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__bp_be_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__out_ch__BRA__1__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__out_ch__BRA__1__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__out_ch__BRA__2__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__out_ch__BRA__2__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__out_ch__BRA__1__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__out_ch__BRA__1__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__out_ch__BRA__2__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__out_ch__BRA__2__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__out_ch__BRA__1__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__out_ch__BRA__1__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__out_ch__BRA__2__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__out_ch__BRA__2__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__out_ch__BRA__1__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__out_ch__BRA__1__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__out_ch__BRA__2__KET____DOT__data_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__out_ch__BRA__2__KET____DOT__data_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_set_select_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_set_select_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_set_select_mux__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_set_select_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__host__DOT__register__DOT__rmux_oh__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__host__DOT__register__DOT__rmux_oh__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__0__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__1__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__2__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__3__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__fwd_xbar__DOT__cb__DOT__l__BRA__4__KET____DOT__mux_one_hot__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__bp_common_pkg__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__bp_common_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__34__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__35__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__36__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__37__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__38__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__39__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__40__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__41__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__42__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__43__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__44__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__45__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__46__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__47__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__48__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__49__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__50__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__51__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__52__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__53__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__54__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__55__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__56__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__57__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__58__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__59__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__60__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__61__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__62__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__1__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__63__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__8__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__9__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__10__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__11__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__12__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__13__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__14__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__15__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__16__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__17__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__18__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__19__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__20__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__21__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__22__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__23__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__24__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__25__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__26__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__27__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__28__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__29__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__30__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__31__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__32__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0(Vtestbench___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__slices__BRA__0__KET____DOT__l2s__bank__BRA__0__KET____DOT__cache__DOT__data_mem__DOT__synth__DOT__nz__DOT__bk__BRA__33__KET____DOT__mem_1rw_sync__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("synth ");
    tracep->pushNamePrefix("nz ");
    tracep->pushNamePrefix("llr ");
    tracep->pushNamePrefix("dff_bypass ");
    tracep->pushNamePrefix("dff ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("read_en_dff ");
    tracep->popNamePrefix(4);
}
