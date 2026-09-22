// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_CCE_DIR_SEGMENT__PI102_H_
#define VERILATED_VTESTBENCH_BP_CCE_DIR_SEGMENT__PI102_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_cce_dir_segment__pi102 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__reset_i,0,0);
        VL_IN8(__PVT__addr_bypass_i,0,0);
        VL_IN8(__PVT__lce_i,0,0);
        VL_IN8(__PVT__way_i,2,0);
        VL_IN8(__PVT__lru_way_i,2,0);
        VL_IN8(__PVT__coh_state_i,2,0);
        VL_IN8(__PVT__addr_dst_gpr_i,3,0);
        VL_IN8(__PVT__cmd_i,3,0);
        VL_IN8(__PVT__r_v_i,0,0);
        VL_IN8(__PVT__r_lru_v_i,0,0);
        VL_IN8(__PVT__w_v_i,0,0);
        VL_OUT8(__PVT__busy_o,0,0);
        VL_OUT8(__PVT__sharers_v_o,0,0);
        VL_OUT8(__PVT__sharers_hits_o,1,0);
        VL_OUT8(__PVT__sharers_ways_o,5,0);
        VL_OUT8(__PVT__sharers_coh_states_o,5,0);
        VL_OUT8(__PVT__lru_v_o,0,0);
        VL_OUT8(__PVT__lru_coh_state_o,2,0);
        VL_OUT8(__PVT__addr_v_o,0,0);
        VL_OUT8(__PVT__addr_dst_gpr_o,3,0);
        CData/*4:0*/ __PVT__set_id;
        CData/*0:0*/ __PVT__dir_ram_w_v;
        CData/*0:0*/ __PVT__dir_ram_v;
        CData/*4:0*/ __PVT__dir_ram_addr;
        CData/*4:0*/ __PVT__dir_ram_addr_r;
        CData/*4:0*/ __PVT__dir_ram_addr_n;
        CData/*0:0*/ __PVT__cnt_clr;
        CData/*0:0*/ __PVT__cnt_inc;
        CData/*5:0*/ __PVT__cnt;
        CData/*2:0*/ __PVT__state_r;
        CData/*2:0*/ __PVT__state_n;
        CData/*0:0*/ __PVT__lce_r;
        CData/*0:0*/ __PVT__lce_n;
        CData/*2:0*/ __PVT__way_r;
        CData/*2:0*/ __PVT__way_n;
        CData/*2:0*/ __PVT__lru_way_r;
        CData/*2:0*/ __PVT__lru_way_n;
        CData/*1:0*/ __PVT__dir_data_o_v_r;
        CData/*1:0*/ __PVT__dir_data_o_v_n;
        CData/*3:0*/ __PVT__addr_dst_gpr_r;
        CData/*3:0*/ __PVT__addr_dst_gpr_n;
        CData/*0:0*/ __PVT__r_lru_v_r;
        CData/*0:0*/ __PVT__r_lru_v_n;
        CData/*0:0*/ __PVT__sharers_v_r;
        CData/*0:0*/ __PVT__sharers_v_n;
        CData/*1:0*/ __PVT__sharers_hits_r;
        CData/*1:0*/ __PVT__sharers_hits_n;
        CData/*5:0*/ __PVT__sharers_ways_r;
        CData/*5:0*/ __PVT__sharers_ways_n;
        CData/*5:0*/ __PVT__sharers_coh_states_r;
        CData/*5:0*/ __PVT__sharers_coh_states_n;
        CData/*1:0*/ __PVT__sharers_hits;
        CData/*5:0*/ __PVT__sharers_ways;
        CData/*5:0*/ __PVT__sharers_coh_states;
        CData/*2:0*/ __Vlvbound_h15006844__0;
        CData/*2:0*/ __Vlvbound_h59a319bb__0;
        CData/*2:0*/ __Vlvbound_h15006844__1;
        CData/*2:0*/ __Vlvbound_h2ae7ea29__0;
        CData/*2:0*/ __Vlvbound_hb97b11e9__0;
        CData/*4:0*/ __PVT__directory__DOT__synth__DOT__nz__DOT__addr_r;
        CData/*2:0*/ tag_checker__DOT____Vcellout__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__addr_o;
        CData/*7:0*/ tag_checker__DOT____Vcellinp__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__i;
        CData/*2:0*/ tag_checker__DOT____Vcellout__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__addr_o;
    };
    struct {
        CData/*7:0*/ tag_checker__DOT____Vcellinp__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__i;
        IData/*31:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__addr;
        IData/*31:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__v;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        IData/*31:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__addr;
        IData/*31:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__v;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__tag_checker__DOT__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        VlWide<12>/*367:0*/ __PVT__dir_ram_w_mask;
        VlWide<12>/*367:0*/ __PVT__dir_ram_w_data;
        VlWide<12>/*367:0*/ __Vcellout__directory__data_o;
        IData/*19:0*/ __PVT__lru_tag_lo;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__j;
        IData/*22:0*/ __Vlvbound_h8d6df08e__0;
        IData/*19:0*/ __Vlvbound_h35b14da1__0;
        VlWide<12>/*367:0*/ __PVT__directory__DOT__synth__DOT__nz__DOT__data_n;
        VlWide<12>/*367:0*/ __PVT__lru_extract__DOT__row;
        VL_IN64(__PVT__addr_i,39,0);
        VL_OUT64(__PVT__lru_addr_o,39,0);
        VL_OUT64(__PVT__addr_o,39,0);
        QData/*39:0*/ __PVT__addr_r;
        QData/*39:0*/ __PVT__addr_n;
        VlUnpacked<VlWide<12>/*367:0*/, 32> __PVT__directory__DOT__synth__DOT__nz__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_bp_cce_dir_segment__pi102(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_cce_dir_segment__pi102();
    VL_UNCOPYABLE(Vtestbench_bp_cce_dir_segment__pi102);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
