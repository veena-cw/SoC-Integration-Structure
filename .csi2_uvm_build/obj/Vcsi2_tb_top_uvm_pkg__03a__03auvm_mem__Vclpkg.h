// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_MEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi37;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_max_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_locked;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_is_powered_down;
    IData/*31:0*/ __PVT__m_n_bits;
    IData/*31:0*/ __PVT__m_has_cover;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_lineno;
    QData/*63:0*/ __PVT__m_size;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__m_maps;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>, CData/*0:0*/> __PVT__m_vregs;
    std::string __PVT__m_access;
    std::string __PVT__m_fname;
    std::string __Vfunc_uvm_report_enabled__2__id;
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vtask_uvm_report_fatal__11__id;
    std::string __Vtask_uvm_report_fatal__11__message;
    std::string __Vtask_uvm_report_fatal__11__filename;
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vfunc_uvm_report_enabled__24__id;
    std::string __Vfunc_uvm_report_enabled__39__id;
    std::string __Vtask_uvm_report_warning__44__id;
    std::string __Vtask_uvm_report_warning__44__message;
    std::string __Vtask_uvm_report_warning__44__filename;
    std::string __Vfunc_uvm_report_enabled__47__id;
    std::string __Vtask_uvm_report_warning__51__id;
    std::string __Vtask_uvm_report_warning__51__message;
    std::string __Vtask_uvm_report_warning__51__filename;
    std::string __Vfunc_uvm_report_enabled__60__id;
    std::string __Vfunc_uvm_report_enabled__66__id;
    std::string __Vfunc_uvm_report_enabled__71__id;
    std::string __Vfunc_uvm_report_enabled__77__id;
    std::string __Vfunc_uvm_report_enabled__82__id;
    std::string __Vfunc_uvm_report_enabled__92__id;
    std::string __Vtask_uvm_report_warning__98__id;
    std::string __Vtask_uvm_report_warning__98__message;
    std::string __Vtask_uvm_report_warning__98__filename;
    std::string __Vfunc_uvm_report_enabled__104__id;
    std::string __Vtask_uvm_report_warning__108__id;
    std::string __Vtask_uvm_report_warning__108__message;
    std::string __Vtask_uvm_report_warning__108__filename;
    std::string __Vfunc_uvm_report_enabled__112__id;
    std::string __Vtask_uvm_report_warning__116__id;
    std::string __Vtask_uvm_report_warning__116__message;
    std::string __Vtask_uvm_report_warning__116__filename;
    std::string __Vfunc_uvm_report_enabled__119__id;
    std::string __Vfunc_uvm_report_enabled__125__id;
    std::string __Vtask_uvm_report_warning__131__id;
    std::string __Vtask_uvm_report_warning__131__message;
    std::string __Vtask_uvm_report_warning__131__filename;
    std::string __Vfunc_uvm_report_enabled__171__id;
    std::string __Vtask_uvm_report_info__177__id;
    std::string __Vtask_uvm_report_info__177__message;
    std::string __Vtask_uvm_report_info__177__filename;
    std::string __Vfunc_uvm_report_enabled__199__id;
    std::string __Vtask_uvm_report_info__205__id;
    std::string __Vtask_uvm_report_info__205__message;
    std::string __Vtask_uvm_report_info__205__filename;
    std::string __Vfunc_uvm_report_enabled__209__id;
    std::string __Vfunc_uvm_report_enabled__217__id;
    std::string __Vtask_uvm_report_warning__221__id;
    std::string __Vtask_uvm_report_warning__221__message;
    std::string __Vtask_uvm_report_warning__221__filename;
    std::string __Vfunc_uvm_report_enabled__227__id;
    std::string __Vfunc_uvm_report_enabled__234__id;
    std::string __Vfunc_uvm_report_enabled__242__id;
    std::string __Vfunc_uvm_report_enabled__248__id;
    std::string __Vfunc_uvm_report_enabled__254__id;
    std::string __Vfunc_uvm_report_enabled__263__id;
    std::string __Vtask_uvm_report_info__267__id;
    std::string __Vtask_uvm_report_info__267__message;
    std::string __Vtask_uvm_report_info__267__filename;
    std::string __Vfunc_uvm_report_enabled__272__id;
    std::string __Vfunc_uvm_report_enabled__281__id;
    std::string __Vtask_uvm_report_info__285__id;
    std::string __Vtask_uvm_report_info__285__message;
    std::string __Vtask_uvm_report_info__285__filename;
    std::string __Vfunc_uvm_report_enabled__289__id;
    std::string __Vfunc_uvm_report_enabled__297__id;
    std::string __Vfunc_uvm_report_enabled__308__id;
    std::string __Vtask_uvm_report_info__311__id;
    std::string __Vtask_uvm_report_info__311__message;
    std::string __Vtask_uvm_report_info__311__filename;
    std::string __Vfunc_uvm_report_enabled__316__id;
    std::string __Vfunc_uvm_hdl_concat2string__320__image;
    std::string __Vfunc_uvm_hdl_concat2string__321__image;
    std::string __Vfunc_uvm_report_enabled__325__id;
    std::string __Vtask_uvm_report_info__328__id;
    std::string __Vtask_uvm_report_info__328__message;
    std::string __Vtask_uvm_report_info__328__filename;
    std::string __Vfunc_uvm_report_enabled__336__id;
    std::string __Vtask_uvm_report_warning__339__id;
    std::string __Vtask_uvm_report_warning__339__message;
    std::string __Vtask_uvm_report_warning__339__filename;
    std::string __Vfunc_uvm_report_enabled__358__id;
    std::string __Vfunc_uvm_report_enabled__369__id;
    std::string __Vfunc_uvm_report_enabled__397__id;
    std::string __Vtask_uvm_report_fatal__400__id;
    std::string __Vtask_uvm_report_fatal__400__message;
    std::string __Vtask_uvm_report_fatal__400__filename;
    std::string __Vfunc_uvm_report_enabled__403__id;
    std::string __Vtask_uvm_report_fatal__406__id;
    std::string __Vtask_uvm_report_fatal__406__message;
    std::string __Vtask_uvm_report_fatal__406__filename;
    std::string __Vfunc_uvm_report_enabled__409__id;
    std::string __Vtask_uvm_report_warning__412__id;
    std::string __Vtask_uvm_report_warning__412__message;
    std::string __Vtask_uvm_report_warning__412__filename;
    std::string __Vfunc_uvm_report_enabled__415__id;
    std::string __Vtask_uvm_report_warning__418__id;
    std::string __Vtask_uvm_report_warning__418__message;
    std::string __Vtask_uvm_report_warning__418__filename;
    std::string __Vfunc_uvm_report_enabled__421__id;
    std::string __Vtask_uvm_report_warning__424__id;
    std::string __Vtask_uvm_report_warning__424__message;
    std::string __Vtask_uvm_report_warning__424__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__m_backdoor;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122> __PVT__m_hdl_paths_pool;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam> __PVT__mam;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem(*this); }
    void __VnoInFunc_Xadd_vregX(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    void __VnoInFunc_Xdelete_vregX(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_Xlock_modelX(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<Vcsi2_tb_top_uvm_hdl_path_slice__struct__0> slices, std::string kind);
    void __VnoInFunc_add_hdl_path_slice(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind);
    void __VnoInFunc_add_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn);
    virtual void __VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_build_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_burst_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_burst_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_clear_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_addresses(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn);
    void __VnoInFunc_get_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    void __VnoInFunc_get_default_map(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string caller, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    void __VnoInFunc_get_frontdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind);
    void __VnoInFunc_get_hdl_path_kinds(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds);
    void __VnoInFunc_get_local_map(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps);
    void __VnoInFunc_get_n_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    void __VnoInFunc_get_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_vfield_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_virtual_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> &regs);
    virtual void __VnoInFunc_get_vreg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_vreg_by_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_sample(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_frontdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_set_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem();
};


#endif  // guard
