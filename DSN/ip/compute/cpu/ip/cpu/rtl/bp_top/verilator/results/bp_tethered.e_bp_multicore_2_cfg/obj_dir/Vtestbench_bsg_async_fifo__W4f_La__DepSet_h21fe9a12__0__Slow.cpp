// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_async_fifo__W4f_La.h"

VL_ATTR_COLD void Vtestbench_bsg_async_fifo__W4f_La___ctor_var_reset(Vtestbench_bsg_async_fifo__W4f_La* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtestbench_bsg_async_fifo__W4f_La___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__w_clk_i = 0;
    vlSelf->__PVT__w_reset_i = 0;
    vlSelf->__PVT__w_enq_i = 0;
    VL_ZERO_RESET_W(79, vlSelf->__PVT__w_data_i);
    vlSelf->__PVT__w_full_o = 0;
    vlSelf->__PVT__r_clk_i = 0;
    vlSelf->__PVT__r_reset_i = 0;
    vlSelf->__PVT__r_deq_i = 0;
    VL_ZERO_RESET_W(79, vlSelf->__PVT__r_data_o);
    vlSelf->__PVT__r_valid_o = 0;
    vlSelf->__PVT__r_ptr_gray_r = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_ZERO_RESET_W(79, vlSelf->__PVT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_r = 0;
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_n = 0;
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_r = 0;
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_p1_n = 0;
    vlSelf->__PVT__bapg_wr__DOT__w_ptr_gray_n = 0;
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_r = 0;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_n = 0;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_r = 0;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_p1_n = 0;
    vlSelf->__PVT__bapg_rd__DOT__w_ptr_gray_n = 0;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r = 0;
}
