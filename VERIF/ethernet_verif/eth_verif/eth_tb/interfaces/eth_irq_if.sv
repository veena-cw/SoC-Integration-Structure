`timescale 1ns/1ps
interface eth_irq_if(input logic clk);
    logic irq_tx_compl, irq_rx_compl, irq_dma_err;
endinterface
