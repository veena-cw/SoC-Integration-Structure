// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__physical = 1U;
    this->__PVT__big_endian = 1U;
    this->__PVT__scope = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack, vlSymsp);
    this->__PVT__byte_size = 8U;
    this->__PVT__word_size = 0x00000010U;
    this->__PVT__policy = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_index_error(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string id, IData/*31:0*/ sz) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_index_error\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "PCKIDX"s, VL_SFORMATF_N_NX("index %0d for get_%0s too large; valid index range is 0-%0d.",3
                                                                                , '~',32,index
                                                                                , 'S',&(id)
                                                                                , '~',32,
                                                                                (VL_DIVS_III(32, 
                                                                                ((this->__PVT__m_packed_size 
                                                                                + sz) 
                                                                                - (IData)(1U)), sz) 
                                                                                - (IData)(1U))) , 0U, ""s, 0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_enough_bits(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ needed, std::string id, CData/*0:0*/ &enough_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_enough_bits\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        enough_bits__Vfuncrtn = 0U;
        if (VL_LTS_III(32, (this->__PVT__m_packed_size 
                            - this->__PVT__count), needed)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "PCKSZ"s, VL_SFORMATF_N_NX("%0d bits needed to unpack %0s, yet only %0d available.",3
                                                                                , '~',32,needed
                                                                                , 'S',&(id)
                                                                                , '~',32,
                                                                                (this->__PVT__m_packed_size 
                                                                                - this->__PVT__count)) , 0U, ""s, 0U);
            enough_bits__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        enough_bits__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_packed_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_size\n"); );
    // Body
    get_packed_size__Vfuncrtn = this->__PVT__m_packed_size;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_size(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_size\n"); );
    // Body
    this->__PVT__m_packed_size = this->__PVT__count;
    this->__PVT__count = 0U;
}

extern const VlWide<1024>/*32767:0*/ Vcsi2_tb_top__ConstPool__CONST_hbc03216d_0;

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__count = 0U;
    VL_ASSIGN_W(32768, this->__PVT__m_bits, Vcsi2_tb_top__ConstPool__CONST_hbc03216d_0);
    this->__PVT__m_packed_size = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlWide<1024>/*32767:0*/ &get_packed_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_bits\n"); );
    // Body
    VL_ASSIGN_W(32768, get_packed_bits__Vfuncrtn, this->__PVT__m_bits);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bits\n"); );
    // Body
    IData/*31:0*/ unnamedblk49__DOT__i;
    bits.renew(this->__PVT__m_packed_size);
    unnamedblk49__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk49__DOT__i, this->__PVT__m_packed_size)) {
        bits.atWrite(unnamedblk49__DOT__i) = (1U & 
                                              (this->__PVT__m_bits
                                               [(0x000003ffU 
                                                 & (unnamedblk49__DOT__i 
                                                    >> 5U))] 
                                               >> (0x0000001fU 
                                                   & unnamedblk49__DOT__i)));
        unnamedblk49__DOT__i = ((IData)(1U) + unnamedblk49__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytes) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bytes\n"); );
    // Body
    IData/*31:0*/ unnamedblk50__DOT__i;
    CData/*7:0*/ unnamedblk50__DOT__unnamedblk51__DOT__tmp;
    IData/*31:0*/ sz;
    CData/*7:0*/ v;
    v = 0U;
    sz = VL_DIVS_III(32, ((IData)(7U) + this->__PVT__m_packed_size), (IData)(8U));
    bytes.renew(sz);
    unnamedblk50__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk50__DOT__i, sz)) {
        v = (0x000000ffU & (((unnamedblk50__DOT__i 
                              != (sz - (IData)(1U))) 
                             | (0U == VL_MODDIVS_III(32, this->__PVT__m_packed_size, (IData)(8U))))
                             ? (((0U == (0x0000001fU 
                                         & VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i)))
                                  ? 0U : (this->__PVT__m_bits
                                          [(((IData)(7U) 
                                             + (0x00007fffU 
                                                & VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i))) 
                                            >> 5U)] 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i))))) 
                                | (this->__PVT__m_bits
                                   [(0x000003ffU & 
                                     (VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i))))
                             : ((((0U == (0x0000001fU 
                                          & VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i)))
                                   ? 0U : (this->__PVT__m_bits
                                           [(((IData)(7U) 
                                              + (0x00007fffU 
                                                 & VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i))) 
                                             >> 5U)] 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i))))) 
                                 | (this->__PVT__m_bits
                                    [(0x000003ffU & 
                                      (VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i) 
                                       >> 5U))] >> 
                                    (0x0000001fU & 
                                     VL_MULS_III(32, (IData)(8U), unnamedblk50__DOT__i)))) 
                                & VL_SHIFTR_III(8,32,32, 0x000000ffU, 
                                                ((IData)(8U) 
                                                 - 
                                                 VL_MODDIVS_III(32, this->__PVT__m_packed_size, (IData)(8U)))))));
        if (this->__PVT__big_endian) {
            unnamedblk50__DOT__unnamedblk51__DOT__tmp = 0U;
            unnamedblk50__DOT__unnamedblk51__DOT__tmp 
                = v;
            v = ((0xf8U & (IData)(v)) | ((4U & ((IData)(unnamedblk50__DOT__unnamedblk51__DOT__tmp) 
                                                >> 3U)) 
                                         | ((2U & ((IData)(unnamedblk50__DOT__unnamedblk51__DOT__tmp) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(unnamedblk50__DOT__unnamedblk51__DOT__tmp) 
                                                >> 7U)))));
            v = ((0xc7U & (IData)(v)) | (((4U & (IData)(unnamedblk50__DOT__unnamedblk51__DOT__tmp)) 
                                          | ((2U & 
                                              ((IData)(unnamedblk50__DOT__unnamedblk51__DOT__tmp) 
                                               >> 2U)) 
                                             | (1U 
                                                & ((IData)(unnamedblk50__DOT__unnamedblk51__DOT__tmp) 
                                                   >> 4U)))) 
                                         << 3U));
            v = ((0x3fU & (IData)(v)) | (((2U & ((IData)(unnamedblk50__DOT__unnamedblk51__DOT__tmp) 
                                                 << 1U)) 
                                          | (1U & ((IData)(unnamedblk50__DOT__unnamedblk51__DOT__tmp) 
                                                   >> 1U))) 
                                         << 6U));
        }
        bytes.atWrite(unnamedblk50__DOT__i) = v;
        unnamedblk50__DOT__i = ((IData)(1U) + unnamedblk50__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_ints(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &ints) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_ints\n"); );
    // Body
    IData/*31:0*/ unnamedblk53__DOT__i;
    IData/*31:0*/ unnamedblk53__DOT__unnamedblk54__DOT__tmp;
    IData/*31:0*/ sz;
    IData/*31:0*/ v;
    v = 0U;
    sz = VL_DIVS_III(32, ((IData)(0x0000001fU) + this->__PVT__m_packed_size), (IData)(0x00000020U));
    ints.renew(sz);
    unnamedblk53__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk53__DOT__i, sz)) {
        v = (((unnamedblk53__DOT__i != (sz - (IData)(1U))) 
              | (0U == VL_MODDIVS_III(32, this->__PVT__m_packed_size, (IData)(0x00000020U))))
              ? (((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i)))
                   ? 0U : (this->__PVT__m_bits[(((IData)(0x0000001fU) 
                                                 + 
                                                 (0x00007fffU 
                                                  & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i))) 
                                                >> 5U)] 
                           << ((IData)(0x00000020U) 
                               - (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i))))) 
                 | (this->__PVT__m_bits[(0x000003ffU 
                                         & (VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i) 
                                            >> 5U))] 
                    >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i))))
              : ((((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i)))
                    ? 0U : (this->__PVT__m_bits[(((IData)(0x0000001fU) 
                                                  + 
                                                  (0x00007fffU 
                                                   & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i))) 
                                                 >> 5U)] 
                            << ((IData)(0x00000020U) 
                                - (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i))))) 
                  | (this->__PVT__m_bits[(0x000003ffU 
                                          & (VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i) 
                                             >> 5U))] 
                     >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk53__DOT__i)))) 
                 & VL_SHIFTR_III(32,32,32, 0xffffffffU, 
                                 ((IData)(0x00000020U) 
                                  - VL_MODDIVS_III(32, this->__PVT__m_packed_size, (IData)(0x00000020U))))));
        if (this->__PVT__big_endian) {
            unnamedblk53__DOT__unnamedblk54__DOT__tmp = 0U;
            unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                = v;
            v = ((0xfffffff8U & v) | ((4U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                             >> 0x0000001bU)) 
                                      | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                >> 0x0000001dU)) 
                                         | (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                            >> 0x1fU))));
            v = ((0xffffffc7U & v) | (((4U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                              >> 0x00000018U)) 
                                       | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                 >> 0x0000001aU)) 
                                          | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                   >> 0x1cU)))) 
                                      << 3U));
            v = ((0xfffffe3fU & v) | (((4U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                              >> 0x00000015U)) 
                                       | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                 >> 0x00000017U)) 
                                          | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                   >> 0x19U)))) 
                                      << 6U));
            v = ((0xfffff1ffU & v) | (((4U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                              >> 0x00000012U)) 
                                       | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                 >> 0x00000014U)) 
                                          | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                   >> 0x16U)))) 
                                      << 9U));
            v = ((0xffff8fffU & v) | (((4U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                              >> 0x0000000fU)) 
                                       | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                 >> 0x00000011U)) 
                                          | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                   >> 0x13U)))) 
                                      << 0x0000000cU));
            v = ((0xfffc7fffU & v) | (((4U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                              >> 0x0000000cU)) 
                                       | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                 >> 0x0000000eU)) 
                                          | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                   >> 0x10U)))) 
                                      << 0x0000000fU));
            v = ((0xffe3ffffU & v) | (((4U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                              >> 9U)) 
                                       | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                 >> 0x0000000bU)) 
                                          | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                   >> 0x0dU)))) 
                                      << 0x00000012U));
            v = ((0xff1fffffU & v) | (((4U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                              >> 6U)) 
                                       | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                 >> 8U)) 
                                          | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                   >> 0x0aU)))) 
                                      << 0x00000015U));
            v = ((0xf8ffffffU & v) | (((4U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                              >> 3U)) 
                                       | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                 >> 5U)) 
                                          | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                   >> 7U)))) 
                                      << 0x00000018U));
            v = ((0xc7ffffffU & v) | (((4U & unnamedblk53__DOT__unnamedblk54__DOT__tmp) 
                                       | ((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                 >> 2U)) 
                                          | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                   >> 4U)))) 
                                      << 0x0000001bU));
            v = ((0x3fffffffU & v) | (((2U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                              << 1U)) 
                                       | (1U & (unnamedblk53__DOT__unnamedblk54__DOT__tmp 
                                                >> 1U))) 
                                      << 0x0000001eU));
        }
        ints.atWrite(unnamedblk53__DOT__i) = v;
        unnamedblk53__DOT__i = ((IData)(1U) + unnamedblk53__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_bits\n"); );
    // Body
    IData/*31:0*/ unnamedblk56__DOT__i;
    IData/*31:0*/ unnamedblk57__DOT__i;
    IData/*31:0*/ bit_size;
    bit_size = bitstream.size();
    if (this->__PVT__big_endian) {
        unnamedblk56__DOT__i = (bit_size - (IData)(1U));
        while (VL_LTES_III(32, 0U, unnamedblk56__DOT__i)) {
            this->__PVT__m_bits[(0x000003ffU & (unnamedblk56__DOT__i 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & unnamedblk56__DOT__i))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (unnamedblk56__DOT__i 
                                              >> 5U))]) 
                   | (bitstream.at(unnamedblk56__DOT__i) 
                      << (0x0000001fU & unnamedblk56__DOT__i)));
            unnamedblk56__DOT__i = (unnamedblk56__DOT__i 
                                    - (IData)(1U));
        }
    } else {
        unnamedblk57__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk57__DOT__i, bit_size)) {
            this->__PVT__m_bits[(0x000003ffU & (unnamedblk57__DOT__i 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & unnamedblk57__DOT__i))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (unnamedblk57__DOT__i 
                                              >> 5U))]) 
                   | (bitstream.at(unnamedblk57__DOT__i) 
                      << (0x0000001fU & unnamedblk57__DOT__i)));
            unnamedblk57__DOT__i = ((IData)(1U) + unnamedblk57__DOT__i);
        }
    }
    this->__PVT__m_packed_size = bit_size;
    this->__PVT__count = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_bytes\n"); );
    // Body
    IData/*31:0*/ unnamedblk58__DOT__i;
    CData/*7:0*/ unnamedblk58__DOT__unnamedblk59__DOT__tb;
    IData/*31:0*/ byte_size;
    IData/*31:0*/ index;
    CData/*7:0*/ b;
    b = 0U;
    byte_size = bytestream.size();
    index = 0U;
    unnamedblk58__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk58__DOT__i, byte_size)) {
        b = bytestream.at(unnamedblk58__DOT__i);
        if (this->__PVT__big_endian) {
            unnamedblk58__DOT__unnamedblk59__DOT__tb = 0U;
            unnamedblk58__DOT__unnamedblk59__DOT__tb 
                = b;
            b = ((0xf8U & (IData)(b)) | ((4U & ((IData)(unnamedblk58__DOT__unnamedblk59__DOT__tb) 
                                                >> 3U)) 
                                         | ((2U & ((IData)(unnamedblk58__DOT__unnamedblk59__DOT__tb) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(unnamedblk58__DOT__unnamedblk59__DOT__tb) 
                                                >> 7U)))));
            b = ((0xc7U & (IData)(b)) | (((4U & (IData)(unnamedblk58__DOT__unnamedblk59__DOT__tb)) 
                                          | ((2U & 
                                              ((IData)(unnamedblk58__DOT__unnamedblk59__DOT__tb) 
                                               >> 2U)) 
                                             | (1U 
                                                & ((IData)(unnamedblk58__DOT__unnamedblk59__DOT__tb) 
                                                   >> 4U)))) 
                                         << 3U));
            b = ((0x3fU & (IData)(b)) | (((2U & ((IData)(unnamedblk58__DOT__unnamedblk59__DOT__tb) 
                                                 << 1U)) 
                                          | (1U & ((IData)(unnamedblk58__DOT__unnamedblk59__DOT__tb) 
                                                   >> 1U))) 
                                         << 6U));
        }
        VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU & index), this->__PVT__m_bits, b);
        index = ((IData)(8U) + index);
        unnamedblk58__DOT__i = ((IData)(1U) + unnamedblk58__DOT__i);
    }
    this->__PVT__m_packed_size = VL_MULS_III(32, (IData)(8U), byte_size);
    this->__PVT__count = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_ints(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_ints\n"); );
    // Body
    IData/*31:0*/ unnamedblk61__DOT__i;
    IData/*31:0*/ unnamedblk61__DOT__unnamedblk62__DOT__tv;
    IData/*31:0*/ int_size;
    IData/*31:0*/ index;
    IData/*31:0*/ v;
    v = 0U;
    int_size = intstream.size();
    index = 0U;
    unnamedblk61__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk61__DOT__i, int_size)) {
        v = intstream.at(unnamedblk61__DOT__i);
        if (this->__PVT__big_endian) {
            unnamedblk61__DOT__unnamedblk62__DOT__tv = 0U;
            unnamedblk61__DOT__unnamedblk62__DOT__tv 
                = v;
            v = ((0xfffffff8U & v) | ((4U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                             >> 0x0000001bU)) 
                                      | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                >> 0x0000001dU)) 
                                         | (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                            >> 0x1fU))));
            v = ((0xffffffc7U & v) | (((4U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                              >> 0x00000018U)) 
                                       | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                 >> 0x0000001aU)) 
                                          | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                   >> 0x1cU)))) 
                                      << 3U));
            v = ((0xfffffe3fU & v) | (((4U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                              >> 0x00000015U)) 
                                       | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                 >> 0x00000017U)) 
                                          | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                   >> 0x19U)))) 
                                      << 6U));
            v = ((0xfffff1ffU & v) | (((4U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                              >> 0x00000012U)) 
                                       | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                 >> 0x00000014U)) 
                                          | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                   >> 0x16U)))) 
                                      << 9U));
            v = ((0xffff8fffU & v) | (((4U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                              >> 0x0000000fU)) 
                                       | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                 >> 0x00000011U)) 
                                          | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                   >> 0x13U)))) 
                                      << 0x0000000cU));
            v = ((0xfffc7fffU & v) | (((4U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                              >> 0x0000000cU)) 
                                       | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                 >> 0x0000000eU)) 
                                          | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                   >> 0x10U)))) 
                                      << 0x0000000fU));
            v = ((0xffe3ffffU & v) | (((4U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                              >> 9U)) 
                                       | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                 >> 0x0000000bU)) 
                                          | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                   >> 0x0dU)))) 
                                      << 0x00000012U));
            v = ((0xff1fffffU & v) | (((4U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                              >> 6U)) 
                                       | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                 >> 8U)) 
                                          | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                   >> 0x0aU)))) 
                                      << 0x00000015U));
            v = ((0xf8ffffffU & v) | (((4U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                              >> 3U)) 
                                       | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                 >> 5U)) 
                                          | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                   >> 7U)))) 
                                      << 0x00000018U));
            v = ((0xc7ffffffU & v) | (((4U & unnamedblk61__DOT__unnamedblk62__DOT__tv) 
                                       | ((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                 >> 2U)) 
                                          | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                   >> 4U)))) 
                                      << 0x0000001bU));
            v = ((0x3fffffffU & v) | (((2U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                              << 1U)) 
                                       | (1U & (unnamedblk61__DOT__unnamedblk62__DOT__tv 
                                                >> 1U))) 
                                      << 0x0000001eU));
        }
        VL_ASSIGNSEL_WI(32768, 32, (0x00007fffU & index), this->__PVT__m_bits, v);
        index = ((IData)(0x00000020U) + index);
        unnamedblk61__DOT__i = ((IData)(1U) + unnamedblk61__DOT__i);
    }
    this->__PVT__m_packed_size = VL_MULS_III(32, (IData)(0x00000020U), int_size);
    this->__PVT__count = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bit(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, CData/*0:0*/ &get_bit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bit\n"); );
    // Body
    get_bit__Vfuncrtn = 0U;
    if ((index >= this->__PVT__m_packed_size)) {
        this->__VnoInFunc_index_error(vlSymsp, index, "bit"s, 1U);
    }
    get_bit__Vfuncrtn = (1U & (this->__PVT__m_bits[
                               (0x000003ffU & (index 
                                               >> 5U))] 
                               >> (0x0000001fU & index)));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_byte(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, CData/*7:0*/ &get_byte__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_byte\n"); );
    // Body
    get_byte__Vfuncrtn = 0U;
    if ((index >= (((IData)(7U) + this->__PVT__m_packed_size) 
                   >> 3U))) {
        this->__VnoInFunc_index_error(vlSymsp, index, "byte"s, 8U);
    }
    get_byte__Vfuncrtn = (0x000000ffU & (((0U == (0x0000001fU 
                                                  & (index 
                                                     << 3U)))
                                           ? 0U : (this->__PVT__m_bits
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x00007fffU 
                                                      & (index 
                                                         << 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & (index 
                                                        << 3U))))) 
                                         | (this->__PVT__m_bits
                                            [(0x000003ffU 
                                              & (index 
                                                 >> 2U))] 
                                            >> (0x0000001fU 
                                                & (index 
                                                   << 3U)))));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_int(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ &get_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_int\n"); );
    // Body
    get_int__Vfuncrtn = 0U;
    if ((index >= (((IData)(0x0000001fU) + this->__PVT__m_packed_size) 
                   >> 5U))) {
        this->__VnoInFunc_index_error(vlSymsp, index, "int"s, 0x00000020U);
    }
    get_int__Vfuncrtn = this->__PVT__m_bits[(0x000003ffU 
                                             & index)];
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__7__verbosity;
    __Vtask_uvm_report_warning__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__line;
    __Vtask_uvm_report_warning__7__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    {
        if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 554)
            ->__PVT__cycle_check.exists(value)) {
            VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 555)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            __Vtask_uvm_report_warning__7__line = 0U;
            this->__Vtask_uvm_report_warning__7__filename = ""s;
            __Vtask_uvm_report_warning__7__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__7__message
                          ,"Cycle detected for object @%0d during pack",1
                          , '~',32,__VlefCall_0__get_inst_id);
            this->__Vtask_uvm_report_warning__7__id = "CYCFND"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__7__id, this->__Vtask_uvm_report_warning__7__message, __Vtask_uvm_report_warning__7__verbosity, this->__Vtask_uvm_report_warning__7__filename, __Vtask_uvm_report_warning__7__line);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 558)->__PVT__cycle_check.atWrite(value) = 1U;
        if (((0x00001000U != this->__PVT__policy) & 
             (VlNull{} != value))) {
            if (this->__PVT__use_metadata) {
                VL_ASSIGNSEL_WI(32768, 4, (0x00007fffU 
                                           & this->__PVT__count), this->__PVT__m_bits, 1U);
                this->__PVT__count = ((IData)(4U) + this->__PVT__count);
            }
            VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 565)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 565)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name));
            VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 566)->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00000100U, ""s);
            VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 567)->__VnoInFunc_do_pack(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer>{this});
            VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 568)->__VnoInFunc_up(vlSymsp, 0x2eU);
        } else if (this->__PVT__use_metadata) {
            VL_ASSIGNSEL_WI(32768, 4, (0x00007fffU 
                                       & this->__PVT__count), this->__PVT__m_bits, 0U);
            this->__PVT__count = ((IData)(4U) + this->__PVT__count);
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 574)->__PVT__cycle_check.erase(value);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_real\n"); );
    // Body
    this->__VnoInFunc_pack_field_int(vlSymsp, VL_CVT_Q_D(value), 0x00000040U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_time\n"); );
    // Body
    this->__VnoInFunc_pack_field_int(vlSymsp, value, 0x00000040U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field\n"); );
    // Body
    IData/*31:0*/ unnamedblk64__DOT__i;
    unnamedblk64__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk64__DOT__i, size)) {
        this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__count 
                                             + unnamedblk64__DOT__i) 
                                            >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & (this->__PVT__count 
                                                   + unnamedblk64__DOT__i)))) 
                & this->__PVT__m_bits[(0x000003ffU 
                                       & ((this->__PVT__count 
                                           + unnamedblk64__DOT__i) 
                                          >> 5U))]) 
               | ((1U & ((IData)(this->__PVT__big_endian)
                          ? (value[(0x0000007fU & (
                                                   ((size 
                                                     - (IData)(1U)) 
                                                    - unnamedblk64__DOT__i) 
                                                   >> 5U))] 
                             >> (0x0000001fU & ((size 
                                                 - (IData)(1U)) 
                                                - unnamedblk64__DOT__i)))
                          : (value[(0x0000007fU & (unnamedblk64__DOT__i 
                                                   >> 5U))] 
                             >> (0x0000001fU & unnamedblk64__DOT__i)))) 
                  << (0x0000001fU & (this->__PVT__count 
                                     + unnamedblk64__DOT__i))));
        unnamedblk64__DOT__i = ((IData)(1U) + unnamedblk64__DOT__i);
    }
    this->__PVT__count = (this->__PVT__count + size);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field_int(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field_int\n"); );
    // Body
    IData/*31:0*/ unnamedblk65__DOT__i;
    unnamedblk65__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk65__DOT__i, size)) {
        this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__count 
                                             + unnamedblk65__DOT__i) 
                                            >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & (this->__PVT__count 
                                                   + unnamedblk65__DOT__i)))) 
                & this->__PVT__m_bits[(0x000003ffU 
                                       & ((this->__PVT__count 
                                           + unnamedblk65__DOT__i) 
                                          >> 5U))]) 
               | ((1U & ((IData)(this->__PVT__big_endian)
                          ? (IData)((value >> (0x0000003fU 
                                               & ((size 
                                                   - (IData)(1U)) 
                                                  - unnamedblk65__DOT__i))))
                          : (IData)((value >> (0x0000003fU 
                                               & unnamedblk65__DOT__i))))) 
                  << (0x0000001fU & (this->__PVT__count 
                                     + unnamedblk65__DOT__i))));
        unnamedblk65__DOT__i = ((IData)(1U) + unnamedblk65__DOT__i);
    }
    this->__PVT__count = (this->__PVT__count + size);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_string\n"); );
    // Body
    IData/*31:0*/ unnamedblk66__DOT__index;
    unnamedblk66__DOT__index = 0;
    CData/*7:0*/ b;
    b = 0U;
    unnamedblk66__DOT__index = 0U;
    while (VL_LTS_III(32, unnamedblk66__DOT__index, 
                      VL_LEN_IN(value))) {
        if (this->__PVT__big_endian) {
            b = VL_GETC_N(value,unnamedblk66__DOT__index);
            this->__PVT__m_bits[(0x000003ffU & (this->__PVT__count 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & this->__PVT__count))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (this->__PVT__count 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 7U)) << 
                      (0x0000001fU & this->__PVT__count)));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(1U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(1U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(1U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 6U)) << 
                      (0x0000001fU & ((IData)(1U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(2U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(2U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(2U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 5U)) << 
                      (0x0000001fU & ((IData)(2U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(3U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(3U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(3U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 4U)) << 
                      (0x0000001fU & ((IData)(3U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(4U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(4U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(4U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 3U)) << 
                      (0x0000001fU & ((IData)(4U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(5U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(5U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(5U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 2U)) << 
                      (0x0000001fU & ((IData)(5U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(6U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(6U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(6U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 1U)) << 
                      (0x0000001fU & ((IData)(6U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(7U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(7U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(7U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & (IData)(b)) << (0x0000001fU 
                                            & ((IData)(7U) 
                                               + this->__PVT__count))));
        } else {
            VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU 
                                       & this->__PVT__count), this->__PVT__m_bits, 
                            VL_GETC_N(value,unnamedblk66__DOT__index));
        }
        this->__PVT__count = ((IData)(8U) + this->__PVT__count);
        unnamedblk66__DOT__index = ((IData)(1U) + unnamedblk66__DOT__index);
    }
    if (this->__PVT__use_metadata) {
        VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU & this->__PVT__count), this->__PVT__m_bits, 0U);
        this->__PVT__count = ((IData)(8U) + this->__PVT__count);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_is_null(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_null__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_is_null\n"); );
    // Body
    is_null__Vfuncrtn = (0U == (0x0000000fU & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & this->__PVT__count))
                                                 ? 0U
                                                 : 
                                                (this->__PVT__m_bits
                                                 [(
                                                   ((IData)(3U) 
                                                    + 
                                                    (0x00007fffU 
                                                     & this->__PVT__count)) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & this->__PVT__count)))) 
                                               | (this->__PVT__m_bits
                                                  [
                                                  (0x000003ffU 
                                                   & (this->__PVT__count 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & this->__PVT__count)))));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object_ext(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object_ext\n"); );
    // Body
    this->__VnoInFunc_unpack_object(vlSymsp, value);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__19__verbosity;
    __Vtask_uvm_report_warning__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__19__line;
    __Vtask_uvm_report_warning__19__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    CData/*7:0*/ is_non_null;
    {
        is_non_null = 0U;
        is_non_null = 1U;
        if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 664)
            ->__PVT__cycle_check.exists(value)) {
            VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 665)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            __Vtask_uvm_report_warning__19__line = 0U;
            this->__Vtask_uvm_report_warning__19__filename = ""s;
            __Vtask_uvm_report_warning__19__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__19__message
                          ,"Cycle detected for object @%0d during unpack",1
                          , '~',32,__VlefCall_0__get_inst_id);
            this->__Vtask_uvm_report_warning__19__id = "CYCFND"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__19__id, this->__Vtask_uvm_report_warning__19__message, __Vtask_uvm_report_warning__19__verbosity, this->__Vtask_uvm_report_warning__19__filename, __Vtask_uvm_report_warning__19__line);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 668)->__PVT__cycle_check.atWrite(value) = 1U;
        if (this->__PVT__use_metadata) {
            is_non_null = (0x0000000fU & (((0U == (0x0000001fU 
                                                   & this->__PVT__count))
                                            ? 0U : 
                                           (this->__PVT__m_bits
                                            [(((IData)(3U) 
                                               + (0x00007fffU 
                                                  & this->__PVT__count)) 
                                              >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & this->__PVT__count)))) 
                                          | (this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (this->__PVT__count 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & this->__PVT__count))));
            this->__PVT__count = ((IData)(4U) + this->__PVT__count);
        }
        if ((VlNull{} != value)) {
            if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(is_non_null)))) {
                VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 679)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 679)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name));
                VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 680)->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020002U, ""s);
                VL_NULL_CHECK(value, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 681)->__VnoInFunc_do_unpack(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer>{this});
                VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 682)->__VnoInFunc_up(vlSymsp, 0x2eU);
            }
        } else if (((0U != VL_EXTENDS_II(32,8, (IData)(is_non_null))) 
                    & (VlNull{} == value))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "UNPOBJ"s, "can not unpack into null object"s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_packer.svh", 693)->__PVT__cycle_check.erase(value);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, double &unpack_real__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_1__unpack_field_int;
    CData/*0:0*/ __VlefCall_0__enough_bits;
    unpack_real__Vfuncrtn = 0.0;
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 0x00000040U, "real"s, __VlefCall_0__enough_bits);
    if (__VlefCall_0__enough_bits) {
        this->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000040U, __VlefCall_1__unpack_field_int);
        unpack_real__Vfuncrtn = VL_CVT_D_Q(__VlefCall_1__unpack_field_int);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &unpack_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_time\n"); );
    // Locals
    QData/*63:0*/ __Vfunc_unpack_field_int__31__Vfuncout;
    __Vfunc_unpack_field_int__31__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__enough_bits;
    unpack_time__Vfuncrtn = 0;
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 0x00000040U, "time"s, __VlefCall_0__enough_bits);
    if (__VlefCall_0__enough_bits) {
        this->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000040U, __Vfunc_unpack_field_int__31__Vfuncout);
        unpack_time__Vfuncrtn = __Vfunc_unpack_field_int__31__Vfuncout;
    }
}

extern const VlWide<128>/*4095:0*/ Vcsi2_tb_top__ConstPool__CONST_h6e0f3f36_0;

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ size, VlWide<128>/*4095:0*/ &unpack_field__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__enough_bits;
    IData/*31:0*/ unnamedblk68__DOT__i;
    VL_ASSIGN_W(4096, unpack_field__Vfuncrtn, Vcsi2_tb_top__ConstPool__CONST_h6e0f3f36_0);
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __VlefCall_0__enough_bits);
    if (__VlefCall_0__enough_bits) {
        this->__PVT__count = (this->__PVT__count + size);
        unnamedblk68__DOT__i = 0U;
        unnamedblk68__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk68__DOT__i, size)) {
            unpack_field__Vfuncrtn[(0x0000007fU & (unnamedblk68__DOT__i 
                                                   >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & unnamedblk68__DOT__i))) 
                    & unpack_field__Vfuncrtn[(0x0000007fU 
                                              & (unnamedblk68__DOT__i 
                                                 >> 5U))]) 
                   | ((1U & ((IData)(this->__PVT__big_endian)
                              ? (this->__PVT__m_bits
                                 [(0x000003ffU & ((
                                                   (this->__PVT__count 
                                                    - unnamedblk68__DOT__i) 
                                                   - (IData)(1U)) 
                                                  >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((this->__PVT__count 
                                       - unnamedblk68__DOT__i) 
                                      - (IData)(1U))))
                              : (this->__PVT__m_bits
                                 [(0x000003ffU & ((
                                                   (this->__PVT__count 
                                                    - size) 
                                                   + unnamedblk68__DOT__i) 
                                                  >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((this->__PVT__count 
                                       - size) + unnamedblk68__DOT__i))))) 
                      << (0x0000001fU & unnamedblk68__DOT__i)));
            unnamedblk68__DOT__i = ((IData)(1U) + unnamedblk68__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ size, QData/*63:0*/ &unpack_field_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field_int\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__enough_bits;
    IData/*31:0*/ unnamedblk69__DOT__i;
    unpack_field_int__Vfuncrtn = 0ULL;
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __VlefCall_0__enough_bits);
    if (__VlefCall_0__enough_bits) {
        this->__PVT__count = (this->__PVT__count + size);
        unnamedblk69__DOT__i = 0U;
        unnamedblk69__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk69__DOT__i, size)) {
            unpack_field_int__Vfuncrtn = (((~ (1ULL 
                                               << (0x0000003fU 
                                                   & unnamedblk69__DOT__i))) 
                                           & unpack_field_int__Vfuncrtn) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & ((IData)(this->__PVT__big_endian)
                                                                  ? 
                                                                 (this->__PVT__m_bits
                                                                  [
                                                                  (0x000003ffU 
                                                                   & (((this->__PVT__count 
                                                                        - unnamedblk69__DOT__i) 
                                                                       - (IData)(1U)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & ((this->__PVT__count 
                                                                       - unnamedblk69__DOT__i) 
                                                                      - (IData)(1U))))
                                                                  : 
                                                                 (this->__PVT__m_bits
                                                                  [
                                                                  (0x000003ffU 
                                                                   & (((this->__PVT__count 
                                                                        - size) 
                                                                       + unnamedblk69__DOT__i) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & ((this->__PVT__count 
                                                                       - size) 
                                                                      + unnamedblk69__DOT__i))))))) 
                                             << (0x0000003fU 
                                                 & unnamedblk69__DOT__i)));
            unnamedblk69__DOT__i = ((IData)(1U) + unnamedblk69__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ num_chars, std::string &unpack_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__enough_bits;
    CData/*0:0*/ __VlefCall_0__enough_bits;
    unpack_string__Vfuncrtn = ""s;
    CData/*7:0*/ b;
    CData/*0:0*/ is_null_term;
    IData/*31:0*/ i;
    b = 0U;
    i = 0U;
    is_null_term = (0xffffffffU == num_chars);
    while (true) {
        this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 8U, "string"s, __VlefCall_0__enough_bits);
        if (!((((IData)(__VlefCall_0__enough_bits) 
                && (1U & ((0U != (0x000000ffU & (((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & this->__PVT__count))
                                                   ? 0U
                                                   : 
                                                  (this->__PVT__m_bits
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x00007fffU 
                                                      & this->__PVT__count)) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & this->__PVT__count)))) 
                                                 | (this->__PVT__m_bits
                                                    [
                                                    (0x000003ffU 
                                                     & (this->__PVT__count 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x0000001fU 
                                                     & this->__PVT__count))))) 
                          | (~ (IData)(is_null_term))))) 
               && (VL_LTS_III(32, i, num_chars) | (IData)(is_null_term))))) break;
        unpack_string__Vfuncrtn = VL_CONCATN_NNN(unpack_string__Vfuncrtn, " "s);
        if (this->__PVT__big_endian) {
            b = ((0x7fU & (IData)(b)) | (0x00000080U 
                                         & ((this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (this->__PVT__count 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & this->__PVT__count)) 
                                            << 7U)));
            b = ((0xbfU & (IData)(b)) | (0x00000040U 
                                         & ((this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (((IData)(1U) 
                                                   + this->__PVT__count) 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(1U) 
                                                    + this->__PVT__count))) 
                                            << 6U)));
            b = ((0xdfU & (IData)(b)) | (0x00000020U 
                                         & ((this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (((IData)(2U) 
                                                   + this->__PVT__count) 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(2U) 
                                                    + this->__PVT__count))) 
                                            << 5U)));
            b = ((0xefU & (IData)(b)) | (0x00000010U 
                                         & ((this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (((IData)(3U) 
                                                   + this->__PVT__count) 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(3U) 
                                                    + this->__PVT__count))) 
                                            << 4U)));
            b = ((0xf7U & (IData)(b)) | (8U & ((this->__PVT__m_bits
                                                [(0x000003ffU 
                                                  & (((IData)(4U) 
                                                      + this->__PVT__count) 
                                                     >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(4U) 
                                                    + this->__PVT__count))) 
                                               << 3U)));
            b = ((0xfbU & (IData)(b)) | (4U & ((this->__PVT__m_bits
                                                [(0x000003ffU 
                                                  & (((IData)(5U) 
                                                      + this->__PVT__count) 
                                                     >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(5U) 
                                                    + this->__PVT__count))) 
                                               << 2U)));
            b = ((0xfdU & (IData)(b)) | (2U & ((this->__PVT__m_bits
                                                [(0x000003ffU 
                                                  & (((IData)(6U) 
                                                      + this->__PVT__count) 
                                                     >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(6U) 
                                                    + this->__PVT__count))) 
                                               << 1U)));
            b = ((0xfeU & (IData)(b)) | (1U & (this->__PVT__m_bits
                                               [(0x000003ffU 
                                                 & (((IData)(7U) 
                                                     + this->__PVT__count) 
                                                    >> 5U))] 
                                               >> (0x0000001fU 
                                                   & ((IData)(7U) 
                                                      + this->__PVT__count)))));
            unpack_string__Vfuncrtn = VL_PUTC_N(unpack_string__Vfuncrtn, i, b);
        } else {
            unpack_string__Vfuncrtn = VL_PUTC_N(unpack_string__Vfuncrtn, i, 
                                                (0x000000ffU 
                                                 & (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & this->__PVT__count))
                                                      ? 0U
                                                      : 
                                                     (this->__PVT__m_bits
                                                      [
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x00007fffU 
                                                         & this->__PVT__count)) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & this->__PVT__count)))) 
                                                    | (this->__PVT__m_bits
                                                       [
                                                       (0x000003ffU 
                                                        & (this->__PVT__count 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & this->__PVT__count)))));
        }
        this->__PVT__count = ((IData)(8U) + this->__PVT__count);
        i = ((IData)(1U) + i);
    }
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 8U, "string"s, __VlefCall_1__enough_bits);
    if (__VlefCall_1__enough_bits) {
        this->__PVT__count = ((IData)(8U) + this->__PVT__count);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__abstract = 0;
    __PVT__use_metadata = 0;
    __PVT__count = 0;
    __PVT__reverse_order = 0;
    __PVT__nopack = 0;
    VL_ZERO_W(32768, __PVT__m_bits);
    __PVT__m_packed_size = 0;
}
