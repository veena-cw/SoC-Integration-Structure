// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_BARRIER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_BARRIER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_event;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__at_threshold;
    CData/*0:0*/ __PVT__auto_reset;
    IData/*31:0*/ __PVT__threshold;
    IData/*31:0*/ __PVT__num_waiters;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_event> __PVT__m_event;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_barrier"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_cancel(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_num_waiters(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn);
    virtual void __VnoInFunc_get_threshold(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_m_trigger(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup);
    virtual void __VnoInFunc_set_auto_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    virtual void __VnoInFunc_set_threshold(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ threshold);
    virtual VlCoroutine __VnoInFunc_wait_for(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ threshold);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier();
};


#endif  // guard
