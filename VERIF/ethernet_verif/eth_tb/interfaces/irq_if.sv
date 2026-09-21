`timescale 1ns/1ps  // Implements this testbench declaration or operation.
interface irq_if(input logic clk);  // Declares the interface that groups this DUT protocol signals.
    logic irq_tx_cmpl,irq_rx_cmpl,irq_DMA_err;  // Declares storage used by this testbench object or operation.
    clocking mon_cb @(posedge clk);  // Defines clock-synchronized access to these interface signals.
        input irq_tx_cmpl,irq_rx_cmpl,irq_DMA_err;  // Implements this testbench declaration or operation.
    endclocking  // Ends this clocking block.
endinterface  // Ends this interface definition.
