// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg.h"
class Vcsi2_tb_top_std__03a__03aprocess;
class Vcsi2_tb_top_std__03a__03asemaphore;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi35;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_max_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
    void __VnoInFunc_include_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ models, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_locked;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_update_in_progress;
    CData/*0:0*/ __PVT__m_is_busy;
    CData/*0:0*/ __PVT__m_is_locked_by_field;
    IData/*31:0*/ __PVT__m_n_bits;
    IData/*31:0*/ __PVT__m_n_used_bits;
    IData/*31:0*/ __PVT__m_has_cover;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_lineno;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__m_maps;
    std::string __PVT__m_fname;
    std::string __Vfunc_uvm_report_enabled__2__id;
    std::string __Vfunc_uvm_report_enabled__11__id;
    std::string __Vfunc_uvm_report_enabled__15__id;
    std::string __Vtask_uvm_report_fatal__18__id;
    std::string __Vtask_uvm_report_fatal__18__message;
    std::string __Vtask_uvm_report_fatal__18__filename;
    std::string __Vfunc_uvm_report_enabled__24__id;
    std::string __Vfunc_uvm_report_enabled__31__id;
    std::string __Vfunc_uvm_report_enabled__40__id;
    std::string __Vfunc_uvm_report_enabled__53__id;
    std::string __Vtask_uvm_report_warning__56__id;
    std::string __Vtask_uvm_report_warning__56__message;
    std::string __Vtask_uvm_report_warning__56__filename;
    std::string __Vfunc_uvm_report_enabled__66__id;
    std::string __Vtask_uvm_report_warning__69__id;
    std::string __Vtask_uvm_report_warning__69__message;
    std::string __Vtask_uvm_report_warning__69__filename;
    std::string __Vfunc_uvm_report_enabled__92__id;
    std::string __Vfunc_uvm_report_enabled__102__id;
    std::string __Vfunc_uvm_report_enabled__115__id;
    std::string __Vfunc_uvm_report_enabled__133__id;
    std::string __Vtask_uvm_report_warning__138__id;
    std::string __Vtask_uvm_report_warning__138__message;
    std::string __Vtask_uvm_report_warning__138__filename;
    std::string __Vfunc_uvm_report_enabled__141__id;
    std::string __Vtask_uvm_report_warning__145__id;
    std::string __Vtask_uvm_report_warning__145__message;
    std::string __Vtask_uvm_report_warning__145__filename;
    std::string __Vfunc_uvm_report_enabled__155__id;
    std::string __Vtask_uvm_report_warning__161__id;
    std::string __Vtask_uvm_report_warning__161__message;
    std::string __Vtask_uvm_report_warning__161__filename;
    std::string __Vfunc_uvm_report_enabled__166__id;
    std::string __Vtask_uvm_report_warning__172__id;
    std::string __Vtask_uvm_report_warning__172__message;
    std::string __Vtask_uvm_report_warning__172__filename;
    std::string __Vfunc_uvm_report_enabled__179__id;
    std::string __Vtask_uvm_report_warning__183__id;
    std::string __Vtask_uvm_report_warning__183__message;
    std::string __Vtask_uvm_report_warning__183__filename;
    std::string __Vfunc_uvm_report_enabled__195__id;
    std::string __Vtask_uvm_report_warning__199__id;
    std::string __Vtask_uvm_report_warning__199__message;
    std::string __Vtask_uvm_report_warning__199__filename;
    std::string __Vfunc_uvm_report_enabled__272__id;
    std::string __Vtask_uvm_report_info__278__id;
    std::string __Vtask_uvm_report_info__278__message;
    std::string __Vtask_uvm_report_info__278__filename;
    std::string __Vfunc_uvm_report_enabled__341__id;
    std::string __Vtask_uvm_report_info__347__id;
    std::string __Vtask_uvm_report_info__347__message;
    std::string __Vtask_uvm_report_info__347__filename;
    std::string __Vfunc_uvm_report_enabled__353__id;
    std::string __Vtask_uvm_report_warning__357__id;
    std::string __Vtask_uvm_report_warning__357__message;
    std::string __Vtask_uvm_report_warning__357__filename;
    std::string __Vfunc_uvm_report_enabled__363__id;
    std::string __Vfunc_uvm_report_enabled__370__id;
    std::string __Vfunc_uvm_report_enabled__378__id;
    std::string __Vtask_uvm_report_info__381__id;
    std::string __Vtask_uvm_report_info__381__message;
    std::string __Vtask_uvm_report_info__381__filename;
    std::string __Vfunc_uvm_report_enabled__388__id;
    std::string __Vtask_uvm_report_info__391__id;
    std::string __Vtask_uvm_report_info__391__message;
    std::string __Vtask_uvm_report_info__391__filename;
    std::string __Vfunc_uvm_report_enabled__396__id;
    std::string __Vfunc_uvm_hdl_concat2string__400__image;
    std::string __Vfunc_uvm_hdl_concat2string__401__image;
    std::string __Vfunc_uvm_report_enabled__403__id;
    std::string __Vtask_uvm_report_info__406__id;
    std::string __Vtask_uvm_report_info__406__message;
    std::string __Vtask_uvm_report_info__406__filename;
    std::string __Vfunc_uvm_report_enabled__411__id;
    std::string __Vfunc_uvm_report_enabled__421__id;
    std::string __Vtask_uvm_report_info__425__id;
    std::string __Vtask_uvm_report_info__425__message;
    std::string __Vtask_uvm_report_info__425__filename;
    std::string __Vfunc_uvm_report_enabled__432__id;
    std::string __Vfunc_uvm_report_enabled__442__id;
    std::string __Vtask_uvm_report_info__446__id;
    std::string __Vtask_uvm_report_info__446__message;
    std::string __Vtask_uvm_report_info__446__filename;
    std::string __Vfunc_uvm_report_enabled__455__id;
    std::string __Vfunc_uvm_report_enabled__465__id;
    std::string __Vtask_uvm_report_info__475__id;
    std::string __Vtask_uvm_report_info__475__message;
    std::string __Vtask_uvm_report_info__475__filename;
    std::string __Vfunc_uvm_report_enabled__509__id;
    std::string __Vtask_uvm_report_fatal__512__id;
    std::string __Vtask_uvm_report_fatal__512__message;
    std::string __Vtask_uvm_report_fatal__512__filename;
    std::string __Vfunc_uvm_report_enabled__515__id;
    std::string __Vtask_uvm_report_fatal__518__id;
    std::string __Vtask_uvm_report_fatal__518__message;
    std::string __Vtask_uvm_report_fatal__518__filename;
    std::string __Vfunc_uvm_report_enabled__521__id;
    std::string __Vtask_uvm_report_warning__524__id;
    std::string __Vtask_uvm_report_warning__524__message;
    std::string __Vtask_uvm_report_warning__524__filename;
    std::string __Vfunc_uvm_report_enabled__527__id;
    std::string __Vtask_uvm_report_warning__530__id;
    std::string __Vtask_uvm_report_warning__530__message;
    std::string __Vtask_uvm_report_warning__530__filename;
    std::string __Vfunc_uvm_report_enabled__533__id;
    std::string __Vtask_uvm_report_warning__536__id;
    std::string __Vtask_uvm_report_warning__536__message;
    std::string __Vtask_uvm_report_warning__536__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> __PVT__m_regfile_parent;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> __PVT__m_fields;
    VlClassRef<Vcsi2_tb_top_std__03a__03asemaphore> __PVT__m_atomic;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __PVT__m_process;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122> __PVT__m_hdl_paths_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg"; }
    VlCoroutine __VnoInFunc_XatomicX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_Xget_fields_accessX(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &Xget_fields_accessX__Vfuncrtn);
    void __VnoInFunc_Xis_locked_by_fieldX(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &Xis_locked_by_fieldX__Vfuncrtn);
    void __VnoInFunc_Xlock_modelX(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_XreadX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_XsampleX(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_Xset_busyX(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ busy);
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    virtual void __VnoInFunc_add_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> field);
    void __VnoInFunc_add_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<Vcsi2_tb_top_uvm_hdl_path_slice__struct__0> slices, std::string kind);
    void __VnoInFunc_add_hdl_path_slice(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind);
    virtual void __VnoInFunc_add_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_watch(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_build_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    void __VnoInFunc_clear_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_check(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ expected, QData/*63:0*/ actual, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &do_check__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    virtual void __VnoInFunc_get_default_map(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string caller, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> &fields);
    void __VnoInFunc_get_frontdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind);
    void __VnoInFunc_get_hdl_path_kinds(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds);
    virtual void __VnoInFunc_get_local_map(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_mirrored_value(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_regfile(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_busy(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_busy__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_predict(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_sample(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_set_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_frontdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_set_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> regfile_parent);
    virtual void __VnoInFunc_set_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind);
    virtual VlCoroutine __VnoInFunc_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_coverage);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg();
};


#endif  // guard
