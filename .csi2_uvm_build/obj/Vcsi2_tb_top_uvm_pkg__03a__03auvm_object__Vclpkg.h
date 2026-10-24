// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_OBJECT__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_void;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__use_uvm_seeding;
    IData/*31:0*/ __PVT__m_inst_count;
    IData/*31:0*/ __PVT__copy__Vstatic__depth;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container> __PVT_____05Fm_uvm_status_container;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_inst_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_count__Vfuncrtn);
    void __VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_void {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_inst_id;
    std::string __PVT__m_leaf_name;
    std::string __Vfunc_uvm_create_random_seed__3__type_id;
    std::string __Vfunc_uvm_create_random_seed__3__inst_id;
    std::string __Vfunc_uvm_create_random_seed__3____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__5__Vfuncout;
    std::string __Vfunc_uvm_oneway_hash__6__string_in;
    std::string __Vfunc_uvm_report_enabled__12__id;
    std::string __Vtask_uvm_report_warning__35__id;
    std::string __Vtask_uvm_report_warning__35__message;
    std::string __Vtask_uvm_report_warning__35__filename;
    std::string __Vtask_uvm_report_warning__40__id;
    std::string __Vtask_uvm_report_warning__40__message;
    std::string __Vtask_uvm_report_warning__40__filename;
    std::string __Vtask_uvm_report_info__58__id;
    std::string __Vtask_uvm_report_info__58__message;
    std::string __Vtask_uvm_report_info__58__filename;
    std::string __Vtask_uvm_report_warning__101__id;
    std::string __Vtask_uvm_report_warning__101__message;
    std::string __Vtask_uvm_report_warning__101__filename;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object"; }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &compare__Vfuncrtn);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_inst_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_id__Vfuncrtn);
    virtual void __VnoInFunc_get_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_get_report_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn);
    void __VnoInFunc_m_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> &packer);
    void __VnoInFunc_m_unpack_post(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_m_unpack_pre(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> &packer);
    void __VnoInFunc_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack__Vfuncrtn);
    void __VnoInFunc_pack_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_bytes__Vfuncrtn);
    void __VnoInFunc_pack_ints(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_ints__Vfuncrtn);
    void __VnoInFunc_print(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_reseed(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_int_local(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ value, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_set_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual void __VnoInFunc_set_object_local(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value, CData/*0:0*/ clone, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_set_string_local(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, std::string value, CData/*0:0*/ recurse);
    void __VnoInFunc_sprint(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer, std::string &sprint__Vfuncrtn);
    void __VnoInFunc_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack__Vfuncrtn);
    void __VnoInFunc_unpack_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_bytes__Vfuncrtn);
    void __VnoInFunc_unpack_ints(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_ints__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_object();
};


#endif  // guard
