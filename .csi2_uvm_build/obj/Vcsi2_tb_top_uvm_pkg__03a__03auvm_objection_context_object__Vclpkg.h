// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_OBJECTION_CONTEXT_OBJECT__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_OBJECTION_CONTEXT_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__count;
    std::string __PVT__description;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __PVT__obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __PVT__source_obj;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> __PVT__objection;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_objection_context_object"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object(*this); }
    void __VnoInFunc_clear(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_context_object() {}
};


#endif  // guard
