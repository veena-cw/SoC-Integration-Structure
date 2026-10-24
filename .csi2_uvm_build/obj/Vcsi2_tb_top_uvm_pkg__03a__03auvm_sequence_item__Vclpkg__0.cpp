// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi3> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi3__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::init(vlProcess, vlSymsp, name, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_sequence_id = 0xffffffffU;
    this->__PVT__m_depth = 0xffffffffU;
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequence_item"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi3> __Vfunc_get__1__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi3__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__1__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequence_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequence_id\n"); );
    // Body
    this->__PVT__m_sequence_id = id;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_id(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_id\n"); );
    // Body
    get_sequence_id__Vfuncrtn = this->__PVT__m_sequence_id;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_item_context(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent_seq, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_item_context\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_depth;
    this->__VnoInFunc_set_use_sequence_info(vlSymsp, 1U);
    if ((VlNull{} != parent_seq)) {
        this->__VnoInFunc_set_parent_sequence(vlSymsp, parent_seq);
    }
    if (((VlNull{} == sequencer) & (VlNull{} != this->__PVT__m_parent_sequence))) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 114)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
    }
    this->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
    if ((VlNull{} != this->__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 116)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_0__get_depth);
        this->__VnoInFunc_set_depth(vlSymsp, ((IData)(1U) 
                                              + __VlefCall_0__get_depth));
    }
    this->__VnoInFunc_reseed(vlProcess, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_use_sequence_info(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_use_sequence_info\n"); );
    // Body
    this->__PVT__m_use_sequence_info = value;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_use_sequence_info(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_sequence_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_use_sequence_info\n"); );
    // Body
    get_use_sequence_info__Vfuncrtn = this->__PVT__m_use_sequence_info;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_id_info(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_id_info\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__get_sequence_id;
    IData/*31:0*/ __VlefCall_1__get_transaction_id;
    std::string __VlefCall_0__get_full_name;
    if ((VlNull{} == item)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "set_id_info called with null parameter"s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 153)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_1__get_transaction_id);
    this->__VnoInFunc_set_transaction_id(vlSymsp, __VlefCall_1__get_transaction_id);
    VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 154)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_2__get_sequence_id);
    this->__VnoInFunc_set_sequence_id(vlSymsp, __VlefCall_2__get_sequence_id);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequencer(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequencer\n"); );
    // Body
    this->__PVT__m_sequencer = sequencer;
    this->__VnoInFunc_m_set_p_sequencer(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequencer(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequencer\n"); );
    // Body
    get_sequencer__Vfuncrtn = this->__PVT__m_sequencer;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_parent_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_parent_sequence\n"); );
    // Body
    this->__PVT__m_parent_sequence = parent;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_parent_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &get_parent_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_parent_sequence\n"); );
    // Body
    get_parent_sequence__Vfuncrtn = this->__PVT__m_parent_sequence;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_depth(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_depth\n"); );
    // Body
    this->__PVT__m_depth = value;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_depth(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_depth\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_depth;
    {
        get_depth__Vfuncrtn = 0U;
        if ((0xffffffffU != this->__PVT__m_depth)) {
            get_depth__Vfuncrtn = this->__PVT__m_depth;
            goto __Vlabel0;
        }
        if ((VlNull{} == this->__PVT__m_parent_sequence)) {
            this->__PVT__m_depth = 1U;
        } else {
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 228)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_0__get_depth);
            this->__PVT__m_depth = ((IData)(1U) + __VlefCall_0__get_depth);
        }
        get_depth__Vfuncrtn = this->__PVT__m_depth;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_is_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_is_item\n"); );
    // Body
    is_item__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    if ((VlNull{} != this->__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 251)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s);
    } else if ((VlNull{} != this->__PVT__m_sequencer)) {
        VL_NULL_CHECK(this->__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 253)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s);
    }
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
    if ((""s != __VlefCall_2__get_name)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(get_full_name__Vfuncrtn, __VlefCall_3__get_name);
    } else {
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(get_full_name__Vfuncrtn, "_item"s);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_root_sequence_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence_name\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> root_seq;
    get_root_sequence_name__Vfuncrtn = ""s;
    this->__VnoInFunc_get_root_sequence(vlSymsp, root_seq);
    if ((VlNull{} == root_seq)) {
        get_root_sequence_name__Vfuncrtn = ""s;
    } else {
        VL_NULL_CHECK(root_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 272)->__VnoInFunc_get_name(vlSymsp, get_root_sequence_name__Vfuncrtn);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_m_set_p_sequencer(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_m_set_p_sequencer\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &get_root_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__24__Vfuncout;
    // Body
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_0__get_parent_sequence;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> root_seq_base;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> root_seq;
    {
        root_seq_base = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item>{this};
        while (true) {
            VL_NULL_CHECK(root_seq_base, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 294)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_0__get_parent_sequence);
            if ((VlNull{} != __VlefCall_0__get_parent_sequence)) {
                VL_NULL_CHECK(root_seq_base, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 295)->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__24__Vfuncout);
                root_seq_base = __Vtask_get_parent_sequence__24__Vfuncout;
                __VlefExpr_1 = VL_CAST_DYNAMIC(root_seq_base, root_seq);
                if (VL_UNLIKELY(((! __VlefExpr_1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_sequence_item.svh:296: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_item.get_root_sequence", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 296, "");
                }
            } else {
                get_root_sequence__Vfuncrtn = root_seq;
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_sequence_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_path\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__27__Vfuncout;
    // Body
    std::string __VlefCall_1__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_0__get_parent_sequence;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> this_item;
    std::string seq_path;
    {
        get_sequence_path__Vfuncrtn = ""s;
        seq_path = ""s;
        this_item = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item>{this};
        this->__VnoInFunc_get_name(vlSymsp, seq_path);
        while (true) {
            VL_NULL_CHECK(this_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 315)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_0__get_parent_sequence);
            if ((VlNull{} != __VlefCall_0__get_parent_sequence)) {
                VL_NULL_CHECK(this_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 316)->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__27__Vfuncout);
                this_item = __Vtask_get_parent_sequence__27__Vfuncout;
                VL_NULL_CHECK(this_item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 317)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                seq_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_name, "."s), seq_path);
            } else {
                get_sequence_path__Vfuncrtn = seq_path;
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_m_get_client_info(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> &client, std::string &m_get_client_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_m_get_client_info\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__29__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCond_2;
    std::string __VlefCall_1__get_sequence_path;
    std::string __VlefCall_0__get_sequence_path;
    {
        m_get_client_info__Vfuncrtn = ""s;
        if ((""s != this->__PVT__m_client_str)) {
            client = this->__PVT__m_client;
            m_get_client_info__Vfuncrtn = this->__PVT__m_client_str;
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__m_sequencer)) {
            this->__PVT__m_client = this->__PVT__m_sequencer;
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
            this->__PVT__m_client = __Vfunc_get__29__Vfuncout;
        }
        VL_NULL_CHECK(this->__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 352)->__VnoInFunc_get_report_handler(vlSymsp, this->__PVT__m_rh);
        client = this->__PVT__m_client;
        VL_NULL_CHECK(client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 355)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__PVT__m_client_str);
        if ((""s == this->__PVT__m_client_str)) {
            this->__VnoInFunc_get_sequence_path(vlSymsp, __VlefCall_0__get_sequence_path);
            __VlefCond_2 = VL_CONCATN_NNN("reporter@@"s, __VlefCall_0__get_sequence_path);
        } else {
            this->__VnoInFunc_get_sequence_path(vlSymsp, __VlefCall_1__get_sequence_path);
            __VlefCond_2 = VL_CONCATN_NNN(VL_CONCATN_NNN(this->__PVT__m_client_str, "@@"s), __VlefCall_1__get_sequence_path);
        }
        this->__PVT__m_client_str = __VlefCond_2;
        m_get_client_info__Vfuncrtn = this->__PVT__m_client_str;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_m_get_client_info__34__client;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client;
    std::string str;
    this->__VnoInFunc_m_get_client_info(vlProcess, vlSymsp, __Vfunc_m_get_client_info__34__client, str);
    client = __Vfunc_m_get_client_info__34__client;
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 374)->__VnoInFunc_report(vlProcess, vlSymsp, severity, str, id, message, verbosity, filename, line, client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_info(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_info\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_m_get_client_info__36__client;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client;
    std::string str;
    this->__VnoInFunc_m_get_client_info(vlProcess, vlSymsp, __Vfunc_m_get_client_info__36__client, str);
    client = __Vfunc_m_get_client_info__36__client;
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 388)->__VnoInFunc_report(vlProcess, vlSymsp, 0U, str, id, message, verbosity, filename, line, client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_warning\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_m_get_client_info__38__client;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client;
    std::string str;
    this->__VnoInFunc_m_get_client_info(vlProcess, vlSymsp, __Vfunc_m_get_client_info__38__client, str);
    client = __Vfunc_m_get_client_info__38__client;
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 402)->__VnoInFunc_report(vlProcess, vlSymsp, 1U, str, id, message, verbosity, filename, line, client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_error\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_m_get_client_info__40__client;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client;
    std::string str;
    this->__VnoInFunc_m_get_client_info(vlProcess, vlSymsp, __Vfunc_m_get_client_info__40__client, str);
    client = __Vfunc_m_get_client_info__40__client;
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 416)->__VnoInFunc_report(vlProcess, vlSymsp, 2U, str, id, message, verbosity, filename, line, client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_fatal\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> __Vfunc_m_get_client_info__42__client;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object> client;
    std::string str;
    this->__VnoInFunc_m_get_client_info(vlProcess, vlSymsp, __Vfunc_m_get_client_info__42__client, str);
    client = __Vfunc_m_get_client_info__42__client;
    VL_NULL_CHECK(this->__PVT__m_rh, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 435)->__VnoInFunc_report(vlProcess, vlSymsp, 3U, str, id, message, verbosity, filename, line, client);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_enabled\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__44__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__get_report_action;
    IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    uvm_report_enabled__Vfuncrtn = 0U;
    if ((VlNull{} == this->__PVT__m_client)) {
        if ((VlNull{} != this->__PVT__m_sequencer)) {
            this->__PVT__m_client = this->__PVT__m_sequencer;
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
            this->__PVT__m_client = __Vfunc_get__44__Vfuncout;
        }
    }
    VL_NULL_CHECK(this->__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 446)->__VnoInFunc_get_report_verbosity_level(vlSymsp, severity, id, __VlefCall_0__get_report_verbosity_level);
    __VlefLogOr_2 = VL_LTS_III(32, __VlefCall_0__get_report_verbosity_level, verbosity);
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        VL_NULL_CHECK(this->__PVT__m_client, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 447)->__VnoInFunc_get_report_action(vlSymsp, severity, id, __VlefCall_1__get_report_action);
        __VlefLogOr_2 = (0U == __VlefCall_1__get_report_action);
    }
    uvm_report_enabled__Vfuncrtn = ((IData)(__VlefLogOr_2)
                                     ? 0U : 1U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string temp_str0;
    std::string temp_str1;
    IData/*31:0*/ depth;
    temp_str0 = ""s;
    temp_str1 = ""s;
    this->__VnoInFunc_get_depth(vlSymsp, depth);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if (((IData)(this->__PVT__print_sequence_info) 
         | (IData)(this->__PVT__m_use_sequence_info))) {
        VL_EXTENDS_WI(4096,32, __Vtemp_1, depth);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 463)->__VnoInFunc_print_int(vlSymsp, "depth"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
        if ((VlNull{} != this->__PVT__m_parent_sequence)) {
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 465)->__VnoInFunc_get_name(vlSymsp, temp_str0);
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 466)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, temp_str1);
        }
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 468)->__VnoInFunc_print_string(vlSymsp, "parent sequence (name)"s, temp_str0, 0x2eU);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 469)->__VnoInFunc_print_string(vlSymsp, "parent sequence (full name)"s, temp_str1, 0x2eU);
        temp_str1 = ""s;
        if ((VlNull{} != this->__PVT__m_sequencer)) {
            VL_NULL_CHECK(this->__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 472)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, temp_str1);
        }
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_item.svh", 474)->__VnoInFunc_print_string(vlSymsp, "sequencer"s, temp_str1, 0x2eU);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_use_sequence_info = 0;
    __PVT__print_sequence_info = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::~\n"); );
}
