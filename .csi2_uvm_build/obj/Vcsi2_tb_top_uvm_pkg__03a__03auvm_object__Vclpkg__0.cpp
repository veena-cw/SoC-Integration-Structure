// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "NOTYPID"s, "get_type not implemented in derived class."s, 0U, ""s, 0U);
    get_type__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_inst_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_inst_count\n"); );
    // Body
    get_inst_count__Vfuncrtn = this->__PVT__m_inst_count;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "<unknown>"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    create__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    /*super.new*/;
    __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count);
    this->__PVT__m_inst_id = __Vincrement1;
    this->__PVT__m_leaf_name = name;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__3____VlefCall_2__uvm_oneway_hash;
    __Vfunc_uvm_create_random_seed__3____VlefCall_2__uvm_oneway_hash = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed__3____VlefCall_0__new;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__6__Vfuncout;
    __Vfunc_uvm_oneway_hash__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__6__seed;
    __Vfunc_uvm_oneway_hash__6__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__6__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__6__unnamedblk1__DOT___byte = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_create_random_seed;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_type_name;
    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__3__inst_id 
        = VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__3__type_id 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
    if ((""s == this->__Vfunc_uvm_create_random_seed__3__inst_id)) {
        this->__Vfunc_uvm_create_random_seed__3__inst_id = "__global__"s;
    }
    if ((! vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__3__inst_id))) {
        __Vfunc_uvm_create_random_seed__3____VlefCall_0__new 
            = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.atWrite(this->__Vfunc_uvm_create_random_seed__3__inst_id) 
            = __Vfunc_uvm_create_random_seed__3____VlefCall_0__new;
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__3__inst_id);
    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_instance_scope_TOP__uvm_pkg(vlProcess, vlSymsp, this->__Vfunc_uvm_instance_scope__5__Vfuncout);
    this->__Vfunc_uvm_create_random_seed__3____VlefCall_1__uvm_instance_scope 
        = this->__Vfunc_uvm_instance_scope__5__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__3__type_id 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__3____VlefCall_1__uvm_instance_scope, this->__Vfunc_uvm_create_random_seed__3__type_id);
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 434)
         ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__3__type_id))) {
        __Vfunc_uvm_oneway_hash__6__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__6__string_in 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__3__type_id, "::"s), this->__Vfunc_uvm_create_random_seed__3__inst_id));
        if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__6__seed)))) {
            __Vfunc_uvm_oneway_hash__6__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        }
        __Vfunc_uvm_oneway_hash__6__Vfuncout = __Vfunc_uvm_oneway_hash__6__seed;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__6__unnamedblk1__DOT___byte = 0U;
        __Vfunc_uvm_oneway_hash__6__unnamedblk1__DOT___byte = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__6__unnamedblk1__DOT___byte, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__6__string_in))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__6__string_in,__Vfunc_uvm_oneway_hash__6__unnamedblk1__DOT___byte);
                if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel0;
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 1U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 2U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 3U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 4U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 5U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 6U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                     ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                        >> 7U))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                __Vfunc_uvm_oneway_hash__6__unnamedblk1__DOT___byte 
                    = ((IData)(1U) + __Vfunc_uvm_oneway_hash__6__unnamedblk1__DOT___byte);
            }
            __Vlabel0: ;
        }
        __Vfunc_uvm_oneway_hash__6__Vfuncout = (__Vfunc_uvm_oneway_hash__6__Vfuncout 
                                                + (~ 
                                                   ((((0x0000ff00U 
                                                       & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                            >> 8U))) 
                                                     << 0x00000010U) 
                                                    | ((0x0000ff00U 
                                                        & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                           >> 8U)) 
                                                       | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          >> 0x18U)))));
        __Vfunc_uvm_create_random_seed__3____VlefCall_2__uvm_oneway_hash 
            = __Vfunc_uvm_oneway_hash__6__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 435)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__3__type_id) 
            = __Vfunc_uvm_create_random_seed__3____VlefCall_2__uvm_oneway_hash;
    }
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 437)
         ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__3__type_id))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 438)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__3__type_id) = 0U;
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 444)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__3__type_id) 
        = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 444)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__3__type_id) 
           + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 444)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__3__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 445)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__3__type_id) 
        = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 445)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__3__type_id));
    __VlefCall_2__uvm_create_random_seed = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 447)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__3__type_id);
    this->__VnoInFunc_srandom(vlSymsp, __VlefCall_2__uvm_create_random_seed);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id\n"); );
    // Body
    get_inst_id__Vfuncrtn = this->__PVT__m_inst_id;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type\n"); );
    // Body
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_type_name;
    {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
        if (("<unknown>"s == __VlefCall_0__get_type_name)) {
            get_object_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 836)->__VnoInFunc_find_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), get_object_type__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_leaf_name;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    get_full_name__Vfuncrtn = ""s;
    this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__m_leaf_name = name;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_print(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_print\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled;
    __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__14__Vfuncout;
    __Vtask_uvm_report_enabled__14__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__sprint;
    CData/*0:0*/ __VlefCall_0__uvm_report_enabled;
    if ((VlNull{} == printer)) {
        printer = vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer;
    }
    if ((VlNull{} == printer)) {
        this->__Vfunc_uvm_report_enabled__12__id = "NULLPRINTER"s;
        __Vfunc_uvm_report_enabled__12__severity = 2U;
        __Vfunc_uvm_report_enabled__12__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vfunc_get__13__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 119)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), this->__Vfunc_uvm_report_enabled__12__id, __Vtask_uvm_report_enabled__14__Vfuncout);
        __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled 
            = __Vtask_uvm_report_enabled__14__Vfuncout;
        __VlefCall_0__uvm_report_enabled = (1U & __Vfunc_uvm_report_enabled__12____VlefCall_0__uvm_report_enabled);
        if (__VlefCall_0__uvm_report_enabled) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "NULLPRINTER"s, "uvm_default_printer is null"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh"s, 0x0000036fU);
        }
    }
    this->__VnoInFunc_sprint(vlProcess, vlSymsp, printer, __VlefCall_1__sprint);
    VL_FWRITEF_NX(VL_NULL_CHECK(VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 880)
                                ->__PVT__knobs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 880)
                  ->__PVT__mcd,"%s",1, 'S',&(__VlefCall_1__sprint));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer, std::string &sprint__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__istop;
    {
        sprint__Vfuncrtn = ""s;
        if ((VlNull{} == printer)) {
            printer = vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer;
        }
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 894)->__VnoInFunc_istop(vlSymsp, __VlefCall_0__istop);
        if ((1U & (~ (IData)(__VlefCall_0__istop)))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 895)->__PVT__printer 
                = printer;
            this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00000010U, ""s);
            this->__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
            sprint__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 901)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>{this}, 0x2eU);
        if ((""s != VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 904)
             ->__PVT__m_string)) {
            sprint__Vfuncrtn = VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 905)
                ->__PVT__m_string;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 907)->__VnoInFunc_emit(vlProcess, vlSymsp, sprint__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = ""s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_int_local(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlWide<128>/*4095:0*/ value, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_int_local\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 926)->__PVT__cycle_check.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 927)->__PVT__m_uvm_cycle_scopes.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 929)->__PVT__status = 0U;
    VL_ASSIGN_W(4096, VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 930)
                ->__PVT__bitstream, value);
    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020006U, field_name);
    if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 934)
         ->__PVT__warning && (1U & (~ VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 934)
                                    ->__PVT__status)))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "NOMTC"s, VL_SFORMATF_N_NX("did not find a match for field %s",1
                                                                                , 'S',&(field_name)) , 0U, ""s, 0U);
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 937)->__PVT__cycle_check.clear();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_object_local(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value, CData/*0:0*/ clone, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_object_local\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> cc;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 949)->__PVT__cycle_check.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 950)->__PVT__m_uvm_cycle_scopes.clear();
    if (((IData)(clone) & (VlNull{} != value))) {
        VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 953)->__VnoInFunc_clone(vlProcess, vlSymsp, cc);
        if ((VlNull{} != cc)) {
            VL_NULL_CHECK(cc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 954)->__VnoInFunc_set_name(vlProcess, vlSymsp, field_name);
        }
        value = cc;
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 958)->__PVT__status = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 959)->__PVT__object 
        = value;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 960)->__PVT__clone 
        = clone;
    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020007U, field_name);
    if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 964)
         ->__PVT__warning && (1U & (~ VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 964)
                                    ->__PVT__status)))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "NOMTC"s, VL_SFORMATF_N_NX("did not find a match for field %s",1
                                                                                , 'S',&(field_name)) , 0U, ""s, 0U);
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 967)->__PVT__cycle_check.clear();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_string_local(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field_name, std::string value, CData/*0:0*/ recurse) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_string_local\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 978)->__PVT__cycle_check.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 979)->__PVT__m_uvm_cycle_scopes.clear();
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 981)->__PVT__status = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 982)->__PVT__stringv 
        = value;
    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020008U, field_name);
    if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 986)
         ->__PVT__warning && (1U & (~ VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 986)
                                    ->__PVT__status)))) {
        this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "NOMTC"s, VL_SFORMATF_N_NX("did not find a match for field %s (@%0d)",2
                                                                                , 'S',&(field_name)
                                                                                , '~',32,__VlefCall_0__get_inst_id) , 0U, ""s, 0U);
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 989)->__PVT__cycle_check.clear();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__35__verbosity;
    __Vtask_uvm_report_warning__35__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__35__line;
    __Vtask_uvm_report_warning__35__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__36__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_create(vlProcess, vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), tmp);
    if ((VlNull{} == tmp)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        __Vtask_uvm_report_warning__35__line = 0U;
        this->__Vtask_uvm_report_warning__35__filename = ""s;
        __Vtask_uvm_report_warning__35__verbosity = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__35__message
                      ,"The create method failed for %s,  object cannot be cloned",1
                      , 'S',&(__VlefCall_1__get_name));
        this->__Vtask_uvm_report_warning__35__id = "CRFLD"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__36__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__36__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__35__id, this->__Vtask_uvm_report_warning__35__message, __Vtask_uvm_report_warning__35__verbosity, this->__Vtask_uvm_report_warning__35__filename, __Vtask_uvm_report_warning__35__line);
    } else {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1002)->__VnoInFunc_copy(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>{this});
    }
    clone__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__40__verbosity;
    __Vtask_uvm_report_warning__40__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__40__line;
    __Vtask_uvm_report_warning__40__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__41__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogAnd_1;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_0__get;
    {
        __VlefLogAnd_1 = (VlNull{} != rhs);
        if (__VlefLogAnd_1) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_copy_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1013)->__VnoInFunc_get(vlSymsp, rhs, __VlefCall_0__get);
            __VlefLogAnd_1 = (VlNull{} != __VlefCall_0__get);
        }
        if (__VlefLogAnd_1) {
            goto __Vlabel0;
        }
        if ((VlNull{} == rhs)) {
            __Vtask_uvm_report_warning__40__line = 0U;
            this->__Vtask_uvm_report_warning__40__filename = ""s;
            __Vtask_uvm_report_warning__40__verbosity = 0U;
            this->__Vtask_uvm_report_warning__40__message = "A null object was supplied to copy; copy is ignored"s;
            this->__Vtask_uvm_report_warning__40__id = "NULLCP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__41__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__40__id, this->__Vtask_uvm_report_warning__40__message, __Vtask_uvm_report_warning__40__verbosity, this->__Vtask_uvm_report_warning__40__filename, __Vtask_uvm_report_warning__40__line);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_copy_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1022)->__VnoInFunc_set(vlSymsp, rhs, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>{this});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth);
        this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, rhs, 1U, ""s);
        this->__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth 
            = (vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth 
               - (IData)(1U));
        if ((0U == vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__copy__Vstatic__depth)) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_copy_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1030)->__VnoInFunc_clear(vlSymsp);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_compare\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_info__58__verbosity;
    __Vtask_uvm_report_info__58__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__58__line;
    __Vtask_uvm_report_info__58__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__59__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_15__depth;
    std::string __VlefCall_14__get_type_name;
    std::string __VlefCall_13__get_type_name;
    CData/*0:0*/ __VlefLogAnd_12;
    std::string __VlefCall_11__get_type_name;
    std::string __VlefCall_10__get_type_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_9__get;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_8__get;
    CData/*0:0*/ __VlefLogAnd_7;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_6__get;
    IData/*31:0*/ __VlefCall_5__get_inst_id;
    std::string __VlefCall_4__get;
    IData/*31:0*/ __VlefCall_3__depth;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__depth;
    CData/*0:0*/ dc;
    CData/*0:0*/ done;
    compare__Vfuncrtn = 0U;
    dc = 0U;
    done = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1053)->__PVT__comparer 
        = ((VlNull{} != comparer) ? comparer : vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_comparer);
    comparer = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1056)
        ->__PVT__comparer;
    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1058)
                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1058)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    if ((1U & (~ (0U != __VlefCall_0__depth)))) {
        VL_NULL_CHECK(VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1059)
                      ->__PVT__compare_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1059)->__VnoInFunc_clear(vlSymsp);
        VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1060)->__PVT__result = 0U;
        VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1061)->__PVT__miscompares = ""s;
        VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1062)->__PVT__scope 
            = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1062)
            ->__PVT__scope;
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        if ((""s == __VlefCall_1__get_name)) {
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1064)
                          ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1064)->__VnoInFunc_down(vlSymsp, "<object>"s);
        } else {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1066)
                          ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1066)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name));
        }
    }
    if (((~ (IData)(done)) & (VlNull{} == rhs))) {
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1069)
                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1069)->__VnoInFunc_depth(vlSymsp, __VlefCall_3__depth);
        if ((0U != __VlefCall_3__depth)) {
            VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1070)->__VnoInFunc_print_msg_object(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>{this}, rhs);
        } else {
            VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1073)->__VnoInFunc_print_msg_object(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>{this}, rhs);
            VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1077)
                          ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1077)->__VnoInFunc_get(vlSymsp, __VlefCall_4__get);
            this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_5__get_inst_id);
            __Vtask_uvm_report_info__58__line = 0U;
            this->__Vtask_uvm_report_info__58__filename = ""s;
            __Vtask_uvm_report_info__58__verbosity 
                = VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1079)
                                ->__PVT__comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1079)
                ->__PVT__verbosity;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__58__message
                          ,"%0d Miscompare(s) for object %s@%0d vs. null",3
                          , '#',32,VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1076)
                          ->__PVT__result, 'S',&(__VlefCall_4__get)
                          , '~',32,__VlefCall_5__get_inst_id);
            this->__Vtask_uvm_report_info__58__id = "MISCMP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__59__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vfunc_get__59__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 145)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__58__id, this->__Vtask_uvm_report_info__58__message, __Vtask_uvm_report_info__58__verbosity, this->__Vtask_uvm_report_info__58__filename, __Vtask_uvm_report_info__58__line);
            done = 1U;
        }
    }
    __VlefLogAnd_7 = (1U & (~ (IData)(done)));
    if (__VlefLogAnd_7) {
        VL_NULL_CHECK(VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1084)
                      ->__PVT__compare_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1084)->__VnoInFunc_get(vlSymsp, rhs, __VlefCall_6__get);
        __VlefLogAnd_7 = (VlNull{} != __VlefCall_6__get);
    }
    if (__VlefLogAnd_7) {
        VL_NULL_CHECK(VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1085)
                      ->__PVT__compare_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1085)->__VnoInFunc_get(vlSymsp, rhs, __VlefCall_8__get);
        if ((__VlefCall_8__get != VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>{this})) {
            VL_NULL_CHECK(VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1086)
                          ->__PVT__compare_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1086)->__VnoInFunc_get(vlSymsp, rhs, __VlefCall_9__get);
            VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1086)->__VnoInFunc_print_msg_object(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>{this}, __VlefCall_9__get);
        }
        done = 1U;
    }
    __VlefLogAnd_12 = (((1U & (~ (IData)(done))) && VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1091)
                        ->__PVT__check_type) && (VlNull{} 
                                                 != rhs));
    if (__VlefLogAnd_12) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
        VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1091)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
        __VlefLogAnd_12 = (__VlefCall_10__get_type_name 
                           != __VlefCall_11__get_type_name);
    }
    if (__VlefLogAnd_12) {
        this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_13__get_type_name);
        VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1093)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_14__get_type_name);
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1092)->__PVT__stringv 
            = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN("lhs type = \""s, __VlefCall_13__get_type_name), "\" : rhs type = \""s), __VlefCall_14__get_type_name), "\""s);
        VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1094)->__VnoInFunc_print_msg(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1094)
                                                                                ->__PVT__stringv));
    }
    if ((1U & (~ (IData)(done)))) {
        VL_NULL_CHECK(VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1098)
                      ->__PVT__compare_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1098)->__VnoInFunc_set(vlSymsp, rhs, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>{this});
        this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, rhs, 4U, ""s);
        this->__VnoInFunc_do_compare(vlSymsp, rhs, comparer, dc);
    }
    VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1103)
                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1103)->__VnoInFunc_depth(vlSymsp, __VlefCall_15__depth);
    if ((1U == __VlefCall_15__depth)) {
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1104)
                      ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1104)->__VnoInFunc_up(vlSymsp, 0x2eU);
    }
    if ((VlNull{} != rhs)) {
        VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1108)->__VnoInFunc_print_rollup(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>{this}, rhs);
    }
    compare__Vfuncrtn = ((0U == VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1109)
                          ->__PVT__result) && (IData)(dc));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> &packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_pack\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1147)->__PVT__packer 
        = ((VlNull{} != packer) ? packer : vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_packer);
    packer = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1150)
        ->__PVT__packer;
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1152)->__VnoInFunc_reset(vlSymsp);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    VL_NULL_CHECK(VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1153)
                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1153)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name));
    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00000100U, ""s);
    this->__VnoInFunc_do_pack(vlSymsp, packer);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1158)->__VnoInFunc_set_packed_size(vlSymsp);
    VL_NULL_CHECK(VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1160)
                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1160)->__VnoInFunc_up(vlSymsp, 0x2eU);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__83__packer;
    // Body
    pack__Vfuncrtn = 0U;
    __Vtask_m_pack__83__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__83__packer);
    packer = __Vtask_m_pack__83__packer;
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1171)->__VnoInFunc_get_bits(vlSymsp, bitstream);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1172)->__VnoInFunc_get_packed_size(vlSymsp, pack__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_bytes\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__86__packer;
    // Body
    pack_bytes__Vfuncrtn = 0U;
    __Vtask_m_pack__86__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__86__packer);
    packer = __Vtask_m_pack__86__packer;
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1181)->__VnoInFunc_get_bytes(vlSymsp, bytestream);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1182)->__VnoInFunc_get_packed_size(vlSymsp, pack_bytes__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_ints(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_ints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_ints\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__89__packer;
    // Body
    pack_ints__Vfuncrtn = 0U;
    __Vtask_m_pack__89__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__89__packer);
    packer = __Vtask_m_pack__89__packer;
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1192)->__VnoInFunc_get_ints(vlSymsp, intstream);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1193)->__VnoInFunc_get_packed_size(vlSymsp, pack_ints__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_pre(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> &packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_pre\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1210)->__PVT__packer 
        = ((VlNull{} != packer) ? packer : vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_packer);
    packer = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1213)
        ->__PVT__packer;
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1214)->__VnoInFunc_reset(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_post(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_post\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__101__verbosity;
    __Vtask_uvm_report_warning__101__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__101__line;
    __Vtask_uvm_report_warning__101__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__102__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__get_packed_size;
    IData/*31:0*/ __VlefCall_1__get_packed_size;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ provided_size;
    provided_size = 0U;
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1225)->__VnoInFunc_get_packed_size(vlSymsp, provided_size);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    VL_NULL_CHECK(VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1228)
                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1228)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name));
    this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020002U, ""s);
    this->__VnoInFunc_do_unpack(vlSymsp, packer);
    VL_NULL_CHECK(VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1235)
                  ->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1235)->__VnoInFunc_up(vlSymsp, 0x2eU);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1237)->__VnoInFunc_get_packed_size(vlSymsp, __VlefCall_1__get_packed_size);
    if ((__VlefCall_1__get_packed_size != provided_size)) {
        VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1238)->__VnoInFunc_get_packed_size(vlSymsp, __VlefCall_2__get_packed_size);
        __Vtask_uvm_report_warning__101__line = 0U;
        this->__Vtask_uvm_report_warning__101__filename = ""s;
        __Vtask_uvm_report_warning__101__verbosity = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__101__message
                      ,"Unpack operation unsuccessful: unpacked %0d bits from a total of %0d bits",2
                      , '~',32,__VlefCall_2__get_packed_size
                      , '~',32,provided_size);
        this->__Vtask_uvm_report_warning__101__id = "BDUNPK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__102__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vfunc_get__102__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__101__id, this->__Vtask_uvm_report_warning__101__message, __Vtask_uvm_report_warning__101__verbosity, this->__Vtask_uvm_report_warning__101__filename, __Vtask_uvm_report_warning__101__line);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__104__packer;
    // Body
    unpack__Vfuncrtn = 0U;
    __Vtask_m_unpack_pre__104__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__104__packer);
    packer = __Vtask_m_unpack_pre__104__packer;
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1250)->__VnoInFunc_put_bits(vlSymsp, bitstream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1252)->__VnoInFunc_set_packed_size(vlSymsp);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1253)->__VnoInFunc_get_packed_size(vlSymsp, unpack__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_bytes\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__109__packer;
    // Body
    unpack_bytes__Vfuncrtn = 0U;
    __Vtask_m_unpack_pre__109__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__109__packer);
    packer = __Vtask_m_unpack_pre__109__packer;
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1263)->__VnoInFunc_put_bytes(vlSymsp, bytestream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1265)->__VnoInFunc_set_packed_size(vlSymsp);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1266)->__VnoInFunc_get_packed_size(vlSymsp, unpack_bytes__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_ints(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_ints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_ints\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__114__packer;
    // Body
    unpack_ints__Vfuncrtn = 0U;
    __Vtask_m_unpack_pre__114__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__114__packer);
    packer = __Vtask_m_unpack_pre__114__packer;
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1276)->__VnoInFunc_put_ints(vlSymsp, intstream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1278)->__VnoInFunc_set_packed_size(vlSymsp);
    VL_NULL_CHECK(packer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1279)->__VnoInFunc_get_packed_size(vlSymsp, unpack_ints__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if ((VlNull{} == recorder)) {
            recorder = vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_recorder;
        }
        if ((1U & (~ (0U != VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1299)
                      ->__PVT__tr_handle)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1301)->__PVT__recorder 
            = recorder;
        VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1302)->__PVT__recording_depth 
            = ((IData)(1U) + VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1302)
               ->__PVT__recording_depth);
        this->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00000040U, ""s);
        this->__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
        VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1306)->__PVT__recording_depth 
            = (VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1306)
               ->__PVT__recording_depth - (IData)(1U));
        if ((0U == VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1308)
             ->__PVT__recording_depth)) {
            VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_object.svh", 1309)->__PVT__tr_handle = 0U;
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_get_report_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_get_report_object\n"); );
    // Body
    m_get_report_object__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_inst_id = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_object() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::~\n"); );
}
