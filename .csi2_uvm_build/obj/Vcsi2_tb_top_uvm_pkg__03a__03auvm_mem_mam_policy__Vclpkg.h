// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_MEM_MAM_POLICY__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_MEM_MAM_POLICY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__len;
    QData/*63:0*/ __PVT__start_offset;
    QData/*63:0*/ __PVT__min_offset;
    QData/*63:0*/ __PVT__max_offset;
    VlRandomizer __PVT__constraint;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;

    // INTERNAL VARIABLES
    VlRNGReseeds __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_mam_policy"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy(*this); }
    void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy() {}
};


#endif  // guard
