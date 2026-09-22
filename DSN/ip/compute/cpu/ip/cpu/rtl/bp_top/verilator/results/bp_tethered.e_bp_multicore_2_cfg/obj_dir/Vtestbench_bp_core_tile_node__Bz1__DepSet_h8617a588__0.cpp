// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"

extern "C" void* cosim_init(int ncpus, int memsize, int pmps, const char* prog_name);

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ ncpus, IData/*31:0*/ memsize, IData/*31:0*/ pmps, std::string prog_name, QData/*63:0*/ &cosim_init__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node\n"); );
    // Body
    int ncpus__Vcvt;
    for (size_t ncpus__Vidx = 0; ncpus__Vidx < 1; ++ncpus__Vidx) ncpus__Vcvt = ncpus;
    int memsize__Vcvt;
    for (size_t memsize__Vidx = 0; memsize__Vidx < 1; ++memsize__Vidx) memsize__Vcvt = memsize;
    int pmps__Vcvt;
    for (size_t pmps__Vidx = 0; pmps__Vidx < 1; ++pmps__Vidx) pmps__Vcvt = pmps;
    const char* prog_name__Vcvt;
    for (size_t prog_name__Vidx = 0; prog_name__Vidx < 1; ++prog_name__Vidx) prog_name__Vcvt = prog_name.c_str();
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    void* cosim_init__Vfuncrtn__Vcvt;
    cosim_init__Vfuncrtn__Vcvt = cosim_init(ncpus__Vcvt, memsize__Vcvt, pmps__Vcvt, prog_name__Vcvt);
    cosim_init__Vfuncrtn = VL_CVT_VP_Q(cosim_init__Vfuncrtn__Vcvt);
}

extern "C" void* cosim_finish(void* cosim_handle);

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ cosim_handle, QData/*63:0*/ &cosim_finish__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_finish_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node\n"); );
    // Body
    void* cosim_handle__Vcvt;
    for (size_t cosim_handle__Vidx = 0; cosim_handle__Vidx < 1; ++cosim_handle__Vidx) cosim_handle__Vcvt = VL_CVT_Q_VP(cosim_handle);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    void* cosim_finish__Vfuncrtn__Vcvt;
    cosim_finish__Vfuncrtn__Vcvt = cosim_finish(cosim_handle__Vcvt);
    cosim_finish__Vfuncrtn = VL_CVT_VP_Q(cosim_finish__Vfuncrtn__Vcvt);
}

extern "C" int cosim_step(void* cosim_handle, int hartid, long long pc, int insn, long long wdata, long long status);

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ cosim_handle, IData/*31:0*/ hartid, QData/*63:0*/ pc, IData/*31:0*/ insn, QData/*63:0*/ wdata, QData/*63:0*/ status, IData/*31:0*/ &cosim_step__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node\n"); );
    // Body
    void* cosim_handle__Vcvt;
    for (size_t cosim_handle__Vidx = 0; cosim_handle__Vidx < 1; ++cosim_handle__Vidx) cosim_handle__Vcvt = VL_CVT_Q_VP(cosim_handle);
    int hartid__Vcvt;
    for (size_t hartid__Vidx = 0; hartid__Vidx < 1; ++hartid__Vidx) hartid__Vcvt = hartid;
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int insn__Vcvt;
    for (size_t insn__Vidx = 0; insn__Vidx < 1; ++insn__Vidx) insn__Vcvt = insn;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    long long status__Vcvt;
    for (size_t status__Vidx = 0; status__Vidx < 1; ++status__Vidx) status__Vcvt = status;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    int cosim_step__Vfuncrtn__Vcvt;
    cosim_step__Vfuncrtn__Vcvt = cosim_step(cosim_handle__Vcvt, hartid__Vcvt, pc__Vcvt, insn__Vcvt, wdata__Vcvt, status__Vcvt);
    cosim_step__Vfuncrtn = cosim_step__Vfuncrtn__Vcvt;
}

extern "C" int cosim_trap(void* cosim_handle, int hartid, long long cause);

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ cosim_handle, IData/*31:0*/ hartid, QData/*63:0*/ cause, IData/*31:0*/ &cosim_trap__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node\n"); );
    // Body
    void* cosim_handle__Vcvt;
    for (size_t cosim_handle__Vidx = 0; cosim_handle__Vidx < 1; ++cosim_handle__Vidx) cosim_handle__Vcvt = VL_CVT_Q_VP(cosim_handle);
    int hartid__Vcvt;
    for (size_t hartid__Vidx = 0; hartid__Vidx < 1; ++hartid__Vidx) hartid__Vcvt = hartid;
    long long cause__Vcvt;
    for (size_t cause__Vidx = 0; cause__Vidx < 1; ++cause__Vidx) cause__Vcvt = cause;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    int cosim_trap__Vfuncrtn__Vcvt;
    cosim_trap__Vfuncrtn__Vcvt = cosim_trap(cosim_handle__Vcvt, hartid__Vcvt, cause__Vcvt);
    cosim_trap__Vfuncrtn = cosim_trap__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node\n"); );
    // Init
    QData/*63:0*/ __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init__0__Vfuncout;
    __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init__0__Vfuncout = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha5033d50__0;
    // Body
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li 
        = (7U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li) 
                 << 1U));
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li 
        = (7U & ((IData)(1U) + ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li) 
                                << 1U)));
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=         50, els_p=         64, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.btb.btb_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=         50, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.btb.btb_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=          8, els_p=        512, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.bht.bht_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=          8, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.bht.bht_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=         43, els_p=         16, read_write_same_addr_p=          1, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.ras.mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=        184, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.tag_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=          7, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.stat_mem)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"icache_trace"})) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__plusargs_en_li = 1U;
    }
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[0].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[0].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[1].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[1].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[2].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[2].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[3].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[3].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[4].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[4].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[5].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[5].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[6].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[6].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[7].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[7].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        114, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.director.fe_cmd_fifo.fifo_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=         80, els_p=          8, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.scheduler.issue_queue.preissue_fifo_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        174, els_p=          8, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.scheduler.issue_queue.queue_fifo_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_2r1w_sync: instantiating width_p=         66, els_p=         32, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.scheduler.int_regfile.tworonew.rf)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_3r1w_sync: instantiating width_p=         66, els_p=         32, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.scheduler.fp_regfile.threeronew.rf)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=        184, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_mem.dcache.tag_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=         15, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_mem.dcache.stat_mem)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"dcache_trace"})) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__plusargs_en_li = 1U;
    }
    __Vtemp_ha5033d50__0[0U] = 0x653d2573U;
    __Vtemp_ha5033d50__0[1U] = 0x5f66696cU;
    __Vtemp_ha5033d50__0[2U] = 0x656c66U;
    if (VL_UNLIKELY((! VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_ha5033d50__0), 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__prog_name)))) {
        VL_WRITEF("FATAL: +elf_file=<filename> plusarg not found! Please provide a valid RISC-V executable.\n");
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_FINISH_MT("/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 177, "");
    }
    Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(
                                                                                (&(vlSymsp->__Vscope_testbench__wrapper__processor__m__multicore__cc__y__BRA__0__KET____x__BRA__0__KET____tile_node__tile__core__core_lite__core_minimal__be__cosim)), 
                                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 0xb3U, 2U, 0x100U, 0U, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__prog_name, __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init__0__Vfuncout);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle 
        = __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init__0__Vfuncout;
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        467, els_p=       1024, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.cosim.commit_fifo.MSYNC_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.fe_lce.lce_fill_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"lce_trace"})) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__plusargs_en_li = 1U;
    }
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.be_lce.lce_fill_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"lce_trace"})) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__plusargs_en_li = 1U;
    }
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        197, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.fwd_xbar.buffer[0].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.rev_xbar.buffer[0].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.rev_xbar.buffer[1].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.rev_xbar.buffer[2].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.rev_xbar.buffer[3].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.rev_xbar.buffer[4].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"cce_trace"})) {
        vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__plusargs_en_li = 1U;
    }
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        188, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.cce.t.cce.resp_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.dma_concentrate.concentrator_in.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.dma_concentrate.concentrator_in.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.dma_concentrate.concentrator_in.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.dma_concentrate.concentrator_in.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__0(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__0\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h428fa53a__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_fe/test/common/bp_fe_nonsynth_icache_tracer.sv", 
                                                                92);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.fe.icache.icache_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("icache_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__1(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__1\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h428fa53a__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_perf.sv", 
                                                                37);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_sys.csr.perf initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("perf_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__2(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__2\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h428fa53a__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_dcache_tracer.sv", 
                                                                95);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_mem.dcache.dcache_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("dcache_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__3(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__3\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h428fa53a__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_watchdog.sv", 
                                                                39);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.watchdog initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("watchdog_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__4(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__4\n"); );
    // Body
    while (vlSymsp->TOP.testbench__DOT__tb_reset) {
        co_await vlSymsp->TOP.__VtrigSched_h36b79f23__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.tb_reset)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 
                                                                203);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.cosim initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("commit_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__5(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__5\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h428fa53a__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_me/test/common/bp_me_nonsynth_lce_tracer.sv", 
                                                                85);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.fe_lce.lce_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("lce_%0#.trace",
                                                        3,
                                                        vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__6(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__6\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h428fa53a__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_me/test/common/bp_me_nonsynth_lce_tracer.sv", 
                                                                85);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.be_lce.lce_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("lce_%0#.trace",
                                                        3,
                                                        vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__7(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__7\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h428fa53a__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_me/test/common/bp_me_nonsynth_cce_tracer.sv", 
                                                                98);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.cce.cce_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("cce_%0#.trace",
                                                        3,
                                                        vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__inited = 1U;
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__13(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__13\n"); );
    // Init
    CData/*3:0*/ tile__DOT__core__DOT__clints__DOT____Vcellinp__rtc_mux__data_i;
    tile__DOT__core__DOT__clints__DOT____Vcellinp__rtc_mux__data_i = 0;
    // Body
    tile__DOT__core__DOT__clints__DOT____Vcellinp__rtc_mux__data_i 
        = (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__rt_clk) 
            << 2U) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clk_ds_lo) 
                       << 1U) | (IData)(vlSymsp->TOP.testbench__DOT__dut_clk)));
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__rt_clk_lo 
        = (1U & ((IData)(tile__DOT__core__DOT__clints__DOT____Vcellinp__rtc_mux__data_i) 
                 >> (IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtimesel_reg__DOT__data_r)));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node\n"); );
    // Init
    QData/*63:0*/ __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init__4__Vfuncout;
    __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init__4__Vfuncout = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha5033d50__0;
    // Body
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li = 1U;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li 
        = (7U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li) 
                 << 1U));
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li 
        = (7U & ((IData)(1U) + ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li) 
                                << 1U)));
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0U;
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=         50, els_p=         64, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.btb.btb_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=         50, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.btb.btb_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=          8, els_p=        512, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.bht.bht_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=          8, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.bht.bht_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=         43, els_p=         16, read_write_same_addr_p=          1, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.pc_gen.ras.mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=        184, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.tag_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=          7, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.stat_mem)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"icache_trace"})) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__plusargs_en_li = 1U;
    }
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[0].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[0].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[1].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[1].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[2].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[2].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[3].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[3].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[4].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[4].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[5].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[5].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[6].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[6].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[7].data_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_synth: instantiating width_p=         64, els_p=        512 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.data_mems[7].data_mem.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        114, els_p=          4, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.director.fe_cmd_fifo.fifo_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=         80, els_p=          8, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.scheduler.issue_queue.preissue_fifo_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        174, els_p=          8, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.scheduler.issue_queue.queue_fifo_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_2r1w_sync: instantiating width_p=         66, els_p=         32, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.scheduler.int_regfile.tworonew.rf)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_3r1w_sync: instantiating width_p=         66, els_p=         32, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.scheduler.fp_regfile.threeronew.rf)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=        184, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_mem.dcache.tag_mem)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=         15, els_p=         64 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_mem.dcache.stat_mem)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"dcache_trace"})) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__plusargs_en_li = 1U;
    }
    __Vtemp_ha5033d50__0[0U] = 0x653d2573U;
    __Vtemp_ha5033d50__0[1U] = 0x5f66696cU;
    __Vtemp_ha5033d50__0[2U] = 0x656c66U;
    if (VL_UNLIKELY((! VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_ha5033d50__0), 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__prog_name)))) {
        VL_WRITEF("FATAL: +elf_file=<filename> plusarg not found! Please provide a valid RISC-V executable.\n");
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_FINISH_MT("/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 177, "");
    }
    Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(
                                                                                (&(vlSymsp->__Vscope_testbench__wrapper__processor__m__multicore__cc__y__BRA__0__KET____x__BRA__1__KET____tile_node__tile__core__core_lite__core_minimal__be__cosim)), 
                                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 0xb3U, 2U, 0x100U, 0U, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__prog_name, __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init__4__Vfuncout);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle 
        = __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_init__4__Vfuncout;
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        467, els_p=       1024, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.cosim.commit_fifo.MSYNC_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.fe_lce.lce_fill_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"lce_trace"})) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__plusargs_en_li = 1U;
    }
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        203, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.be_lce.lce_fill_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"lce_trace"})) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__plusargs_en_li = 1U;
    }
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        197, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.fwd_xbar.buffer[0].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.rev_xbar.buffer[0].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.rev_xbar.buffer[1].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.rev_xbar.buffer[2].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.rev_xbar.buffer[3].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        195, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.rev_xbar.buffer[4].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    if (VL_TESTPLUSARGS_I(std::string{"cce_trace"})) {
        vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__plusargs_en_li = 1U;
    }
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        188, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.cce.t.cce.resp_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.dma_concentrate.concentrator_in.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.dma_concentrate.concentrator_in.in_ch[0].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync: instantiating width_p=        128, els_p=          2, read_write_same_addr_p=          0, harden_p=          1 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.dma_concentrate.concentrator_in.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w_sync_synth: instantiating width_p=        128, els_p=          2 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.dma_concentrate.concentrator_in.in_ch[1].twofer.hardened.fifo.mem_1r1w_sync.synth)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__0(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__0\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h2855e638__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_fe/test/common/bp_fe_nonsynth_icache_tracer.sv", 
                                                                92);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.fe.icache.icache_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("icache_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__1(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__1\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h2855e638__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_perf.sv", 
                                                                37);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_sys.csr.perf initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("perf_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__2(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__2\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h2855e638__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_dcache_tracer.sv", 
                                                                95);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_mem.dcache.dcache_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("dcache_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__3(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__3\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h2855e638__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_watchdog.sv", 
                                                                39);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.watchdog initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("watchdog_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__4(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__4\n"); );
    // Body
    while (vlSymsp->TOP.testbench__DOT__tb_reset) {
        co_await vlSymsp->TOP.__VtrigSched_h36b79f23__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.tb_reset)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 
                                                                203);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.core_minimal.be.cosim initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("commit_%0#.trace",
                                                        1,
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li))) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__5(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__5\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h2855e638__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_me/test/common/bp_me_nonsynth_lce_tracer.sv", 
                                                                85);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.fe_lce.lce_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("lce_%0#.trace",
                                                        3,
                                                        vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__6(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__6\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h2855e638__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_me/test/common/bp_me_nonsynth_lce_tracer.sv", 
                                                                85);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.be_lce.lce_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("lce_%0#.trace",
                                                        3,
                                                        vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__inited = 1U;
}

VL_INLINE_OPT VlCoroutine Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__7(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__7\n"); );
    // Body
    while (vlSelf->__PVT__tile__DOT__reset_r) {
        co_await vlSymsp->TOP.__VtrigSched_h2855e638__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.reset_r)", 
                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_me/test/common/bp_me_nonsynth_cce_tracer.sv", 
                                                                98);
    }
    VL_WRITEF("BSG-INFO: %Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.cce.cce_tracer initializing...\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__file 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_SFORMATF_NX("cce_%0#.trace",
                                                        3,
                                                        vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li) )
                      , std::string{"w"});
    ;
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__inited = 1U;
}
