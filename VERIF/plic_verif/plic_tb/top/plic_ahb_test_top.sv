//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: 
//  Module            				: 
//  Primary Unit Owner                         	: 
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : 
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

// Generated test_top for AHB-Lite (verification wrapper, DUT external)
`include "uvm_macros.svh"
import uvm_pkg::*;

module plic_ahb_test_top;
    logic hclk;
    plic_reset_if RST_vif();

    plic_ahb_lite_if AHB_LITE_vif (
        .hclk     (hclk),
        .hreset_n (RST_vif.rst_n)
    );

    // Clock generation
    initial begin
        hclk = 0;
        forever #5 hclk = ~hclk;
    end

    // Reset generation via reset_if (reset-aware)
    initial begin
        RST_vif.rst_n = 1'b0;
        repeat (5) @(posedge hclk);
        RST_vif.rst_n = 1'b1;
    end
     // PLIC DUT instance
    ahb3lite_plic_top #(
        .SOURCES          (16),
        .TARGETS          (4),
        .PRIORITIES       (8),
        .HAS_THRESHOLD    (1),
        .HAS_CONFIG_REG   (1),
        .HADDR_SIZE       (16),
        .HDATA_SIZE       (32)
    ) dut (
        .HCLK      (hclk),
        .HRESETn   (RST_vif.rst_n),

        .HSEL      (AHB_LITE_vif.hsel),
        .HADDR     (AHB_LITE_vif.haddr),
        .HWDATA    (AHB_LITE_vif.hwdata),
        .HRDATA    (AHB_LITE_vif.hrdata),
        .HWRITE    (AHB_LITE_vif.hwrite),
        .HSIZE     (AHB_LITE_vif.hsize),
        .HBURST    (AHB_LITE_vif.hburst),
        .HTRANS    (AHB_LITE_vif.htrans),
        .HREADY    (AHB_LITE_vif.hready),
        .HREADYOUT (AHB_LITE_vif.hreadyout),
        .HRESP     (AHB_LITE_vif.hresp),

        .src       (src),
        .irq       (irq)
    );

    // Waveform dump
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, plic_ahb_test_top);
    end

    // Resource DB only, no config_db, no modports
    initial begin
        uvm_resource_db#(virtual plic_reset_if)::set("*", "rst_vif", RST_vif);
        uvm_resource_db#(virtual plic_ahb_lite_if)::set("*", "vif", AHB_LITE_vif);
        run_test();
    end
endmodule
