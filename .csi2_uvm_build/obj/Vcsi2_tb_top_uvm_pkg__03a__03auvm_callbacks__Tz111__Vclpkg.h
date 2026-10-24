// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__TZ111__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CALLBACKS__TZ111__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz16_TBz127;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz111;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz111;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid__Tz115;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_fatal__10__id;
    std::string __Vtask_uvm_report_fatal__10__message;
    std::string __Vtask_uvm_report_fatal__10__filename;
    std::string __Vtask_uvm_report_warning__23__id;
    std::string __Vtask_uvm_report_warning__23__message;
    std::string __Vtask_uvm_report_warning__23__filename;
    std::string __Vtask_uvm_report_warning__28__id;
    std::string __Vtask_uvm_report_warning__28__message;
    std::string __Vtask_uvm_report_warning__28__filename;
    std::string __Vtask_uvm_report_warning__42__id;
    std::string __Vtask_uvm_report_warning__42__message;
    std::string __Vtask_uvm_report_warning__42__filename;
    std::string __Vtask_uvm_report_warning__55__id;
    std::string __Vtask_uvm_report_warning__55__message;
    std::string __Vtask_uvm_report_warning__55__filename;
    std::string __Vtask_uvm_report_warning__65__id;
    std::string __Vtask_uvm_report_warning__65__message;
    std::string __Vtask_uvm_report_warning__65__filename;
    std::string __Vtask_uvm_report_warning__72__id;
    std::string __Vtask_uvm_report_warning__72__message;
    std::string __Vtask_uvm_report_warning__72__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111> __PVT__m_inst;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> __PVT__reporter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> obj);
    void __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111> &get__Vfuncrtn);
    void __VnoInFunc_get_first(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz115> &q, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> obj);
    void __VnoInFunc_m_register_pair(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz111__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_typed_callbacks__Tz111 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__Tz111"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks__Tz111();
};


#endif  // guard
