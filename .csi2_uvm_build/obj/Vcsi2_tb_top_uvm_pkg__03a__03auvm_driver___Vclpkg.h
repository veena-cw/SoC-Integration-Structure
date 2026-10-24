// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_DRIVER___VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_DRIVER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz23;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver_;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver___Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver___Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver___Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver_ : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43> __PVT__seq_item_port;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_port__pi43> __PVT__seq_item_prod_if;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz23> __PVT__rsp_port;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __PVT__req;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> __PVT__rsp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_driver_"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver_(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver_() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_driver_();
};


#endif  // guard
