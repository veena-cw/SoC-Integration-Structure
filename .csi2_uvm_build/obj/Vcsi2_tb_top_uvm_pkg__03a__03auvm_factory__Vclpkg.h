// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_FACTORY__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_FACTORY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_debug_pass;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> &get__Vfuncrtn);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper>, CData/*0:0*/> __PVT__m_types;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_lookup_strs;
    std::string __Vtask_uvm_report_fatal__0__id;
    std::string __Vtask_uvm_report_fatal__0__message;
    std::string __Vtask_uvm_report_fatal__0__filename;
    std::string __Vtask_uvm_report_warning__7__id;
    std::string __Vtask_uvm_report_warning__7__message;
    std::string __Vtask_uvm_report_warning__7__filename;
    std::string __Vtask_uvm_report_warning__14__id;
    std::string __Vtask_uvm_report_warning__14__message;
    std::string __Vtask_uvm_report_warning__14__filename;
    std::string __Vfunc_uvm_is_match__23__expr;
    std::string __Vfunc_uvm_is_match__23__str;
    std::string __Vfunc_uvm_glob_to_re__24__Vfuncout;
    std::string __Vtask_uvm_report_warning__28__id;
    std::string __Vtask_uvm_report_warning__28__message;
    std::string __Vtask_uvm_report_warning__28__filename;
    std::string __Vtask_uvm_report_warning__32__id;
    std::string __Vtask_uvm_report_warning__32__message;
    std::string __Vtask_uvm_report_warning__32__filename;
    std::string __Vtask_uvm_report_info__39__id;
    std::string __Vtask_uvm_report_info__39__message;
    std::string __Vtask_uvm_report_info__39__filename;
    std::string __Vtask_uvm_report_info__43__id;
    std::string __Vtask_uvm_report_info__43__message;
    std::string __Vtask_uvm_report_info__43__filename;
    std::string __Vtask_uvm_report_warning__51__id;
    std::string __Vtask_uvm_report_warning__51__message;
    std::string __Vtask_uvm_report_warning__51__filename;
    std::string __Vtask_uvm_report_info__54__id;
    std::string __Vtask_uvm_report_info__54__message;
    std::string __Vtask_uvm_report_info__54__filename;
    std::string __Vtask_uvm_report_info__57__id;
    std::string __Vtask_uvm_report_info__57__message;
    std::string __Vtask_uvm_report_info__57__filename;
    std::string __Vtask_uvm_report_info__64__id;
    std::string __Vtask_uvm_report_info__64__message;
    std::string __Vtask_uvm_report_info__64__filename;
    std::string __Vfunc_uvm_is_match__78__expr;
    std::string __Vfunc_uvm_is_match__78__str;
    std::string __Vfunc_uvm_glob_to_re__79__Vfuncout;
    std::string __Vtask_uvm_report_warning__84__id;
    std::string __Vtask_uvm_report_warning__84__message;
    std::string __Vtask_uvm_report_warning__84__filename;
    std::string __Vtask_uvm_report_warning__91__id;
    std::string __Vtask_uvm_report_warning__91__message;
    std::string __Vtask_uvm_report_warning__91__filename;
    std::string __Vtask_uvm_report_warning__97__id;
    std::string __Vtask_uvm_report_warning__97__message;
    std::string __Vtask_uvm_report_warning__97__filename;
    std::string __Vfunc_uvm_is_match__100__expr;
    std::string __Vfunc_uvm_is_match__100__str;
    std::string __Vfunc_uvm_glob_to_re__101__Vfuncout;
    std::string __Vfunc_uvm_is_match__103__expr;
    std::string __Vfunc_uvm_is_match__103__str;
    std::string __Vfunc_uvm_glob_to_re__104__Vfuncout;
    std::string __Vfunc_uvm_is_match__109__expr;
    std::string __Vfunc_uvm_is_match__109__str;
    std::string __Vfunc_uvm_glob_to_re__110__Vfuncout;
    std::string __Vfunc_uvm_is_match__117__expr;
    std::string __Vfunc_uvm_is_match__117__str;
    std::string __Vfunc_uvm_glob_to_re__118__Vfuncout;
    std::string __Vfunc_uvm_is_match__126__expr;
    std::string __Vfunc_uvm_is_match__126__str;
    std::string __Vfunc_uvm_glob_to_re__127__Vfuncout;
    std::string __Vtask_uvm_report_warning__133__id;
    std::string __Vtask_uvm_report_warning__133__message;
    std::string __Vtask_uvm_report_warning__133__filename;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper>> __PVT__m_type_names;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_type_overrides;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class>> __PVT__m_inst_override_queues;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_queue_class>> __PVT__m_inst_override_name_queues;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_wildcard_inst_overrides;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_override_info;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_factory"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory(*this); }
    void __VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path, CData/*0:0*/ &check_inst_override_exists__Vfuncrtn);
    void __VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn);
    void __VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn);
    void __VnoInFunc_create_object_by_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn);
    void __VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn);
    void __VnoInFunc_debug_create_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name);
    void __VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    void __VnoInFunc_find_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &find_by_name__Vfuncrtn);
    void __VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn);
    void __VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn);
    void __VnoInFunc_m_debug_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    void __VnoInFunc_m_debug_display(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> result, std::string full_inst_path);
    void __VnoInFunc_m_has_wildcard(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string nm, CData/*0:0*/ &m_has_wildcard__Vfuncrtn);
    void __VnoInFunc_print(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ all_types);
    void __VnoInFunc_register(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> obj);
    void __VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path);
    void __VnoInFunc_set_inst_override_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path);
    void __VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    void __VnoInFunc_set_type_override_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory() {}
};


#endif  // guard
