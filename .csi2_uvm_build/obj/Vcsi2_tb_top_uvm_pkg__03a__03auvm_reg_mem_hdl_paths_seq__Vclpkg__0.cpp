// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi74> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi74__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi74> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi74__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq, vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 55)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_hdl_paths_seq"s;
}

extern const VlWide<128>/*4095:0*/ Vcsi2_tb_top__ConstPool__CONST_h6e0f3f36_0;
void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(const std::string &glob, std::string &uvm_glob_to_re__Vfuncrtn);
void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(const std::string &re, const std::string &str, IData/*31:0*/ &uvm_re_match__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Locals
    CData/*0:0*/ __Vtask_compare_field__8__Vfuncout;
    __Vtask_compare_field__8__Vfuncout = 0;
    CData/*0:0*/ __Vtask_compare_string__10__Vfuncout;
    __Vtask_compare_string__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__36____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__36____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__38__Vfuncout;
    __Vfunc_uvm_re_match__38__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_uvm_get_array_index_int__42__is_wildcard;
    __Vfunc_uvm_get_array_index_int__42__is_wildcard = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__45____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__45____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__47__Vfuncout;
    __Vfunc_uvm_re_match__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__51____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__51____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__53__Vfuncout;
    __Vfunc_uvm_re_match__53__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_20__get_full_scope_arg;
    CData/*0:0*/ __VlefCall_19__uvm_is_match;
    std::string __VlefCall_18__get_arg;
    std::string __VlefCall_17__get_full_scope_arg;
    CData/*0:0*/ __VlefCall_16__uvm_is_match;
    std::string __VlefCall_15__get_arg;
    CData/*0:0*/ __VlefCall_14__uvm_is_array;
    std::string __VlefCall_13__get_full_scope_arg;
    CData/*0:0*/ __VlefCall_12__uvm_is_match;
    std::string __VlefCall_11__get;
    std::string __VlefCall_10__index_string;
    std::string __VlefCall_9__index_string;
    CData/*0:0*/ __VlefLogOr_8;
    IData/*31:0*/ __VlefCall_7__depth;
    std::string __VlefCall_6__get;
    std::string __VlefCall_5__get;
    std::string __VlefCall_4__get;
    std::string __VlefCall_3__unpack_string;
    QData/*63:0*/ __VlefCall_2__unpack_field_int;
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> unnamedblk1__DOT__local_data___05F;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize;
    unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk3__DOT__i;
    unnamedblk1__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk3__DOT__i__Vloopsize;
    unnamedblk1__DOT__unnamedblk3__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk4__DOT__sz;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i;
    unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize;
    unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk6__DOT__sz___05F;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i;
    unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i__Vloopsize;
    unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk10__DOT__curr;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk10__DOT__max___05F;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> unnamedblk1__DOT__unnamedblk10__DOT__p___05F;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i;
    unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk12__DOT__sz;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk13__DOT__wildcard_index___05F;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk13__DOT__index___05F;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__sz;
    std::string unnamedblk1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__tmp___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 55)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
            if ((! __VlefExpr_1)) {
                goto __Vlabel0;
            }
        }
        if (((((((((0x00020003U == what___05F) | (1U 
                                                  == what___05F)) 
                  | (4U == what___05F)) | (0x00000100U 
                                           == what___05F)) 
                | (0x00020002U == what___05F)) | (0x00000040U 
                                                  == what___05F)) 
              | (0x00000010U == what___05F)) | (0x00020006U 
                                                == what___05F))) {
            if ((0x00020003U == what___05F)) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_do_field_check(vlSymsp, "abstractions"s, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this});
            } else if ((1U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                this->__PVT__abstractions = VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                    ->__PVT__abstractions;
            } else if ((4U == what___05F)) {
                if ((VlNull{} == unnamedblk1__DOT__local_data___05F)) {
                    goto __Vlabel0;
                }
                if ((this->__PVT__abstractions != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                     ->__PVT__abstractions)) {
                    if ((1U == VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                             ->__PVT__comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                         ->__PVT__show_max)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_set_arg(vlSymsp, "abstractions"s);
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_print_msg(vlProcess, vlSymsp, ""s);
                    } else if ((0U != VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                    ->__PVT__comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                ->__PVT__show_max)) {
                        if ((this->__PVT__abstractions.size() 
                             != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                             ->__PVT__abstractions.size())) {
                            VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__abstractions.size());
                            VL_EXTENDS_WI(4096,32, __Vtemp_2, VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                          ->__PVT__abstractions.size());
                            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                          ->__PVT__comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_compare_field(vlProcess, vlSymsp, "abstractions.size"s, __Vtemp_1, __Vtemp_2, 0x00000020U, 0U, __Vtask_compare_field__8__Vfuncout);
                        } else {
                            unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
                            while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, this->__PVT__abstractions.size())) {
                                unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize 
                                    = this->__PVT__abstractions.size();
                                if ((this->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk2__DOT__i) 
                                     != VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                     ->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk2__DOT__i))) {
                                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_set_arg_element(vlSymsp, "abstractions"s, unnamedblk1__DOT__unnamedblk2__DOT__i);
                                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                  ->__PVT__comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_compare_string(vlProcess, vlSymsp, ""s, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk2__DOT__i)), 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk1__DOT__local_data___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                                                ->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk2__DOT__i)), __Vtask_compare_string__10__Vfuncout);
                                }
                                if ((unnamedblk1__DOT__unnamedblk2__DOT__i__Vloopsize 
                                     <= this->__PVT__abstractions.size())) {
                                    unnamedblk1__DOT__unnamedblk2__DOT__i 
                                        = ((IData)(1U) 
                                           + unnamedblk1__DOT__unnamedblk2__DOT__i);
                                }
                            }
                        }
                    } else {
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__PVT__result 
                            = ((IData)(1U) + VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                           ->__PVT__comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                               ->__PVT__result);
                    }
                }
            } else if ((0x00000100U == what___05F)) {
                if (VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                  ->__PVT__packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                    ->__PVT__use_metadata) {
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                  ->__PVT__packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_pack_field_int(vlSymsp, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__abstractions.size()), 0x00000020U);
                }
                unnamedblk1__DOT__unnamedblk3__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk3__DOT__i, this->__PVT__abstractions.size())) {
                    unnamedblk1__DOT__unnamedblk3__DOT__i__Vloopsize 
                        = this->__PVT__abstractions.size();
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                  ->__PVT__packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_pack_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk3__DOT__i)));
                    if ((unnamedblk1__DOT__unnamedblk3__DOT__i__Vloopsize 
                         <= this->__PVT__abstractions.size())) {
                        unnamedblk1__DOT__unnamedblk3__DOT__i 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk3__DOT__i);
                    }
                }
            } else if ((0x00020002U == what___05F)) {
                unnamedblk1__DOT__unnamedblk4__DOT__sz 
                    = this->__PVT__abstractions.size();
                if (VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                  ->__PVT__packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                    ->__PVT__use_metadata) {
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                  ->__PVT__packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000020U, __VlefCall_2__unpack_field_int);
                    unnamedblk1__DOT__unnamedblk4__DOT__sz 
                        = (IData)(__VlefCall_2__unpack_field_int);
                }
                if ((unnamedblk1__DOT__unnamedblk4__DOT__sz 
                     != this->__PVT__abstractions.size())) {
                    while (VL_LTS_III(32, this->__PVT__abstractions.size(), unnamedblk1__DOT__unnamedblk4__DOT__sz)) {
                        this->__PVT__abstractions.push_back(""s);
                    }
                    while (VL_GTS_III(32, this->__PVT__abstractions.size(), unnamedblk1__DOT__unnamedblk4__DOT__sz)) {
                        std::ignore = this->__PVT__abstractions.pop_front();
                    }
                }
                unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i, this->__PVT__abstractions.size())) {
                    unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize 
                        = this->__PVT__abstractions.size();
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                  ->__PVT__packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_unpack_string(vlProcess, vlSymsp, 0xffffffffU, __VlefCall_3__unpack_string);
                    this->__PVT__abstractions.atWriteAppend(unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i) 
                        = __VlefCall_3__unpack_string;
                    if ((unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize 
                         <= this->__PVT__abstractions.size())) {
                        unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i);
                    }
                }
            } else if ((0x00000040U == what___05F)) {
                unnamedblk1__DOT__unnamedblk6__DOT__sz___05F 
                    = this->__PVT__abstractions.size();
                if ((0U == unnamedblk1__DOT__unnamedblk6__DOT__sz___05F)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                  ->__PVT__recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_record_field(vlSymsp, "abstractions.size"s, Vcsi2_tb_top__ConstPool__CONST_h6e0f3f36_0, 0x00000020U, 0x02000000U);
                } else if (VL_GTS_III(32, 0x0000000aU, unnamedblk1__DOT__unnamedblk6__DOT__sz___05F)) {
                    unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i, this->__PVT__abstractions.size())) {
                        unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i__Vloopsize 
                            = this->__PVT__abstractions.size();
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_set_arg_element(vlSymsp, "abstractions"s, unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i);
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_get(vlSymsp, __VlefCall_4__get);
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_record_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get), 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i)));
                        if ((unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i__Vloopsize 
                             <= this->__PVT__abstractions.size())) {
                            unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i 
                                = ((IData)(1U) + unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i);
                        }
                    }
                } else {
                    unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i = 0U;
                    unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i = 0U;
                    while (VL_GTS_III(32, 5U, unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_set_arg_element(vlSymsp, "abstractions"s, unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i);
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_get(vlSymsp, __VlefCall_5__get);
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_record_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_5__get), 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i)));
                        unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk8__DOT__i);
                    }
                    unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i = 0U;
                    unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i 
                        = (unnamedblk1__DOT__unnamedblk6__DOT__sz___05F 
                           - (IData)(5U));
                    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i, unnamedblk1__DOT__unnamedblk6__DOT__sz___05F)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_set_arg_element(vlSymsp, "abstractions"s, unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i);
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_get(vlSymsp, __VlefCall_6__get);
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_record_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_6__get), 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i)));
                        unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk9__DOT__i);
                    }
                }
            } else if ((0x00000010U == what___05F)) {
                unnamedblk1__DOT__unnamedblk10__DOT__curr = 0U;
                unnamedblk1__DOT__unnamedblk10__DOT__max___05F = 0U;
                unnamedblk1__DOT__unnamedblk10__DOT__max___05F = 0U;
                unnamedblk1__DOT__unnamedblk10__DOT__curr = 0U;
                unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i, this->__PVT__abstractions.size())) {
                    unnamedblk1__DOT__unnamedblk10__DOT__max___05F 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i);
                    unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__i);
                }
                unnamedblk1__DOT__unnamedblk10__DOT__p___05F 
                    = ((VlNull{} != VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                        ->__PVT__printer) ? VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                       ->__PVT__printer : vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer);
                VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                              ->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_set_arg(vlSymsp, "abstractions"s);
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_print_array_header(vlSymsp, "abstractions"s, unnamedblk1__DOT__unnamedblk10__DOT__max___05F, "da(string)"s, 0x2eU);
                __VlefLogOr_8 = (0xffffffffU == VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                              ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                 ->__PVT__depth);
                if ((1U & (~ (IData)(__VlefLogOr_8)))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                  ->__PVT__m_scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_depth(vlSymsp, __VlefCall_7__depth);
                    __VlefLogOr_8 = VL_GTS_III(32, 
                                               ((IData)(1U) 
                                                + VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                                ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                ->__PVT__depth), __VlefCall_7__depth);
                }
                if (__VlefLogOr_8) {
                    unnamedblk1__DOT__unnamedblk10__DOT__curr = 0U;
                    while ((VL_LTS_III(32, unnamedblk1__DOT__unnamedblk10__DOT__curr, unnamedblk1__DOT__unnamedblk10__DOT__max___05F) 
                            && VL_LTS_III(32, unnamedblk1__DOT__unnamedblk10__DOT__curr, VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                                                ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                          ->__PVT__begin_elements))) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_index_string(vlSymsp, unnamedblk1__DOT__unnamedblk10__DOT__curr, ""s, __VlefCall_9__index_string);
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_print_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_9__index_string), 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk10__DOT__curr)), 0x5bU);
                        unnamedblk1__DOT__unnamedblk10__DOT__curr 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk10__DOT__curr);
                    }
                    if (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk10__DOT__curr, unnamedblk1__DOT__unnamedblk10__DOT__max___05F)) {
                        unnamedblk1__DOT__unnamedblk10__DOT__curr 
                            = (unnamedblk1__DOT__unnamedblk10__DOT__max___05F 
                               - VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                               ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                               ->__PVT__end_elements);
                        if (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk10__DOT__curr, VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                                                ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                       ->__PVT__begin_elements)) {
                            unnamedblk1__DOT__unnamedblk10__DOT__curr 
                                = VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                ->__PVT__begin_elements;
                        } else {
                            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_print_array_range(vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                                                ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                                                                ->__PVT__begin_elements, 
                                                                                (unnamedblk1__DOT__unnamedblk10__DOT__curr 
                                                                                - (IData)(1U)));
                        }
                        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk10__DOT__curr, unnamedblk1__DOT__unnamedblk10__DOT__max___05F)) {
                            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_index_string(vlSymsp, unnamedblk1__DOT__unnamedblk10__DOT__curr, ""s, __VlefCall_10__index_string);
                            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_print_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_10__index_string), 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__unnamedblk10__DOT__curr)), 0x5bU);
                            unnamedblk1__DOT__unnamedblk10__DOT__curr 
                                = ((IData)(1U) + unnamedblk1__DOT__unnamedblk10__DOT__curr);
                        }
                    }
                }
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk10__DOT__p___05F, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_print_array_footer(vlSymsp, unnamedblk1__DOT__unnamedblk10__DOT__max___05F);
            } else {
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                              ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_set_arg(vlSymsp, "abstractions"s);
                VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                              ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_get(vlSymsp, __VlefCall_11__get);
                this->__Vfunc_uvm_is_match__36__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_11__get);
                this->__Vfunc_uvm_is_match__36__expr 
                    = str___05F;
                Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(this->__Vfunc_uvm_is_match__36__expr, this->__Vfunc_uvm_glob_to_re__37__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__37__Vfuncout;
                Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s, this->__Vfunc_uvm_is_match__36__str, __Vfunc_uvm_re_match__38__Vfuncout);
                __Vfunc_uvm_is_match__36____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__38__Vfuncout;
                __VlefCall_12__uvm_is_match = (0U == __Vfunc_uvm_is_match__36____VlefCall_0__uvm_re_match);
                if (__VlefCall_12__uvm_is_match) {
                    unnamedblk1__DOT__unnamedblk12__DOT__sz 
                        = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                        ->__PVT__bitstream[0U];
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__print_matches) {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_13__get_full_scope_arg);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_13__get_full_scope_arg)), 0x00000064U, ""s, 0U);
                    }
                    if ((this->__PVT__abstractions.size() 
                         != unnamedblk1__DOT__unnamedblk12__DOT__sz)) {
                        while (VL_LTS_III(32, this->__PVT__abstractions.size(), unnamedblk1__DOT__unnamedblk12__DOT__sz)) {
                            this->__PVT__abstractions.push_back(""s);
                        }
                        while (VL_GTS_III(32, this->__PVT__abstractions.size(), unnamedblk1__DOT__unnamedblk12__DOT__sz)) {
                            std::ignore = this->__PVT__abstractions.pop_front();
                        }
                    }
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__PVT__status = 1U;
                }
            }
        } else if ((0x00020008U == what___05F)) {
            unnamedblk1__DOT__unnamedblk13__DOT__wildcard_index___05F = 0U;
            unnamedblk1__DOT__unnamedblk13__DOT__index___05F = 0U;
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                          ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_set_arg(vlSymsp, "abstractions"s);
            this->__Vfunc_uvm_get_array_index_int__42__arg 
                = str___05F;
            {
                __Vfunc_uvm_get_array_index_int__42__is_wildcard = 0U;
                unnamedblk1__DOT__unnamedblk13__DOT__index___05F = 0U;
                __Vfunc_uvm_get_array_index_int__42__is_wildcard = 1U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i 
                    = (VL_LEN_IN(this->__Vfunc_uvm_get_array_index_int__42__arg) 
                       - (IData)(1U));
                if ((0x5dU == VL_GETC_N(this->__Vfunc_uvm_get_array_index_int__42__arg,vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i))) {
                    while ((VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i) 
                            & (0x5bU != VL_GETC_N(this->__Vfunc_uvm_get_array_index_int__42__arg,vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i 
                            = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i 
                               - (IData)(1U));
                        if (((0x2aU == VL_GETC_N(this->__Vfunc_uvm_get_array_index_int__42__arg,vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i)) 
                             | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_get_array_index_int__42__arg,vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i = 0U;
                        } else if (((0x30U > VL_GETC_N(this->__Vfunc_uvm_get_array_index_int__42__arg,vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i)) 
                                    | ((0x39U < VL_GETC_N(this->__Vfunc_uvm_get_array_index_int__42__arg,vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i)) 
                                       & (0x5bU != 
                                          VL_GETC_N(this->__Vfunc_uvm_get_array_index_int__42__arg,vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i))))) {
                            unnamedblk1__DOT__unnamedblk13__DOT__index___05F = 0xffffffffU;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i = 0U;
                        }
                    }
                } else {
                    __Vfunc_uvm_get_array_index_int__42__is_wildcard = 0U;
                    unnamedblk1__DOT__unnamedblk13__DOT__index___05F = 0U;
                    goto __Vlabel1;
                }
                if (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i)) {
                    this->__Vfunc_uvm_get_array_index_int__42__arg 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_get_array_index_int__42__arg,
                                      ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i),
                                      (VL_LEN_IN(this->__Vfunc_uvm_get_array_index_int__42__arg) 
                                       - (IData)(2U)));
                    unnamedblk1__DOT__unnamedblk13__DOT__index___05F 
                        = VL_ATOI_N(this->__Vfunc_uvm_get_array_index_int__42__arg, 10);
                    __Vfunc_uvm_get_array_index_int__42__is_wildcard = 0U;
                }
                __Vlabel1: ;
            }
            unnamedblk1__DOT__unnamedblk13__DOT__wildcard_index___05F 
                = __Vfunc_uvm_get_array_index_int__42__is_wildcard;
            this->__Vfunc_uvm_is_array__43__arg = str___05F;
            __VlefCall_14__uvm_is_array = (0x5dU == 
                                           VL_GETC_N(this->__Vfunc_uvm_is_array__43__arg,
                                                     (VL_LEN_IN(this->__Vfunc_uvm_is_array__43__arg) 
                                                      - (IData)(1U))));
            if (((IData)(__VlefCall_14__uvm_is_array) 
                 & (0xffffffffU != unnamedblk1__DOT__unnamedblk13__DOT__index___05F))) {
                if (unnamedblk1__DOT__unnamedblk13__DOT__wildcard_index___05F) {
                    unnamedblk1__DOT__unnamedblk13__DOT__index___05F = 0U;
                    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk13__DOT__index___05F, this->__PVT__abstractions.size())) {
                        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_get_arg(vlSymsp, __VlefCall_15__get_arg);
                        this->__Vfunc_uvm_is_match__45__str 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__VlefCall_15__get_arg, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk1__DOT__unnamedblk13__DOT__index___05F) ));
                        this->__Vfunc_uvm_is_match__45__expr 
                            = str___05F;
                        Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(this->__Vfunc_uvm_is_match__45__expr, this->__Vfunc_uvm_glob_to_re__46__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                            = this->__Vfunc_uvm_glob_to_re__46__Vfuncout;
                        Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s, this->__Vfunc_uvm_is_match__45__str, __Vfunc_uvm_re_match__47__Vfuncout);
                        __Vfunc_uvm_is_match__45____VlefCall_0__uvm_re_match 
                            = __Vfunc_uvm_re_match__47__Vfuncout;
                        __VlefCall_16__uvm_is_match 
                            = (0U == __Vfunc_uvm_is_match__45____VlefCall_0__uvm_re_match);
                        if (__VlefCall_16__uvm_is_match) {
                            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__print_matches) {
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_17__get_full_scope_arg);
                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                                  VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_17__get_full_scope_arg), VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk1__DOT__unnamedblk13__DOT__index___05F) )), 0x00000064U, ""s, 0U);
                            }
                            this->__PVT__abstractions.atWriteAppend(unnamedblk1__DOT__unnamedblk13__DOT__index___05F) 
                                = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                ->__PVT__stringv;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__PVT__status = 1U;
                        }
                        unnamedblk1__DOT__unnamedblk13__DOT__index___05F 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk13__DOT__index___05F);
                    }
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_get_arg(vlSymsp, __VlefCall_18__get_arg);
                    this->__Vfunc_uvm_is_match__51__str 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__VlefCall_18__get_arg, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk1__DOT__unnamedblk13__DOT__index___05F) ));
                    this->__Vfunc_uvm_is_match__51__expr 
                        = str___05F;
                    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(this->__Vfunc_uvm_is_match__51__expr, this->__Vfunc_uvm_glob_to_re__52__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__52__Vfuncout;
                    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s, this->__Vfunc_uvm_is_match__51__str, __Vfunc_uvm_re_match__53__Vfuncout);
                    __Vfunc_uvm_is_match__51____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__53__Vfuncout;
                    __VlefCall_19__uvm_is_match = (0U 
                                                   == __Vfunc_uvm_is_match__51____VlefCall_0__uvm_re_match);
                    if (__VlefCall_19__uvm_is_match) {
                        if (VL_GTS_III(32, ((IData)(1U) 
                                            + unnamedblk1__DOT__unnamedblk13__DOT__index___05F), this->__PVT__abstractions.size())) {
                            unnamedblk1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__sz 
                                = unnamedblk1__DOT__unnamedblk13__DOT__index___05F;
                            unnamedblk1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__tmp___05F = ""s;
                            while (VL_LTS_III(32, this->__PVT__abstractions.size(), unnamedblk1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__sz)) {
                                this->__PVT__abstractions.push_back(unnamedblk1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__tmp___05F);
                            }
                            while (VL_GTS_III(32, this->__PVT__abstractions.size(), unnamedblk1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__sz)) {
                                std::ignore = this->__PVT__abstractions.pop_front();
                            }
                        }
                        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__print_matches) {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__VnoInFunc_get_full_scope_arg(vlSymsp, __VlefCall_20__get_full_scope_arg);
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STRMTC"s, 
                                                              VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("set_int(): Matched string "s, str___05F), " to field "s), __VlefCall_20__get_full_scope_arg)), 0x00000064U, ""s, 0U);
                        }
                        this->__PVT__abstractions.atWriteAppend(unnamedblk1__DOT__unnamedblk13__DOT__index___05F) 
                            = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)
                            ->__PVT__stringv;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 56)->__PVT__status = 1U;
                    }
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk15__DOT__i;
    unnamedblk15__DOT__i = 0;
    IData/*31:0*/ unnamedblk15__DOT__i__Vloopsize;
    unnamedblk15__DOT__i__Vloopsize = 0;
    {
        if ((VlNull{} == Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, "Register model handle is null"s, 0x00000064U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 72)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("checking HDL paths for all registers/memories in "s, __VlefCall_1__get_full_name)), 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000048U);
        }
        if ((0U == this->__PVT__abstractions.size())) {
            this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, ""s);
        } else {
            unnamedblk15__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk15__DOT__i, this->__PVT__abstractions.size())) {
                unnamedblk15__DOT__i__Vloopsize = this->__PVT__abstractions.size();
                this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, 
                                           VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk15__DOT__i)));
                if ((unnamedblk15__DOT__i__Vloopsize 
                     <= this->__PVT__abstractions.size())) {
                    unnamedblk15__DOT__i = ((IData)(1U) 
                                            + unnamedblk15__DOT__i);
                }
            }
        }
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, "HDL path validation completed "s, 0x00000064U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000051U);
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk16__DOT__i;
    unnamedblk16__DOT__i = 0;
    IData/*31:0*/ unnamedblk16__DOT__i__Vloopsize;
    unnamedblk16__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk17__DOT__i;
    unnamedblk17__DOT__i = 0;
    IData/*31:0*/ unnamedblk17__DOT__i__Vloopsize;
    unnamedblk17__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block>> unnamedblk18__DOT__blks;
    IData/*31:0*/ unnamedblk18__DOT__unnamedblk19__DOT__i;
    unnamedblk18__DOT__unnamedblk19__DOT__i = 0;
    IData/*31:0*/ unnamedblk18__DOT__unnamedblk19__DOT__i__Vloopsize;
    unnamedblk18__DOT__unnamedblk19__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> mems;
    regs.clear();
    mems.clear();
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 100)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Validating HDL paths in "s, __VlefCall_1__get_full_name), " for "s), 
                                                                                ((""s 
                                                                                == kind)
                                                                                 ? "default"s
                                                                                 : kind)), " design abstraction"s)), 0x000000c8U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000064U);
    }
    VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 103)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk16__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk16__DOT__i, regs.size())) {
        unnamedblk16__DOT__i__Vloopsize = regs.size();
        this->__VnoInFunc_check_reg(vlProcess, vlSymsp, regs.at(unnamedblk16__DOT__i), kind);
        if ((unnamedblk16__DOT__i__Vloopsize <= regs.size())) {
            unnamedblk16__DOT__i = ((IData)(1U) + unnamedblk16__DOT__i);
        }
    }
    VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 107)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
    unnamedblk17__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk17__DOT__i, mems.size())) {
        unnamedblk17__DOT__i__Vloopsize = mems.size();
        this->__VnoInFunc_check_mem(vlProcess, vlSymsp, mems.at(unnamedblk17__DOT__i), kind);
        if ((unnamedblk17__DOT__i__Vloopsize <= mems.size())) {
            unnamedblk17__DOT__i = ((IData)(1U) + unnamedblk17__DOT__i);
        }
    }
    unnamedblk18__DOT__blks.clear();
    VL_NULL_CHECK(blk, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 114)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk18__DOT__blks, 1U);
    unnamedblk18__DOT__unnamedblk19__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk18__DOT__unnamedblk19__DOT__i, unnamedblk18__DOT__blks.size())) {
        unnamedblk18__DOT__unnamedblk19__DOT__i__Vloopsize 
            = unnamedblk18__DOT__blks.size();
        this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk18__DOT__blks.at(unnamedblk18__DOT__unnamedblk19__DOT__i), kind);
        if ((unnamedblk18__DOT__unnamedblk19__DOT__i__Vloopsize 
             <= unnamedblk18__DOT__blks.size())) {
            unnamedblk18__DOT__unnamedblk19__DOT__i 
                = ((IData)(1U) + unnamedblk18__DOT__unnamedblk19__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const std::string &path, VlWide<32>/*1023:0*/ &value, IData/*31:0*/ &uvm_hdl_read__Vfuncrtn);
void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_check_path_TOP__uvm_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const std::string &path, IData/*31:0*/ &uvm_hdl_check_path__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> r, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg\n"); );
    // Locals
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__76__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__76__value);
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__uvm_hdl_check_path;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_read;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    IData/*31:0*/ unnamedblk20__DOT__p;
    unnamedblk20__DOT__p = 0;
    IData/*31:0*/ unnamedblk20__DOT__p__Vloopsize;
    unnamedblk20__DOT__p__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk20__DOT__unnamedblk21__DOT__path;
    IData/*31:0*/ unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j;
    unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j = 0;
    IData/*31:0*/ unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j__Vloopsize;
    unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j__Vloopsize = 0;
    std::string unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__p_;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        paths.clear();
        VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 127)->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 130)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        }
        unnamedblk20__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk20__DOT__p, paths.size())) {
            unnamedblk20__DOT__p__Vloopsize = paths.size();
            unnamedblk20__DOT__unnamedblk21__DOT__path 
                = paths.at(unnamedblk20__DOT__p);
            unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j, VL_NULL_CHECK(unnamedblk20__DOT__unnamedblk21__DOT__path, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 135)
                              ->__PVT__slices.size())) {
                unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j__Vloopsize 
                    = VL_NULL_CHECK(unnamedblk20__DOT__unnamedblk21__DOT__path, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 135)
                    ->__PVT__slices.size();
                unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk20__DOT__unnamedblk21__DOT__path, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 136)
                    ->__PVT__slices.at(unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j)
                    .__PVT__path;
                Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg(
                                                                             (vlSymsp->__Vscopep_uvm_pkg__uvm_reg_mem_hdl_paths_seq), 
                                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 0x0000008aU, unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__p_, __Vfunc_uvm_hdl_read__76__value, __VlefCall_1__uvm_hdl_read);
                if ((1U & (~ (0U != __VlefCall_1__uvm_hdl_read)))) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_2__uvm_report_enabled);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 141)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%s\" for register \"%s\" is not readable",2
                                                                                , 'S',&(unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__p_)
                                                                                , 'S',&(__VlefCall_3__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x0000008dU);
                    }
                }
                Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_check_path_TOP__uvm_pkg(
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_reg_mem_hdl_paths_seq), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 0x0000008eU, unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__p_, __VlefCall_4__uvm_hdl_check_path);
                if ((1U & (~ (0U != __VlefCall_4__uvm_hdl_check_path)))) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_5__uvm_report_enabled);
                    if ((0U != __VlefCall_5__uvm_report_enabled)) {
                        VL_NULL_CHECK(r, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 145)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%s\" for register \"%s\" is not accessible",2
                                                                                , 'S',&(unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__p_)
                                                                                , 'S',&(__VlefCall_6__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000091U);
                    }
                }
                if ((unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j__Vloopsize 
                     <= VL_NULL_CHECK(unnamedblk20__DOT__unnamedblk21__DOT__path, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 135)
                     ->__PVT__slices.size())) {
                    unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
            }
            if ((unnamedblk20__DOT__p__Vloopsize <= paths.size())) {
                unnamedblk20__DOT__p = ((IData)(1U) 
                                        + unnamedblk20__DOT__p);
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> m, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_check_path;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    IData/*31:0*/ unnamedblk24__DOT__p;
    unnamedblk24__DOT__p = 0;
    IData/*31:0*/ unnamedblk24__DOT__p__Vloopsize;
    unnamedblk24__DOT__p__Vloopsize = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk24__DOT__unnamedblk25__DOT__path;
    IData/*31:0*/ unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j;
    unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j = 0;
    IData/*31:0*/ unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j__Vloopsize;
    unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j__Vloopsize = 0;
    std::string unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__p_;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        paths.clear();
        VL_NULL_CHECK(m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 156)->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 159)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        }
        unnamedblk24__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk24__DOT__p, paths.size())) {
            unnamedblk24__DOT__p__Vloopsize = paths.size();
            unnamedblk24__DOT__unnamedblk25__DOT__path 
                = paths.at(unnamedblk24__DOT__p);
            unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j, VL_NULL_CHECK(unnamedblk24__DOT__unnamedblk25__DOT__path, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 164)
                              ->__PVT__slices.size())) {
                unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j__Vloopsize 
                    = VL_NULL_CHECK(unnamedblk24__DOT__unnamedblk25__DOT__path, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 164)
                    ->__PVT__slices.size();
                unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk24__DOT__unnamedblk25__DOT__path, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 166)
                    ->__PVT__slices.at(unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j)
                    .__PVT__path;
                Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_check_path_TOP__uvm_pkg(
                                                                                (vlSymsp->__Vscopep_uvm_pkg__uvm_reg_mem_hdl_paths_seq), 
                                                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 0x000000a7U, unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__p_, __VlefCall_1__uvm_hdl_check_path);
                if ((1U & (~ (0U != __VlefCall_1__uvm_hdl_check_path)))) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_hdl_paths_seq"s, __VlefCall_2__uvm_report_enabled);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        VL_NULL_CHECK(m, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 170)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%s\" for memory \"%s\" is not accessible",2
                                                                                , 'S',&(unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__p_)
                                                                                , 'S',&(__VlefCall_3__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x000000aaU);
                    }
                }
                if ((unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j__Vloopsize 
                     <= VL_NULL_CHECK(unnamedblk24__DOT__unnamedblk25__DOT__path, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 164)
                     ->__PVT__slices.size())) {
                    unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + unnamedblk24__DOT__unnamedblk25__DOT__unnamedblk26__DOT__j);
                }
            }
            if ((unnamedblk24__DOT__p__Vloopsize <= paths.size())) {
                unnamedblk24__DOT__p = ((IData)(1U) 
                                        + unnamedblk24__DOT__p);
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::~\n"); );
}
