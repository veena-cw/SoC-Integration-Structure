// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder, vlProcess, vlSymsp, "uvm_recorder"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 38)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_recorder"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 38)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__filename = "tr_db.log"s;
    this->__PVT__tr_handle = 0U;
    this->__PVT__default_radix = 0x07000000U;
    this->__PVT__physical = 1U;
    this->__PVT__abstract = 1U;
    this->__PVT__identifier = 1U;
    this->__PVT__policy = 0U;
    this->__PVT__scope = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack, vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field\n"); );
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_1;
    // Body
    std::string __VlefCall_0__get;
    {
        if ((0U == this->__PVT__tr_handle)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 133)->__VnoInFunc_set_arg(vlSymsp, name);
        if ((1U & (~ (0U != radix)))) {
            radix = this->__PVT__default_radix;
        }
        VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 138)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
        __Vtemp_1[0U] = value[0U];
        __Vtemp_1[1U] = value[1U];
        __Vtemp_1[2U] = value[2U];
        __Vtemp_1[3U] = value[3U];
        __Vtemp_1[4U] = value[4U];
        __Vtemp_1[5U] = value[5U];
        __Vtemp_1[6U] = value[6U];
        __Vtemp_1[7U] = value[7U];
        __Vtemp_1[8U] = value[8U];
        __Vtemp_1[9U] = value[9U];
        __Vtemp_1[10U] = value[10U];
        __Vtemp_1[11U] = value[11U];
        __Vtemp_1[12U] = value[12U];
        __Vtemp_1[13U] = value[13U];
        __Vtemp_1[14U] = value[14U];
        __Vtemp_1[15U] = value[15U];
        __Vtemp_1[16U] = value[16U];
        __Vtemp_1[17U] = value[17U];
        __Vtemp_1[18U] = value[18U];
        __Vtemp_1[19U] = value[19U];
        __Vtemp_1[20U] = value[20U];
        __Vtemp_1[21U] = value[21U];
        __Vtemp_1[22U] = value[22U];
        __Vtemp_1[23U] = value[23U];
        __Vtemp_1[24U] = value[24U];
        __Vtemp_1[25U] = value[25U];
        __Vtemp_1[26U] = value[26U];
        __Vtemp_1[27U] = value[27U];
        __Vtemp_1[28U] = value[28U];
        __Vtemp_1[29U] = value[29U];
        __Vtemp_1[30U] = value[30U];
        __Vtemp_1[31U] = value[31U];
        this->__VnoInFunc_set_attribute(vlSymsp, this->__PVT__tr_handle, 
                                        VL_CVT_PACK_STR_NN(__VlefCall_0__get), __Vtemp_1, radix, size);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_real\n"); );
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_1;
    // Body
    std::string __VlefCall_0__get;
    QData/*63:0*/ ival;
    {
        ival = VL_CVT_Q_D(value);
        if ((0U == this->__PVT__tr_handle)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 151)->__VnoInFunc_set_arg(vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 152)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
        __Vtemp_1[0U] = (IData)(ival);
        __Vtemp_1[1U] = (IData)((ival >> 0x00000020U));
        __Vtemp_1[2U] = 0U;
        __Vtemp_1[3U] = 0U;
        __Vtemp_1[4U] = 0U;
        __Vtemp_1[5U] = 0U;
        __Vtemp_1[6U] = 0U;
        __Vtemp_1[7U] = 0U;
        __Vtemp_1[8U] = 0U;
        __Vtemp_1[9U] = 0U;
        __Vtemp_1[10U] = 0U;
        __Vtemp_1[11U] = 0U;
        __Vtemp_1[12U] = 0U;
        __Vtemp_1[13U] = 0U;
        __Vtemp_1[14U] = 0U;
        __Vtemp_1[15U] = 0U;
        __Vtemp_1[16U] = 0U;
        __Vtemp_1[17U] = 0U;
        __Vtemp_1[18U] = 0U;
        __Vtemp_1[19U] = 0U;
        __Vtemp_1[20U] = 0U;
        __Vtemp_1[21U] = 0U;
        __Vtemp_1[22U] = 0U;
        __Vtemp_1[23U] = 0U;
        __Vtemp_1[24U] = 0U;
        __Vtemp_1[25U] = 0U;
        __Vtemp_1[26U] = 0U;
        __Vtemp_1[27U] = 0U;
        __Vtemp_1[28U] = 0U;
        __Vtemp_1[29U] = 0U;
        __Vtemp_1[30U] = 0U;
        __Vtemp_1[31U] = 0U;
        this->__VnoInFunc_set_attribute(vlSymsp, this->__PVT__tr_handle, 
                                        VL_CVT_PACK_STR_NN(__VlefCall_0__get), __Vtemp_1, 0x0b000000U, 0x00000040U);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object\n"); );
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    IData/*31:0*/ v;
    std::string str;
    {
        v = 0U;
        str = ""s;
        if (this->__PVT__identifier) {
            if ((VlNull{} != value)) {
                VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 169)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
                VL_SFORMAT_NX(str,"%0d",1, '~',32,__VlefCall_0__get_inst_id);
                v = VL_ATOI_N(str, 10);
            }
            VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 172)->__VnoInFunc_set_arg(vlSymsp, name);
            VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 173)->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
            VL_EXTENDS_WI(1024,32, __Vtemp_1, v);
            this->__VnoInFunc_set_attribute(vlSymsp, this->__PVT__tr_handle, 
                                            VL_CVT_PACK_STR_NN(__VlefCall_1__get), __Vtemp_1, 0x02000000U, 0x00000020U);
        }
        if ((0x00001000U != this->__PVT__policy)) {
            if ((VlNull{} != value)) {
                if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 178)
                    ->__PVT__cycle_check.exists(value)) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 179)->__PVT__cycle_check.atWrite(value) = 1U;
                VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 180)->__VnoInFunc_down(vlSymsp, name);
                VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 181)->__VnoInFunc_record(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder>{this});
                VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 182)->__VnoInFunc_up(vlSymsp, 0x2eU);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 183)->__PVT__cycle_check.erase(value);
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string\n"); );
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_1;
    // Body
    VlWide<3600>/*115199:0*/ __VlefCall_1__uvm_string_to_bits;
    std::string __VlefCall_0__get;
    VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 195)->__VnoInFunc_set_arg(vlSymsp, name);
    VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 196)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    this->__Vfunc_uvm_string_to_bits__22__str = value;
    VL_SFORMAT_NX(115200,__VlefCall_1__uvm_string_to_bits.data()
                  ,"%0s",1, 'S',&(this->__Vfunc_uvm_string_to_bits__22__str));
    __Vtemp_1[0U] = __VlefCall_1__uvm_string_to_bits[0U];
    __Vtemp_1[1U] = __VlefCall_1__uvm_string_to_bits[1U];
    __Vtemp_1[2U] = __VlefCall_1__uvm_string_to_bits[2U];
    __Vtemp_1[3U] = __VlefCall_1__uvm_string_to_bits[3U];
    __Vtemp_1[4U] = __VlefCall_1__uvm_string_to_bits[4U];
    __Vtemp_1[5U] = __VlefCall_1__uvm_string_to_bits[5U];
    __Vtemp_1[6U] = __VlefCall_1__uvm_string_to_bits[6U];
    __Vtemp_1[7U] = __VlefCall_1__uvm_string_to_bits[7U];
    __Vtemp_1[8U] = __VlefCall_1__uvm_string_to_bits[8U];
    __Vtemp_1[9U] = __VlefCall_1__uvm_string_to_bits[9U];
    __Vtemp_1[10U] = __VlefCall_1__uvm_string_to_bits[10U];
    __Vtemp_1[11U] = __VlefCall_1__uvm_string_to_bits[11U];
    __Vtemp_1[12U] = __VlefCall_1__uvm_string_to_bits[12U];
    __Vtemp_1[13U] = __VlefCall_1__uvm_string_to_bits[13U];
    __Vtemp_1[14U] = __VlefCall_1__uvm_string_to_bits[14U];
    __Vtemp_1[15U] = __VlefCall_1__uvm_string_to_bits[15U];
    __Vtemp_1[16U] = __VlefCall_1__uvm_string_to_bits[16U];
    __Vtemp_1[17U] = __VlefCall_1__uvm_string_to_bits[17U];
    __Vtemp_1[18U] = __VlefCall_1__uvm_string_to_bits[18U];
    __Vtemp_1[19U] = __VlefCall_1__uvm_string_to_bits[19U];
    __Vtemp_1[20U] = __VlefCall_1__uvm_string_to_bits[20U];
    __Vtemp_1[21U] = __VlefCall_1__uvm_string_to_bits[21U];
    __Vtemp_1[22U] = __VlefCall_1__uvm_string_to_bits[22U];
    __Vtemp_1[23U] = __VlefCall_1__uvm_string_to_bits[23U];
    __Vtemp_1[24U] = __VlefCall_1__uvm_string_to_bits[24U];
    __Vtemp_1[25U] = __VlefCall_1__uvm_string_to_bits[25U];
    __Vtemp_1[26U] = __VlefCall_1__uvm_string_to_bits[26U];
    __Vtemp_1[27U] = __VlefCall_1__uvm_string_to_bits[27U];
    __Vtemp_1[28U] = __VlefCall_1__uvm_string_to_bits[28U];
    __Vtemp_1[29U] = __VlefCall_1__uvm_string_to_bits[29U];
    __Vtemp_1[30U] = __VlefCall_1__uvm_string_to_bits[30U];
    __Vtemp_1[31U] = __VlefCall_1__uvm_string_to_bits[31U];
    this->__VnoInFunc_set_attribute(vlSymsp, this->__PVT__tr_handle, 
                                    VL_CVT_PACK_STR_NN(__VlefCall_0__get), __Vtemp_1, 0x08000000U, 
                                    VL_MULS_III(32, (IData)(8U), 
                                                VL_LEN_IN(value)));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_time\n"); );
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_1;
    // Body
    std::string __VlefCall_0__get;
    VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 207)->__VnoInFunc_set_arg(vlSymsp, name);
    VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 208)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    __Vtemp_1[0U] = (IData)(value);
    __Vtemp_1[1U] = (IData)((value >> 0x00000020U));
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    __Vtemp_1[4U] = 0U;
    __Vtemp_1[5U] = 0U;
    __Vtemp_1[6U] = 0U;
    __Vtemp_1[7U] = 0U;
    __Vtemp_1[8U] = 0U;
    __Vtemp_1[9U] = 0U;
    __Vtemp_1[10U] = 0U;
    __Vtemp_1[11U] = 0U;
    __Vtemp_1[12U] = 0U;
    __Vtemp_1[13U] = 0U;
    __Vtemp_1[14U] = 0U;
    __Vtemp_1[15U] = 0U;
    __Vtemp_1[16U] = 0U;
    __Vtemp_1[17U] = 0U;
    __Vtemp_1[18U] = 0U;
    __Vtemp_1[19U] = 0U;
    __Vtemp_1[20U] = 0U;
    __Vtemp_1[21U] = 0U;
    __Vtemp_1[22U] = 0U;
    __Vtemp_1[23U] = 0U;
    __Vtemp_1[24U] = 0U;
    __Vtemp_1[25U] = 0U;
    __Vtemp_1[26U] = 0U;
    __Vtemp_1[27U] = 0U;
    __Vtemp_1[28U] = 0U;
    __Vtemp_1[29U] = 0U;
    __Vtemp_1[30U] = 0U;
    __Vtemp_1[31U] = 0U;
    this->__VnoInFunc_set_attribute(vlSymsp, this->__PVT__tr_handle, 
                                    VL_CVT_PACK_STR_NN(__VlefCall_0__get), __Vtemp_1, 0x09000000U, 0x00000040U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic\n"); );
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_1;
    // Body
    VlWide<3600>/*115199:0*/ __VlefCall_1__uvm_string_to_bits;
    std::string __VlefCall_0__get;
    VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 220)->__VnoInFunc_set_arg(vlSymsp, name);
    VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_recorder.svh", 221)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    this->__Vfunc_uvm_string_to_bits__29__str = value;
    VL_SFORMAT_NX(115200,__VlefCall_1__uvm_string_to_bits.data()
                  ,"%0s",1, 'S',&(this->__Vfunc_uvm_string_to_bits__29__str));
    __Vtemp_1[0U] = __VlefCall_1__uvm_string_to_bits[0U];
    __Vtemp_1[1U] = __VlefCall_1__uvm_string_to_bits[1U];
    __Vtemp_1[2U] = __VlefCall_1__uvm_string_to_bits[2U];
    __Vtemp_1[3U] = __VlefCall_1__uvm_string_to_bits[3U];
    __Vtemp_1[4U] = __VlefCall_1__uvm_string_to_bits[4U];
    __Vtemp_1[5U] = __VlefCall_1__uvm_string_to_bits[5U];
    __Vtemp_1[6U] = __VlefCall_1__uvm_string_to_bits[6U];
    __Vtemp_1[7U] = __VlefCall_1__uvm_string_to_bits[7U];
    __Vtemp_1[8U] = __VlefCall_1__uvm_string_to_bits[8U];
    __Vtemp_1[9U] = __VlefCall_1__uvm_string_to_bits[9U];
    __Vtemp_1[10U] = __VlefCall_1__uvm_string_to_bits[10U];
    __Vtemp_1[11U] = __VlefCall_1__uvm_string_to_bits[11U];
    __Vtemp_1[12U] = __VlefCall_1__uvm_string_to_bits[12U];
    __Vtemp_1[13U] = __VlefCall_1__uvm_string_to_bits[13U];
    __Vtemp_1[14U] = __VlefCall_1__uvm_string_to_bits[14U];
    __Vtemp_1[15U] = __VlefCall_1__uvm_string_to_bits[15U];
    __Vtemp_1[16U] = __VlefCall_1__uvm_string_to_bits[16U];
    __Vtemp_1[17U] = __VlefCall_1__uvm_string_to_bits[17U];
    __Vtemp_1[18U] = __VlefCall_1__uvm_string_to_bits[18U];
    __Vtemp_1[19U] = __VlefCall_1__uvm_string_to_bits[19U];
    __Vtemp_1[20U] = __VlefCall_1__uvm_string_to_bits[20U];
    __Vtemp_1[21U] = __VlefCall_1__uvm_string_to_bits[21U];
    __Vtemp_1[22U] = __VlefCall_1__uvm_string_to_bits[22U];
    __Vtemp_1[23U] = __VlefCall_1__uvm_string_to_bits[23U];
    __Vtemp_1[24U] = __VlefCall_1__uvm_string_to_bits[24U];
    __Vtemp_1[25U] = __VlefCall_1__uvm_string_to_bits[25U];
    __Vtemp_1[26U] = __VlefCall_1__uvm_string_to_bits[26U];
    __Vtemp_1[27U] = __VlefCall_1__uvm_string_to_bits[27U];
    __Vtemp_1[28U] = __VlefCall_1__uvm_string_to_bits[28U];
    __Vtemp_1[29U] = __VlefCall_1__uvm_string_to_bits[29U];
    __Vtemp_1[30U] = __VlefCall_1__uvm_string_to_bits[30U];
    __Vtemp_1[31U] = __VlefCall_1__uvm_string_to_bits[31U];
    this->__VnoInFunc_set_attribute(vlSymsp, this->__PVT__tr_handle, 
                                    VL_CVT_PACK_STR_NN(__VlefCall_0__get), __Vtemp_1, 0x08000000U, 
                                    VL_MULS_III(32, (IData)(8U), 
                                                VL_LEN_IN(value)));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_open_file(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_open_file\n"); );
    // Body
    if (VL_UNLIKELY(((0U == this->__PVT__file)))) {
        this->__PVT__file = VL_FOPEN_MCD_N(this->__PVT__filename);
        ;
    }
    open_file__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__file);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create_stream(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create_stream\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    {
        create_stream__Vfuncrtn = 0;
        this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
        if (VL_UNLIKELY((__VlefCall_0__open_file))) {
            __Vincrement1 = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__handle);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__handle 
                = __Vincrement1;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_handles.atWrite(__Vincrement1) = 1U;
            VL_FWRITEF_NX(this->__PVT__file,"  CREATE_STREAM @%0t {NAME:%s T:%s SCOPE:%s STREAM:%0d}\n",6, 'T',-9
                          , '#',64,VL_TIME_UNITED_Q(1000)
                          , 'S',&(name), 'S',&(t), 'S',&(scope)
                          , '~',32,vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__handle);
            create_stream__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__handle;
            goto __Vlabel0;
        }
        create_stream__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_set_attribute(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_set_attribute\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        VL_FWRITEF_NX(this->__PVT__file,"  SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s}\n",5, 'T',-9
                      , '#',64,VL_TIME_UNITED_Q(1000)
                      , '~',32,txh, 'S',&(nm), 'S',&(value));
    }
}

extern const VlWide<32>/*1023:0*/ Vcsi2_tb_top__ConstPool__CONST_h2ae7f32a_0;

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_attribute(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*31:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_attribute\n"); );
    // Locals
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        VL_SHIFTL_WWI(1024,1024,32, __Vtemp_1, Vcsi2_tb_top__ConstPool__CONST_h2ae7f32a_0, numbits);
        VL_SUB_W(32, __Vtemp_2, __Vtemp_1, Vcsi2_tb_top__ConstPool__CONST_h2ae7f32a_0);
        __Vtemp_3[0U] = (value[0U] & __Vtemp_2[0U]);
        __Vtemp_3[1U] = (value[1U] & __Vtemp_2[1U]);
        __Vtemp_3[2U] = (value[2U] & __Vtemp_2[2U]);
        __Vtemp_3[3U] = (value[3U] & __Vtemp_2[3U]);
        __Vtemp_3[4U] = (value[4U] & __Vtemp_2[4U]);
        __Vtemp_3[5U] = (value[5U] & __Vtemp_2[5U]);
        __Vtemp_3[6U] = (value[6U] & __Vtemp_2[6U]);
        __Vtemp_3[7U] = (value[7U] & __Vtemp_2[7U]);
        __Vtemp_3[8U] = (value[8U] & __Vtemp_2[8U]);
        __Vtemp_3[9U] = (value[9U] & __Vtemp_2[9U]);
        __Vtemp_3[10U] = (value[10U] & __Vtemp_2[10U]);
        __Vtemp_3[11U] = (value[11U] & __Vtemp_2[11U]);
        __Vtemp_3[12U] = (value[12U] & __Vtemp_2[12U]);
        __Vtemp_3[13U] = (value[13U] & __Vtemp_2[13U]);
        __Vtemp_3[14U] = (value[14U] & __Vtemp_2[14U]);
        __Vtemp_3[15U] = (value[15U] & __Vtemp_2[15U]);
        __Vtemp_3[16U] = (value[16U] & __Vtemp_2[16U]);
        __Vtemp_3[17U] = (value[17U] & __Vtemp_2[17U]);
        __Vtemp_3[18U] = (value[18U] & __Vtemp_2[18U]);
        __Vtemp_3[19U] = (value[19U] & __Vtemp_2[19U]);
        __Vtemp_3[20U] = (value[20U] & __Vtemp_2[20U]);
        __Vtemp_3[21U] = (value[21U] & __Vtemp_2[21U]);
        __Vtemp_3[22U] = (value[22U] & __Vtemp_2[22U]);
        __Vtemp_3[23U] = (value[23U] & __Vtemp_2[23U]);
        __Vtemp_3[24U] = (value[24U] & __Vtemp_2[24U]);
        __Vtemp_3[25U] = (value[25U] & __Vtemp_2[25U]);
        __Vtemp_3[26U] = (value[26U] & __Vtemp_2[26U]);
        __Vtemp_3[27U] = (value[27U] & __Vtemp_2[27U]);
        __Vtemp_3[28U] = (value[28U] & __Vtemp_2[28U]);
        __Vtemp_3[29U] = (value[29U] & __Vtemp_2[29U]);
        __Vtemp_3[30U] = (value[30U] & __Vtemp_2[30U]);
        __Vtemp_3[31U] = (value[31U] & __Vtemp_2[31U]);
        __Vtemp_4 = Vcsi2_tb_top___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(this->__PVT__file,"  SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%0d   RADIX:%s BITS=%0d}\n",7, 'T',-9
                      , '#',64,VL_TIME_UNITED_Q(1000)
                      , '~',32,txh, 'S',&(nm), '#',1024,__Vtemp_3.data()
                      , 'S',&(__Vtemp_4), '~',32,numbits);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_check_handle_kind(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_check_handle_kind\n"); );
    // Body
    check_handle_kind__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_handles.exists(handle);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_begin_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_begin_tr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    {
        begin_tr__Vfuncrtn = 0;
        this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
        if (VL_UNLIKELY((__VlefCall_0__open_file))) {
            __Vincrement2 = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__handle);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__handle 
                = __Vincrement2;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_handles.atWrite(__Vincrement2) = 1U;
            VL_FWRITEF_NX(this->__PVT__file,"BEGIN @%0t {TXH:%0d STREAM:%0d NAME:%s TIME=%0t  TYPE=\"%0s\" LABEL:\"%0s\" DESC=\"%0s\"}\n",9, 'T',-9
                          , '#',64,VL_TIME_UNITED_Q(1000)
                          , '~',32,vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__handle
                          , '~',32,stream, 'S',&(nm)
                          , '#',64,begin_time, 'S',&(txtype)
                          , 'S',&(label), 'S',&(desc));
            begin_tr__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__handle;
            goto __Vlabel0;
        }
        begin_tr__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_end_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_end_tr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        VL_FWRITEF_NX(this->__PVT__file,"END @%0t {TXH:%0d TIME=%0t}\n",4, 'T',-9
                      , '#',64,VL_TIME_UNITED_Q(1000)
                      , '~',32,handle, '#',64,end_time);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_link_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_link_tr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        VL_FWRITEF_NX(this->__PVT__file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=%0s}\n",5, 'T',-9
                      , '#',64,VL_TIME_UNITED_Q(1000)
                      , '~',32,h1, '~',32,h2, 'S',&(relation));
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free_tr(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free_tr\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__open_file;
    this->__VnoInFunc_open_file(vlSymsp, __VlefCall_0__open_file);
    if (VL_UNLIKELY((__VlefCall_0__open_file))) {
        VL_FWRITEF_NX(this->__PVT__file,"FREE @%0t {TXH:%0d}\n",3, 'T',-9
                      , '#',64,VL_TIME_UNITED_Q(1000)
                      , '~',32,handle);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_handles.exists(handle)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_handles.erase(handle);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__recording_depth = 0;
    __PVT__file = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder::~\n"); );
}
