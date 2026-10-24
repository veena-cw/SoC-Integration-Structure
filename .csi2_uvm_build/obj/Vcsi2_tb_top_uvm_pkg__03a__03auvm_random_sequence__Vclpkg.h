// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RANDOM_SEQUENCE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RANDOM_SEQUENCE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi54;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi54> &get_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence___Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_ {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_success;
    IData/*31:0*/ __PVT__l_count;
    IData/*31:0*/ __PVT__l_exhaustive_seq_kind;
    IData/*31:0*/ __PVT__max_kind;
    IData/*31:0*/ __PVT__l_kind;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_random_sequence"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc___Vrandwith_h4dcde6d2__0(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence> __Vthis, IData/*31:0*/ &__Vrandwith_h4dcde6d2__0__Vfuncrtn);
    void __VnoInFunc___Vrandwith_h4dcde6d2__1(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence> __Vthis, IData/*31:0*/ &__Vrandwith_h4dcde6d2__1__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_get_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_count__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence();
};


#endif  // guard
