// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_GENERIC_PAYLOAD__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_GENERIC_PAYLOAD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi44;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi44> &get_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_dmi;
    IData/*31:0*/ __PVT__m_command;
    IData/*31:0*/ __PVT__m_length;
    IData/*31:0*/ __PVT__m_response_status;
    IData/*31:0*/ __PVT__m_byte_enable_length;
    IData/*31:0*/ __PVT__m_streaming_width;
    QData/*63:0*/ __PVT__m_address;
    VlQueue<CData/*7:0*/> __PVT__m_data;
    VlQueue<CData/*7:0*/> __PVT__m_byte_enable;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base>> __PVT__m_extensions;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base>> __PVT__m_rand_exts;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_generic_payload"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    void __VnoInFunc_clear_extension(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle);
    void __VnoInFunc_clear_extensions(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_address(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_byte_enable(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_get_byte_enable_length(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_byte_enable_length__Vfuncrtn);
    virtual void __VnoInFunc_get_command(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_command__Vfuncrtn);
    virtual void __VnoInFunc_get_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_get_data_length(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_data_length__Vfuncrtn);
    void __VnoInFunc_get_extension(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> &get_extension__Vfuncrtn);
    void __VnoInFunc_get_num_extensions(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_extensions__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_response_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_status__Vfuncrtn);
    virtual void __VnoInFunc_get_response_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_response_string__Vfuncrtn);
    virtual void __VnoInFunc_get_streaming_width(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_streaming_width__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_is_dmi_allowed(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_dmi_allowed__Vfuncrtn);
    virtual void __VnoInFunc_is_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read__Vfuncrtn);
    virtual void __VnoInFunc_is_response_error(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_error__Vfuncrtn);
    virtual void __VnoInFunc_is_response_ok(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_ok__Vfuncrtn);
    virtual void __VnoInFunc_is_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_write__Vfuncrtn);
    void __VnoInFunc_post_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_pre_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_address(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ addr);
    virtual void __VnoInFunc_set_byte_enable(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_set_byte_enable_length(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ length);
    virtual void __VnoInFunc_set_command(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ command);
    virtual void __VnoInFunc_set_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_set_data_length(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ length);
    virtual void __VnoInFunc_set_dmi_allowed(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ dmi);
    void __VnoInFunc_set_extension(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> ext, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> &set_extension__Vfuncrtn);
    virtual void __VnoInFunc_set_read(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_response_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ status);
    virtual void __VnoInFunc_set_streaming_width(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ width);
    virtual void __VnoInFunc_set_write(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload();
};


#endif  // guard
