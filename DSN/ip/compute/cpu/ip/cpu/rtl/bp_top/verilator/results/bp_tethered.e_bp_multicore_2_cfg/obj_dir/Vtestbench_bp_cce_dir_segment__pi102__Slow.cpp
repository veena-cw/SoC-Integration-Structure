// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_cce_dir_segment__pi102.h"

void Vtestbench_bp_cce_dir_segment__pi102___ctor_var_reset(Vtestbench_bp_cce_dir_segment__pi102* vlSelf);

Vtestbench_bp_cce_dir_segment__pi102::Vtestbench_bp_cce_dir_segment__pi102(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_bp_cce_dir_segment__pi102___ctor_var_reset(this);
}

void Vtestbench_bp_cce_dir_segment__pi102::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench_bp_cce_dir_segment__pi102::~Vtestbench_bp_cce_dir_segment__pi102() {
}
