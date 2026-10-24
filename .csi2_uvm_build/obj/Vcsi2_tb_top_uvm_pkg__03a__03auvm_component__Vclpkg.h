// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_COMPONENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"
class Vcsi2_tb_top_std__03a__03aprocess;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_build_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_event;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz12;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz13;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz14;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz15;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz16;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz5;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_run_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction;


class Vcsi2_tb_top__Syms;
struct Vcsi2_tb_top_m_verbosity_setting__struct__0 {
    std::string __PVT__comp;
    std::string __PVT__phase;
    QData/*63:0*/ __PVT__offset;
    IData/*31:0*/ __PVT__verbosity;
    std::string __PVT__id;

    bool operator==(const Vcsi2_tb_top_m_verbosity_setting__struct__0& rhs) const {
        return __PVT__comp == rhs.__PVT__comp
            && __PVT__phase == rhs.__PVT__phase
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__verbosity == rhs.__PVT__verbosity
            && __PVT__id == rhs.__PVT__id;
    }
    bool operator!=(const Vcsi2_tb_top_m_verbosity_setting__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vcsi2_tb_top_m_verbosity_setting__struct__0& rhs) const {
        if (__PVT__comp < rhs.__PVT__comp) return true;
        if (rhs.__PVT__comp < __PVT__comp) return false;
        if (__PVT__phase < rhs.__PVT__phase) return true;
        if (rhs.__PVT__phase < __PVT__phase) return false;
        if (__PVT__offset < rhs.__PVT__offset) return true;
        if (rhs.__PVT__offset < __PVT__offset) return false;
        if (__PVT__verbosity < rhs.__PVT__verbosity) return true;
        if (rhs.__PVT__verbosity < __PVT__verbosity) return false;
        if (__PVT__id < rhs.__PVT__id) return true;
        if (rhs.__PVT__id < __PVT__id) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vcsi2_tb_top_m_verbosity_setting__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_config_set;
    CData/*0:0*/ __PVT__print_config_matches;
    CData/*0:0*/ __PVT__print_config_settings__Vstatic__have_been_warned;
    CData/*0:0*/ __PVT__m_set_cl_verb__Vstatic__first;
    VlQueue<Vcsi2_tb_top_m_verbosity_setting__struct__0> __PVT__m_time_settings;
    VlQueue<std::string> __PVT__m_set_cl_verb__Vstatic__values;
    VlQueue<std::string> __PVT__m_set_cl_action__Vstatic__values;
    VlQueue<std::string> __PVT__m_set_cl_sev__Vstatic__values;
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_component__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_set_type_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    void __VnoInFunc_set_type_override_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_enabled;
    CData/*0:0*/ __PVT__m_build_done;
    IData/*31:0*/ __PVT__enable_stop_interrupt;
    IData/*31:0*/ __PVT__m_phasing_active;
    IData/*31:0*/ __PVT__recording_detail;
    VlQueue<Vcsi2_tb_top_m_verbosity_setting__struct__0> __PVT__m_verbosity_settings;
    VlAssocArray<std::string, IData/*31:0*/> __PVT__m_stream_handle;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction>, IData/*31:0*/> __PVT__m_tr_h;
    std::string __PVT__m_name;
    std::string __Vtask_m_extract_name__58__leaf;
    std::string __Vtask_m_extract_name__58__remainder;
    std::string __Vtask_m_extract_name__59__leaf;
    std::string __Vtask_m_extract_name__59__remainder;
    std::string __Vfunc_get__194__value;
    std::string __Vfunc_uvm_is_match__242__expr;
    std::string __Vfunc_uvm_is_match__242__str;
    std::string __Vfunc_uvm_glob_to_re__243__Vfuncout;
    std::string __Vtask_uvm_split_string__251__str;
    std::string __Vfunc_uvm_is_match__255__expr;
    std::string __Vfunc_uvm_is_match__255__str;
    std::string __Vfunc_uvm_glob_to_re__256__Vfuncout;
    std::string __Vtask_uvm_split_string__265__str;
    std::string __Vfunc_uvm_is_match__269__expr;
    std::string __Vfunc_uvm_is_match__269__str;
    std::string __Vfunc_uvm_glob_to_re__270__Vfuncout;
    std::string __Vfunc_uvm_string_to_severity__272__sev_str;
    std::string __Vfunc_uvm_string_to_action__275__action_str;
    std::string __Vtask_uvm_split_string__276__str;
    std::string __Vtask_uvm_split_string__287__str;
    std::string __Vfunc_uvm_is_match__291__expr;
    std::string __Vfunc_uvm_is_match__291__str;
    std::string __Vfunc_uvm_glob_to_re__292__Vfuncout;
    std::string __Vfunc_uvm_string_to_severity__294__sev_str;
    std::string __Vfunc_uvm_string_to_severity__297__sev_str;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> __PVT__recorder;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> __PVT__m_domain;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase>> __PVT__m_phase_imps;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_current_phase;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __PVT__m_phase_process;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __PVT__m_parent;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> __PVT__m_children;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> __PVT__m_children_by_handle;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz12> __PVT__event_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_component"; }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_accept_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ accept_time);
    virtual void __VnoInFunc_all_dropped(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ verbose);
    void __VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_child_tr__Vfuncrtn);
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_build(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_check(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_check_config_usage(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_check_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    virtual void __VnoInFunc_configure_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_create_component(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn);
    void __VnoInFunc_create_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_define_domain(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> domain);
    virtual void __VnoInFunc_do_accept_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr);
    virtual void __VnoInFunc_do_begin_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, IData/*31:0*/ tr_handle);
    virtual void __VnoInFunc_do_end_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ tr_handle);
    void __VnoInFunc_do_flush(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_kill_all(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_end_of_elaboration(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_end_of_elaboration_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ end_time, CData/*0:0*/ free_handle);
    virtual void __VnoInFunc_extract(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_extract_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_final_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_flush(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_child(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn);
    void __VnoInFunc_get_children(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> &children);
    virtual void __VnoInFunc_get_config_int(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ &value, CData/*0:0*/ &get_config_int__Vfuncrtn);
    virtual void __VnoInFunc_get_config_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &value, CData/*0:0*/ clone, CData/*0:0*/ &get_config_object__Vfuncrtn);
    virtual void __VnoInFunc_get_config_string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, std::string &value, CData/*0:0*/ &get_config_string__Vfuncrtn);
    void __VnoInFunc_get_depth(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn);
    void __VnoInFunc_get_domain(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn);
    void __VnoInFunc_get_first_child(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_first_child__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_next_child(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_next_child__Vfuncrtn);
    void __VnoInFunc_get_num_children(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_children__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_child(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ &has_child__Vfuncrtn);
    virtual void __VnoInFunc_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_lookup(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &lookup__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
  private:
    VlCoroutine __VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ unnamedblk183__DOT__i);
  public:
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, CData/*0:0*/ has_parent, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    void __VnoInFunc_m_do_pre_abort(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_extract_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string &leaf, std::string &remainder);
    void __VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_set_cl_verb____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> top);
  public:
    virtual void __VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_main_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_massage_scope(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string &massage_scope__Vfuncrtn);
    virtual void __VnoInFunc_phase_ended(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_ready_to_end(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_phase_started(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_configure_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_main_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_reset_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_post_shutdown_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_abort(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_configure_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_main_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_reset_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_pre_shutdown_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_config(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ recurse, CData/*0:0*/ audit);
    void __VnoInFunc_print_config_settings(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp, CData/*0:0*/ recurse);
    void __VnoInFunc_print_config_with_audit(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ recurse);
    void __VnoInFunc_print_override_info(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name);
    virtual void __VnoInFunc_raised(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record_error_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ error_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_error_tr__Vfuncrtn);
    void __VnoInFunc_record_event_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ event_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_event_tr__Vfuncrtn);
    virtual void __VnoInFunc_report(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_report_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_reset_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_resume(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_run(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_set_config_int(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlWide<128>/*4095:0*/ value);
    virtual void __VnoInFunc_set_config_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value, CData/*0:0*/ clone);
    virtual void __VnoInFunc_set_config_string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name, std::string value);
    void __VnoInFunc_set_domain(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> domain, IData/*31:0*/ hier);
    void __VnoInFunc_set_inst_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string relative_inst_path, std::string original_type_name, std::string override_type_name);
    void __VnoInFunc_set_inst_override_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string relative_inst_path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type);
    void __VnoInFunc_set_int_local(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ value, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_set_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_set_phase_imp(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> imp, IData/*31:0*/ hier);
    void __VnoInFunc_set_report_default_file_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_action_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_id_file_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_id_verbosity_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_severity_action_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_file_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_action_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action);
    void __VnoInFunc_set_report_severity_id_file_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file);
    void __VnoInFunc_set_report_severity_id_verbosity_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity);
    void __VnoInFunc_set_report_verbosity_level_hier(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
    virtual void __VnoInFunc_shutdown_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_start_of_simulation(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_start_of_simulation_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &status__Vfuncrtn);
    virtual void __VnoInFunc_stop(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string ph_name);
    virtual void __VnoInFunc_stop_phase(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_suspend(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_component();
};


#endif  // guard
