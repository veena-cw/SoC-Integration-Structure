// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__typename;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base>> __PVT__typeid_map;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base>> __PVT__type_map;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typeid_base"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base(*this); }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {}
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base();
};


#endif  // guard
