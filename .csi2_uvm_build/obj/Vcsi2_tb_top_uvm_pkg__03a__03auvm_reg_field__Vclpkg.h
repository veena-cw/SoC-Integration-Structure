// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_FIELD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi38;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi46;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_backdoor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_cbs;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_predefined;
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    IData/*31:0*/ __PVT__m_max_size;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_policy_names;
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_define_access(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn);
    void __VnoInFunc_get_max_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn);
    void __VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi46> &get_type__Vfuncrtn);
    void __VnoInFunc_m_predefine_policies(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_volatile;
    CData/*0:0*/ __PVT__m_written;
    CData/*0:0*/ __PVT__m_read_in_progress;
    CData/*0:0*/ __PVT__m_write_in_progress;
    CData/*0:0*/ __PVT__m_individually_accessible;
    IData/*31:0*/ __PVT__m_lsb;
    IData/*31:0*/ __PVT__m_size;
    IData/*31:0*/ __PVT__m_lineno;
    IData/*31:0*/ __PVT__m_cover_on;
    IData/*31:0*/ __PVT__m_check;
    QData/*63:0*/ __PVT__value;
    QData/*63:0*/ __PVT__m_mirrored;
    QData/*63:0*/ __PVT__m_desired;
    VlAssocArray<std::string, QData/*63:0*/> __PVT__m_reset;
    std::string __PVT__m_access;
    std::string __PVT__m_fname;
    std::string __Vfunc_uvm_report_enabled__6__id;
    std::string __Vfunc_uvm_report_enabled__15__id;
    std::string __Vfunc_uvm_report_enabled__25__id;
    std::string __Vfunc_uvm_report_enabled__32__id;
    std::string __Vfunc_uvm_report_enabled__38__id;
    std::string __Vfunc_uvm_report_enabled__46__id;
    std::string __Vfunc_uvm_report_enabled__70__id;
    std::string __Vtask_uvm_report_warning__75__id;
    std::string __Vtask_uvm_report_warning__75__message;
    std::string __Vtask_uvm_report_warning__75__filename;
    std::string __Vfunc_uvm_report_enabled__78__id;
    std::string __Vtask_uvm_report_warning__82__id;
    std::string __Vtask_uvm_report_warning__82__message;
    std::string __Vtask_uvm_report_warning__82__filename;
    std::string __Vfunc_uvm_report_enabled__86__id;
    std::string __Vtask_uvm_report_warning__91__id;
    std::string __Vtask_uvm_report_warning__91__message;
    std::string __Vtask_uvm_report_warning__91__filename;
    std::string __Vfunc_uvm_report_enabled__98__id;
    std::string __Vtask_uvm_report_warning__102__id;
    std::string __Vtask_uvm_report_warning__102__message;
    std::string __Vtask_uvm_report_warning__102__filename;
    std::string __Vfunc_uvm_report_enabled__108__id;
    std::string __Vfunc_uvm_report_enabled__115__id;
    std::string __Vfunc_uvm_report_enabled__126__id;
    std::string __Vtask_uvm_report_warning__130__id;
    std::string __Vtask_uvm_report_warning__130__message;
    std::string __Vtask_uvm_report_warning__130__filename;
    std::string __Vfunc_uvm_report_enabled__157__id;
    std::string __Vtask_uvm_report_warning__161__id;
    std::string __Vtask_uvm_report_warning__161__message;
    std::string __Vtask_uvm_report_warning__161__filename;
    std::string __Vfunc_uvm_report_enabled__192__id;
    std::string __Vtask_uvm_report_warning__196__id;
    std::string __Vtask_uvm_report_warning__196__message;
    std::string __Vtask_uvm_report_warning__196__filename;
    std::string __Vfunc_uvm_report_enabled__199__id;
    std::string __Vtask_uvm_report_warning__203__id;
    std::string __Vtask_uvm_report_warning__203__message;
    std::string __Vtask_uvm_report_warning__203__filename;
    std::string __Vfunc_uvm_report_enabled__206__id;
    std::string __Vtask_uvm_report_warning__210__id;
    std::string __Vtask_uvm_report_warning__210__message;
    std::string __Vtask_uvm_report_warning__210__filename;
    std::string __Vfunc_uvm_report_enabled__214__id;
    std::string __Vtask_uvm_report_warning__219__id;
    std::string __Vtask_uvm_report_warning__219__message;
    std::string __Vtask_uvm_report_warning__219__filename;
    std::string __Vfunc_uvm_report_enabled__232__id;
    std::string __Vtask_uvm_report_warning__236__id;
    std::string __Vtask_uvm_report_warning__236__message;
    std::string __Vtask_uvm_report_warning__236__filename;
    std::string __Vfunc_uvm_report_enabled__239__id;
    std::string __Vtask_uvm_report_warning__243__id;
    std::string __Vtask_uvm_report_warning__243__message;
    std::string __Vtask_uvm_report_warning__243__filename;
    std::string __Vfunc_uvm_report_enabled__248__id;
    std::string __Vfunc_uvm_report_enabled__270__id;
    std::string __Vtask_uvm_report_fatal__273__id;
    std::string __Vtask_uvm_report_fatal__273__message;
    std::string __Vtask_uvm_report_fatal__273__filename;
    std::string __Vfunc_uvm_report_enabled__276__id;
    std::string __Vtask_uvm_report_warning__279__id;
    std::string __Vtask_uvm_report_warning__279__message;
    std::string __Vtask_uvm_report_warning__279__filename;
    std::string __Vfunc_uvm_report_enabled__282__id;
    std::string __Vtask_uvm_report_warning__285__id;
    std::string __Vtask_uvm_report_warning__285__message;
    std::string __Vtask_uvm_report_warning__285__filename;
    std::string __Vfunc_uvm_report_enabled__288__id;
    std::string __Vtask_uvm_report_warning__291__id;
    std::string __Vtask_uvm_report_warning__291__message;
    std::string __Vtask_uvm_report_warning__291__filename;
    std::string __Vfunc_uvm_report_enabled__294__id;
    std::string __Vtask_uvm_report_warning__297__id;
    std::string __Vtask_uvm_report_warning__297__message;
    std::string __Vtask_uvm_report_warning__297__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> __PVT__m_parent;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_field"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field(*this); }
    void __VnoInFunc_Xcheck_accessX(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn);
    virtual void __VnoInFunc_XpredictX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn);
    virtual void __VnoInFunc_XupdateX(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn);
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual VlCoroutine __VnoInFunc_do_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn);
    void __VnoInFunc_get_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_lsb_pos(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn);
    virtual void __VnoInFunc_get_mirrored_value(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn);
    virtual void __VnoInFunc_get_n_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_register(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn);
    virtual void __VnoInFunc_get_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_has_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn);
    void __VnoInFunc_is_indv_accessible(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn);
    virtual void __VnoInFunc_is_known_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn);
    virtual void __VnoInFunc_is_volatile(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_mirror(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_needs_update(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual VlCoroutine __VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_post_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_post_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_pre_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_predict(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    virtual void __VnoInFunc_set_access(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn);
    void __VnoInFunc_set_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ check);
    virtual void __VnoInFunc_set_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind);
    virtual void __VnoInFunc_set_volatility(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile);
    void __VnoInFunc_uvm_reg_field_valid_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field();
};


#endif  // guard
