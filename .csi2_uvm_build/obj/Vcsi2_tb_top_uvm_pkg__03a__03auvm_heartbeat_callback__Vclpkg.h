// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_HEARTBEAT_CALLBACK__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_HEARTBEAT_CALLBACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__cnt;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>, QData/*63:0*/> __PVT__last_trigger;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __PVT__target;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_heartbeat_callback"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_objects_triggered(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &objects_triggered__Vfuncrtn);
    virtual void __VnoInFunc_raised(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_reset_counts(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> target);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback();
};


#endif  // guard
