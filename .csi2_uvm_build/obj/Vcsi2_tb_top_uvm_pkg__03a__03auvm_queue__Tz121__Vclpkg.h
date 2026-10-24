// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_QUEUE__TZ121__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_QUEUE__TZ121__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> __PVT__m_global_queue;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_queue(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> &get_global_queue__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__3__id;
    std::string __Vtask_uvm_report_warning__3__message;
    std::string __Vtask_uvm_report_warning__3__filename;
    std::string __Vtask_uvm_report_warning__8__id;
    std::string __Vtask_uvm_report_warning__8__message;
    std::string __Vtask_uvm_report_warning__8__filename;
    std::string __Vtask_uvm_report_warning__13__id;
    std::string __Vtask_uvm_report_warning__13__message;
    std::string __Vtask_uvm_report_warning__13__filename;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> __PVT__queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_queue__Tz121"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_insert(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> item);
    virtual void __VnoInFunc_pop_back(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_back__Vfuncrtn);
    virtual void __VnoInFunc_pop_front(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_front__Vfuncrtn);
    virtual void __VnoInFunc_push_back(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> item);
    virtual void __VnoInFunc_push_front(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> item);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121();
};


#endif  // guard
