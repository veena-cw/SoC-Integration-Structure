// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_IMP__PI42__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_IMP__PI42__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz134 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_seq_item_pull_imp__pi42"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42(*this); }
    VlCoroutine __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    VlCoroutine __VnoInFunc_get_next_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_do_available(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_item_done(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    VlCoroutine __VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    void __VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    void __VnoInFunc_put_response(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    VlCoroutine __VnoInFunc_try_next_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    VlCoroutine __VnoInFunc_wait_for_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_> imp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi42();
};


#endif  // guard
