// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_async_fifo__W4f_La.h"

void Vtestbench_bsg_async_fifo__W4f_La___ctor_var_reset(Vtestbench_bsg_async_fifo__W4f_La* vlSelf);

Vtestbench_bsg_async_fifo__W4f_La::Vtestbench_bsg_async_fifo__W4f_La(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_bsg_async_fifo__W4f_La___ctor_var_reset(this);
}

void Vtestbench_bsg_async_fifo__W4f_La::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench_bsg_async_fifo__W4f_La::~Vtestbench_bsg_async_fifo__W4f_La() {
}
