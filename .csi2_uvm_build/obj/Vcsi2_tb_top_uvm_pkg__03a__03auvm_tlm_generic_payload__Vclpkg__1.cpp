// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_record\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_9__get_name;
    std::string __VlefCall_8__get_type_name;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_type_name;
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefCall_0__is_recording_enabled;
    IData/*31:0*/ unnamedblk52__DOT__i;
    IData/*31:0*/ unnamedblk53__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk54__DOT__ext;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk54__DOT__ext__Vnext;
    CData/*0:0*/ unnamedblk54__DOT__ext__Vmore;
    unnamedblk54__DOT__ext__Vmore = 0;
    {
        this->__VnoInFunc_is_recording_enabled(vlSymsp, __VlefCall_0__is_recording_enabled);
        if ((1U & (~ (IData)(__VlefCall_0__is_recording_enabled)))) {
            goto __Vlabel0;
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
        if (((VlNull{} != recorder) && (0U != VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 567)
                                        ->__PVT__tr_handle))) {
            VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 567)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
            if ((1U & (~ ("uvm_recorder"s != __VlefCall_1__get_type_name)))) {
                VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 567)->__VnoInFunc_m_set_attribute(vlSymsp, VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 567)
                                                                                ->__PVT__tr_handle, "address"s, VL_SFORMATF_N_NX("%p",1
                                                                                , '#',64,this->__PVT__m_address) );
            }
        }
        if (((VlNull{} != recorder) && (0U != VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 568)
                                        ->__PVT__tr_handle))) {
            VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 568)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            if ((1U & (~ ("uvm_recorder"s != __VlefCall_2__get_type_name)))) {
                __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name63
                    [(3U & this->__PVT__m_command)];
                VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 568)->__VnoInFunc_m_set_attribute(vlSymsp, VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 568)
                                                                                ->__PVT__tr_handle, "command"s, VL_SFORMATF_N_NX("%p",1
                                                                                , 'S',&(__Vtemp_1)) );
            }
        }
        if (((VlNull{} != recorder) && (0U != VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 569)
                                        ->__PVT__tr_handle))) {
            VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 569)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
            if ((1U & (~ ("uvm_recorder"s != __VlefCall_3__get_type_name)))) {
                VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 569)->__VnoInFunc_m_set_attribute(vlSymsp, VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 569)
                                                                                ->__PVT__tr_handle, "data_length"s, VL_SFORMATF_N_NX("%p",1
                                                                                , '#',32,this->__PVT__m_length) );
            }
        }
        if (((VlNull{} != recorder) && (0U != VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 570)
                                        ->__PVT__tr_handle))) {
            VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 570)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            if ((1U & (~ ("uvm_recorder"s != __VlefCall_4__get_type_name)))) {
                VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 570)->__VnoInFunc_m_set_attribute(vlSymsp, VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 570)
                                                                                ->__PVT__tr_handle, "byte_enable_length"s, VL_SFORMATF_N_NX("%p",1
                                                                                , '#',32,this->__PVT__m_length) );
            }
        }
        if (((VlNull{} != recorder) && (0U != VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 571)
                                        ->__PVT__tr_handle))) {
            VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 571)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
            if ((1U & (~ ("uvm_recorder"s != __VlefCall_5__get_type_name)))) {
                __Vtemp_2 = Vcsi2_tb_top___024unit::__Venumtab_enum_name65
                    .at(this->__PVT__m_response_status);
                VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 571)->__VnoInFunc_m_set_attribute(vlSymsp, VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 571)
                                                                                ->__PVT__tr_handle, "response_status"s, VL_SFORMATF_N_NX("%p",1
                                                                                , 'S',&(__Vtemp_2)) );
            }
        }
        if (((VlNull{} != recorder) && (0U != VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 572)
                                        ->__PVT__tr_handle))) {
            VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 572)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
            if ((1U & (~ ("uvm_recorder"s != __VlefCall_6__get_type_name)))) {
                VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 572)->__VnoInFunc_m_set_attribute(vlSymsp, VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 572)
                                                                                ->__PVT__tr_handle, "streaming_width"s, VL_SFORMATF_N_NX("%p",1
                                                                                , '#',32,this->__PVT__m_streaming_width) );
            }
        }
        unnamedblk52__DOT__i = 0U;
        unnamedblk52__DOT__i = 0U;
        while ((unnamedblk52__DOT__i < this->__PVT__m_length)) {
            if (((VlNull{} != recorder) && (0U != VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 575)
                                            ->__PVT__tr_handle))) {
                VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 575)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
                if ((1U & (~ ("uvm_recorder"s != __VlefCall_7__get_type_name)))) {
                    VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 575)->__VnoInFunc_m_set_attribute(vlSymsp, VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 575)
                                                                                ->__PVT__tr_handle, VL_SFORMATF_N_NX("\\data[%0d] ",1
                                                                                , '~',32,unnamedblk52__DOT__i) , VL_SFORMATF_N_NX("%p",1
                                                                                , '#',8,this->__PVT__m_data.at(unnamedblk52__DOT__i)) );
                }
            }
            unnamedblk52__DOT__i = ((IData)(1U) + unnamedblk52__DOT__i);
        }
        unnamedblk53__DOT__i = 0U;
        unnamedblk53__DOT__i = 0U;
        while ((unnamedblk53__DOT__i < this->__PVT__m_byte_enable_length)) {
            if (((VlNull{} != recorder) && (0U != VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 578)
                                            ->__PVT__tr_handle))) {
                VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 578)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                if ((1U & (~ ("uvm_recorder"s != __VlefCall_8__get_type_name)))) {
                    VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 578)->__VnoInFunc_m_set_attribute(vlSymsp, VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 578)
                                                                                ->__PVT__tr_handle, VL_SFORMATF_N_NX("\\byte_en[%0d] ",1
                                                                                , '~',32,unnamedblk53__DOT__i) , VL_SFORMATF_N_NX("%p",1
                                                                                , '#',8,this->__PVT__m_byte_enable.at(unnamedblk53__DOT__i)) );
                }
            }
            unnamedblk53__DOT__i = ((IData)(1U) + unnamedblk53__DOT__i);
        }
        unnamedblk54__DOT__ext__Vmore = (0U != this->__PVT__m_extensions.first(unnamedblk54__DOT__ext__Vnext));
        while (unnamedblk54__DOT__ext__Vmore) {
            unnamedblk54__DOT__ext = unnamedblk54__DOT__ext__Vnext;
            unnamedblk54__DOT__ext__Vmore = (0U != this->__PVT__m_extensions.next(unnamedblk54__DOT__ext__Vnext));
            VL_NULL_CHECK(unnamedblk54__DOT__ext, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 581)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
            VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 581)->__VnoInFunc_record_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_9__get_name), this->__PVT__m_extensions
                                                                                .at(unnamedblk54__DOT__ext));
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_response_string;
    std::string __VlefCall_0__convert2string;
    IData/*31:0*/ unnamedblk55__DOT__i;
    std::string msg;
    std::string s;
    convert2string__Vfuncrtn = ""s;
    msg = ""s;
    s = ""s;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_0__convert2string);
    __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name63
        [(3U & this->__PVT__m_command)];
    VL_SFORMAT_NX(msg,"%s %s [0x%16x] =",3, 'S',&(__VlefCall_0__convert2string)
                  , 'S',&(__Vtemp_1), '#',64,this->__PVT__m_address);
    unnamedblk55__DOT__i = 0U;
    unnamedblk55__DOT__i = 0U;
    while ((unnamedblk55__DOT__i < this->__PVT__m_length)) {
        if ((1U & ((~ (0U != this->__PVT__m_byte_enable_length)) 
                   | (0xffU == this->__PVT__m_byte_enable.at(
                                                             VL_MODDIV_III(32, unnamedblk55__DOT__i, this->__PVT__m_byte_enable_length)))))) {
            VL_SFORMAT_NX(s," %02x",1, '#',8,this->__PVT__m_data.at(unnamedblk55__DOT__i));
        } else {
            s = " --"s;
        }
        msg = VL_CONCATN_NNN(msg, s);
        unnamedblk55__DOT__i = ((IData)(1U) + unnamedblk55__DOT__i);
    }
    this->__VnoInFunc_get_response_string(vlSymsp, __VlefCall_1__get_response_string);
    msg = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(msg, " (status="s), __VlefCall_1__get_response_string), ")"s);
    convert2string__Vfuncrtn = msg;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_command(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_command__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_command\n"); );
    // Body
    get_command__Vfuncrtn = this->__PVT__m_command;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_command(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ command) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_command\n"); );
    // Body
    this->__PVT__m_command = command;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_read\n"); );
    // Body
    is_read__Vfuncrtn = (0U == this->__PVT__m_command);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_read(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_read\n"); );
    // Body
    this->__VnoInFunc_set_command(vlSymsp, 0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_write__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_write\n"); );
    // Body
    is_write__Vfuncrtn = (1U == this->__PVT__m_command);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_write(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_write\n"); );
    // Body
    this->__VnoInFunc_set_command(vlSymsp, 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_address(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_address\n"); );
    // Body
    this->__PVT__m_address = addr;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_address(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_address\n"); );
    // Body
    get_address__Vfuncrtn = this->__PVT__m_address;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_data\n"); );
    // Body
    p = this->__PVT__m_data;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_data(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_data\n"); );
    // Body
    this->__PVT__m_data = p;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_data_length(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_data_length__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_data_length\n"); );
    // Body
    get_data_length__Vfuncrtn = this->__PVT__m_length;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_data_length(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ length) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_data_length\n"); );
    // Body
    this->__PVT__m_length = length;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_streaming_width(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_streaming_width__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_streaming_width\n"); );
    // Body
    get_streaming_width__Vfuncrtn = this->__PVT__m_streaming_width;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_streaming_width(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ width) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_streaming_width\n"); );
    // Body
    this->__PVT__m_streaming_width = width;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_byte_enable(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_byte_enable\n"); );
    // Body
    p = this->__PVT__m_byte_enable;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_byte_enable(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_byte_enable\n"); );
    // Body
    this->__PVT__m_byte_enable = p;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_byte_enable_length(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_byte_enable_length__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_byte_enable_length\n"); );
    // Body
    get_byte_enable_length__Vfuncrtn = this->__PVT__m_byte_enable_length;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_byte_enable_length(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ length) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_byte_enable_length\n"); );
    // Body
    this->__PVT__m_byte_enable_length = length;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_dmi_allowed(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ dmi) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_dmi_allowed\n"); );
    // Body
    this->__PVT__m_dmi = dmi;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_dmi_allowed(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_dmi_allowed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_dmi_allowed\n"); );
    // Body
    is_dmi_allowed__Vfuncrtn = this->__PVT__m_dmi;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_response_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_response_status\n"); );
    // Body
    get_response_status__Vfuncrtn = this->__PVT__m_response_status;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_response_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_response_status\n"); );
    // Body
    this->__PVT__m_response_status = status;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_response_ok(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_ok__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_response_ok\n"); );
    // Body
    is_response_ok__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__m_response_status);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_response_error(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_error__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_response_error\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_response_ok;
    is_response_error__Vfuncrtn = 0U;
    this->__VnoInFunc_is_response_ok(vlSymsp, __VlefCall_0__is_response_ok);
    is_response_error__Vfuncrtn = (1U & (~ (IData)(__VlefCall_0__is_response_ok)));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_response_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_response_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_response_string\n"); );
    // Body
    {
        get_response_string__Vfuncrtn = ""s;
        if ((1U == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "OK"s;
            goto __Vlabel0;
        } else if ((0U == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "INCOMPLETE"s;
            goto __Vlabel0;
        } else if ((0xffffffffU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "GENERIC_ERROR"s;
            goto __Vlabel0;
        } else if ((0xfffffffeU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "ADDRESS_ERROR"s;
            goto __Vlabel0;
        } else if ((0xfffffffdU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "COMMAND_ERROR"s;
            goto __Vlabel0;
        } else if ((0xfffffffcU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "BURST_ERROR"s;
            goto __Vlabel0;
        } else if ((0xfffffffbU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "BYTE_ENABLE_ERROR"s;
            goto __Vlabel0;
        }
        get_response_string__Vfuncrtn = "UNKNOWN_RESPONSE"s;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_extension(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> ext, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> &set_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_extension\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle;
    VL_NULL_CHECK(ext, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 854)->__VnoInFunc_get_type_handle(vlSymsp, ext_handle);
    set_extension__Vfuncrtn = (this->__PVT__m_extensions.exists(ext_handle)
                                ? this->__PVT__m_extensions
                               .at(ext_handle) : VlNull{});
    this->__PVT__m_extensions.atWrite(ext_handle) = ext;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_num_extensions(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_extensions__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_num_extensions\n"); );
    // Body
    get_num_extensions__Vfuncrtn = this->__PVT__m_extensions.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_extension(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> &get_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_extension\n"); );
    // Body
    {
        if ((! this->__PVT__m_extensions.exists(ext_handle))) {
            get_extension__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_extension__Vfuncrtn = this->__PVT__m_extensions
            .at(ext_handle);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_clear_extension(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_clear_extension\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if (this->__PVT__m_extensions.exists(ext_handle)) {
        this->__PVT__m_extensions.erase(ext_handle);
    } else {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "GP_EXT"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "GP_EXT"s, "Unable to find extension to clear"s, 0x000000c8U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh"s, 0x0000037cU);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_clear_extensions(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_clear_extensions\n"); );
    // Body
    this->__PVT__m_extensions.clear();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_pre_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_pre_randomize\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk56__DOT__ext_;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk56__DOT__ext___Vnext;
    CData/*0:0*/ unnamedblk56__DOT__ext___Vmore;
    unnamedblk56__DOT__ext___Vmore = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk56__DOT__unnamedblk57__DOT__ext;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    IData/*31:0*/ i;
    i = 0U;
    this->__PVT__m_rand_exts.renew(this->__PVT__m_extensions.size());
    unnamedblk56__DOT__ext___Vmore = (0U != this->__PVT__m_extensions.first(unnamedblk56__DOT__ext___Vnext));
    while (unnamedblk56__DOT__ext___Vmore) {
        unnamedblk56__DOT__ext_ = unnamedblk56__DOT__ext___Vnext;
        unnamedblk56__DOT__ext___Vmore = (0U != this->__PVT__m_extensions.next(unnamedblk56__DOT__ext___Vnext));
        unnamedblk56__DOT__unnamedblk57__DOT__ext = unnamedblk56__DOT__ext_;
        __Vincrement1 = i;
        i = ((IData)(1U) + i);
        this->__PVT__m_rand_exts.atWrite(__Vincrement1) 
            = this->__PVT__m_extensions.at(unnamedblk56__DOT__unnamedblk57__DOT__ext);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_post_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_rand_exts.clear();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    {
        // Inlined CFunc: __VnoInFunc_pre_randomize
        VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext_;
        VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext___Vnext;
        CData/*0:0*/ __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext___Vmore;
        __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext___Vmore = 0;
        VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_extension_base> __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__unnamedblk57__DOT__ext;
        IData/*31:0*/ __Vinline_0___VnoInFunc_pre_randomize___Vincrement1;
        __Vinline_0___VnoInFunc_pre_randomize___Vincrement1 = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_pre_randomize_i;
        __Vinline_0___VnoInFunc_pre_randomize_i = 0U;
        this->__PVT__m_rand_exts.renew(this->__PVT__m_extensions.size());
        __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext___Vmore 
            = (0U != this->__PVT__m_extensions.first(__Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext___Vnext));
        while (__Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext___Vmore) {
            __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext_ 
                = __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext___Vnext;
            __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext___Vmore 
                = (0U != this->__PVT__m_extensions.next(__Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext___Vnext));
            __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__unnamedblk57__DOT__ext 
                = __Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__ext_;
            __Vinline_0___VnoInFunc_pre_randomize___Vincrement1 
                = __Vinline_0___VnoInFunc_pre_randomize_i;
            __Vinline_0___VnoInFunc_pre_randomize_i 
                = ((IData)(1U) + __Vinline_0___VnoInFunc_pre_randomize_i);
            this->__PVT__m_rand_exts.atWrite(__Vinline_0___VnoInFunc_pre_randomize___Vincrement1) 
                = this->__PVT__m_extensions.at(__Vinline_0___VnoInFunc_pre_randomize_unnamedblk56__DOT__unnamedblk57__DOT__ext);
        }
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
    {
        // Inlined CFunc: __VnoInFunc_post_randomize
        this->__PVT__m_rand_exts.clear();
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc___VBasicRand\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0;
    unnamedblk2_1__DOT____Vrandarr___0 = 0;
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0__Vloopsize;
    unnamedblk2_1__DOT____Vrandarr___0__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2_2__DOT____Vrandarr___0;
    unnamedblk2_2__DOT____Vrandarr___0 = 0;
    IData/*31:0*/ unnamedblk2_2__DOT____Vrandarr___0__Vloopsize;
    unnamedblk2_2__DOT____Vrandarr___0__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2_3__DOT____Vrandarr___0;
    unnamedblk2_3__DOT____Vrandarr___0 = 0;
    IData/*31:0*/ unnamedblk2_3__DOT____Vrandarr___0__Vloopsize;
    unnamedblk2_3__DOT____Vrandarr___0__Vloopsize = 0;
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__m_address = VL_RANDOM_RNG_Q(__Vm_rng);
    this->__PVT__m_command = Vcsi2_tb_top___024unit::__Venumvaltab_0
        [VL_MODDIV_III(32, (IData)(VL_RANDOM_RNG_I(__Vm_rng)), (IData)(3U))];
    unnamedblk2_1__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_1__DOT____Vrandarr___0 < this->__PVT__m_data.size())) {
        unnamedblk2_1__DOT____Vrandarr___0__Vloopsize 
            = this->__PVT__m_data.size();
        this->__PVT__m_data.atWrite(unnamedblk2_1__DOT____Vrandarr___0) 
            = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
        if ((unnamedblk2_1__DOT____Vrandarr___0__Vloopsize 
             <= this->__PVT__m_data.size())) {
            unnamedblk2_1__DOT____Vrandarr___0 = ((IData)(1U) 
                                                  + unnamedblk2_1__DOT____Vrandarr___0);
        }
    }
    this->__PVT__m_length = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__m_response_status = Vcsi2_tb_top___024unit::__Venumvaltab_1
        [VL_MODDIV_III(32, (IData)(VL_RANDOM_RNG_I(__Vm_rng)), (IData)(7U))];
    unnamedblk2_2__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_2__DOT____Vrandarr___0 < this->__PVT__m_byte_enable.size())) {
        unnamedblk2_2__DOT____Vrandarr___0__Vloopsize 
            = this->__PVT__m_byte_enable.size();
        this->__PVT__m_byte_enable.atWrite(unnamedblk2_2__DOT____Vrandarr___0) 
            = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
        if ((unnamedblk2_2__DOT____Vrandarr___0__Vloopsize 
             <= this->__PVT__m_byte_enable.size())) {
            unnamedblk2_2__DOT____Vrandarr___0 = ((IData)(1U) 
                                                  + unnamedblk2_2__DOT____Vrandarr___0);
        }
    }
    this->__PVT__m_byte_enable_length = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__m_streaming_width = VL_RANDOM_RNG_I(__Vm_rng);
    unnamedblk2_3__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_3__DOT____Vrandarr___0 < this->__PVT__m_rand_exts.size())) {
        unnamedblk2_3__DOT____Vrandarr___0__Vloopsize 
            = this->__PVT__m_rand_exts.size();
        if ((VlNull{} != this->__PVT__m_rand_exts.atWrite(unnamedblk2_3__DOT____Vrandarr___0))) {
            VL_NULL_CHECK(this->__PVT__m_rand_exts.atWrite(unnamedblk2_3__DOT____Vrandarr___0), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/tlm2/uvm_tlm2_generic_payload.svh", 103)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                      & __VlefCall_0__randomize);
        }
        if ((unnamedblk2_3__DOT____Vrandarr___0__Vloopsize 
             <= this->__PVT__m_rand_exts.size())) {
            unnamedblk2_3__DOT____Vrandarr___0 = ((IData)(1U) 
                                                  + unnamedblk2_3__DOT____Vrandarr___0);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_address = 0;
    __PVT__m_command = 0;
    __PVT__m_data.atDefault() = 0;
    __PVT__m_length = 0;
    __PVT__m_response_status = 0;
    __PVT__m_dmi = 0;
    __PVT__m_byte_enable.atDefault() = 0;
    __PVT__m_byte_enable_length = 0;
    __PVT__m_streaming_width = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_generic_payload::~\n"); );
}
