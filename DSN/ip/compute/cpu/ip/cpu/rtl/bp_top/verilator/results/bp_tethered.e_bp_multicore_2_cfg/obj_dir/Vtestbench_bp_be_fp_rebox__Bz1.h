// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_BE_FP_REBOX__BZ1_H_
#define VERILATED_VTESTBENCH_BP_BE_FP_REBOX__BZ1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_be_fp_rebox__Bz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__tag_i,0,0);
    VL_IN8(__PVT__frm_i,2,0);
    VL_IN8(__PVT__invalid_exc_i,0,0);
    VL_IN8(__PVT__infinite_exc_i,0,0);
    VL_OUT8(__PVT__fflags_o,4,0);
    CData/*4:0*/ __Vcellout__round_mixed__midExceptionFlags;
    CData/*4:0*/ __Vcellout__round_mixed__fullExceptionFlags;
    CData/*4:0*/ __PVT__fflags_lo;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut;
    CData/*0:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__isNaNOut;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut;
    CData/*0:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0;
    CData/*0:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0;
    CData/*0:0*/ __PVT__round_mixed__DOT__recover__DOT__isNaN;
    CData/*0:0*/ __PVT__round_mixed__DOT__recover__DOT__isInf;
    CData/*0:0*/ __VdfgTmp_h183e8778__0;
    SData/*13:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp;
    SData/*8:0*/ __PVT__round_mixed__DOT__recover__DOT__exp;
    VL_INW(__PVT__raw_i,74,0,3);
    VL_OUTW(__PVT__reg_o,65,0,3);
    IData/*22:0*/ __PVT__round_mixed__DOT__round32__DOT__common_fractOut;
    QData/*51:0*/ __PVT__round_mixed__DOT__round64__DOT__common_fractOut;

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
    Vtestbench_bp_be_fp_rebox__Bz1(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_be_fp_rebox__Bz1();
    VL_UNCOPYABLE(Vtestbench_bp_be_fp_rebox__Bz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
