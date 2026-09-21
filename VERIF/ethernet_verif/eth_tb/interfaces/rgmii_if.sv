`timescale 1ns/1ps  // Implements this testbench declaration or operation.
interface rgmii_if;  // Declares the interface that groups this DUT protocol signals.
    logic rgmii_rx_clk;  // Declares storage used by this testbench object or operation.
    logic [3:0] rgmii_rxd;  // Declares storage used by this testbench object or operation.
    logic rgmii_rx_ctl;  // Declares storage used by this testbench object or operation.
    logic rgmii_tx_clk;  // Declares storage used by this testbench object or operation.
    logic [3:0] rgmii_txd;  // Declares storage used by this testbench object or operation.
    logic rgmii_tx_ctl;  // Declares storage used by this testbench object or operation.
endinterface  // Ends this interface definition.
