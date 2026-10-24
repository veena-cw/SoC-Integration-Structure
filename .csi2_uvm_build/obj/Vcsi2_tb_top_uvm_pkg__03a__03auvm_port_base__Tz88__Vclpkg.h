// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_PORT_BASE__TZ88__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_PORT_BASE__TZ88__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz94;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz38_TBz38;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__debug_connected_to__Vstatic__indent;
    std::string __PVT__debug_connected_to__Vstatic__save;
    std::string __PVT__debug_provided_to__Vstatic__indent;
    std::string __PVT__debug_provided_to__Vstatic__save;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz38_TBz38__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz38_TBz38 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_resolved;
    IData/*31:0*/ __PVT__m_if_mask;
    IData/*31:0*/ __PVT__m_def_index;
    IData/*31:0*/ __PVT__m_port_type;
    IData/*31:0*/ __PVT__m_min_size;
    IData/*31:0*/ __PVT__m_max_size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88> __PVT__m_if;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component__Tz94> __PVT__m_comp;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88>> __PVT__m_provided_by;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88>> __PVT__m_provided_to;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88>> __PVT__m_imp_list;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_port_base__Tz88"; }
    virtual void __VnoInFunc_connect(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88> provider);
    void __VnoInFunc_debug_connected_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    void __VnoInFunc_debug_provided_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    virtual void __VnoInFunc_get_comp(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn);
    void __VnoInFunc_get_connected_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base>> &list);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_if(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88> &get_if__Vfuncrtn);
    void __VnoInFunc_get_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_provided_to(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_component_base>> &list);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    void __VnoInFunc_is_unbounded(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn);
    void __VnoInFunc_m_add_list(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88> provider);
    void __VnoInFunc_m_check_relationship(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn);
    void __VnoInFunc_m_get_if_mask(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn);
    void __VnoInFunc_max_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn);
    void __VnoInFunc_min_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_default_index(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_set_if(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz88();
};


#endif  // guard
