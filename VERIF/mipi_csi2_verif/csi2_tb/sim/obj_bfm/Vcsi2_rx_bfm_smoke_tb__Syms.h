// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCSI2_RX_BFM_SMOKE_TB__SYMS_H_
#define VERILATED_VCSI2_RX_BFM_SMOKE_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vcsi2_rx_bfm_smoke_tb.h"

// INCLUDE MODULE CLASSES
#include "Vcsi2_rx_bfm_smoke_tb___024root.h"
#include "Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if.h"
#include "Vcsi2_rx_bfm_smoke_tb___024unit.h"
#include "Vcsi2_rx_bfm_smoke_tb_std.h"
#include "Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg.h"
#include "Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore__Vclpkg.h"
#include "Vcsi2_rx_bfm_smoke_tb_std__03a__03aprocess__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vcsi2_rx_bfm_smoke_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcsi2_rx_bfm_smoke_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcsi2_rx_bfm_smoke_tb___024root TOP;
    Vcsi2_rx_bfm_smoke_tb___024unit TOP____024unit;
    Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm;
    Vcsi2_rx_bfm_smoke_tb_std      TOP__std;
    Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg TOP__c_phy_bfm_if__03a__03a__VDynScope_1__Vclpkg;
    Vcsi2_rx_bfm_smoke_tb_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vcsi2_rx_bfm_smoke_tb_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    Vcsi2_rx_bfm_smoke_tb__Syms(VerilatedContext* contextp, const char* namep, Vcsi2_rx_bfm_smoke_tb* modelp);
    ~Vcsi2_rx_bfm_smoke_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
