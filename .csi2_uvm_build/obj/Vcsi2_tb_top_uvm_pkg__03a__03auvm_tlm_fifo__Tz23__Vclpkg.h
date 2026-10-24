// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_FIFO__TZ23__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_FIFO__TZ23__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_std__03a__03amailbox__Tz23;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz23;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz23;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz23__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz23__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz23__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz23__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz23__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz23 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz23 {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_size;
    IData/*31:0*/ __PVT__m_pending_blocked_gets;
    VlClassRef<Vcsi2_tb_top_std__03a__03amailbox__Tz23> __PVT__m;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_fifo__Tz23"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz23(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_can_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_is_empty(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_used(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz23() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ size);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz23();
};


#endif  // guard
