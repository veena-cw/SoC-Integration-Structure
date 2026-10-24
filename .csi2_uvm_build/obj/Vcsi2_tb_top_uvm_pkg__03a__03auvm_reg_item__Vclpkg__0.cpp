// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi49> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi49> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi49__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 43)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_item"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 43)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__prior = 0xffffffffU;
    /*super.new*/;
    this->__PVT__value.renew(1U);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT____Vvalue_size, 0x0000000000000020ULL, 
                                                                        "__Vvalue_size", 0ULL);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    CData/*0:0*/ __VlefLogAnd_2;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    std::string s;
    std::string value_s;
    convert2string__Vfuncrtn = ""s;
    s = ""s;
    value_s = ""s;
    if ((VlNull{} == this->__PVT__element)) {
        __VlefCall_0__get_full_name = "null"s;
    } else {
        VL_NULL_CHECK(this->__PVT__element, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 187)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("kind="s, Vcsi2_tb_top___024unit::__Venumtab_enum_name83
                                                                                [
                                                                                (3U 
                                                                                & this->__PVT__kind)]), " ele_kind="s), Vcsi2_tb_top___024unit::__Venumtab_enum_name81
                                                     [
                                                     (3U 
                                                      & this->__PVT__element_kind)]), " ele_name="s), __VlefCall_0__get_full_name);
    __VlefLogAnd_2 = VL_LTS_III(32, 1U, this->__PVT__value.size());
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "RegModel"s, __VlefCall_1__uvm_report_enabled);
        __VlefLogAnd_2 = (0U != __VlefCall_1__uvm_report_enabled);
    }
    if (__VlefLogAnd_2) {
        value_s = "'{"s;
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__value.size())) {
            value_s = VL_CONCATN_NNN(value_s, VL_SFORMATF_N_NX("%0h,",1
                                                               , '#',64,this->__PVT__value.at(unnamedblk2__DOT__i)) );
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
        value_s = VL_PUTC_N(value_s, (VL_LEN_IN(value_s) 
                                      - (IData)(1U)), 0x7dU);
    } else {
        VL_SFORMAT_NX(value_s,"%0h",1, '#',64,this->__PVT__value.at(0U));
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, " value="s), value_s);
    if ((2U == this->__PVT__element_kind)) {
        s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX(" offset=%0h",1
                                               , '#',64,this->__PVT__offset) );
    }
    if ((VlNull{} == this->__PVT__map)) {
        __VlefCall_3__get_full_name = "null"s;
    } else {
        VL_NULL_CHECK(this->__PVT__map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 201)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    }
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(s, " map="s), __VlefCall_3__get_full_name), " path="s), Vcsi2_tb_top___024unit::__Venumtab_enum_name75
                       [(3U & this->__PVT__path)]);
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, " status="s), Vcsi2_tb_top___024unit::__Venumtab_enum_name73
                       [(3U & this->__PVT__status)]);
    convert2string__Vfuncrtn = s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rhs_;
    {
        if ((VlNull{} == rhs)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/NULL"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/NULL"s, "do_copy: rhs argument is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh"s, 0x000000d7U);
            }
        }
        __VlefExpr_1 = VL_CAST_DYNAMIC(rhs, rhs_);
        if ((! __VlefExpr_1)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "WRONG_TYPE"s, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "WRONG_TYPE"s, "Provided rhs is not of type uvm_reg_item"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh"s, 0x000000daU);
            }
            goto __Vlabel0;
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy(vlProcess, vlSymsp, rhs);
        this->__PVT__element_kind = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 222)
            ->__PVT__element_kind;
        this->__PVT__element = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 223)
            ->__PVT__element;
        this->__PVT__kind = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 224)
            ->__PVT__kind;
        this->__PVT__value = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 225)
            ->__PVT__value;
        this->__PVT__offset = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 226)
            ->__PVT__offset;
        this->__PVT__status = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 227)
            ->__PVT__status;
        this->__PVT__local_map = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 228)
            ->__PVT__local_map;
        this->__PVT__map = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 229)
            ->__PVT__map;
        this->__PVT__path = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 230)
            ->__PVT__path;
        this->__PVT__extension = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 231)
            ->__PVT__extension;
        this->__PVT__bd_kind = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 232)
            ->__PVT__bd_kind;
        this->__PVT__parent = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 233)
            ->__PVT__parent;
        this->__PVT__prior = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 234)
            ->__PVT__prior;
        this->__PVT__fname = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 235)
            ->__PVT__fname;
        this->__PVT__lineno = VL_NULL_CHECK(rhs_, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 236)
            ->__PVT__lineno;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___Vresize_constrained_arrays(vlSymsp);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_resize_constrained_array(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_resize_constrained_array\n"); );
    // Body
    this->__PVT__value.resize(this->__PVT____Vvalue_size);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc_max_values_setup_constraint\n"); );
    // Body
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(bvand (__Vbv (bvsgt __Vvalue_size #x00000000)) (__Vbv (bvslt __Vvalue_size #x000003e8)))"s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 0x0000004dU, 
                                                                   "  constraint max_values { value.size() > 0 && value.size() < 1000; }");
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard("(__Vbv (bvsge __Vvalue_size #x00000000))"s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 0x0000004dU, 
                                                                   "  constraint max_values { value.size() > 0 && value.size() < 1000; }");
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vresize_constrained_arrays(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vresize_constrained_arrays\n"); );
    // Body
    {
        // Inlined CFunc: __VnoInFunc_max_values_resize_constrained_array
        this->__PVT__value.resize(this->__PVT____Vvalue_size);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_max_values_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1____VBasicRand;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0;
    unnamedblk2_1__DOT____Vrandarr___0 = 0;
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0__Vloopsize;
    unnamedblk2_1__DOT____Vrandarr___0__Vloopsize = 0;
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__kind = Vcsi2_tb_top___024unit::__Venumvaltab_2
        [(3U & VL_RANDOM_RNG_I(__Vm_rng))];
    unnamedblk2_1__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_1__DOT____Vrandarr___0 < this->__PVT__value.size())) {
        unnamedblk2_1__DOT____Vrandarr___0__Vloopsize 
            = this->__PVT__value.size();
        this->__PVT__value.atWrite(unnamedblk2_1__DOT____Vrandarr___0) 
            = VL_RANDOM_RNG_Q(__Vm_rng);
        if ((unnamedblk2_1__DOT____Vrandarr___0__Vloopsize 
             <= this->__PVT__value.size())) {
            unnamedblk2_1__DOT____Vrandarr___0 = ((IData)(1U) 
                                                  + unnamedblk2_1__DOT____Vrandarr___0);
        }
    }
    this->__PVT__offset = VL_RANDOM_RNG_Q(__Vm_rng);
    if ((VlNull{} != this->__PVT__parent)) {
        VL_NULL_CHECK(this->__PVT__parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 41)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_0__randomize);
    }
    if ((VlNull{} != this->__PVT__extension)) {
        VL_NULL_CHECK(this->__PVT__extension, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_reg_item.svh", 41)->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_1____VBasicRand);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_1____VBasicRand);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__element_kind = 0;
    __PVT__kind = 0;
    __PVT__value.atDefault() = 0;
    __PVT__offset = 0;
    __PVT__status = 0;
    __PVT__path = 0;
    __PVT__lineno = 0;
    __PVT____Vvalue_size = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item::~\n"); );
}
