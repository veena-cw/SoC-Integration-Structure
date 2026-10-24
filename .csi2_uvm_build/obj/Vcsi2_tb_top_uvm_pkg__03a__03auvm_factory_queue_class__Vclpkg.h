// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_FACTORY_QUEUE_CLASS__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_FACTORY_QUEUE_CLASS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_factory_queue_class"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class(*this); }
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class() {}
};


#endif  // guard
