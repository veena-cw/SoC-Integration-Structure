// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ103__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ103__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz16_TBz127;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vtask_uvm_report_warning__11__id;
    std::string __Vtask_uvm_report_warning__11__message;
    std::string __Vtask_uvm_report_warning__11__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> __PVT__m_tw_cb_q;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103> __PVT__m_t_inst;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_display(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection> obj);
    void __VnoInFunc_m_cb_find(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn);
    void __VnoInFunc_m_cb_find_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn);
    void __VnoInFunc_m_initialize(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103> &m_initialize__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typed_callbacks__Tz103"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_add_tw_cbs(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    virtual void __VnoInFunc_m_am_i_a(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn);
    virtual void __VnoInFunc_m_delete_tw_cbs(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn);
    virtual void __VnoInFunc_m_get_tw_cb_q(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> &m_get_tw_cb_q__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz103();
};


#endif  // guard
