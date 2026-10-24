// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ17__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ17__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__max;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8>> strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn);
    void __VnoInFunc_levenshtein_distance(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn);
    void __VnoInFunc_minimum(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_spell_chkr__Tz17"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17(*this); }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {}
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17() {}
};


#endif  // guard
