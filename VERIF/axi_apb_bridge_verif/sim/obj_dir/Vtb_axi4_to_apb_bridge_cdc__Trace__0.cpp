// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_axi4_to_apb_bridge_cdc__Syms.h"


void Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_0_sub_0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_0\n"); );
    // Body
    Vtb_axi4_to_apb_bridge_cdc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_to_apb_bridge_cdc___024root*>(voidSelf);
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_dtype____0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);

void Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_0_sub_0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_0_sub_0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__d),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+10,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count),32);
        bufp->chgWData(oldp+11,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[0]),128);
        bufp->chgWData(oldp+15,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[1]),128);
        bufp->chgWData(oldp+19,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[2]),128);
        bufp->chgWData(oldp+23,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[3]),128);
        bufp->chgWData(oldp+27,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[4]),128);
        bufp->chgWData(oldp+31,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[5]),128);
        bufp->chgWData(oldp+35,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[6]),128);
        bufp->chgWData(oldp+39,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[7]),128);
        bufp->chgWData(oldp+43,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data),128);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgWData(oldp+48,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[0]),72);
        bufp->chgWData(oldp+51,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[1]),72);
        bufp->chgWData(oldp+54,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[2]),72);
        bufp->chgWData(oldp+57,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[3]),72);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgIData(oldp+60,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count),32);
        bufp->chgQData(oldp+61,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[0]),33);
        bufp->chgQData(oldp+63,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[1]),33);
        bufp->chgQData(oldp+65,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[2]),33);
        bufp->chgQData(oldp+67,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[3]),33);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[7U])))) {
        bufp->chgCData(oldp+69,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID),4);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR),32);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN),8);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE),3);
        bufp->chgCData(oldp+73,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST),2);
        bufp->chgBit(oldp+74,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK));
        bufp->chgCData(oldp+75,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE),4);
        bufp->chgCData(oldp+76,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT),3);
        bufp->chgBit(oldp+77,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID));
        bufp->chgWData(oldp+78,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA),128);
        bufp->chgSData(oldp+82,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB),16);
        bufp->chgBit(oldp+83,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST));
        bufp->chgBit(oldp+84,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID));
        bufp->chgBit(oldp+85,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY));
        bufp->chgCData(oldp+86,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID),4);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR),32);
        bufp->chgCData(oldp+88,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN),8);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE),3);
        bufp->chgCData(oldp+90,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST),2);
        bufp->chgBit(oldp+91,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK));
        bufp->chgCData(oldp+92,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE),4);
        bufp->chgCData(oldp+93,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT),3);
        bufp->chgBit(oldp+94,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID));
        bufp->chgBit(oldp+95,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+96,((((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                 ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY)
                                 : ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                     ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY)
                                     : ((4U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                         ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY)
                                         : ((8U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                             ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready)
                                             : ((0x10U 
                                                 == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                 ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready)
                                                 : 
                                                ((0x20U 
                                                  == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                  ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready)
                                                  : 
                                                 ((0x40U 
                                                   == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                   ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready)
                                                   : (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready)))))))) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
        bufp->chgBit(oldp+97,((((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                && ((2U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                    && ((4U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                        && ((8U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                             ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pslverr)
                                             : ((0x10U 
                                                 == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                 ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pslverr)
                                                 : 
                                                ((0x20U 
                                                  == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                  ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pslverr)
                                                  : 
                                                 ((0x40U 
                                                   == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                   ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pslverr)
                                                   : (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pslverr)))))))) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
        bufp->chgIData(oldp+98,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_prdata),32);
        bufp->chgBit(oldp+99,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready));
        bufp->chgBit(oldp+100,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pslverr));
        bufp->chgIData(oldp+101,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_prdata),32);
        bufp->chgBit(oldp+102,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready));
        bufp->chgBit(oldp+103,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pslverr));
        bufp->chgIData(oldp+104,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_prdata),32);
        bufp->chgBit(oldp+105,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready));
        bufp->chgBit(oldp+106,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pslverr));
        bufp->chgIData(oldp+107,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_prdata),32);
        bufp->chgBit(oldp+108,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready));
        bufp->chgBit(oldp+109,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pslverr));
        bufp->chgIData(oldp+110,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_prdata),32);
        bufp->chgBit(oldp+111,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready));
        bufp->chgBit(oldp+112,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pslverr));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+113,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr),3);
        bufp->chgIData(oldp+114,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg),32);
        bufp->chgIData(oldp+115,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__ctrl_reg),32);
        bufp->chgIData(oldp+116,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__clk_div_reg),32);
        bufp->chgIData(oldp+117,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg),32);
        bufp->chgIData(oldp+118,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__status_reg),32);
        bufp->chgIData(oldp+119,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__wait_count),32);
        bufp->chgIData(oldp+120,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg),32);
        bufp->chgIData(oldp+121,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__ctrl_reg),32);
        bufp->chgIData(oldp+122,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__clk_div_reg),32);
        bufp->chgIData(oldp+123,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__wait_count),32);
        bufp->chgIData(oldp+124,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg),32);
        bufp->chgIData(oldp+125,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__ctrl_reg),32);
        bufp->chgIData(oldp+126,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__baud_reg),32);
        bufp->chgIData(oldp+127,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg),32);
        bufp->chgIData(oldp+128,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__wait_count),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+129,((0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))));
        bufp->chgBit(oldp+130,((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))));
        bufp->chgCData(oldp+131,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bid_r),4);
        bufp->chgCData(oldp+132,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r),2);
        bufp->chgBit(oldp+133,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r));
        bufp->chgCData(oldp+134,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rid_r),4);
        bufp->chgWData(oldp+135,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r),128);
        bufp->chgCData(oldp+139,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r),2);
        bufp->chgBit(oldp+140,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rlast_r));
        bufp->chgBit(oldp+141,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r));
        bufp->chgBit(oldp+142,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__w_en));
        bufp->chgBit(oldp+143,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full));
        if ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
            __Vtemp_1[0U] = (IData)((((QData)((IData)(
                                                      (0x0000000fU 
                                                       & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg) 
                                                          >> 
                                                          ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                                           << 2U))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg
                                                       [
                                                       (0x07ffffffU 
                                                        & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))]))));
            __Vtemp_1[1U] = ((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                              << 4U) | (IData)(((((QData)((IData)(
                                                                  (0x0000000fU 
                                                                   & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg) 
                                                                      >> 
                                                                      ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                                                       << 2U))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg
                                                                   [
                                                                   (0x07ffffffU 
                                                                    & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))]))) 
                                                >> 0x00000020U)));
            __Vtemp_1[2U] = (0x00000080U | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r) 
                                             << 4U) 
                                            | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                                               >> 0x0000001cU)));
        } else {
            __Vtemp_1[0U] = 0U;
            __Vtemp_1[1U] = (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                             << 4U);
            __Vtemp_1[2U] = (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r) 
                              << 4U) | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                                        >> 0x0000001cU));
        }
        bufp->chgWData(oldp+144,(__Vtemp_1),72);
        bufp->chgBit(oldp+147,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__r_en));
        bufp->chgBit(oldp+148,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty));
        bufp->chgCData(oldp+149,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state),4);
        bufp->chgCData(oldp+150,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__id_r),4);
        bufp->chgIData(oldp+151,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r),32);
        bufp->chgCData(oldp+152,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r),8);
        bufp->chgCData(oldp+153,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__size_r),3);
        bufp->chgCData(oldp+154,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__burst_r),2);
        bufp->chgCData(oldp+155,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r),3);
        bufp->chgCData(oldp+156,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r),8);
        bufp->chgCData(oldp+157,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r),2);
        bufp->chgWData(oldp+158,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg),128);
        bufp->chgSData(oldp+162,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg),16);
        bufp->chgBit(oldp+163,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r));
        bufp->chgWData(oldp+164,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r),128);
        bufp->chgBit(oldp+168,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_acc_r));
        bufp->chgIData(oldp+169,((0xfffffff0U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r)),32);
        bufp->chgIData(oldp+170,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr),32);
        bufp->chgIData(oldp+171,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg
                                 [(0x07ffffffU & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))]),32);
        bufp->chgCData(oldp+172,((0x0000000fU & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg) 
                                                 >> 
                                                 ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                                  << 2U)))),4);
        bufp->chgCData(oldp+173,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync),3);
        bufp->chgCData(oldp+174,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_wptr),3);
        bufp->chgCData(oldp+175,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_rptr__DOT__q1),3);
        bufp->chgCData(oldp+176,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next),3);
        bufp->chgCData(oldp+177,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr_sync),3);
        bufp->chgCData(oldp+178,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_rptr),3);
        bufp->chgCData(oldp+179,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next),3);
        bufp->chgCData(oldp+180,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_wptr__DOT__q1),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+181,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r),32);
        bufp->chgBit(oldp+182,((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state))));
        bufp->chgBit(oldp+183,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r));
        bufp->chgCData(oldp+184,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_prot_r),3);
        bufp->chgCData(oldp+185,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r),4);
        bufp->chgIData(oldp+186,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r),32);
        bufp->chgIData(oldp+187,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__PRDATA),32);
        bufp->chgBit(oldp+188,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel));
        bufp->chgBit(oldp+189,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel));
        bufp->chgBit(oldp+190,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel));
        bufp->chgBit(oldp+191,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel));
        bufp->chgBit(oldp+192,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel));
        bufp->chgBit(oldp+193,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel));
        bufp->chgBit(oldp+194,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel));
        bufp->chgBit(oldp+195,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel));
        bufp->chgCData(oldp+196,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus),8);
        bufp->chgBit(oldp+197,(((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel) 
                                | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel) 
                                   | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel) 
                                      | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel) 
                                         | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel) 
                                            | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel) 
                                               | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel) 
                                                  | (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel))))))))));
        bufp->chgBit(oldp+198,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY));
        bufp->chgBit(oldp+199,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY));
        bufp->chgBit(oldp+200,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY));
        bufp->chgBit(oldp+201,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__r_en));
        bufp->chgBit(oldp+202,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_empty));
        bufp->chgBit(oldp+203,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__w_en));
        bufp->chgBit(oldp+204,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full));
        bufp->chgQData(oldp+205,((((QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_err_r)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_rdata_r)))),33);
        bufp->chgCData(oldp+207,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state),2);
        bufp->chgBit(oldp+208,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_err_r));
        bufp->chgIData(oldp+209,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_rdata_r),32);
        bufp->chgBit(oldp+210,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active));
        bufp->chgBit(oldp+211,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 7U))));
        bufp->chgBit(oldp+212,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 6U))));
        bufp->chgBit(oldp+213,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 5U))));
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 4U))));
        bufp->chgBit(oldp+215,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 3U))));
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 2U))));
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 1U))));
        bufp->chgBit(oldp+218,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgCData(oldp+219,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr_sync),3);
        bufp->chgCData(oldp+220,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr),3);
        bufp->chgBit(oldp+221,(((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr_sync) 
                                == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__g_rptr_next))));
        bufp->chgCData(oldp+222,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next),3);
        bufp->chgCData(oldp+223,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__g_rptr_next),3);
        bufp->chgCData(oldp+224,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_wptr__DOT__q1),3);
        bufp->chgCData(oldp+225,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync),3);
        bufp->chgCData(oldp+226,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_wptr),3);
        bufp->chgCData(oldp+227,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr),3);
        bufp->chgCData(oldp+228,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_rptr__DOT__q1),3);
        bufp->chgCData(oldp+229,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next),3);
        bufp->chgCData(oldp+230,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__g_wptr_next),3);
        bufp->chgBit(oldp+231,((((6U & ((~ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync) 
                                            >> 1U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync))) 
                                == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__g_wptr_next))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgQData(oldp+232,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out),33);
        bufp->chgWData(oldp+234,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next),128);
        bufp->chgBit(oldp+238,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_next));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[10U]))) {
        bufp->chgWData(oldp+239,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out),72);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[11U]))) {
        bufp->chgCData(oldp+242,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr),3);
        bufp->chgCData(oldp+243,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__g_wptr_next),3);
        bufp->chgCData(oldp+244,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr),3);
        bufp->chgCData(oldp+245,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__g_rptr_next),3);
    }
    bufp->chgBit(oldp+246,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK));
    bufp->chgBit(oldp+247,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK));
    bufp->chgBit(oldp+248,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn));
    bufp->chgBit(oldp+249,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn));
    bufp->chgBit(oldp+250,(((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID)) 
                            & (0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state)))));
    bufp->chgIData(oldp+251,((((0U == (0x000000ffU 
                                       & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg
                                : ((4U == (0x000000ffU 
                                           & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                    ? 1U : ((8U == 
                                             (0x000000ffU 
                                              & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                             ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__ctrl_reg
                                             : ((0x0cU 
                                                 == 
                                                 (0x000000ffU 
                                                  & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                                 ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__baud_reg
                                                 : 
                                                (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg 
                                                 & (- (IData)(
                                                              (0x10U 
                                                               == 
                                                               (0x000000ffU 
                                                                & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                              & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel))))),32);
    bufp->chgIData(oldp+252,((((0U == (0x000000ffU 
                                       & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg
                                : ((4U == (0x000000ffU 
                                           & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                    ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg
                                    : ((8U == (0x000000ffU 
                                               & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                        ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__ctrl_reg
                                        : ((0x0cU == 
                                            (0x000000ffU 
                                             & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                            ? 1U : 
                                           (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__clk_div_reg 
                                            & (- (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x000000ffU 
                                                           & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                              & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel))))),32);
    bufp->chgIData(oldp+253,((((0U == (0x000000ffU 
                                       & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg
                                : ((4U == (0x000000ffU 
                                           & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                    ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__ctrl_reg
                                    : ((8U == (0x000000ffU 
                                               & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                        ? 1U : ((0x0cU 
                                                 == 
                                                 (0x000000ffU 
                                                  & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                                 ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__clk_div_reg
                                                 : 
                                                (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg 
                                                 & (- (IData)(
                                                              (0x10U 
                                                               == 
                                                               (0x000000ffU 
                                                                & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                              & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel))))),32);
    bufp->chgBit(oldp+254,((((6U & ((~ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync) 
                                        >> 1U)) << 1U)) 
                             | (1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync))) 
                            == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__g_wptr_next))));
    bufp->chgBit(oldp+255,(((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr_sync) 
                            == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__g_rptr_next))));
}

void Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_dtype____0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_dtype____0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vtb_axi4_to_apb_bridge_cdc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_cleanup\n"); );
    // Body
    Vtb_axi4_to_apb_bridge_cdc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_to_apb_bridge_cdc___024root*>(voidSelf);
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
