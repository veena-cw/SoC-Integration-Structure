// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ105__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ105__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz105;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz105__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_info__10__id;
    std::string __Vtask_uvm_report_info__10__message;
    std::string __Vtask_uvm_report_info__10__filename;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz105__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz105__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz105__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz105> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz105> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz105> rsrc);
    void __VnoInFunc_read_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ &val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ &val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz105> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz105 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db__Tz105"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz105(*this); }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz105() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {}
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz105() {}
};


#endif  // guard
