// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_INDIRECT_FTDR_SEQ__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_INDIRECT_FTDR_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_idx;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> __PVT__m_addr_reg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> __PVT__m_data_reg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_indirect_ftdr_seq"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> addr_reg, IData/*31:0*/ idx, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> data_reg);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq();
};


#endif  // guard
