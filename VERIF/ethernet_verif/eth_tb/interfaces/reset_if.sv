`timescale 1ns/1ps  // Implements this testbench declaration or operation.
interface reset_if(input logic clk);  // Declares the interface that groups this DUT protocol signals.
    logic rst_n;  // Declares storage used by this testbench object or operation.
    clocking drv_cb @(posedge clk);  // Defines clock-synchronized access to these interface signals.
        output rst_n;  // Implements this testbench declaration or operation.
    endclocking  // Ends this clocking block.
    clocking mon_cb @(posedge clk);  // Defines clock-synchronized access to these interface signals.
        input rst_n;  // Implements this testbench declaration or operation.
    endclocking  // Ends this clocking block.
endinterface  // Ends this interface definition.
