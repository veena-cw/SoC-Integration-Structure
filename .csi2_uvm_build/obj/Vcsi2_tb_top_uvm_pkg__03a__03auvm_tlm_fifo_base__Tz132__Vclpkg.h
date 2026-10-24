// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ132__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ132__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz132;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_event;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146> __PVT__put_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146> __PVT__get_peek_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz132> __PVT__put_ap;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz132> __PVT__get_ap;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146> __PVT__blocking_put_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_put_imp__Tz132_TBz146> __PVT__nonblocking_put_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146> __PVT__blocking_get_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146> __PVT__nonblocking_get_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146> __PVT__get_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146> __PVT__blocking_peek_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146> __PVT__nonblocking_peek_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146> __PVT__peek_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146> __PVT__blocking_get_peek_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz132_TBz146> __PVT__nonblocking_get_peek_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_fifo_base__Tz132"; }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_can_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_is_empty(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_used(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz132();
};


#endif  // guard
