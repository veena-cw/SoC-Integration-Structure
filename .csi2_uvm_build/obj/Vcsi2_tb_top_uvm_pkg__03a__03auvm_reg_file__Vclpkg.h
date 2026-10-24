// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_FILE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_FILE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz128;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz5;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__default_hdl_path;
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_warning__10__id;
    std::string __Vtask_uvm_report_warning__10__message;
    std::string __Vtask_uvm_report_warning__10__filename;
    std::string __Vfunc_uvm_report_enabled__22__id;
    std::string __Vfunc_uvm_report_enabled__31__id;
    std::string __Vfunc_uvm_report_enabled__44__id;
    std::string __Vfunc_uvm_report_enabled__54__id;
    std::string __Vtask_uvm_report_fatal__57__id;
    std::string __Vtask_uvm_report_fatal__57__message;
    std::string __Vtask_uvm_report_fatal__57__filename;
    std::string __Vfunc_uvm_report_enabled__61__id;
    std::string __Vtask_uvm_report_fatal__64__id;
    std::string __Vtask_uvm_report_fatal__64__message;
    std::string __Vtask_uvm_report_fatal__64__filename;
    std::string __Vfunc_uvm_report_enabled__67__id;
    std::string __Vtask_uvm_report_fatal__70__id;
    std::string __Vtask_uvm_report_fatal__70__message;
    std::string __Vtask_uvm_report_fatal__70__filename;
    std::string __Vfunc_uvm_report_enabled__73__id;
    std::string __Vtask_uvm_report_warning__76__id;
    std::string __Vtask_uvm_report_warning__76__message;
    std::string __Vtask_uvm_report_warning__76__filename;
    std::string __Vfunc_uvm_report_enabled__79__id;
    std::string __Vtask_uvm_report_warning__82__id;
    std::string __Vtask_uvm_report_warning__82__message;
    std::string __Vtask_uvm_report_warning__82__filename;
    std::string __Vfunc_uvm_report_enabled__85__id;
    std::string __Vtask_uvm_report_warning__88__id;
    std::string __Vtask_uvm_report_warning__88__message;
    std::string __Vtask_uvm_report_warning__88__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> __PVT__m_rf;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz128> __PVT__hdl_paths_pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_file"; }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string path, std::string kind);
    void __VnoInFunc_clear_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_block(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind);
    virtual void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_regfile(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_default_hdl_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_file();
};


#endif  // guard
