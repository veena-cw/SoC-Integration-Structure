// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"

void Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ cosim_handle, QData/*63:0*/ &cosim_finish__Vfuncrtn);

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___eval_final__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_final__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node\n"); );
    // Init
    QData/*63:0*/ __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish__1__Vfuncout;
    __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish__1__Vfuncout = 0;
    // Body
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.icache_tracer terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_sys.csr.perf terminating...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__file,"[BSG-STAT][4]:\n[CORE%0x]:\n\tclk   : %11d\n\tinstr : %11d\n\tmIPC  : %11d\n",
               1,(1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li)),
               32,vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__cycle_cnt,
               32,vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__instr_cnt,
               32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x3e8U), vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__instr_cnt), vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__cycle_cnt));
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__file); }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_mem.dcache.dcache_tracer terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.watchdog terminating...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(
                                                                                (&(vlSymsp->__Vscope_testbench__wrapper__processor__m__multicore__cc__y__BRA__0__KET____x__BRA__0__KET____tile_node__tile__core__core_lite__core_minimal__be__cosim)), 
                                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 0xb5U, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle, __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish__1__Vfuncout);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle 
        = __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish__1__Vfuncout;
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.cosim terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.fe_lce.lce_tracer terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.be_lce.lce_tracer terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.cce.cce_tracer terminating...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___eval_final__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_final__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node\n"); );
    // Init
    QData/*63:0*/ __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish__5__Vfuncout;
    __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish__5__Vfuncout = 0;
    // Body
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.icache_tracer terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_sys.csr.perf terminating...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__file,"[BSG-STAT][4]:\n[CORE%0x]:\n\tclk   : %11d\n\tinstr : %11d\n\tmIPC  : %11d\n",
               1,(1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li)),
               32,vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__cycle_cnt,
               32,vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__instr_cnt,
               32,VL_DIVS_III(32, VL_MULS_III(32, (IData)(0x3e8U), vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__instr_cnt), vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__cycle_cnt));
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__file); }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_mem.dcache.dcache_tracer terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.watchdog terminating...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(
                                                                                (&(vlSymsp->__Vscope_testbench__wrapper__processor__m__multicore__cc__y__BRA__0__KET____x__BRA__1__KET____tile_node__tile__core__core_lite__core_minimal__be__cosim)), 
                                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 0xb5U, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle, __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish__5__Vfuncout);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle 
        = __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish__5__Vfuncout;
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.cosim terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.fe_lce.lce_tracer terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.be_lce.lce_tracer terminating...\n",
              vlSymsp->name());
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.cce.cce_tracer terminating...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}
