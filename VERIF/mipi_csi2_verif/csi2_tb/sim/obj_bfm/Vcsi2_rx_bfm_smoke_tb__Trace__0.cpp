// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcsi2_rx_bfm_smoke_tb__Syms.h"


void Vcsi2_rx_bfm_smoke_tb___024root__trace_chg_0_sub_0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcsi2_rx_bfm_smoke_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root__trace_chg_0\n"); );
    // Body
    Vcsi2_rx_bfm_smoke_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcsi2_rx_bfm_smoke_tb___024root*>(voidSelf);
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcsi2_rx_bfm_smoke_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcsi2_rx_bfm_smoke_tb___024root__trace_chg_0_sub_0(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root__trace_chg_0_sub_0\n"); );
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.lane_configuration),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.mode_selection),32);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.active_segment_mask),4);
    }
    if (VL_UNLIKELY((((((vlSelfRef.__Vm_traceActivity[1U] 
                         | vlSelfRef.__Vm_traceActivity[2U]) 
                        | vlSelfRef.__Vm_traceActivity[3U]) 
                       | vlSelfRef.__Vm_traceActivity[4U]) 
                      | vlSelfRef.__Vm_traceActivity[10U])))) {
        bufp->chgBit(oldp+3,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxactivehs));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxcalibrationprehs));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxerrcalhs));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxlpdtesc));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxulpsesc));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidesc));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.direction));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.stopstate));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.ulpsactivenot));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsoths));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsotsynchs));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.erresc));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errsyncesc));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontrol));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp0));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.errcontentionlp1));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg7));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rx_lane_sts_reg4));
        bufp->chgCData(oldp+21,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxcalibrationformat),2);
        bufp->chgQData(oldp+22,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs),64);
        bufp->chgCData(oldp+24,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxinvalidcodehs),4);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxvalidhs),4);
        bufp->chgCData(oldp+26,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynchs),4);
        bufp->chgCData(oldp+27,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs0),3);
        bufp->chgCData(oldp+28,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs1),3);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs2),3);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxsynctypehs3),3);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpvalidhs),4);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode0),4);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode1),4);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode2),4);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpcode3),4);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble0),4);
        bufp->chgCData(oldp+37,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble1),4);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble2),4);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxalpnibble3),4);
        bufp->chgCData(oldp+40,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxtriggeresc),4);
        bufp->chgCData(oldp+41,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdataesc),8);
        bufp->chgQData(oldp+42,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rxdatahs),64);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.bfm_state),4);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.pending_sot_on_first_word));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+46,((1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_data_reg))));
        bufp->chgBit(oldp+47,((1U & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_data_reg))));
        bufp->chgSData(oldp+48,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin_sync1),13);
        bufp->chgSData(oldp+49,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin_sync2),13);
        bufp->chgQData(oldp+50,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_data_reg),56);
        bufp->chgSData(oldp+52,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin_sync1),13);
        bufp->chgSData(oldp+53,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin_sync2),13);
        bufp->chgQData(oldp+54,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_data_reg),56);
        bufp->chgSData(oldp+56,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin_sync1),13);
        bufp->chgSData(oldp+57,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin_sync2),13);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+58,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awvalid));
        bufp->chgIData(oldp+59,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awid),32);
        bufp->chgCData(oldp+60,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awlen),8);
        bufp->chgCData(oldp+61,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awsize),3);
        bufp->chgCData(oldp+62,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awburst),2);
        bufp->chgIData(oldp+63,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awaddr),32);
        bufp->chgCData(oldp+64,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awcache),4);
        bufp->chgCData(oldp+65,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awprot),3);
        bufp->chgCData(oldp+66,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awqos),4);
        bufp->chgCData(oldp+67,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__awregion),4);
        bufp->chgBit(oldp+68,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bready));
        bufp->chgBit(oldp+69,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__awlock));
        bufp->chgBit(oldp+70,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__awuser));
        bufp->chgBit(oldp+71,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__wuser));
        bufp->chgBit(oldp+72,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_pixel_rd));
        bufp->chgBit(oldp+73,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_empty_r));
        bufp->chgSData(oldp+74,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__wready_wait_ctr),10);
        bufp->chgSData(oldp+75,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__yuv_ctr),9);
        bufp->chgQData(oldp+76,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_width),56);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+78,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_pixel_dvld));
        bufp->chgBit(oldp+79,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_wr_en));
        bufp->chgBit(oldp+80,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__full));
        bufp->chgBit(oldp+81,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2) 
                               == (0x00001fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin))))));
        bufp->chgBit(oldp+82,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2) 
                               == (0x00001fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin))))));
        bufp->chgQData(oldp+83,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_data_in),56);
        bufp->chgSData(oldp+85,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__wr_ptr_bin),13);
        bufp->chgSData(oldp+86,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync1),13);
        bufp->chgSData(oldp+87,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin_sync2),13);
        bufp->chgSData(oldp+88,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin),13);
        bufp->chgSData(oldp+89,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync1),13);
        bufp->chgSData(oldp+90,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin_sync2),13);
        bufp->chgSData(oldp+91,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin),13);
        bufp->chgSData(oldp+92,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync1),13);
        bufp->chgSData(oldp+93,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin_sync2),13);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+94,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__turnrequest));
        bufp->chgBit(oldp+95,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__turndisable));
        bufp->chgBit(oldp+96,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__forcerxmode));
        bufp->chgBit(oldp+97,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__enable));
        bufp->chgBit(oldp+98,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT____Vcellout__dut__rxalp_lpselect));
        bufp->chgBit(oldp+99,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld1));
        bufp->chgBit(oldp+100,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld2));
        bufp->chgBit(oldp+101,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld3));
        bufp->chgBit(oldp+102,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld4));
        bufp->chgBit(oldp+103,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld5));
        bufp->chgBit(oldp+104,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld6));
        bufp->chgBit(oldp+105,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld7));
        bufp->chgBit(oldp+106,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld8));
        bufp->chgBit(oldp+107,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld9));
        bufp->chgBit(oldp+108,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg_vld10));
        bufp->chgBit(oldp+109,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld));
        bufp->chgBit(oldp+110,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_dvalid));
        bufp->chgQData(oldp+111,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_pixel_data),56);
        bufp->chgCData(oldp+113,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr24),2);
        bufp->chgCData(oldp+114,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr16),2);
        bufp->chgCData(oldp+115,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr56),3);
        bufp->chgCData(oldp+116,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr40),3);
        bufp->chgCData(oldp+117,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr72),4);
        bufp->chgCData(oldp+118,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg1),8);
        bufp->chgSData(oldp+119,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg2),16);
        bufp->chgIData(oldp+120,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg3),24);
        bufp->chgIData(oldp+121,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg4),32);
        bufp->chgQData(oldp+122,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg5),40);
        bufp->chgQData(oldp+124,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg6),48);
        bufp->chgQData(oldp+126,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg7),56);
        bufp->chgQData(oldp+128,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg8),64);
        bufp->chgWData(oldp+130,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg9),72);
        bufp->chgWData(oldp+133,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buff_reg10),80);
        bufp->chgBit(oldp+136,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_vld));
        bufp->chgCData(oldp+137,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_bp_data),8);
        bufp->chgCData(oldp+138,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data),8);
        bufp->chgBit(oldp+139,((7U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_ctr72))));
        bufp->chgBit(oldp+140,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__bp_rx_inst__DOT__pixel_dvalid_stop));
        bufp->chgBit(oldp+141,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxerrcalhs_reg));
        bufp->chgCData(oldp+142,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxcalibrationformat_reg),2);
        bufp->chgCData(oldp+143,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg),4);
        bufp->chgCData(oldp+144,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg),4);
        bufp->chgBit(oldp+145,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg_vld));
        bufp->chgBit(oldp+146,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg_vld));
        bufp->chgBit(oldp+147,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpcode_reg_vld));
        bufp->chgBit(oldp+148,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpnibble_reg_vld));
        bufp->chgCData(oldp+149,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxtriggeresc_reg),4);
        bufp->chgCData(oldp+150,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxdataesc_reg),8);
        bufp->chgBit(oldp+151,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2) 
                                == (0x000003ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin))))));
        bufp->chgBit(oldp+152,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_wr_en));
        bufp->chgBit(oldp+153,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_en));
        bufp->chgBit(oldp+154,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_active_vld));
        bufp->chgBit(oldp+155,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_rd_vld));
        bufp->chgBit(oldp+156,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld_out));
        bufp->chgCData(oldp+157,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__empty_vld),2);
        bufp->chgQData(oldp+158,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_data_in),64);
        bufp->chgBit(oldp+160,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__wait_en));
        bufp->chgCData(oldp+161,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_sm_sts),4);
        bufp->chgBit(oldp+162,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxlpdtesc_en));
        bufp->chgBit(oldp+163,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxulpsesc_en));
        bufp->chgBit(oldp+164,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__ulpsactivenot_en));
        bufp->chgBit(oldp+165,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxactivehs_en));
        bufp->chgCData(oldp+166,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rxalpvalidhs_reg),4);
        bufp->chgSData(oldp+167,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin),10);
        bufp->chgSData(oldp+168,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync1),10);
        bufp->chgSData(oldp+169,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin_sync2),10);
        bufp->chgSData(oldp+170,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin_sync1),10);
        bufp->chgSData(oldp+171,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__wr_ptr_bin_sync2),10);
        bufp->chgBit(oldp+172,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_short));
        bufp->chgBit(oldp+173,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcvld_out_long));
        bufp->chgBit(oldp+174,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data_vld));
        bufp->chgBit(oldp+175,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_crcvld_out_long));
        bufp->chgBit(oldp+176,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_vld));
        bufp->chgBit(oldp+177,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_strt_vld));
        bufp->chgBit(oldp+178,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_frame_end_vld));
        bufp->chgBit(oldp+179,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_strt_vld));
        bufp->chgBit(oldp+180,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_line_end_vld));
        bufp->chgBit(oldp+181,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code1_vld));
        bufp->chgBit(oldp+182,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code2_vld));
        bufp->chgBit(oldp+183,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code3_vld));
        bufp->chgBit(oldp+184,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code4_vld));
        bufp->chgBit(oldp+185,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code5_vld));
        bufp->chgBit(oldp+186,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code6_vld));
        bufp->chgBit(oldp+187,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code7_vld));
        bufp->chgBit(oldp+188,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_code8_vld));
        bufp->chgBit(oldp+189,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_null_vld));
        bufp->chgBit(oldp+190,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__blank_data_vld));
        bufp->chgBit(oldp+191,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__emb_8b_nimg_data_vld));
        bufp->chgBit(oldp+192,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype1_vld));
        bufp->chgBit(oldp+193,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype2_vld));
        bufp->chgBit(oldp+194,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype3_vld));
        bufp->chgBit(oldp+195,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype4_vld));
        bufp->chgBit(oldp+196,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_vld));
        bufp->chgBit(oldp+197,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_vld));
        bufp->chgBit(oldp+198,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__legacy_yuv420_8b_vld));
        bufp->chgBit(oldp+199,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_8b_csps_vld));
        bufp->chgBit(oldp+200,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv420_10b_csps_vld));
        bufp->chgBit(oldp+201,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_8b_vld));
        bufp->chgBit(oldp+202,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv422_10b_vld));
        bufp->chgBit(oldp+203,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld));
        bufp->chgBit(oldp+204,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld));
        bufp->chgBit(oldp+205,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld));
        bufp->chgBit(oldp+206,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld));
        bufp->chgBit(oldp+207,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld));
        bufp->chgBit(oldp+208,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld));
        bufp->chgBit(oldp+209,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld));
        bufp->chgBit(oldp+210,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld));
        bufp->chgBit(oldp+211,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld));
        bufp->chgBit(oldp+212,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld));
        bufp->chgBit(oldp+213,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld));
        bufp->chgBit(oldp+214,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld));
        bufp->chgBit(oldp+215,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld));
        bufp->chgBit(oldp+216,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld));
        bufp->chgBit(oldp+217,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld));
        bufp->chgBit(oldp+218,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__eot_vld));
        bufp->chgBit(oldp+219,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dstart));
        bufp->chgBit(oldp+220,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_valid));
        bufp->chgBit(oldp+221,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out_vld));
        bufp->chgBit(oldp+222,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_vld));
        bufp->chgBit(oldp+223,((0U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status))));
        bufp->chgBit(oldp+224,((0x0fffU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status))));
        bufp->chgBit(oldp+225,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rd_en));
        bufp->chgBit(oldp+226,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__under_flow));
        bufp->chgBit(oldp+227,((0x0fffU <= (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status))));
        bufp->chgBit(oldp+228,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_vld_r));
        bufp->chgCData(oldp+229,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_bp_data_r),8);
        bufp->chgCData(oldp+230,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw8),6);
        bufp->chgSData(oldp+231,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw6),9);
        bufp->chgCData(oldp+232,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_rx_data_out),8);
        bufp->chgCData(oldp+233,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_lsb_rx),8);
        bufp->chgCData(oldp+234,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_chksum_msb_rx),8);
        bufp->chgCData(oldp+235,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg),8);
        bufp->chgCData(oldp+236,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r),8);
        bufp->chgCData(oldp+237,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_data),8);
        bufp->chgCData(oldp+238,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dout_llp),8);
        bufp->chgSData(oldp+239,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw7),10);
        bufp->chgSData(oldp+240,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw12),10);
        bufp->chgSData(oldp+241,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw10),10);
        bufp->chgSData(oldp+242,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw14),11);
        bufp->chgSData(oldp+243,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw20),11);
        bufp->chgSData(oldp+244,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_raw28),12);
        bufp->chgSData(oldp+245,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr888_24),11);
        bufp->chgSData(oldp+246,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr666),11);
        bufp->chgSData(oldp+247,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr565_555_444_16),11);
        bufp->chgSData(oldp+248,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_lyuv4208),10);
        bufp->chgSData(oldp+249,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_odd),10);
        bufp->chgSData(oldp+250,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_odd),10);
        bufp->chgSData(oldp+251,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv4208_even_4228),11);
        bufp->chgSData(oldp+252,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_ctr_yuv42010_even_42210),11);
        bufp->chgSData(oldp+253,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_short),16);
        bufp->chgSData(oldp+254,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_crcdata_out_long),16);
        bufp->chgSData(oldp+255,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_crcdata_out_long),16);
        bufp->chgCData(oldp+256,((0x0000000fU & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT____Vcellout__llp_sync_fifo_inst__FIFO_Status_out))),4);
        bufp->chgBit(oldp+257,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_r));
        bufp->chgSData(oldp+258,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc),16);
        bufp->chgBit(oldp+259,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc_valid_r));
        bufp->chgSData(oldp+260,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__crc),16);
        bufp->chgSData(oldp+261,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__reg_crc),16);
        bufp->chgIData(oldp+262,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_data__DOT__j),32);
        bufp->chgBit(oldp+263,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_r));
        bufp->chgSData(oldp+264,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc),16);
        bufp->chgSData(oldp+265,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT____Vcellout__llp_sync_fifo_inst__FIFO_Status_out),12);
        bufp->chgBit(oldp+266,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__over_flow));
        bufp->chgSData(oldp+267,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__FIFO_Status),12);
        bufp->chgSData(oldp+268,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Rd_ptr),12);
        bufp->chgSData(oldp+269,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__Wr_ptr),12);
        bufp->chgCData(oldp+270,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_sync_fifo_inst__DOT__data_in_tmp),8);
        bufp->chgCData(oldp+271,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__byte_data_vld_r),7);
        bufp->chgCData(oldp+272,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__rx_buff_reg_vld6_r),7);
        bufp->chgSData(oldp+273,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable_r),10);
        bufp->chgCData(oldp+274,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr32),4);
        bufp->chgCData(oldp+275,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr80),4);
        bufp->chgCData(oldp+276,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr64),3);
        bufp->chgCData(oldp+277,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__rx_byte_ctr48),6);
        bufp->chgBit(oldp+278,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__enable));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[8U] 
                      | vlSelfRef.__Vm_traceActivity[12U])))) {
        bufp->chgBit(oldp+279,((IData)((((0U == (0xf8U 
                                                 & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r))) 
                                         & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r)) 
                                        & (1U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr))))));
        bufp->chgBit(oldp+280,((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data) 
                                 == (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld) 
                                      | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld))
                                      ? 0xbfU : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                  ? 0xcfU
                                                  : 
                                                 (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                   & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld) 
                                                      | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld) 
                                                         | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld) 
                                                            | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld)))))
                                                   ? 0x7fU
                                                   : 
                                                  (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                    ? 0xefU
                                                    : 
                                                   (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                     ? 0x17U
                                                     : 
                                                    (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                      & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld) 
                                                         | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld)))
                                                      ? 0x1fU
                                                      : 
                                                     (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                       ? 0x8fU
                                                       : 
                                                      (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                        ? 0xdfU
                                                        : 
                                                       (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                         ? 0x2fU
                                                         : 
                                                        (0x5fU 
                                                         & (- (IData)(
                                                                      ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))))))))))))) 
                                & ((2U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)))));
        bufp->chgBit(oldp+281,((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_data) 
                                 == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_reg)) 
                                & ((3U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr)) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26)))));
        bufp->chgCData(oldp+282,((3U & (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                         >> 6U) & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))))),2);
        bufp->chgCData(oldp+283,((7U & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                        & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))),3);
        bufp->chgCData(oldp+284,((0x0000001fU & (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                                  >> 3U) 
                                                 & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))),5);
        bufp->chgCData(oldp+285,((0x0000003fU & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                                 & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))))),6);
        bufp->chgCData(oldp+286,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                  & (- (IData)(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))))),8);
        bufp->chgCData(oldp+287,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                  & (- (IData)(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21)))))),8);
        bufp->chgCData(oldp+288,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                  & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))))),8);
        bufp->chgCData(oldp+289,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_data_r) 
                                  & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))))),8);
        bufp->chgCData(oldp+290,((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb888_vld) 
                                   | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw24_vld))
                                   ? 0xbfU : (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb666_vld) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                               ? 0xcfU
                                               : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                   & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb565_vld) 
                                                      | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb555_vld) 
                                                         | ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb444_vld) 
                                                            | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw16_vld)))))
                                                   ? 0x7fU
                                                   : 
                                                  (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw6_vld) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                    ? 0xefU
                                                    : 
                                                   (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw7_vld) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                     ? 0x17U
                                                     : 
                                                    (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                      & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw8_vld) 
                                                         | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw20_vld)))
                                                      ? 0x1fU
                                                      : 
                                                     (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw10_vld) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                       ? 0x8fU
                                                       : 
                                                      (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw12_vld) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                        ? 0xdfU
                                                        : 
                                                       (((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw14_vld) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                         ? 0x2fU
                                                         : 
                                                        (0x5fU 
                                                         & (- (IData)(
                                                                      ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw28_vld) 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))))))))))))),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+291,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__pwrite_vld));
        bufp->chgBit(oldp+292,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata_vld1));
        bufp->chgIData(oldp+293,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata1),32);
        bufp->chgCData(oldp+294,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_req_vld_r),2);
        bufp->chgIData(oldp+295,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata),32);
        bufp->chgIData(oldp+296,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata),32);
        bufp->chgIData(oldp+297,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__paddr_vld),32);
        bufp->chgIData(oldp+298,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__pwdata_reg),32);
        bufp->chgBit(oldp+299,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_rx_err_reg));
        bufp->chgCData(oldp+300,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__dtype_reg),6);
        bufp->chgCData(oldp+301,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__axim_rsp_sts_reg),2);
        bufp->chgBit(oldp+302,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata_vld));
        bufp->chgBit(oldp+303,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata_vld1));
        bufp->chgBit(oldp+304,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata_vld));
        bufp->chgIData(oldp+305,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_wdata1),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[11U]))) {
        bufp->chgBit(oldp+306,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pready));
        bufp->chgBit(oldp+307,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_req_vld));
        bufp->chgBit(oldp+308,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_slve_err));
        bufp->chgBit(oldp+309,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_addr_vld));
        bufp->chgIData(oldp+310,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_addr),32);
        bufp->chgIData(oldp+311,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__reg_data),32);
        bufp->chgCData(oldp+312,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[12U]))) {
        bufp->chgBit(oldp+313,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__pkt_en));
        bufp->chgBit(oldp+314,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err_vld));
        bufp->chgCData(oldp+315,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_err),3);
        bufp->chgBit(oldp+316,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__long_pkt_vld));
        bufp->chgCData(oldp+317,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg),6);
        bufp->chgBit(oldp+318,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_lm_byte_vld));
        bufp->chgBit(oldp+319,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_err));
        bufp->chgBit(oldp+320,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__data_type_rx_reg_vld));
        bufp->chgBit(oldp+321,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__empty));
        bufp->chgBit(oldp+322,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rd_vld));
        bufp->chgCData(oldp+323,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__byte_ctr_rx),3);
        bufp->chgQData(oldp+324,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_data_reg),64);
        bufp->chgCData(oldp+326,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_cur_state),7);
        bufp->chgBit(oldp+327,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_out_vld));
        bufp->chgBit(oldp+328,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__rx_lm_dstop));
        bufp->chgCData(oldp+329,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__lm_empty_vld),7);
        bufp->chgSData(oldp+330,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__async_fifo_binary_inst__DOT__rd_ptr_bin),10);
        bufp->chgBit(oldp+331,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_valid_rx));
        bufp->chgBit(oldp+332,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_valid_rx));
        bufp->chgBit(oldp+333,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt));
        bufp->chgBit(oldp+334,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err));
        bufp->chgBit(oldp+335,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_err_vld));
        bufp->chgBit(oldp+336,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__ssp_dtype_vld));
        bufp->chgBit(oldp+337,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__gsp_dtype_vld));
        bufp->chgBit(oldp+338,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__glp_dtype_vld));
        bufp->chgBit(oldp+339,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__yuv_dtype_vld));
        bufp->chgBit(oldp+340,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rgb_dtype_vld));
        bufp->chgBit(oldp+341,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__raw_dtype_vld));
        bufp->chgBit(oldp+342,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__datatype_checker_err));
        bufp->chgBit(oldp+343,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__hdr_rsvd_err));
        bufp->chgBit(oldp+344,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_lsb_err));
        bufp->chgBit(oldp+345,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__wc_msb_err));
        bufp->chgBit(oldp+346,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld));
        bufp->chgBit(oldp+347,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                & ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt)) 
                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))))));
        bufp->chgBit(oldp+348,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))));
        bufp->chgBit(oldp+349,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r));
        bufp->chgBit(oldp+350,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid));
        bufp->chgBit(oldp+351,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r));
        bufp->chgBit(oldp+352,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_strt_r));
        bufp->chgBit(oldp+353,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__long_pkt_vld_r));
        bufp->chgBit(oldp+354,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__shrt_pkt_vld_r));
        bufp->chgBit(oldp+355,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__dtype_vld_chk));
        bufp->chgBit(oldp+356,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_violation_err));
        bufp->chgCData(oldp+357,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr),2);
        bufp->chgCData(oldp+358,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__llp_dec_ctr),5);
        bufp->chgCData(oldp+359,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__crc_data_rx),8);
        bufp->chgCData(oldp+360,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__crc_data_rx),8);
        bufp->chgCData(oldp+361,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx),8);
        bufp->chgCData(oldp+362,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx),8);
        bufp->chgSData(oldp+363,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx),16);
        bufp->chgSData(oldp+364,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_hdr_reg),16);
        bufp->chgSData(oldp+365,(((((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_msb_rx) 
                                    << 8U) | (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_chksum_lsb_rx)) 
                                  & (- (IData)(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__rx_lm_byte_vld_r) 
                                                & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__data_end_valid_r) 
                                                   & (2U 
                                                      == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__foot_ctr)))))))),16);
        bufp->chgSData(oldp+366,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc_reg_rx_r),16);
        bufp->chgSData(oldp+367,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__reg_crc),16);
        bufp->chgIData(oldp+368,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst__DOT__j),32);
        bufp->chgSData(oldp+369,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__reg_crc),16);
        bufp->chgIData(oldp+370,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__llp_rx_inst__DOT__crc16_inst_long_hdr__DOT__j),32);
        bufp->chgBit(oldp+371,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg1));
        bufp->chgBit(oldp+372,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg3));
        bufp->chgBit(oldp+373,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg4));
        bufp->chgBit(oldp+374,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_buffer_register_inst__DOT__datatype_reg6));
        bufp->chgBit(oldp+375,((0x1dU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
        bufp->chgBit(oldp+376,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg1));
        bufp->chgBit(oldp+377,((0x23U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
        bufp->chgBit(oldp+378,(((0x22U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                                | ((0x21U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                                   | ((0x20U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                                      | (0x2eU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)))))));
        bufp->chgBit(oldp+379,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__rx_byte_counter_inst__DOT__data_type_rx_reg4));
        bufp->chgBit(oldp+380,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
                                | ((0x1dU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg)) 
                                   | (0x19U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))))));
        bufp->chgBit(oldp+381,((0x1cU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
        bufp->chgBit(oldp+382,((0x19U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
        bufp->chgBit(oldp+383,((0x18U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
        bufp->chgBit(oldp+384,((0x1aU == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__dtype_sts_reg))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[13U]))) {
        bufp->chgBit(oldp+385,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wlast));
        bufp->chgQData(oldp+386,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wdata),64);
        bufp->chgCData(oldp+388,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wstrb),7);
        bufp->chgBit(oldp+389,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_err));
        bufp->chgCData(oldp+390,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_sts),2);
        bufp->chgCData(oldp+391,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axim_stats),2);
    }
    bufp->chgBit(oldp+392,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bfm_clk));
    bufp->chgBit(oldp+393,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__aclk));
    bufp->chgBit(oldp+394,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pclk));
    bufp->chgBit(oldp+395,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__areset_n));
    bufp->chgBit(oldp+396,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__rd_rst_n));
    bufp->chgBit(oldp+397,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n));
    bufp->chgBit(oldp+398,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__wvalid));
    bufp->chgBit(oldp+399,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__bvalid));
    bufp->chgBit(oldp+400,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__pslverr));
    bufp->chgIData(oldp+401,((vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata 
                              & (- (IData)(((3U == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_present_state)) 
                                            & ((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__pready) 
                                               & ((~ (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__pslverr)) 
                                                  & (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__csi2_reg_rdata_vld)))))))),32);
    bufp->chgIData(oldp+402,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__axi_write_beats),32);
    bufp->chgBit(oldp+403,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rst_n));
    bufp->chgBit(oldp+404,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__axi_rd_vld));
    bufp->chgBit(oldp+405,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__empty));
    bufp->chgBit(oldp+406,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__wr_ptr_bin) 
                            == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin))));
    bufp->chgBit(oldp+407,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__wr_ptr_bin) 
                            == (IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin))));
    bufp->chgQData(oldp+408,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_data_reg),56);
    bufp->chgSData(oldp+410,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst__DOT__rd_ptr_bin),13);
    bufp->chgSData(oldp+411,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_alp__DOT__rd_ptr_bin),13);
    bufp->chgSData(oldp+412,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__axim_inst__DOT__async_fifo_binary_axi_inst_esc__DOT__rd_ptr_bin),13);
    bufp->chgIData(oldp+413,(((IData)(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__prst_n)
                               ? vlSelfRef.__VdfgSynthAssign_csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_pwdata_h6e95ff9d_0_1
                               : 0U)),32);
    bufp->chgIData(oldp+414,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__s_paddr),32);
    bufp->chgCData(oldp+415,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__csi2_rx_reg_inst__DOT__apb_slave_inst__DOT__apb_next_state),2);
    bufp->chgBit(oldp+416,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2_rx_data_reg_vld));
    bufp->chgBit(oldp+417,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_err));
    bufp->chgCData(oldp+418,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__dut__DOT__lane_merging_rx_inst__DOT__csi2rx_next_state),7);
    bufp->chgBit(oldp+419,(vlSelfRef.csi2_rx_bfm_smoke_tb__DOT__smoke_test__DOT__completed));
    bufp->chgCData(oldp+420,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.last_status),4);
    bufp->chgBit(oldp+421,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_sync_workaround));
    bufp->chgBit(oldp+422,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_ulps_polarity_workaround));
    bufp->chgBit(oldp+423,(vlSymsp->TOP__csi2_rx_bfm_smoke_tb__DOT__phy_bfm.rtl_eot_workaround));
}

void Vcsi2_rx_bfm_smoke_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsi2_rx_bfm_smoke_tb___024root__trace_cleanup\n"); );
    // Body
    Vcsi2_rx_bfm_smoke_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcsi2_rx_bfm_smoke_tb___024root*>(voidSelf);
    Vcsi2_rx_bfm_smoke_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[13U] = 0U;
}
