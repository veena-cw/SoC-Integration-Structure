// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_BP_BE_INT_UNBOX__BZ1_H_
#define VERILATED_VTESTBENCH_BP_BE_INT_UNBOX__BZ1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_bp_be_int_unbox__Bz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__tag_i,1,0);
    VL_IN8(__PVT__unsigned_i,0,0);
    VL_INW(__PVT__reg_i,65,0,3);
    VL_OUTW(__PVT__val_o,64,0,3);
    QData/*63:0*/ __PVT__raw;

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
    Vtestbench_bp_be_int_unbox__Bz1(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench_bp_be_int_unbox__Bz1();
    VL_UNCOPYABLE(Vtestbench_bp_be_int_unbox__Bz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
