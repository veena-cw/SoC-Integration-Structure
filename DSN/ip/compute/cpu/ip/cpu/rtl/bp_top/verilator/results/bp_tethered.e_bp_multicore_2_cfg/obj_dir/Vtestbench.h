// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTESTBENCH_H_
#define VERILATED_VTESTBENCH_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtestbench__Syms;
class Vtestbench___024root;
class VerilatedFstC;
class Vtestbench_bp_me_stream_to_wormhole__pi9;
class Vtestbench_bp_me_stream_to_wormhole__pi10;
class Vtestbench_bp_core_tile_node__Bz1;
class Vtestbench_bp_io_tile_node__Bz1;
class Vtestbench_bsg_two_fifo__W80;
class Vtestbench_bsg_mux_one_hot__W40_E8;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtestbench VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtestbench__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtestbench_bp_me_stream_to_wormhole__pi9* const __PVT__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_stream_to_wormhole;
    Vtestbench_bp_me_stream_to_wormhole__pi10* const __PVT__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_stream_to_wormhole;
    Vtestbench_bp_core_tile_node__Bz1* const __PVT__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node;
    Vtestbench_bp_core_tile_node__Bz1* const __PVT__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node;
    Vtestbench_bp_io_tile_node__Bz1* const __PVT__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io;
    Vtestbench_bp_io_tile_node__Bz1* const __PVT__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io;
    Vtestbench_bsg_two_fifo__W80* const __PVT__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo;
    Vtestbench_bsg_two_fifo__W80* const __PVT__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo;
    Vtestbench_bsg_mux_one_hot__W40_E8* const __PVT__testbench__DOT__host__DOT__register__DOT__rmux_oh;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtestbench___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtestbench(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtestbench(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtestbench();
  private:
    VL_UNCOPYABLE(Vtestbench);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
