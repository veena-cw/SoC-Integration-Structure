// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_lce_cmd__pi93.h"

VL_ATTR_COLD void Vtestbench_bp_lce_cmd__pi93___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0\n"); );
    // Body
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                 & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__full_r))));
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->__PVT__cache_init_done_o = ((0U != (IData)(vlSelf->__PVT__state_r)) 
                                        & (1U != (IData)(vlSelf->__PVT__state_r)));
    vlSelf->__PVT__dirty_stat_r = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                    ? ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__stat_mem__data_o) 
                                       << 8U) : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__VdfgTmp_h462b05e0__0 = (1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                            >> (7U 
                                                & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                   >> 0x1cU))));
}

VL_ATTR_COLD void Vtestbench_bp_lce_cmd__pi93___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0\n"); );
    // Body
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                 & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__full_r))));
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->__PVT__cache_init_done_o = ((0U != (IData)(vlSelf->__PVT__state_r)) 
                                        & (1U != (IData)(vlSelf->__PVT__state_r)));
    vlSelf->__PVT__dirty_stat_r = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                    ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__stat_mem__data_o)
                                    : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__VdfgTmp_h462b05e0__0 = (1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                            >> (7U 
                                                & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                   >> 0x1cU))));
}

VL_ATTR_COLD void Vtestbench_bp_lce_cmd__pi93___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__0\n"); );
    // Body
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                 & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__full_r))));
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->__PVT__cache_init_done_o = ((0U != (IData)(vlSelf->__PVT__state_r)) 
                                        & (1U != (IData)(vlSelf->__PVT__state_r)));
    vlSelf->__PVT__dirty_stat_r = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                    ? ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__stat_mem__data_o) 
                                       << 8U) : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__VdfgTmp_h462b05e0__0 = (1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                            >> (7U 
                                                & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                   >> 0x1cU))));
}

VL_ATTR_COLD void Vtestbench_bp_lce_cmd__pi93___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0(Vtestbench_bp_lce_cmd__pi93* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_lce_cmd__pi93___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__0\n"); );
    // Body
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[6U] 
        = vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][6U];
    vlSelf->fill_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__fill_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r)) 
                 & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__full_r))));
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[0U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][0U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[1U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][1U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[2U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][2U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[3U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][3U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[4U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][4U];
    vlSelf->resp_pump_out__DOT__gearbox__DOT____Vcellout__fifo__data_o[5U] 
        = vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__resp_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r][5U];
    vlSelf->__PVT__cache_init_done_o = ((0U != (IData)(vlSelf->__PVT__state_r)) 
                                        & (1U != (IData)(vlSelf->__PVT__state_r)));
    vlSelf->__PVT__dirty_stat_r = ((IData)(vlSelf->__PVT__dirty_stat_reg__DOT__v_reg__DOT__data_r)
                                    ? (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__stat_mem__data_o)
                                    : (IData)(vlSelf->__PVT__dirty_stat_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r));
    vlSelf->__VdfgTmp_h462b05e0__0 = (1U & ((IData)(vlSelf->__PVT__dirty_stat_r) 
                                            >> (7U 
                                                & (vlSelf->__PVT__fsm_cmd_header_reg__DOT__data_r[1U] 
                                                   >> 0x1cU))));
}
