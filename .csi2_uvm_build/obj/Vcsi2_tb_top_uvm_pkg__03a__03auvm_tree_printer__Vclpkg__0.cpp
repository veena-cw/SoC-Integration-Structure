// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer::new\n"); );
    // Body
    this->__PVT__newline = "\n"s;
    /*super.new*/;
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1069)->__PVT__size = 0U;
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1070)->__PVT__type_name = 0U;
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1071)->__PVT__header = 0U;
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1072)->__PVT__footer = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk43__DOT__i;
    unnamedblk43__DOT__i = 0;
    IData/*31:0*/ unnamedblk43__DOT__i__Vloopsize;
    unnamedblk43__DOT__i__Vloopsize = 0;
    Vcsi2_tb_top_uvm_printer_row_info__struct__0 unnamedblk43__DOT__unnamedblk44__DOT__row;
    std::string unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__indent_str;
    IData/*31:0*/ unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__end_level;
    std::string unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__indent_str;
    IData/*31:0*/ unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__unnamedblk48__DOT__l;
    emit__Vfuncrtn = ""s;
    std::string s;
    std::string space;
    std::string user_format;
    std::string linefeed;
    s = VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1081)
        ->__PVT__prefix;
    space = "                                                                                                   "s;
    user_format = ""s;
    linefeed = (((""s == this->__PVT__newline) | (" "s 
                                                  == this->__PVT__newline))
                 ? this->__PVT__newline : VL_CONCATN_NNN(this->__PVT__newline, VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1085)
                                                         ->__PVT__prefix));
    if (VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1088)
        ->__PVT__header) {
        this->__VnoInFunc_format_header(vlSymsp, user_format);
        if ((""s != user_format)) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), linefeed);
        }
    }
    unnamedblk43__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk43__DOT__i, Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size())) {
        unnamedblk43__DOT__i__Vloopsize = Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size();
        {
            unnamedblk43__DOT__unnamedblk44__DOT__row 
                = Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.at(unnamedblk43__DOT__i);
            this->__VnoInFunc_format_row(vlSymsp, unnamedblk43__DOT__unnamedblk44__DOT__row, user_format);
            if ((""s == user_format)) {
                unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__indent_str = ""s;
                unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__indent_str 
                    = VL_SUBSTR_N(space,1U,VL_MULS_III(32, unnamedblk43__DOT__unnamedblk44__DOT__row
                                                       .__PVT__level, VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1099)
                                                       ->__PVT__indent));
                if (VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1102)
                    ->__PVT__identifier) {
                    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__indent_str), unnamedblk43__DOT__unnamedblk44__DOT__row
                                       .__PVT__name);
                    if (((""s != unnamedblk43__DOT__unnamedblk44__DOT__row
                          .__PVT__name) & ("..."s != unnamedblk43__DOT__unnamedblk44__DOT__row
                                           .__PVT__name))) {
                        s = VL_CONCATN_NNN(s, ": "s);
                    }
                }
                if ((0x40U == VL_GETC_N(unnamedblk43__DOT__unnamedblk44__DOT__row
                                        .__PVT__val,0U))) {
                    s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(s, "("s), unnamedblk43__DOT__unnamedblk44__DOT__row
                                                                     .__PVT__type_name), unnamedblk43__DOT__unnamedblk44__DOT__row
                                                      .__PVT__val), ") "s);
                } else if ((VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1112)
                            ->__PVT__type_name && (
                                                   ((""s 
                                                     != unnamedblk43__DOT__unnamedblk44__DOT__row
                                                     .__PVT__type_name) 
                                                    | ("-"s 
                                                       != unnamedblk43__DOT__unnamedblk44__DOT__row
                                                       .__PVT__type_name)) 
                                                   | ("..."s 
                                                      != unnamedblk43__DOT__unnamedblk44__DOT__row
                                                      .__PVT__type_name)))) {
                    s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(s, "("s), unnamedblk43__DOT__unnamedblk44__DOT__row
                                                      .__PVT__type_name), ") "s);
                }
                if (VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1119)
                    ->__PVT__size) {
                    if (((""s != unnamedblk43__DOT__unnamedblk44__DOT__row
                          .__PVT__size) | ("-"s != unnamedblk43__DOT__unnamedblk44__DOT__row
                                           .__PVT__size))) {
                        s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(s, "("s), unnamedblk43__DOT__unnamedblk44__DOT__row
                                                          .__PVT__size), ") "s);
                    }
                }
                if (VL_LTS_III(32, unnamedblk43__DOT__i, 
                               (Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size() 
                                - (IData)(1U)))) {
                    if (VL_GTS_III(32, Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.at(
                                                                                ((IData)(1U) 
                                                                                + unnamedblk43__DOT__i))
                                   .__PVT__level, unnamedblk43__DOT__unnamedblk44__DOT__row
                                   .__PVT__level)) {
                        s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, 
                                                          VL_CVT_PACK_STR_NI(
                                                                             VL_GETC_N(VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1126)
                                                                                ->__PVT__separator,0U))), linefeed);
                        goto __Vlabel0;
                    }
                }
                s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(s, unnamedblk43__DOT__unnamedblk44__DOT__row
                                                                 .__PVT__val), " "s), linefeed);
                if (VL_LTES_III(32, unnamedblk43__DOT__i, 
                                (Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size() 
                                 - (IData)(1U)))) {
                    unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__end_level = 0U;
                    unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__end_level 
                        = ((unnamedblk43__DOT__i == 
                            (Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size() 
                             - (IData)(1U))) ? 0U : Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.at(
                                                                                ((IData)(1U) 
                                                                                + unnamedblk43__DOT__i))
                           .__PVT__level);
                    if (VL_LTS_III(32, unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__end_level, unnamedblk43__DOT__unnamedblk44__DOT__row
                                   .__PVT__level)) {
                        unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__indent_str = ""s;
                        unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__unnamedblk48__DOT__l = 0U;
                        unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__unnamedblk48__DOT__l 
                            = (unnamedblk43__DOT__unnamedblk44__DOT__row
                               .__PVT__level - (IData)(1U));
                        while (VL_GTES_III(32, unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__unnamedblk48__DOT__l, unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__end_level)) {
                            unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__indent_str 
                                = VL_SUBSTR_N(space,1U,
                                              VL_MULS_III(32, unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__unnamedblk48__DOT__l, VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1144)
                                                          ->__PVT__indent));
                            s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(s, unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__indent_str), 
                                                              VL_CVT_PACK_STR_NI(
                                                                                VL_GETC_N(VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1145)
                                                                                ->__PVT__separator,1U))), linefeed);
                            unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__unnamedblk48__DOT__l 
                                = (unnamedblk43__DOT__unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__unnamedblk47__DOT__unnamedblk48__DOT__l 
                                   - (IData)(1U));
                        }
                    }
                }
            } else {
                s = VL_CONCATN_NNN(s, user_format);
            }
            __Vlabel0: ;
        }
        if ((unnamedblk43__DOT__i__Vloopsize <= Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size())) {
            unnamedblk43__DOT__i = ((IData)(1U) + unnamedblk43__DOT__i);
        }
    }
    if (VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_printer.svh", 1156)
        ->__PVT__footer) {
        this->__VnoInFunc_format_footer(vlSymsp, user_format);
        if ((""s != user_format)) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), linefeed);
        }
    }
    if (((""s == this->__PVT__newline) | (" "s == this->__PVT__newline))) {
        s = VL_CONCATN_NNN(s, "\n"s);
    }
    emit__Vfuncrtn = s;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.clear();
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer::~\n"); );
}
