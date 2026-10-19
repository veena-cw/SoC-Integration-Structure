// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

Vcsi2_rx_bfm_smoke_tb__Syms::Vcsi2_rx_bfm_smoke_tb__Syms(VerilatedContext* contextp, const char* namep, Vcsi2_rx_bfm_smoke_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(890);
    // Setup sub module instances
    TOP____024unit.ctor(this, "$unit");
    TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ctor(this, "csi2_rx_bfm_smoke_tb.phy_bfm");
    TOP__std.ctor(this, "std");
    TOP__c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg.ctor(this, "c_phy_bfm_if::__VDynScope_1__Vclpkg");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__csi2_rx_bfm_smoke_tb__DOT__phy_bfm = &TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm;
    TOP.__PVT__std = &TOP__std;
    TOP.c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg = &TOP__c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vcsi2_rx_bfm_smoke_tb__Syms::~Vcsi2_rx_bfm_smoke_tb__Syms() {
    if (__Vm_dumping) _traceDumpClose();
    // Tear down scopes
    // Tear down sub module instances
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg.dtor();
    TOP__std.dtor();
    TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.dtor();
    TOP____024unit.dtor();
}

void Vcsi2_rx_bfm_smoke_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vcsi2_rx_bfm_smoke_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        const std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vcsi2_rx_bfm_smoke_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
