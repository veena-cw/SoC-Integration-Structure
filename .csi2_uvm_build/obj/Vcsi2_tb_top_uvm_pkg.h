// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_line_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer;


class Vcsi2_tb_top__Syms;
struct Vcsi2_tb_top_uvm_printer_row_info__struct__0 {
    IData/*31:0*/ __PVT__level;
    std::string __PVT__name;
    std::string __PVT__type_name;
    std::string __PVT__size;
    std::string __PVT__val;

    bool operator==(const Vcsi2_tb_top_uvm_printer_row_info__struct__0& rhs) const {
        return __PVT__level == rhs.__PVT__level
            && __PVT__name == rhs.__PVT__name
            && __PVT__type_name == rhs.__PVT__type_name
            && __PVT__size == rhs.__PVT__size
            && __PVT__val == rhs.__PVT__val;
    }
    bool operator!=(const Vcsi2_tb_top_uvm_printer_row_info__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vcsi2_tb_top_uvm_printer_row_info__struct__0& rhs) const {
        if (__PVT__level < rhs.__PVT__level) return true;
        if (rhs.__PVT__level < __PVT__level) return false;
        if (__PVT__name < rhs.__PVT__name) return true;
        if (rhs.__PVT__name < __PVT__name) return false;
        if (__PVT__type_name < rhs.__PVT__type_name) return true;
        if (rhs.__PVT__type_name < __PVT__type_name) return false;
        if (__PVT__size < rhs.__PVT__size) return true;
        if (rhs.__PVT__size < __PVT__size) return false;
        if (__PVT__val < rhs.__PVT__val) return true;
        if (rhs.__PVT__val < __PVT__val) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vcsi2_tb_top_uvm_printer_row_info__struct__0> : public std::true_type {};
struct Vcsi2_tb_top_uvm_hdl_path_slice__struct__0 {
    std::string __PVT__path;
    IData/*31:0*/ __PVT__offset;
    IData/*31:0*/ __PVT__size;

    bool operator==(const Vcsi2_tb_top_uvm_hdl_path_slice__struct__0& rhs) const {
        return __PVT__path == rhs.__PVT__path
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__size == rhs.__PVT__size;
    }
    bool operator!=(const Vcsi2_tb_top_uvm_hdl_path_slice__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vcsi2_tb_top_uvm_hdl_path_slice__struct__0& rhs) const {
        if (__PVT__path < rhs.__PVT__path) return true;
        if (rhs.__PVT__path < __PVT__path) return false;
        if (__PVT__offset < rhs.__PVT__offset) return true;
        if (rhs.__PVT__offset < __PVT__offset) return false;
        if (__PVT__size < rhs.__PVT__size) return true;
        if (rhs.__PVT__size < __PVT__size) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vcsi2_tb_top_uvm_hdl_path_slice__struct__0> : public std::true_type {};
struct Vcsi2_tb_top_uvm_reg_bus_op__struct__0 {
    IData/*31:0*/ __PVT__kind;
    QData/*63:0*/ __PVT__addr;
    QData/*63:0*/ __PVT__data;
    IData/*31:0*/ __PVT__n_bits;
    CData/*7:0*/ __PVT__byte_en;
    IData/*31:0*/ __PVT__status;

    bool operator==(const Vcsi2_tb_top_uvm_reg_bus_op__struct__0& rhs) const {
        return __PVT__kind == rhs.__PVT__kind
            && __PVT__addr == rhs.__PVT__addr
            && __PVT__data == rhs.__PVT__data
            && __PVT__n_bits == rhs.__PVT__n_bits
            && __PVT__byte_en == rhs.__PVT__byte_en
            && __PVT__status == rhs.__PVT__status;
    }
    bool operator!=(const Vcsi2_tb_top_uvm_reg_bus_op__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vcsi2_tb_top_uvm_reg_bus_op__struct__0& rhs) const {
        if (__PVT__kind < rhs.__PVT__kind) return true;
        if (rhs.__PVT__kind < __PVT__kind) return false;
        if (__PVT__addr < rhs.__PVT__addr) return true;
        if (rhs.__PVT__addr < __PVT__addr) return false;
        if (__PVT__data < rhs.__PVT__data) return true;
        if (rhs.__PVT__data < __PVT__data) return false;
        if (__PVT__n_bits < rhs.__PVT__n_bits) return true;
        if (rhs.__PVT__n_bits < __PVT__n_bits) return false;
        if (__PVT__byte_en < rhs.__PVT__byte_en) return true;
        if (rhs.__PVT__byte_en < __PVT__byte_en) return false;
        if (__PVT__status < rhs.__PVT__status) return true;
        if (rhs.__PVT__status < __PVT__status) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vcsi2_tb_top_uvm_reg_bus_op__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__uvm_instance_scope__Vstatic__c;
    CData/*0:0*/ __PVT__uvm_oneway_hash__Vstatic__msb;
    CData/*7:0*/ __PVT__uvm_oneway_hash__Vstatic__current_byte;
    CData/*7:0*/ __PVT__uvm_leaf_scope__Vstatic__bracket_match;
    VlWide<32>/*1023:0*/ __PVT__uvm_hdl_force_time__Vstatic__value;
    IData/*31:0*/ __PVT__uvm_global_random_seed;
    IData/*31:0*/ __PVT__uvm_instance_scope__Vstatic__pos;
    IData/*31:0*/ __PVT__uvm_oneway_hash__Vstatic__crc1;
    IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__pos;
    IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__bmatches;
    IData/*31:0*/ __PVT__uvm_get_array_index_int__Vstatic__i;
    IData/*31:0*/ __PVT__uvm_wait_for_nba_region__Vstatic__nba;
    IData/*31:0*/ __PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    QData/*63:0*/ __PVT__uvm_hdl_force_time__Vstatic__force_time;
    std::string __PVT__uvm_hdl_force_time__Vstatic__path;
    std::string __PVT__uvm_is_match__Vstatic__s;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> __PVT__uvm_default_printer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> __PVT__uvm_default_packer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> __PVT__uvm_default_comparer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> __PVT__uvm_default_recorder;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map>> __PVT__uvm_random_seed_table_lookup;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map> __PVT__uvm_create_random_seed__Vstatic__seed_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map> __PVT__uvm_global_copy_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> __PVT__factory;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __PVT__end_of_elaboration_ph;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __PVT__run_ph;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_top;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> run_test__Vstatic__top;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_enabled__Vstatic__top;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_info__Vstatic__top;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_warning__Vstatic__top;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_error__Vstatic__top;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_fatal__Vstatic__top;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__uvm_cmdline_proc;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg();
    ~Vcsi2_tb_top_uvm_pkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_uvm_instance_scope_TOP__uvm_pkg(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &uvm_instance_scope__Vfuncrtn);
    void __VnoInFunc_uvm_report_error_TOP__uvm_pkg(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line);
};


#endif  // guard
