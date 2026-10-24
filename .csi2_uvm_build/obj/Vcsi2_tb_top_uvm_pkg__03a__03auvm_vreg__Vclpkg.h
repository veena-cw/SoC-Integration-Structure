// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_VREG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_std__03a__03asemaphore;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi39;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi40;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_cbs;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field_cbs;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_vreg_cbs;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__locked;
    CData/*0:0*/ __PVT__is_static;
    CData/*0:0*/ __PVT__read_in_progress;
    CData/*0:0*/ __PVT__write_in_progress;
    IData/*31:0*/ __PVT__n_bits;
    IData/*31:0*/ __PVT__n_used_bits;
    IData/*31:0*/ __PVT__incr;
    IData/*31:0*/ __PVT__lineno;
    QData/*63:0*/ __PVT__offset;
    QData/*63:0*/ __PVT__size;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vfunc_uvm_report_enabled__6__id;
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vfunc_uvm_report_enabled__18__id;
    std::string __Vtask_uvm_report_fatal__21__id;
    std::string __Vtask_uvm_report_fatal__21__message;
    std::string __Vtask_uvm_report_fatal__21__filename;
    std::string __Vfunc_uvm_report_enabled__27__id;
    std::string __Vfunc_uvm_report_enabled__34__id;
    std::string __Vfunc_uvm_report_enabled__43__id;
    std::string __Vfunc_uvm_report_enabled__59__id;
    std::string __Vfunc_uvm_report_enabled__64__id;
    std::string __Vfunc_uvm_report_enabled__69__id;
    std::string __Vfunc_uvm_report_enabled__75__id;
    std::string __Vfunc_uvm_report_enabled__83__id;
    std::string __Vfunc_uvm_report_enabled__90__id;
    std::string __Vfunc_uvm_report_enabled__98__id;
    std::string __Vfunc_uvm_report_enabled__103__id;
    std::string __Vtask_uvm_report_info__109__id;
    std::string __Vtask_uvm_report_info__109__message;
    std::string __Vtask_uvm_report_info__109__filename;
    std::string __Vfunc_uvm_report_enabled__114__id;
    std::string __Vfunc_uvm_report_enabled__119__id;
    std::string __Vfunc_uvm_report_enabled__124__id;
    std::string __Vfunc_uvm_report_enabled__131__id;
    std::string __Vfunc_uvm_report_enabled__139__id;
    std::string __Vfunc_uvm_report_enabled__147__id;
    std::string __Vfunc_uvm_report_enabled__152__id;
    std::string __Vtask_uvm_report_info__159__id;
    std::string __Vtask_uvm_report_info__159__message;
    std::string __Vtask_uvm_report_info__159__filename;
    std::string __Vfunc_uvm_report_enabled__166__id;
    std::string __Vfunc_uvm_report_enabled__174__id;
    std::string __Vfunc_uvm_report_enabled__179__id;
    std::string __Vfunc_uvm_report_enabled__186__id;
    std::string __Vfunc_uvm_report_enabled__191__id;
    std::string __Vfunc_uvm_report_enabled__198__id;
    std::string __Vfunc_uvm_report_enabled__203__id;
    std::string __Vfunc_uvm_report_enabled__209__id;
    std::string __Vfunc_uvm_report_enabled__215__id;
    std::string __Vfunc_uvm_report_enabled__221__id;
    std::string __Vfunc_uvm_report_enabled__227__id;
    std::string __Vfunc_uvm_report_enabled__234__id;
    std::string __Vtask_uvm_report_warning__238__id;
    std::string __Vtask_uvm_report_warning__238__message;
    std::string __Vtask_uvm_report_warning__238__filename;
    std::string __Vfunc_uvm_report_enabled__242__id;
    std::string __Vfunc_uvm_report_enabled__274__id;
    std::string __Vtask_uvm_report_info__278__id;
    std::string __Vtask_uvm_report_info__278__message;
    std::string __Vtask_uvm_report_info__278__filename;
    std::string __Vfunc_uvm_report_enabled__282__id;
    std::string __Vfunc_uvm_report_enabled__311__id;
    std::string __Vtask_uvm_report_info__315__id;
    std::string __Vtask_uvm_report_info__315__message;
    std::string __Vtask_uvm_report_info__315__filename;
    std::string __Vfunc_uvm_report_enabled__318__id;
    std::string __Vfunc_uvm_report_enabled__327__id;
    std::string __Vtask_uvm_report_info__331__id;
    std::string __Vtask_uvm_report_info__331__message;
    std::string __Vtask_uvm_report_info__331__filename;
    std::string __Vfunc_uvm_report_enabled__334__id;
    std::string __Vfunc_uvm_report_enabled__342__id;
    std::string __Vtask_uvm_report_info__346__id;
    std::string __Vtask_uvm_report_info__346__message;
    std::string __Vtask_uvm_report_info__346__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> __PVT__fields;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> __PVT__mem;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> __PVT__region;
    VlClassRef<Vcsi2_tb_top_std__03a__03asemaphore> __PVT__atomic;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_vreg"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg(*this); }
    VlCoroutine __VnoInFunc_XatomicX(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    void __VnoInFunc_Xlock_modelX(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> field);
    virtual void __VnoInFunc_allocate(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam> mam, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &allocate__Vfuncrtn);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ size, QData/*63:0*/ offset, IData/*31:0*/ incr);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_access(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    virtual void __VnoInFunc_get_address(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_incr(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_incr__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_memory(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_n_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn);
    virtual void __VnoInFunc_get_n_memlocs(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_memlocs__Vfuncrtn);
    virtual void __VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &get_offset_in_memory__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_region(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &get_region__Vfuncrtn);
    virtual void __VnoInFunc_get_rights(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn);
    virtual void __VnoInFunc_get_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_implement(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, IData/*31:0*/ incr, CData/*0:0*/ &implement__Vfuncrtn);
    void __VnoInFunc_is_in_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn);
    virtual void __VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status);
    virtual void __VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_pre_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &map);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_release_region(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg();
};


#endif  // guard
