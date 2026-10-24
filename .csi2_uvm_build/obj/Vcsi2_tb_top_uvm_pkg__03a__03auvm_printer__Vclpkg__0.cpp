// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field\n"); );
    // Body
    this->__VnoInFunc_print_int(vlSymsp, name, value, size, radix, (IData)(scope_separator), type_name);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_header(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &format_header__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_header\n"); );
    // Body
    format_header__Vfuncrtn = ""s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_footer(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &format_footer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_footer\n"); );
    // Body
    format_footer__Vfuncrtn = ""s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__knobs = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs, vlSymsp);
    this->__PVT__m_scope = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__5__Vfuncout;
    __Vtask_uvm_report_enabled__5__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    emit__Vfuncrtn = ""s;
    this->__Vfunc_uvm_report_enabled__3__id = "NO_OVERRIDE"s;
    __Vfunc_uvm_report_enabled__3__severity = 2U;
    __Vfunc_uvm_report_enabled__3__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vfunc_get__4__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), this->__Vfunc_uvm_report_enabled__3__id, __Vtask_uvm_report_enabled__5__Vfuncout);
    __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled 
        = __Vtask_uvm_report_enabled__5__Vfuncout;
    __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__3____VlefCall_0__uvm_report_enabled);
    if (__VlefCall_0__uvm_report_enabled) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "NO_OVERRIDE"s, "emit() method not overridden in printer subtype"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh"s, 0x00000271U);
    }
    emit__Vfuncrtn = ""s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_row(Vcsi2_tb_top__Syms* __restrict vlSymsp, Vcsi2_tb_top_uvm_printer_row_info__struct__0 row, std::string &format_row__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_row\n"); );
    // Body
    format_row__Vfuncrtn = ""s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, std::string arraytype, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header\n"); );
    // Body
    std::string __VlefCall_2__adjust_name;
    std::string __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__depth;
    Vcsi2_tb_top_uvm_printer_row_info__struct__0 row_info;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if ((""s != name)) {
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 648)->__VnoInFunc_set_arg(vlSymsp, name);
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 650)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    row_info.__PVT__level = __VlefCall_0__depth;
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 651)->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
    this->__VnoInFunc_adjust_name(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_1__get), (IData)(scope_separator), __VlefCall_2__adjust_name);
    row_info.__PVT__name = __VlefCall_2__adjust_name;
    row_info.__PVT__type_name = arraytype;
    row_info.__PVT__size = VL_SFORMATF_N_NX("%0d",1
                                            , '~',32,size) ;
    row_info.__PVT__val = "-"s;
    this->__PVT__m_rows.push_back(row_info);
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 658)->__VnoInFunc_down(vlSymsp, name);
    this->__PVT__m_array_stack.push_back(1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer\n"); );
    // Body
    if ((0U != this->__PVT__m_array_stack.size())) {
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 668)->__VnoInFunc_up(vlSymsp, 0x2eU);
        std::ignore = this->__PVT__m_array_stack.pop_front();
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ min, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range\n"); );
    // Body
    {
        if (((0xffffffffU == min) & (0xffffffffU == max))) {
            goto __Vlabel0;
        }
        if ((0xffffffffU == min)) {
            min = max;
        }
        if ((0xffffffffU == max)) {
            max = min;
        }
        if (VL_LTS_III(32, max, min)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_print_generic(vlSymsp, "..."s, "..."s, 0xfffffffeU, "..."s, 0x2eU);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __Vfunc_uvm_object_value_str__23__v;
    IData/*31:0*/ __Vfunc_uvm_object_value_str__23____VlefCall_0__get_inst_id;
    __Vfunc_uvm_object_value_str__23____VlefCall_0__get_inst_id = 0;
    IData/*31:0*/ __Vtask_get_inst_id__24__Vfuncout;
    __Vtask_get_inst_id__24__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__uvm_object_value_str;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__adjust_name;
    std::string __VlefCall_4__get;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__depth;
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefCall_0__depth;
    Vcsi2_tb_top_uvm_printer_row_info__struct__0 row_info;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if ((""s == name)) {
        if ((VlNull{} != value)) {
            VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 702)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
            __VlefExpr_1 = (0U == __VlefCall_0__depth);
            if (__VlefExpr_1) {
                __VlefExpr_1 = VL_CAST_DYNAMIC(value, comp);
            }
            if (__VlefExpr_1) {
                VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 703)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
            } else {
                VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 706)->__VnoInFunc_get_name(vlSymsp, name);
            }
        }
    }
    if ((""s == name)) {
        name = "<unnamed>"s;
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 714)->__VnoInFunc_set_arg(vlSymsp, name);
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 716)->__VnoInFunc_depth(vlSymsp, __VlefCall_2__depth);
    row_info.__PVT__level = __VlefCall_2__depth;
    if (((0U == row_info.__PVT__level) && VL_NULL_CHECK(this->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 718)
         ->__PVT__show_root)) {
        VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 719)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        row_info.__PVT__name = __VlefCall_3__get_full_name;
    } else {
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 721)->__VnoInFunc_get(vlSymsp, __VlefCall_4__get);
        this->__VnoInFunc_adjust_name(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_4__get), (IData)(scope_separator), __VlefCall_5__adjust_name);
        row_info.__PVT__name = __VlefCall_5__adjust_name;
    }
    if ((VlNull{} != value)) {
        VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 723)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
    } else {
        __VlefCall_6__get_type_name = "object"s;
    }
    row_info.__PVT__type_name = __VlefCall_6__get_type_name;
    row_info.__PVT__size = "-"s;
    if (VL_NULL_CHECK(this->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 725)
        ->__PVT__reference) {
        __Vfunc_uvm_object_value_str__23__v = value;
        {
            if ((VlNull{} == __Vfunc_uvm_object_value_str__23__v)) {
                __VlefCall_7__uvm_object_value_str = "<null>"s;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(__Vfunc_uvm_object_value_str__23__v, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 457)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__24__Vfuncout);
            __Vfunc_uvm_object_value_str__23____VlefCall_0__get_inst_id 
                = __Vtask_get_inst_id__24__Vfuncout;
            VL_SFORMAT_NX(__VlefCall_7__uvm_object_value_str
                          ,"%0d",1, '~',32,__Vfunc_uvm_object_value_str__23____VlefCall_0__get_inst_id);
            __VlefCall_7__uvm_object_value_str = VL_CONCATN_NNN("@"s, __VlefCall_7__uvm_object_value_str);
            __Vlabel0: ;
        }
    } else {
        __VlefCall_7__uvm_object_value_str = "-"s;
    }
    row_info.__PVT__val = __VlefCall_7__uvm_object_value_str;
    this->__PVT__m_rows.push_back(row_info);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_first_child__30__Vfuncout;
    __Vtask_get_first_child__30__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_next_child__33__Vfuncout;
    __Vtask_get_next_child__33__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_5__get_next_child;
    IData/*31:0*/ __VlefCall_4__get_first_child;
    IData/*31:0*/ __VlefExpr_3;
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__depth;
    std::string unnamedblk34__DOT__name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> child_comp;
    this->__VnoInFunc_print_object_header(vlProcess, vlSymsp, name, value, scope_separator);
    if ((VlNull{} != value)) {
        __VlefLogOr_1 = (0xffffffffU == VL_NULL_CHECK(this->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 742)
                         ->__PVT__depth);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 742)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
            __VlefLogOr_1 = VL_GTS_III(32, VL_NULL_CHECK(this->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 742)
                                       ->__PVT__depth, __VlefCall_0__depth);
        }
        if (((IData)(__VlefLogOr_1) && (! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 743)
                                        ->__PVT__cycle_check.exists(value)))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 745)->__PVT__cycle_check.atWrite(value) = 1U;
            if (((""s == name) & (VlNull{} != value))) {
                VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 747)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 747)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name));
            } else {
                VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 749)->__VnoInFunc_down(vlSymsp, name);
            }
            __VlefExpr_3 = VL_CAST_DYNAMIC(value, comp);
            if (__VlefExpr_3) {
                unnamedblk34__DOT__name = ""s;
                VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 754)->__VnoInFunc_get_first_child(vlSymsp, unnamedblk34__DOT__name, __Vtask_get_first_child__30__Vfuncout);
                __VlefCall_4__get_first_child = __Vtask_get_first_child__30__Vfuncout;
                if ((0U != __VlefCall_4__get_first_child)) {
                    do {
                        VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 756)->__VnoInFunc_get_child(vlProcess, vlSymsp, unnamedblk34__DOT__name, child_comp);
                        if (VL_NULL_CHECK(child_comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 757)
                            ->__PVT__print_enabled) {
                            this->__VnoInFunc_print_object(vlProcess, vlSymsp, ""s, child_comp, 0x2eU);
                        }
                        VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 759)->__VnoInFunc_get_next_child(vlSymsp, unnamedblk34__DOT__name, __Vtask_get_next_child__33__Vfuncout);
                        __VlefCall_5__get_next_child 
                            = __Vtask_get_next_child__33__Vfuncout;
                    } while ((0U != __VlefCall_5__get_next_child));
                }
            }
            VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 763)->__VnoInFunc_sprint(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer>{this}, this->__Vtask_sprint__34__Vfuncout);
            if (((""s != name) & (0x5bU == VL_GETC_N(name,0U)))) {
                VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 766)->__VnoInFunc_up(vlSymsp, 0x5bU);
            } else {
                VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 768)->__VnoInFunc_up(vlSymsp, 0x2eU);
            }
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 769)->__PVT__cycle_check.erase(value);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &istop__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__depth;
    istop__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 780)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    istop__Vfuncrtn = (0U == __VlefCall_0__depth);
}

extern const VlWide<256>/*8191:0*/ Vcsi2_tb_top__ConstPool__CONST_hbc4523fd_0;

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_adjust_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, CData/*7:0*/ scope_separator, std::string &adjust_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_adjust_name\n"); );
    // Locals
    CData/*7:0*/ __Vfunc_uvm_leaf_scope__39__scope_separator;
    __Vfunc_uvm_leaf_scope__39__scope_separator = 0;
    // Body
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__depth;
    {
        adjust_name__Vfuncrtn = ""s;
        __VlefLogAnd_1 = VL_NULL_CHECK(this->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 788)
            ->__PVT__show_root;
        if (__VlefLogAnd_1) {
            VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 788)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
            __VlefLogAnd_1 = (0U == __VlefCall_0__depth);
        }
        if ((((IData)(__VlefLogAnd_1) || VL_NULL_CHECK(this->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 788)
              ->__PVT__full_name) || ("..."s == id))) {
            adjust_name__Vfuncrtn = id;
            goto __Vlabel0;
        }
        __Vfunc_uvm_leaf_scope__39__scope_separator 
            = scope_separator;
        this->__Vfunc_uvm_leaf_scope__39__full_name 
            = id;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match 
            = (0x000000ffU & Vcsi2_tb_top__ConstPool__CONST_hbc4523fd_0
               [(0x07ffffffU & (IData)(__Vfunc_uvm_leaf_scope__39__scope_separator))]);
        if (((0U != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match)) 
             & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
                != VL_GETC_N(this->__Vfunc_uvm_leaf_scope__39__full_name,
                             (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__39__full_name) 
                              - (IData)(1U)))))) {
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
        }
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__39__full_name) 
               - (IData)(1U));
        {
            while ((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
                if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__39__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                     == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches);
                } else if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__39__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                            == (IData)(__Vfunc_uvm_leaf_scope__39__scope_separator))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                           - (IData)(1U));
                    if ((1U & ((~ (0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches)) 
                               | (0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))))) {
                        goto __Vlabel1;
                    }
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if ((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
            if ((0x2eU != (IData)(__Vfunc_uvm_leaf_scope__39__scope_separator))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                       - (IData)(1U));
            }
            adjust_name__Vfuncrtn = VL_SUBSTR_N(this->__Vfunc_uvm_leaf_scope__39__full_name,
                                                ((IData)(1U) 
                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),
                                                (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__39__full_name) 
                                                 - (IData)(1U)));
        } else {
            adjust_name__Vfuncrtn = this->__Vfunc_uvm_leaf_scope__39__full_name;
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string type_name, IData/*31:0*/ size, std::string value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic\n"); );
    // Body
    std::string __VlefCall_1__adjust_name;
    IData/*31:0*/ __VlefCall_0__depth;
    Vcsi2_tb_top_uvm_printer_row_info__struct__0 row_info;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if (((""s != name) & ("..."s != name))) {
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 806)->__VnoInFunc_set_arg(vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 807)->__VnoInFunc_get(vlSymsp, name);
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 810)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    row_info.__PVT__level = __VlefCall_0__depth;
    this->__VnoInFunc_adjust_name(vlSymsp, name, (IData)(scope_separator), __VlefCall_1__adjust_name);
    row_info.__PVT__name = __VlefCall_1__adjust_name;
    row_info.__PVT__type_name = type_name;
    row_info.__PVT__size = ((0xfffffffeU == size) ? "..."s
                             : VL_SFORMATF_N_NX("%0d",1
                                                , '~',32,size) );
    row_info.__PVT__val = ((""s == value) ? "\"\""s
                            : value);
    this->__PVT__m_rows.push_back(row_info);
}

extern const VlWide<128>/*4095:0*/ Vcsi2_tb_top__ConstPool__CONST_h1958c06c_0;

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_int(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_int\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_uvm_vector_to_string__47__value;
    VL_ZERO_W(4096, __Vfunc_uvm_vector_to_string__47__value);
    IData/*31:0*/ __Vfunc_uvm_vector_to_string__47__size;
    __Vfunc_uvm_vector_to_string__47__size = 0;
    IData/*31:0*/ __Vfunc_uvm_vector_to_string__47__radix;
    __Vfunc_uvm_vector_to_string__47__radix = 0;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    IData/*31:0*/ __Vilp1;
    // Body
    std::string __VlefCall_2__adjust_name;
    IData/*31:0*/ __VlefCall_1__depth;
    std::string __VlefCall_0__get_radix_str;
    Vcsi2_tb_top_uvm_printer_row_info__struct__0 row_info;
    std::string sz_str;
    std::string val_str;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    sz_str = ""s;
    val_str = ""s;
    if ((""s != name)) {
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 835)->__VnoInFunc_set_arg(vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 836)->__VnoInFunc_get(vlSymsp, name);
    }
    if ((""s == type_name)) {
        type_name = ((0x09000000U == radix) ? "time"s
                      : ((0x08000000U == radix) ? "string"s
                          : "integral"s));
    }
    VL_SFORMAT_NX(sz_str,"%0d",1, '~',32,size);
    if ((0U == radix)) {
        radix = VL_NULL_CHECK(this->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 851)
            ->__PVT__default_radix;
    }
    VL_NULL_CHECK(this->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 854)->__VnoInFunc_get_radix_str(vlSymsp, radix, __VlefCall_0__get_radix_str);
    this->__Vfunc_uvm_vector_to_string__47__radix_str 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_radix_str);
    __Vfunc_uvm_vector_to_string__47__radix = radix;
    __Vfunc_uvm_vector_to_string__47__size = size;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vfunc_uvm_vector_to_string__47__value[__Vilp1] 
            = value[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    {
        if (((0x02000000U == __Vfunc_uvm_vector_to_string__47__radix) 
             & (__Vfunc_uvm_vector_to_string__47__value
                [(0x0000007fU & ((__Vfunc_uvm_vector_to_string__47__size 
                                  - (IData)(1U)) >> 5U))] 
                >> (0x0000001fU & (__Vfunc_uvm_vector_to_string__47__size 
                                   - (IData)(1U)))))) {
            VL_SFORMAT_NX(val_str,"%0d",1, '~',4096,__Vfunc_uvm_vector_to_string__47__value.data());
            goto __Vlabel0;
        }
        VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, Vcsi2_tb_top__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_vector_to_string__47__size);
        VL_SUB_W(128, __Vtemp_3, __Vtemp_2, Vcsi2_tb_top__ConstPool__CONST_h1958c06c_0);
        __Vfunc_uvm_vector_to_string__47__value[0U] 
            = (__Vfunc_uvm_vector_to_string__47__value[0U] 
               & __Vtemp_3[0U]);
        __Vfunc_uvm_vector_to_string__47__value[1U] 
            = (__Vfunc_uvm_vector_to_string__47__value[1U] 
               & __Vtemp_3[1U]);
        __Vfunc_uvm_vector_to_string__47__value[2U] 
            = (__Vfunc_uvm_vector_to_string__47__value[2U] 
               & __Vtemp_3[2U]);
        __Vfunc_uvm_vector_to_string__47__value[3U] 
            = (__Vfunc_uvm_vector_to_string__47__value[3U] 
               & __Vtemp_3[3U]);
        __Vfunc_uvm_vector_to_string__47__value[4U] 
            = (__Vfunc_uvm_vector_to_string__47__value[4U] 
               & __Vtemp_3[4U]);
        __Vfunc_uvm_vector_to_string__47__value[5U] 
            = (__Vfunc_uvm_vector_to_string__47__value[5U] 
               & __Vtemp_3[5U]);
        __Vfunc_uvm_vector_to_string__47__value[6U] 
            = (__Vfunc_uvm_vector_to_string__47__value[6U] 
               & __Vtemp_3[6U]);
        __Vfunc_uvm_vector_to_string__47__value[7U] 
            = (__Vfunc_uvm_vector_to_string__47__value[7U] 
               & __Vtemp_3[7U]);
        __Vfunc_uvm_vector_to_string__47__value[8U] 
            = (__Vfunc_uvm_vector_to_string__47__value[8U] 
               & __Vtemp_3[8U]);
        __Vfunc_uvm_vector_to_string__47__value[9U] 
            = (__Vfunc_uvm_vector_to_string__47__value[9U] 
               & __Vtemp_3[9U]);
        __Vfunc_uvm_vector_to_string__47__value[10U] 
            = (__Vfunc_uvm_vector_to_string__47__value[10U] 
               & __Vtemp_3[10U]);
        __Vfunc_uvm_vector_to_string__47__value[11U] 
            = (__Vfunc_uvm_vector_to_string__47__value[11U] 
               & __Vtemp_3[11U]);
        __Vfunc_uvm_vector_to_string__47__value[12U] 
            = (__Vfunc_uvm_vector_to_string__47__value[12U] 
               & __Vtemp_3[12U]);
        __Vfunc_uvm_vector_to_string__47__value[13U] 
            = (__Vfunc_uvm_vector_to_string__47__value[13U] 
               & __Vtemp_3[13U]);
        __Vfunc_uvm_vector_to_string__47__value[14U] 
            = (__Vfunc_uvm_vector_to_string__47__value[14U] 
               & __Vtemp_3[14U]);
        __Vfunc_uvm_vector_to_string__47__value[15U] 
            = (__Vfunc_uvm_vector_to_string__47__value[15U] 
               & __Vtemp_3[15U]);
        __Vfunc_uvm_vector_to_string__47__value[16U] 
            = (__Vfunc_uvm_vector_to_string__47__value[16U] 
               & __Vtemp_3[16U]);
        __Vfunc_uvm_vector_to_string__47__value[17U] 
            = (__Vfunc_uvm_vector_to_string__47__value[17U] 
               & __Vtemp_3[17U]);
        __Vfunc_uvm_vector_to_string__47__value[18U] 
            = (__Vfunc_uvm_vector_to_string__47__value[18U] 
               & __Vtemp_3[18U]);
        __Vfunc_uvm_vector_to_string__47__value[19U] 
            = (__Vfunc_uvm_vector_to_string__47__value[19U] 
               & __Vtemp_3[19U]);
        __Vfunc_uvm_vector_to_string__47__value[20U] 
            = (__Vfunc_uvm_vector_to_string__47__value[20U] 
               & __Vtemp_3[20U]);
        __Vfunc_uvm_vector_to_string__47__value[21U] 
            = (__Vfunc_uvm_vector_to_string__47__value[21U] 
               & __Vtemp_3[21U]);
        __Vfunc_uvm_vector_to_string__47__value[22U] 
            = (__Vfunc_uvm_vector_to_string__47__value[22U] 
               & __Vtemp_3[22U]);
        __Vfunc_uvm_vector_to_string__47__value[23U] 
            = (__Vfunc_uvm_vector_to_string__47__value[23U] 
               & __Vtemp_3[23U]);
        __Vfunc_uvm_vector_to_string__47__value[24U] 
            = (__Vfunc_uvm_vector_to_string__47__value[24U] 
               & __Vtemp_3[24U]);
        __Vfunc_uvm_vector_to_string__47__value[25U] 
            = (__Vfunc_uvm_vector_to_string__47__value[25U] 
               & __Vtemp_3[25U]);
        __Vfunc_uvm_vector_to_string__47__value[26U] 
            = (__Vfunc_uvm_vector_to_string__47__value[26U] 
               & __Vtemp_3[26U]);
        __Vfunc_uvm_vector_to_string__47__value[27U] 
            = (__Vfunc_uvm_vector_to_string__47__value[27U] 
               & __Vtemp_3[27U]);
        __Vfunc_uvm_vector_to_string__47__value[28U] 
            = (__Vfunc_uvm_vector_to_string__47__value[28U] 
               & __Vtemp_3[28U]);
        __Vfunc_uvm_vector_to_string__47__value[29U] 
            = (__Vfunc_uvm_vector_to_string__47__value[29U] 
               & __Vtemp_3[29U]);
        __Vfunc_uvm_vector_to_string__47__value[30U] 
            = (__Vfunc_uvm_vector_to_string__47__value[30U] 
               & __Vtemp_3[30U]);
        __Vfunc_uvm_vector_to_string__47__value[31U] 
            = (__Vfunc_uvm_vector_to_string__47__value[31U] 
               & __Vtemp_3[31U]);
        __Vfunc_uvm_vector_to_string__47__value[32U] 
            = (__Vfunc_uvm_vector_to_string__47__value[32U] 
               & __Vtemp_3[32U]);
        __Vfunc_uvm_vector_to_string__47__value[33U] 
            = (__Vfunc_uvm_vector_to_string__47__value[33U] 
               & __Vtemp_3[33U]);
        __Vfunc_uvm_vector_to_string__47__value[34U] 
            = (__Vfunc_uvm_vector_to_string__47__value[34U] 
               & __Vtemp_3[34U]);
        __Vfunc_uvm_vector_to_string__47__value[35U] 
            = (__Vfunc_uvm_vector_to_string__47__value[35U] 
               & __Vtemp_3[35U]);
        __Vfunc_uvm_vector_to_string__47__value[36U] 
            = (__Vfunc_uvm_vector_to_string__47__value[36U] 
               & __Vtemp_3[36U]);
        __Vfunc_uvm_vector_to_string__47__value[37U] 
            = (__Vfunc_uvm_vector_to_string__47__value[37U] 
               & __Vtemp_3[37U]);
        __Vfunc_uvm_vector_to_string__47__value[38U] 
            = (__Vfunc_uvm_vector_to_string__47__value[38U] 
               & __Vtemp_3[38U]);
        __Vfunc_uvm_vector_to_string__47__value[39U] 
            = (__Vfunc_uvm_vector_to_string__47__value[39U] 
               & __Vtemp_3[39U]);
        __Vfunc_uvm_vector_to_string__47__value[40U] 
            = (__Vfunc_uvm_vector_to_string__47__value[40U] 
               & __Vtemp_3[40U]);
        __Vfunc_uvm_vector_to_string__47__value[41U] 
            = (__Vfunc_uvm_vector_to_string__47__value[41U] 
               & __Vtemp_3[41U]);
        __Vfunc_uvm_vector_to_string__47__value[42U] 
            = (__Vfunc_uvm_vector_to_string__47__value[42U] 
               & __Vtemp_3[42U]);
        __Vfunc_uvm_vector_to_string__47__value[43U] 
            = (__Vfunc_uvm_vector_to_string__47__value[43U] 
               & __Vtemp_3[43U]);
        __Vfunc_uvm_vector_to_string__47__value[44U] 
            = (__Vfunc_uvm_vector_to_string__47__value[44U] 
               & __Vtemp_3[44U]);
        __Vfunc_uvm_vector_to_string__47__value[45U] 
            = (__Vfunc_uvm_vector_to_string__47__value[45U] 
               & __Vtemp_3[45U]);
        __Vfunc_uvm_vector_to_string__47__value[46U] 
            = (__Vfunc_uvm_vector_to_string__47__value[46U] 
               & __Vtemp_3[46U]);
        __Vfunc_uvm_vector_to_string__47__value[47U] 
            = (__Vfunc_uvm_vector_to_string__47__value[47U] 
               & __Vtemp_3[47U]);
        __Vfunc_uvm_vector_to_string__47__value[48U] 
            = (__Vfunc_uvm_vector_to_string__47__value[48U] 
               & __Vtemp_3[48U]);
        __Vfunc_uvm_vector_to_string__47__value[49U] 
            = (__Vfunc_uvm_vector_to_string__47__value[49U] 
               & __Vtemp_3[49U]);
        __Vfunc_uvm_vector_to_string__47__value[50U] 
            = (__Vfunc_uvm_vector_to_string__47__value[50U] 
               & __Vtemp_3[50U]);
        __Vfunc_uvm_vector_to_string__47__value[51U] 
            = (__Vfunc_uvm_vector_to_string__47__value[51U] 
               & __Vtemp_3[51U]);
        __Vfunc_uvm_vector_to_string__47__value[52U] 
            = (__Vfunc_uvm_vector_to_string__47__value[52U] 
               & __Vtemp_3[52U]);
        __Vfunc_uvm_vector_to_string__47__value[53U] 
            = (__Vfunc_uvm_vector_to_string__47__value[53U] 
               & __Vtemp_3[53U]);
        __Vfunc_uvm_vector_to_string__47__value[54U] 
            = (__Vfunc_uvm_vector_to_string__47__value[54U] 
               & __Vtemp_3[54U]);
        __Vfunc_uvm_vector_to_string__47__value[55U] 
            = (__Vfunc_uvm_vector_to_string__47__value[55U] 
               & __Vtemp_3[55U]);
        __Vfunc_uvm_vector_to_string__47__value[56U] 
            = (__Vfunc_uvm_vector_to_string__47__value[56U] 
               & __Vtemp_3[56U]);
        __Vfunc_uvm_vector_to_string__47__value[57U] 
            = (__Vfunc_uvm_vector_to_string__47__value[57U] 
               & __Vtemp_3[57U]);
        __Vfunc_uvm_vector_to_string__47__value[58U] 
            = (__Vfunc_uvm_vector_to_string__47__value[58U] 
               & __Vtemp_3[58U]);
        __Vfunc_uvm_vector_to_string__47__value[59U] 
            = (__Vfunc_uvm_vector_to_string__47__value[59U] 
               & __Vtemp_3[59U]);
        __Vfunc_uvm_vector_to_string__47__value[60U] 
            = (__Vfunc_uvm_vector_to_string__47__value[60U] 
               & __Vtemp_3[60U]);
        __Vfunc_uvm_vector_to_string__47__value[61U] 
            = (__Vfunc_uvm_vector_to_string__47__value[61U] 
               & __Vtemp_3[61U]);
        __Vfunc_uvm_vector_to_string__47__value[62U] 
            = (__Vfunc_uvm_vector_to_string__47__value[62U] 
               & __Vtemp_3[62U]);
        __Vfunc_uvm_vector_to_string__47__value[63U] 
            = (__Vfunc_uvm_vector_to_string__47__value[63U] 
               & __Vtemp_3[63U]);
        __Vfunc_uvm_vector_to_string__47__value[64U] 
            = (__Vfunc_uvm_vector_to_string__47__value[64U] 
               & __Vtemp_3[64U]);
        __Vfunc_uvm_vector_to_string__47__value[65U] 
            = (__Vfunc_uvm_vector_to_string__47__value[65U] 
               & __Vtemp_3[65U]);
        __Vfunc_uvm_vector_to_string__47__value[66U] 
            = (__Vfunc_uvm_vector_to_string__47__value[66U] 
               & __Vtemp_3[66U]);
        __Vfunc_uvm_vector_to_string__47__value[67U] 
            = (__Vfunc_uvm_vector_to_string__47__value[67U] 
               & __Vtemp_3[67U]);
        __Vfunc_uvm_vector_to_string__47__value[68U] 
            = (__Vfunc_uvm_vector_to_string__47__value[68U] 
               & __Vtemp_3[68U]);
        __Vfunc_uvm_vector_to_string__47__value[69U] 
            = (__Vfunc_uvm_vector_to_string__47__value[69U] 
               & __Vtemp_3[69U]);
        __Vfunc_uvm_vector_to_string__47__value[70U] 
            = (__Vfunc_uvm_vector_to_string__47__value[70U] 
               & __Vtemp_3[70U]);
        __Vfunc_uvm_vector_to_string__47__value[71U] 
            = (__Vfunc_uvm_vector_to_string__47__value[71U] 
               & __Vtemp_3[71U]);
        __Vfunc_uvm_vector_to_string__47__value[72U] 
            = (__Vfunc_uvm_vector_to_string__47__value[72U] 
               & __Vtemp_3[72U]);
        __Vfunc_uvm_vector_to_string__47__value[73U] 
            = (__Vfunc_uvm_vector_to_string__47__value[73U] 
               & __Vtemp_3[73U]);
        __Vfunc_uvm_vector_to_string__47__value[74U] 
            = (__Vfunc_uvm_vector_to_string__47__value[74U] 
               & __Vtemp_3[74U]);
        __Vfunc_uvm_vector_to_string__47__value[75U] 
            = (__Vfunc_uvm_vector_to_string__47__value[75U] 
               & __Vtemp_3[75U]);
        __Vfunc_uvm_vector_to_string__47__value[76U] 
            = (__Vfunc_uvm_vector_to_string__47__value[76U] 
               & __Vtemp_3[76U]);
        __Vfunc_uvm_vector_to_string__47__value[77U] 
            = (__Vfunc_uvm_vector_to_string__47__value[77U] 
               & __Vtemp_3[77U]);
        __Vfunc_uvm_vector_to_string__47__value[78U] 
            = (__Vfunc_uvm_vector_to_string__47__value[78U] 
               & __Vtemp_3[78U]);
        __Vfunc_uvm_vector_to_string__47__value[79U] 
            = (__Vfunc_uvm_vector_to_string__47__value[79U] 
               & __Vtemp_3[79U]);
        __Vfunc_uvm_vector_to_string__47__value[80U] 
            = (__Vfunc_uvm_vector_to_string__47__value[80U] 
               & __Vtemp_3[80U]);
        __Vfunc_uvm_vector_to_string__47__value[81U] 
            = (__Vfunc_uvm_vector_to_string__47__value[81U] 
               & __Vtemp_3[81U]);
        __Vfunc_uvm_vector_to_string__47__value[82U] 
            = (__Vfunc_uvm_vector_to_string__47__value[82U] 
               & __Vtemp_3[82U]);
        __Vfunc_uvm_vector_to_string__47__value[83U] 
            = (__Vfunc_uvm_vector_to_string__47__value[83U] 
               & __Vtemp_3[83U]);
        __Vfunc_uvm_vector_to_string__47__value[84U] 
            = (__Vfunc_uvm_vector_to_string__47__value[84U] 
               & __Vtemp_3[84U]);
        __Vfunc_uvm_vector_to_string__47__value[85U] 
            = (__Vfunc_uvm_vector_to_string__47__value[85U] 
               & __Vtemp_3[85U]);
        __Vfunc_uvm_vector_to_string__47__value[86U] 
            = (__Vfunc_uvm_vector_to_string__47__value[86U] 
               & __Vtemp_3[86U]);
        __Vfunc_uvm_vector_to_string__47__value[87U] 
            = (__Vfunc_uvm_vector_to_string__47__value[87U] 
               & __Vtemp_3[87U]);
        __Vfunc_uvm_vector_to_string__47__value[88U] 
            = (__Vfunc_uvm_vector_to_string__47__value[88U] 
               & __Vtemp_3[88U]);
        __Vfunc_uvm_vector_to_string__47__value[89U] 
            = (__Vfunc_uvm_vector_to_string__47__value[89U] 
               & __Vtemp_3[89U]);
        __Vfunc_uvm_vector_to_string__47__value[90U] 
            = (__Vfunc_uvm_vector_to_string__47__value[90U] 
               & __Vtemp_3[90U]);
        __Vfunc_uvm_vector_to_string__47__value[91U] 
            = (__Vfunc_uvm_vector_to_string__47__value[91U] 
               & __Vtemp_3[91U]);
        __Vfunc_uvm_vector_to_string__47__value[92U] 
            = (__Vfunc_uvm_vector_to_string__47__value[92U] 
               & __Vtemp_3[92U]);
        __Vfunc_uvm_vector_to_string__47__value[93U] 
            = (__Vfunc_uvm_vector_to_string__47__value[93U] 
               & __Vtemp_3[93U]);
        __Vfunc_uvm_vector_to_string__47__value[94U] 
            = (__Vfunc_uvm_vector_to_string__47__value[94U] 
               & __Vtemp_3[94U]);
        __Vfunc_uvm_vector_to_string__47__value[95U] 
            = (__Vfunc_uvm_vector_to_string__47__value[95U] 
               & __Vtemp_3[95U]);
        __Vfunc_uvm_vector_to_string__47__value[96U] 
            = (__Vfunc_uvm_vector_to_string__47__value[96U] 
               & __Vtemp_3[96U]);
        __Vfunc_uvm_vector_to_string__47__value[97U] 
            = (__Vfunc_uvm_vector_to_string__47__value[97U] 
               & __Vtemp_3[97U]);
        __Vfunc_uvm_vector_to_string__47__value[98U] 
            = (__Vfunc_uvm_vector_to_string__47__value[98U] 
               & __Vtemp_3[98U]);
        __Vfunc_uvm_vector_to_string__47__value[99U] 
            = (__Vfunc_uvm_vector_to_string__47__value[99U] 
               & __Vtemp_3[99U]);
        __Vfunc_uvm_vector_to_string__47__value[100U] 
            = (__Vfunc_uvm_vector_to_string__47__value[100U] 
               & __Vtemp_3[100U]);
        __Vfunc_uvm_vector_to_string__47__value[101U] 
            = (__Vfunc_uvm_vector_to_string__47__value[101U] 
               & __Vtemp_3[101U]);
        __Vfunc_uvm_vector_to_string__47__value[102U] 
            = (__Vfunc_uvm_vector_to_string__47__value[102U] 
               & __Vtemp_3[102U]);
        __Vfunc_uvm_vector_to_string__47__value[103U] 
            = (__Vfunc_uvm_vector_to_string__47__value[103U] 
               & __Vtemp_3[103U]);
        __Vfunc_uvm_vector_to_string__47__value[104U] 
            = (__Vfunc_uvm_vector_to_string__47__value[104U] 
               & __Vtemp_3[104U]);
        __Vfunc_uvm_vector_to_string__47__value[105U] 
            = (__Vfunc_uvm_vector_to_string__47__value[105U] 
               & __Vtemp_3[105U]);
        __Vfunc_uvm_vector_to_string__47__value[106U] 
            = (__Vfunc_uvm_vector_to_string__47__value[106U] 
               & __Vtemp_3[106U]);
        __Vfunc_uvm_vector_to_string__47__value[107U] 
            = (__Vfunc_uvm_vector_to_string__47__value[107U] 
               & __Vtemp_3[107U]);
        __Vfunc_uvm_vector_to_string__47__value[108U] 
            = (__Vfunc_uvm_vector_to_string__47__value[108U] 
               & __Vtemp_3[108U]);
        __Vfunc_uvm_vector_to_string__47__value[109U] 
            = (__Vfunc_uvm_vector_to_string__47__value[109U] 
               & __Vtemp_3[109U]);
        __Vfunc_uvm_vector_to_string__47__value[110U] 
            = (__Vfunc_uvm_vector_to_string__47__value[110U] 
               & __Vtemp_3[110U]);
        __Vfunc_uvm_vector_to_string__47__value[111U] 
            = (__Vfunc_uvm_vector_to_string__47__value[111U] 
               & __Vtemp_3[111U]);
        __Vfunc_uvm_vector_to_string__47__value[112U] 
            = (__Vfunc_uvm_vector_to_string__47__value[112U] 
               & __Vtemp_3[112U]);
        __Vfunc_uvm_vector_to_string__47__value[113U] 
            = (__Vfunc_uvm_vector_to_string__47__value[113U] 
               & __Vtemp_3[113U]);
        __Vfunc_uvm_vector_to_string__47__value[114U] 
            = (__Vfunc_uvm_vector_to_string__47__value[114U] 
               & __Vtemp_3[114U]);
        __Vfunc_uvm_vector_to_string__47__value[115U] 
            = (__Vfunc_uvm_vector_to_string__47__value[115U] 
               & __Vtemp_3[115U]);
        __Vfunc_uvm_vector_to_string__47__value[116U] 
            = (__Vfunc_uvm_vector_to_string__47__value[116U] 
               & __Vtemp_3[116U]);
        __Vfunc_uvm_vector_to_string__47__value[117U] 
            = (__Vfunc_uvm_vector_to_string__47__value[117U] 
               & __Vtemp_3[117U]);
        __Vfunc_uvm_vector_to_string__47__value[118U] 
            = (__Vfunc_uvm_vector_to_string__47__value[118U] 
               & __Vtemp_3[118U]);
        __Vfunc_uvm_vector_to_string__47__value[119U] 
            = (__Vfunc_uvm_vector_to_string__47__value[119U] 
               & __Vtemp_3[119U]);
        __Vfunc_uvm_vector_to_string__47__value[120U] 
            = (__Vfunc_uvm_vector_to_string__47__value[120U] 
               & __Vtemp_3[120U]);
        __Vfunc_uvm_vector_to_string__47__value[121U] 
            = (__Vfunc_uvm_vector_to_string__47__value[121U] 
               & __Vtemp_3[121U]);
        __Vfunc_uvm_vector_to_string__47__value[122U] 
            = (__Vfunc_uvm_vector_to_string__47__value[122U] 
               & __Vtemp_3[122U]);
        __Vfunc_uvm_vector_to_string__47__value[123U] 
            = (__Vfunc_uvm_vector_to_string__47__value[123U] 
               & __Vtemp_3[123U]);
        __Vfunc_uvm_vector_to_string__47__value[124U] 
            = (__Vfunc_uvm_vector_to_string__47__value[124U] 
               & __Vtemp_3[124U]);
        __Vfunc_uvm_vector_to_string__47__value[125U] 
            = (__Vfunc_uvm_vector_to_string__47__value[125U] 
               & __Vtemp_3[125U]);
        __Vfunc_uvm_vector_to_string__47__value[126U] 
            = (__Vfunc_uvm_vector_to_string__47__value[126U] 
               & __Vtemp_3[126U]);
        __Vfunc_uvm_vector_to_string__47__value[127U] 
            = (__Vfunc_uvm_vector_to_string__47__value[127U] 
               & __Vtemp_3[127U]);
        if ((0x01000000U == __Vfunc_uvm_vector_to_string__47__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0b",2, 'S',&(this->__Vfunc_uvm_vector_to_string__47__radix_str)
                          , '~',4096,__Vfunc_uvm_vector_to_string__47__value.data());
        } else if ((0x06000000U == __Vfunc_uvm_vector_to_string__47__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0o",2, 'S',&(this->__Vfunc_uvm_vector_to_string__47__radix_str)
                          , '~',4096,__Vfunc_uvm_vector_to_string__47__value.data());
        } else if ((0x03000000U == __Vfunc_uvm_vector_to_string__47__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_vector_to_string__47__radix_str)
                          , '~',4096,__Vfunc_uvm_vector_to_string__47__value.data());
        } else if ((0x08000000U == __Vfunc_uvm_vector_to_string__47__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0s",2, 'S',&(this->__Vfunc_uvm_vector_to_string__47__radix_str)
                          , '~',4096,__Vfunc_uvm_vector_to_string__47__value.data());
        } else if ((0x09000000U == __Vfunc_uvm_vector_to_string__47__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0t",3, 'T',-9
                          , 'S',&(this->__Vfunc_uvm_vector_to_string__47__radix_str)
                          , '~',4096,__Vfunc_uvm_vector_to_string__47__value.data());
        } else if ((0x02000000U == __Vfunc_uvm_vector_to_string__47__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_vector_to_string__47__radix_str)
                          , '~',4096,__Vfunc_uvm_vector_to_string__47__value.data());
        } else {
            VL_SFORMAT_NX(val_str,"%0s%0x",2, 'S',&(this->__Vfunc_uvm_vector_to_string__47__radix_str)
                          , '~',4096,__Vfunc_uvm_vector_to_string__47__value.data());
        }
        __Vlabel0: ;
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 856)->__VnoInFunc_depth(vlSymsp, __VlefCall_1__depth);
    row_info.__PVT__level = __VlefCall_1__depth;
    this->__VnoInFunc_adjust_name(vlSymsp, name, (IData)(scope_separator), __VlefCall_2__adjust_name);
    row_info.__PVT__name = __VlefCall_2__adjust_name;
    row_info.__PVT__type_name = type_name;
    row_info.__PVT__size = sz_str;
    row_info.__PVT__val = val_str;
    this->__PVT__m_rows.push_back(row_info);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    // Body
    __Vtemp_1[0U] = (IData)(value);
    __Vtemp_1[1U] = (IData)((value >> 0x00000020U));
    __Vilp1 = 2U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_1[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    this->__VnoInFunc_print_int(vlSymsp, name, __Vtemp_1, 0x00000040U, 0x09000000U, (IData)(scope_separator), ""s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string\n"); );
    // Body
    std::string __VlefCall_2__adjust_name;
    std::string __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__depth;
    Vcsi2_tb_top_uvm_printer_row_info__struct__0 row_info;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if ((""s != name)) {
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 887)->__VnoInFunc_set_arg(vlSymsp, name);
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 889)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    row_info.__PVT__level = __VlefCall_0__depth;
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 890)->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
    this->__VnoInFunc_adjust_name(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_1__get), (IData)(scope_separator), __VlefCall_2__adjust_name);
    row_info.__PVT__name = __VlefCall_2__adjust_name;
    row_info.__PVT__type_name = "string"s;
    row_info.__PVT__size = VL_SFORMATF_N_NX("%0d",1
                                            , '~',32,
                                            VL_LEN_IN(value)) ;
    row_info.__PVT__val = ((""s == value) ? "\"\""s
                            : value);
    this->__PVT__m_rows.push_back(row_info);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, double value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_real\n"); );
    // Body
    std::string __VlefCall_2__adjust_name;
    std::string __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__depth;
    Vcsi2_tb_top_uvm_printer_row_info__struct__0 row_info;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if (((""s != name) & ("..."s != name))) {
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 910)->__VnoInFunc_set_arg(vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 911)->__VnoInFunc_get(vlSymsp, name);
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 914)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    row_info.__PVT__level = __VlefCall_0__depth;
    VL_NULL_CHECK(this->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 915)->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
    this->__VnoInFunc_adjust_name(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_1__get), (IData)(scope_separator), __VlefCall_2__adjust_name);
    row_info.__PVT__name = __VlefCall_2__adjust_name;
    row_info.__PVT__type_name = "real"s;
    row_info.__PVT__size = "64"s;
    row_info.__PVT__val = VL_SFORMATF_N_NX("%f",1, 'D',value) ;
    this->__PVT__m_rows.push_back(row_info);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_index_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string name, std::string &index_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_index_string\n"); );
    // Body
    VL_SFORMAT_NX(index_string__Vfuncrtn,"%0d",1, '~',32,index);
    index_string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(name, "["s), index_string__Vfuncrtn), "]"s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_array_stack.atDefault() = 0;
    __PVT__m_rows.atDefault().__PVT__level = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::~\n"); );
}
