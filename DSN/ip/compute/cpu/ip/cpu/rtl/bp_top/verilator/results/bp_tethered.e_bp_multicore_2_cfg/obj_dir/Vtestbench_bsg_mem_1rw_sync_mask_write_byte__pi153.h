// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BSG_MEM_1RW_SYNC_MASK_WRITE_BYTE__PI153_H_
#define VERILATED_VTESTBENCH_BSG_MEM_1RW_SYNC_MASK_WRITE_BYTE__PI153_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi153 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__reset_i,0,0);
        VL_IN8(__PVT__v_i,0,0);
        VL_IN8(__PVT__w_i,0,0);
        VL_IN8(__PVT__write_mask_i,7,0);
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__w_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__v_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__w_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__v_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__w_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__v_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__w_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__v_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__w_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__v_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__w_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__v_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__w_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__v_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__w_i;
        CData/*0:0*/ synth__DOT____Vcellinp__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__v_i;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__read_en;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__data_out;
        CData/*0:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r;
        CData/*7:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r;
        VL_IN16(__PVT__addr_i,8,0);
        SData/*8:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r;
        SData/*8:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r;
        SData/*8:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r;
        SData/*8:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r;
        SData/*8:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r;
        SData/*8:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r;
        SData/*8:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r;
        SData/*8:0*/ __PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__addr_r;
        VL_IN64(__PVT__data_i,63,0);
        VL_OUT64(__PVT__data_o,63,0);
    };
    struct {
        VlUnpacked<CData/*7:0*/, 512> __PVT__synth__DOT__nz__DOT__bk__BRA__0__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<CData/*7:0*/, 512> __PVT__synth__DOT__nz__DOT__bk__BRA__1__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<CData/*7:0*/, 512> __PVT__synth__DOT__nz__DOT__bk__BRA__2__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<CData/*7:0*/, 512> __PVT__synth__DOT__nz__DOT__bk__BRA__3__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<CData/*7:0*/, 512> __PVT__synth__DOT__nz__DOT__bk__BRA__4__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<CData/*7:0*/, 512> __PVT__synth__DOT__nz__DOT__bk__BRA__5__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<CData/*7:0*/, 512> __PVT__synth__DOT__nz__DOT__bk__BRA__6__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem;
        VlUnpacked<CData/*7:0*/, 512> __PVT__synth__DOT__nz__DOT__bk__BRA__7__KET____DOT__mem_1rw_sync__DOT__synth__DOT__nz__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi153(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi153();
    VL_UNCOPYABLE(Vtestbench_bsg_mem_1rw_sync_mask_write_byte__pi153);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
