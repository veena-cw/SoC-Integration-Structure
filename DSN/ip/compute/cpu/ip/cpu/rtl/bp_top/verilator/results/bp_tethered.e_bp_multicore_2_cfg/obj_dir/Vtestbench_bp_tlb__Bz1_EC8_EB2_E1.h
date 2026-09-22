// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_TLB__BZ1_EC8_EB2_E1_H_
#define VERILATED_VTESTBENCH_BP_TLB__BZ1_EC8_EB2_E1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_tlb__Bz1_EC8_EB2_E1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__reset_i,0,0);
        VL_IN8(__PVT__fence_i,0,0);
        VL_IN8(__PVT__v_i,0,0);
        VL_IN8(__PVT__w_i,0,0);
        VL_OUT8(__PVT__v_o,0,0);
        CData/*0:0*/ __PVT__w_v_li;
        CData/*0:0*/ __PVT__fill_gigapage;
        CData/*0:0*/ __PVT__fill_megapage;
        CData/*0:0*/ __PVT__fill_kilopage;
        CData/*0:0*/ __PVT__flush_4k_li;
        CData/*7:0*/ __PVT__tag_r_match_4k_lo;
        CData/*7:0*/ __PVT__tag_4k_w_v_li;
        CData/*0:0*/ __PVT__flush_2m_li;
        CData/*1:0*/ __PVT__tag_r_match_2m_lo;
        CData/*1:0*/ __PVT__tag_2m_w_v_li;
        CData/*0:0*/ __PVT__tag_r_match_1g_lo;
        CData/*0:0*/ __PVT__tag_1g_w_v_li;
        CData/*7:0*/ __PVT__mem_4k_w_v_li;
        CData/*1:0*/ __PVT__mem_2m_w_v_li;
        CData/*0:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r;
        CData/*2:0*/ __PVT__replacement_4k__DOT__lru__DOT__way_lo;
        CData/*2:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_li;
        CData/*6:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_update_mask_lo;
        CData/*6:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_sel_lo;
        CData/*6:0*/ __PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo;
        CData/*6:0*/ __PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo;
        CData/*6:0*/ __PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r;
        CData/*0:0*/ replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o;
        CData/*7:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo;
        IData/*31:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t;
        CData/*7:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
        CData/*7:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted;
        CData/*7:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted;
        IData/*31:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr;
        IData/*31:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        IData/*31:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr;
        IData/*31:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs;
        CData/*1:0*/ __PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*0:0*/ replacement_4k__DOT__lru__DOT__read_decoder__DOT____VdfgTmp_hd35049cc__0;
        CData/*0:0*/ replacement_4k__DOT__lru__DOT__read_decoder__DOT____VdfgTmp_hd35d9a4f__0;
        CData/*0:0*/ __PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __PVT__replacement_2m__DOT__lru__DOT__way_lo;
    };
    struct {
        CData/*0:0*/ __PVT__replacement_2m__DOT__lru__DOT__read_update_lo;
        CData/*0:0*/ __PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r;
        CData/*1:0*/ __PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__enc_lo;
        CData/*3:0*/ __PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t;
        CData/*1:0*/ __PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted;
        CData/*3:0*/ __PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr;
        CData/*3:0*/ __PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v;
        CData/*1:0*/ __PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*3:0*/ __PVT__replacement_2m__DOT__lru__DOT__read_way_encoder__DOT__addr;
        CData/*3:0*/ __PVT__replacement_2m__DOT__lru__DOT__read_way_encoder__DOT__v;
        CData/*1:0*/ __PVT__replacement_2m__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs;
        CData/*0:0*/ __PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r;
        CData/*0:0*/ __VdfgTmp_h0bfa2b3a__0;
        CData/*0:0*/ __VdfgTmp_hb2e0dc53__0;
        CData/*0:0*/ __VdfgTmp_heb03e355__0;
        CData/*0:0*/ __VdfgTmp_h9fd8b6d8__0;
        CData/*0:0*/ __VdfgTmp_h74fb92a4__0;
        CData/*0:0*/ __VdfgTmp_h5d8f972c__0;
        CData/*0:0*/ __VdfgTmp_hcc6a5e49__0;
        CData/*0:0*/ __VdfgTmp_hb124684b__0;
        CData/*0:0*/ __VdfgTmp_h5700274a__0;
        CData/*0:0*/ __VdfgTmp_h4f7ee412__0;
        CData/*1:0*/ __VdfgTmp_hcb35e6d5__0;
        CData/*0:0*/ __VdfgTmp_h688f3a1f__0;
        CData/*0:0*/ __VdfgTmp_h1c393d63__0;
        CData/*0:0*/ __VdfgTmp_hc9edb506__0;
        CData/*0:0*/ __VdfgTmp_hf5582777__0;
        CData/*0:0*/ __VdfgTmp_h8f743f3b__0;
        CData/*0:0*/ __VdfgTmp_h67e82bed__0;
        CData/*0:0*/ __VdfgTmp_h09fed89b__0;
        CData/*6:0*/ __VdfgTmp_h7c897945__0;
        CData/*0:0*/ __VdfgTmp_heb538426__0;
        VL_IN(__PVT__vtag_i,26,0);
        IData/*26:0*/ __PVT__vtag_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r;
        IData/*26:0*/ __PVT__genblk2__DOT__mem_array_2m__BRA__0__KET____DOT__mem_reg__DOT__data_r;
        IData/*26:0*/ __PVT__genblk2__DOT__mem_array_2m__BRA__1__KET____DOT__mem_reg__DOT__data_r;
        IData/*17:0*/ __PVT__genblk3__DOT__mem_array_1g__BRA__0__KET____DOT__mem_reg__DOT__data_r;
        VL_IN64(__PVT__entry_i,35,0);
        VL_OUT64(__PVT__entry_o,35,0);
        QData/*35:0*/ __PVT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r;
        QData/*35:0*/ __PVT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r;
        QData/*35:0*/ __PVT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r;
        QData/*35:0*/ __PVT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r;
        QData/*35:0*/ __PVT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r;
        QData/*35:0*/ __PVT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r;
        QData/*35:0*/ __PVT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r;
        QData/*35:0*/ __PVT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r;
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

    // CONSTRUCTORS
    Vtestbench_bp_tlb__Bz1_EC8_EB2_E1(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_tlb__Bz1_EC8_EB2_E1();
    VL_UNCOPYABLE(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
