// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rtl_packet_builder__Vclpkg::__VnoInFunc_crc16_byte(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*7:0*/ data_byte, SData/*15:0*/ previous_crc, SData/*15:0*/ &crc16_byte__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rtl_packet_builder__Vclpkg::__VnoInFunc_crc16_byte\n"); );
    // Locals
    SData/*15:0*/ __Vfunc_csi2_crc16_next__0__previous_crc;
    __Vfunc_csi2_crc16_next__0__previous_crc = 0;
    CData/*7:0*/ __Vfunc_csi2_crc16_next__0__data_byte;
    __Vfunc_csi2_crc16_next__0__data_byte = 0;
    SData/*15:0*/ __Vfunc_csi2_crc16_next__0__crc;
    __Vfunc_csi2_crc16_next__0__crc = 0;
    // Body
    __Vfunc_csi2_crc16_next__0__data_byte = data_byte;
    __Vfunc_csi2_crc16_next__0__previous_crc = previous_crc;
    __Vfunc_csi2_crc16_next__0__crc = __Vfunc_csi2_crc16_next__0__previous_crc;
    __Vfunc_csi2_crc16_next__0__crc = ((1U & ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              ^ (IData)(__Vfunc_csi2_crc16_next__0__data_byte)))
                                        ? (0x8408U 
                                           ^ ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              >> 1U))
                                        : ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                           >> 1U));
    __Vfunc_csi2_crc16_next__0__crc = ((1U & ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              ^ ((IData)(__Vfunc_csi2_crc16_next__0__data_byte) 
                                                 >> 1U)))
                                        ? (0x8408U 
                                           ^ ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              >> 1U))
                                        : ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                           >> 1U));
    __Vfunc_csi2_crc16_next__0__crc = ((1U & ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              ^ ((IData)(__Vfunc_csi2_crc16_next__0__data_byte) 
                                                 >> 2U)))
                                        ? (0x8408U 
                                           ^ ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              >> 1U))
                                        : ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                           >> 1U));
    __Vfunc_csi2_crc16_next__0__crc = ((1U & ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              ^ ((IData)(__Vfunc_csi2_crc16_next__0__data_byte) 
                                                 >> 3U)))
                                        ? (0x8408U 
                                           ^ ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              >> 1U))
                                        : ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                           >> 1U));
    __Vfunc_csi2_crc16_next__0__crc = ((1U & ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              ^ ((IData)(__Vfunc_csi2_crc16_next__0__data_byte) 
                                                 >> 4U)))
                                        ? (0x8408U 
                                           ^ ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              >> 1U))
                                        : ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                           >> 1U));
    __Vfunc_csi2_crc16_next__0__crc = ((1U & ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              ^ ((IData)(__Vfunc_csi2_crc16_next__0__data_byte) 
                                                 >> 5U)))
                                        ? (0x8408U 
                                           ^ ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              >> 1U))
                                        : ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                           >> 1U));
    __Vfunc_csi2_crc16_next__0__crc = ((1U & ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              ^ ((IData)(__Vfunc_csi2_crc16_next__0__data_byte) 
                                                 >> 6U)))
                                        ? (0x8408U 
                                           ^ ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              >> 1U))
                                        : ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                           >> 1U));
    __Vfunc_csi2_crc16_next__0__crc = ((1U & ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              ^ ((IData)(__Vfunc_csi2_crc16_next__0__data_byte) 
                                                 >> 7U)))
                                        ? (0x8408U 
                                           ^ ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                              >> 1U))
                                        : ((IData)(__Vfunc_csi2_crc16_next__0__crc) 
                                           >> 1U));
    crc16_byte__Vfuncrtn = __Vfunc_csi2_crc16_next__0__crc;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rtl_packet_builder__Vclpkg::__VnoInFunc_build_header_word(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> item, QData/*63:0*/ &build_header_word__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rtl_packet_builder__Vclpkg::__VnoInFunc_build_header_word\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__index;
    build_header_word__Vfuncrtn = 0;
    VlUnpacked<CData/*7:0*/, 8> header_bytes;
    SData/*15:0*/ header_crc;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        header_bytes[__Vi0] = 0;
    }
    header_bytes[0U] = ((VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 16)
                         ->__PVT__reserved << 3U) | VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 16)
                        ->__PVT__vcx);
    header_bytes[1U] = ((VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 17)
                         ->__PVT__vc << 6U) | VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 17)
                        ->__PVT__datatype);
    header_bytes[2U] = (0x000000ffU & VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 18)
                        ->__PVT__rtl_word_count);
    header_bytes[3U] = (0x000000ffU & (VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 19)
                                       ->__PVT__rtl_word_count 
                                       >> 8U));
    header_crc = 0xffffU;
    unnamedblk1__DOT__index = 0U;
    while (VL_GTS_III(32, 4U, unnamedblk1__DOT__index)) {
        this->__VnoInFunc_crc16_byte(vlSymsp, header_bytes
                                     [(7U & unnamedblk1__DOT__index)], header_crc, header_crc);
        unnamedblk1__DOT__index = ((IData)(1U) + unnamedblk1__DOT__index);
    }
    header_bytes[4U] = (0x000000ffU & (IData)(header_crc));
    header_bytes[5U] = (0x000000ffU & ((IData)(header_crc) 
                                       >> 8U));
    header_bytes[6U] = 0U;
    header_bytes[7U] = 0U;
    build_header_word__Vfuncrtn = 0ULL;
    build_header_word__Vfuncrtn = ((0xffffffffff000000ULL 
                                    & build_header_word__Vfuncrtn) 
                                   | (IData)((IData)(
                                                     (((IData)(header_bytes[2U]) 
                                                       << 0x00000010U) 
                                                      | (((IData)(header_bytes[1U]) 
                                                          << 8U) 
                                                         | header_bytes[0U])))));
    build_header_word__Vfuncrtn = ((0xffff000000ffffffULL 
                                    & build_header_word__Vfuncrtn) 
                                   | ((QData)((IData)(
                                                      (((IData)(header_bytes[5U]) 
                                                        << 0x00000010U) 
                                                       | (((IData)(header_bytes[4U]) 
                                                           << 8U) 
                                                          | header_bytes[3U])))) 
                                      << 0x00000018U));
    build_header_word__Vfuncrtn = ((0x0000ffffffffffffULL 
                                    & build_header_word__Vfuncrtn) 
                                   | ((QData)((IData)(
                                                      (((IData)(header_bytes[7U]) 
                                                        << 8U) 
                                                       | header_bytes[6U]))) 
                                      << 0x00000030U));
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rtl_packet_builder__Vclpkg::__VnoInFunc_build_payload_words(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> item, VlQueue<QData/*63:0*/> &words) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rtl_packet_builder__Vclpkg::__VnoInFunc_build_payload_words\n"); );
    // Body
    IData/*31:0*/ unnamedblk3__DOT__index;
    unnamedblk3__DOT__index = 0;
    IData/*31:0*/ unnamedblk3__DOT__index__Vloopsize;
    unnamedblk3__DOT__index__Vloopsize = 0;
    IData/*31:0*/ unnamedblk4__DOT__base;
    QData/*63:0*/ unnamedblk4__DOT__unnamedblk5__DOT__word_value;
    VlQueue<CData/*7:0*/> payload_and_crc;
    SData/*15:0*/ payload_crc;
    words.clear();
    payload_and_crc = VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 43)
        ->__PVT__payload;
    payload_crc = 0xffffU;
    unnamedblk3__DOT__index = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__index, VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 45)
                      ->__PVT__payload.size())) {
        unnamedblk3__DOT__index__Vloopsize = VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 45)
            ->__PVT__payload.size();
        this->__VnoInFunc_crc16_byte(vlSymsp, VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 46)
                                     ->__PVT__payload.at(unnamedblk3__DOT__index), payload_crc, payload_crc);
        if ((unnamedblk3__DOT__index__Vloopsize <= VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/env/csi2_rtl_packet_builder.sv", 45)
             ->__PVT__payload.size())) {
            unnamedblk3__DOT__index = ((IData)(1U) 
                                       + unnamedblk3__DOT__index);
        }
    }
    payload_and_crc.push_back((0x000000ffU & (IData)(payload_crc)));
    payload_and_crc.push_back((0x000000ffU & ((IData)(payload_crc) 
                                              >> 8U)));
    while ((0U != VL_MODDIVS_III(32, payload_and_crc.size(), (IData)(8U)))) {
        payload_and_crc.push_back(0U);
    }
    unnamedblk4__DOT__base = 0U;
    while (VL_LTS_III(32, unnamedblk4__DOT__base, payload_and_crc.size())) {
        unnamedblk4__DOT__unnamedblk5__DOT__word_value = 0;
        unnamedblk4__DOT__unnamedblk5__DOT__word_value = 0ULL;
        unnamedblk4__DOT__unnamedblk5__DOT__word_value 
            = ((0xffffffffffff0000ULL & unnamedblk4__DOT__unnamedblk5__DOT__word_value) 
               | (IData)((IData)(((payload_and_crc.at(
                                                      ((IData)(1U) 
                                                       + unnamedblk4__DOT__base)) 
                                   << 8U) | payload_and_crc.at(unnamedblk4__DOT__base)))));
        unnamedblk4__DOT__unnamedblk5__DOT__word_value 
            = ((0xffffffff0000ffffULL & unnamedblk4__DOT__unnamedblk5__DOT__word_value) 
               | ((QData)((IData)(((payload_and_crc.at(
                                                       ((IData)(3U) 
                                                        + unnamedblk4__DOT__base)) 
                                    << 8U) | payload_and_crc.at(
                                                                ((IData)(2U) 
                                                                 + unnamedblk4__DOT__base))))) 
                  << 0x00000010U));
        unnamedblk4__DOT__unnamedblk5__DOT__word_value 
            = ((0xffff0000ffffffffULL & unnamedblk4__DOT__unnamedblk5__DOT__word_value) 
               | ((QData)((IData)(((payload_and_crc.at(
                                                       ((IData)(5U) 
                                                        + unnamedblk4__DOT__base)) 
                                    << 8U) | payload_and_crc.at(
                                                                ((IData)(4U) 
                                                                 + unnamedblk4__DOT__base))))) 
                  << 0x00000020U));
        unnamedblk4__DOT__unnamedblk5__DOT__word_value 
            = ((0x0000ffffffffffffULL & unnamedblk4__DOT__unnamedblk5__DOT__word_value) 
               | ((QData)((IData)(((payload_and_crc.at(
                                                       ((IData)(7U) 
                                                        + unnamedblk4__DOT__base)) 
                                    << 8U) | payload_and_crc.at(
                                                                ((IData)(6U) 
                                                                 + unnamedblk4__DOT__base))))) 
                  << 0x00000030U));
        words.push_back(unnamedblk4__DOT__unnamedblk5__DOT__word_value);
        unnamedblk4__DOT__base = ((IData)(8U) + unnamedblk4__DOT__base);
    }
}
