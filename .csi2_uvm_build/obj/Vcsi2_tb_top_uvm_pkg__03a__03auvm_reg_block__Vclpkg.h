// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_BLOCK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz128;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz5;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz129;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__id;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>, CData/*0:0*/> __PVT__m_roots;
    std::string __Vfunc_uvm_report_enabled__0__id;
    std::string __Vtask_uvm_report_fatal__3__id;
    std::string __Vtask_uvm_report_fatal__3__message;
    std::string __Vtask_uvm_report_fatal__3__filename;
    std::string __Vfunc_uvm_report_enabled__13__id;
    std::string __Vtask_uvm_report_warning__16__id;
    std::string __Vtask_uvm_report_warning__16__message;
    std::string __Vtask_uvm_report_warning__16__filename;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check_data_width(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ width, CData/*0:0*/ &check_data_width__Vfuncrtn);
    void __VnoInFunc_find_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &find_block__Vfuncrtn);
    void __VnoInFunc_find_blocks(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> &blks, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &find_blocks__Vfuncrtn);
    void __VnoInFunc_get_root_blocks(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> &blks);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__locked;
    IData/*31:0*/ __PVT__default_path;
    IData/*31:0*/ __PVT__has_cover;
    IData/*31:0*/ __PVT__cover_on;
    IData/*31:0*/ __PVT__lineno;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>, CData/*0:0*/> __PVT__maps;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>, IData/*31:0*/> __PVT__blks;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>, IData/*31:0*/> __PVT__regs;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>, IData/*31:0*/> __PVT__vregs;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>, IData/*31:0*/> __PVT__mems;
    VlAssocArray<std::string, std::string> __PVT__root_hdl_paths;
    std::string __PVT__default_hdl_path;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vfunc_uvm_report_enabled__11__id;
    std::string __Vfunc_uvm_report_enabled__18__id;
    std::string __Vfunc_uvm_report_enabled__22__id;
    std::string __Vfunc_uvm_report_enabled__29__id;
    std::string __Vfunc_uvm_report_enabled__33__id;
    std::string __Vfunc_uvm_report_enabled__40__id;
    std::string __Vfunc_uvm_report_enabled__44__id;
    std::string __Vfunc_uvm_report_enabled__59__id;
    std::string __Vtask_uvm_report_fatal__62__id;
    std::string __Vtask_uvm_report_fatal__62__message;
    std::string __Vtask_uvm_report_fatal__62__filename;
    std::string __Vfunc_uvm_report_enabled__68__id;
    std::string __Vfunc_uvm_report_enabled__88__id;
    std::string __Vtask_uvm_report_warning__92__id;
    std::string __Vtask_uvm_report_warning__92__message;
    std::string __Vtask_uvm_report_warning__92__filename;
    std::string __Vfunc_uvm_report_enabled__98__id;
    std::string __Vtask_uvm_report_warning__102__id;
    std::string __Vtask_uvm_report_warning__102__message;
    std::string __Vtask_uvm_report_warning__102__filename;
    std::string __Vfunc_uvm_report_enabled__108__id;
    std::string __Vtask_uvm_report_warning__112__id;
    std::string __Vtask_uvm_report_warning__112__message;
    std::string __Vtask_uvm_report_warning__112__filename;
    std::string __Vfunc_uvm_report_enabled__118__id;
    std::string __Vtask_uvm_report_warning__122__id;
    std::string __Vtask_uvm_report_warning__122__message;
    std::string __Vtask_uvm_report_warning__122__filename;
    std::string __Vfunc_uvm_report_enabled__130__id;
    std::string __Vtask_uvm_report_warning__134__id;
    std::string __Vtask_uvm_report_warning__134__message;
    std::string __Vtask_uvm_report_warning__134__filename;
    std::string __Vfunc_uvm_report_enabled__142__id;
    std::string __Vtask_uvm_report_warning__146__id;
    std::string __Vtask_uvm_report_warning__146__message;
    std::string __Vtask_uvm_report_warning__146__filename;
    std::string __Vfunc_uvm_report_enabled__163__id;
    std::string __Vtask_uvm_report_info__167__id;
    std::string __Vtask_uvm_report_info__167__message;
    std::string __Vtask_uvm_report_info__167__filename;
    std::string __Vfunc_uvm_report_enabled__170__id;
    std::string __Vtask_uvm_report_info__174__id;
    std::string __Vtask_uvm_report_info__174__message;
    std::string __Vtask_uvm_report_info__174__filename;
    std::string __Vfunc_uvm_report_enabled__179__id;
    std::string __Vfunc_uvm_report_enabled__195__id;
    std::string __Vfunc_uvm_report_enabled__202__id;
    std::string __Vfunc_uvm_report_enabled__206__id;
    std::string __Vfunc_uvm_report_enabled__216__id;
    std::string __Vtask_uvm_report_warning__219__id;
    std::string __Vtask_uvm_report_warning__219__message;
    std::string __Vtask_uvm_report_warning__219__filename;
    std::string __Vfunc_uvm_report_enabled__222__id;
    std::string __Vtask_uvm_report_warning__226__id;
    std::string __Vtask_uvm_report_warning__226__message;
    std::string __Vtask_uvm_report_warning__226__filename;
    std::string __Vfunc_uvm_report_enabled__232__id;
    std::string __Vtask_uvm_report_warning__235__id;
    std::string __Vtask_uvm_report_warning__235__message;
    std::string __Vtask_uvm_report_warning__235__filename;
    std::string __Vfunc_uvm_report_enabled__244__id;
    std::string __Vtask_uvm_report_warning__247__id;
    std::string __Vtask_uvm_report_warning__247__message;
    std::string __Vtask_uvm_report_warning__247__filename;
    std::string __Vfunc_uvm_report_enabled__257__id;
    std::string __Vfunc_uvm_report_enabled__267__id;
    std::string __Vfunc_uvm_report_enabled__276__id;
    std::string __Vfunc_uvm_report_enabled__294__id;
    std::string __Vtask_uvm_report_fatal__297__id;
    std::string __Vtask_uvm_report_fatal__297__message;
    std::string __Vtask_uvm_report_fatal__297__filename;
    std::string __Vfunc_uvm_report_enabled__300__id;
    std::string __Vtask_uvm_report_fatal__303__id;
    std::string __Vtask_uvm_report_fatal__303__message;
    std::string __Vtask_uvm_report_fatal__303__filename;
    std::string __Vfunc_uvm_report_enabled__306__id;
    std::string __Vtask_uvm_report_warning__309__id;
    std::string __Vtask_uvm_report_warning__309__message;
    std::string __Vtask_uvm_report_warning__309__filename;
    std::string __Vfunc_uvm_report_enabled__312__id;
    std::string __Vtask_uvm_report_warning__315__id;
    std::string __Vtask_uvm_report_warning__315__message;
    std::string __Vtask_uvm_report_warning__315__filename;
    std::string __Vfunc_uvm_report_enabled__318__id;
    std::string __Vtask_uvm_report_warning__321__id;
    std::string __Vtask_uvm_report_warning__321__message;
    std::string __Vtask_uvm_report_warning__321__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> __PVT__backdoor;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz128> __PVT__hdl_paths_pool;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __PVT__default_map;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_block"; }
    void __VnoInFunc_Xinit_address_mapsX(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_XsampleX(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk);
    virtual void __VnoInFunc_add_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models);
    void __VnoInFunc_add_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string path, std::string kind);
    void __VnoInFunc_add_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_add_mem(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem);
    void __VnoInFunc_add_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg);
    void __VnoInFunc_add_vreg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> vreg);
    void __VnoInFunc_build_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn);
    void __VnoInFunc_clear_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_create_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &create_map__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_get_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn);
    virtual void __VnoInFunc_get_block_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_blocks(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> &blks, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_default_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn);
    virtual void __VnoInFunc_get_default_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_path__Vfuncrtn);
    virtual void __VnoInFunc_get_field_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind);
    virtual void __VnoInFunc_get_map_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_map_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_maps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps);
    virtual void __VnoInFunc_get_mem_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_mem_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> &get_reg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_vfield_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_virtual_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_vreg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn);
    virtual void __VnoInFunc_has_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    void __VnoInFunc_is_hdl_path_root(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &is_hdl_path_root__Vfuncrtn);
    void __VnoInFunc_is_locked(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_locked__Vfuncrtn);
    virtual void __VnoInFunc_lock_model(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_mirror(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read_mem_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_read_reg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_readmemh(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string filename);
    virtual void __VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_sample(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    virtual void __VnoInFunc_sample_values(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_backdoor(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_coverage(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn);
    void __VnoInFunc_set_default_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    void __VnoInFunc_set_default_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map);
    void __VnoInFunc_set_hdl_path_root(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string path, std::string kind);
    virtual void __VnoInFunc_set_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent);
    virtual VlCoroutine __VnoInFunc_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write_mem_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_write_reg_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_writememh(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string filename);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ has_coverage);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block();
};


#endif  // guard
