`timescale 1ns/1ps
interface eth_rgmii_if;
    // External PHY-side RGMII boundary used for MAC transmit/receive verification.
    logic       rx_clk;
    logic [3:0] rxd;
    logic       rx_ctl;
    logic       tx_clk;
    logic [3:0] txd;
    logic       tx_ctl;

    // RX source selection.  Loopback remains the default for the existing RX test.
    logic       loopback_enable = 1'b1;
    logic       bfm_rx_clk;
    logic [3:0] bfm_rxd = 4'h0;
    logic       bfm_rx_ctl = 1'b0;
endinterface
