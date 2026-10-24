// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RECORDER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RECORDER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi2;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__handle;
    VlAssocArray<IData/*31:0*/, CData/*0:0*/> __PVT__m_handles;
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi2> &get_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__physical;
    CData/*0:0*/ __PVT__abstract;
    CData/*0:0*/ __PVT__identifier;
    IData/*31:0*/ __PVT__recording_depth;
    IData/*31:0*/ __PVT__file;
    IData/*31:0*/ __PVT__tr_handle;
    IData/*31:0*/ __PVT__default_radix;
    IData/*31:0*/ __PVT__policy;
    std::string __PVT__filename;
    std::string __Vfunc_uvm_string_to_bits__22__str;
    std::string __Vfunc_uvm_string_to_bits__29__str;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack> __PVT__scope;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_recorder"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_begin_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_check_handle_kind(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_create_stream(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn);
    virtual void __VnoInFunc_end_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time);
    virtual void __VnoInFunc_free_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ handle);
    virtual void __VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_link_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation);
    virtual void __VnoInFunc_m_set_attribute(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value);
    virtual void __VnoInFunc_open_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_record_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix);
    virtual void __VnoInFunc_record_field_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, double value);
    virtual void __VnoInFunc_record_generic(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string value);
    virtual void __VnoInFunc_record_object(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_record_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string value);
    virtual void __VnoInFunc_record_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value);
    virtual void __VnoInFunc_set_attribute(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*31:0*/ radix, IData/*31:0*/ numbits);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder();
};


#endif  // guard
