// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    IData/*31:0*/ __Vilp;
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vilp = 0U;
    while ((__Vilp <= 0xf9U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
