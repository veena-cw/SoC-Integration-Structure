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

// Generated test_top for APB (verification wrapper, DUT external)
`include "uvm_macros.svh"
import uvm_pkg::*;

module plic_apb_test_top;
    logic pclk;
    logic [15:0] src;
    logic [3:0] irq;
    plic_reset_if RST_vif();

    plic_apb_if APB_vif (
        .pclk     (pclk),
        .preset_n (RST_vif.rst_n)
    );
//==========================================================     // DUT     //==========================================================    
 apb4_plic_top #(.PADDR_SIZE(32),
 .PDATA_SIZE (32),.SOURCES (16),
 .TARGETS(4),.PRIORITIES (8),
 .MAX_PENDING_COUNT(8),.HAS_THRESHOLD (1), 
 .HAS_CONFIG_REG (1)) 
 dut (.PRESETn (RST_vif.rst_n),.PCLK (pclk),.PSEL(APB_vif.psel),.PENABLE(APB_vif.penable),
    .PADDR(APB_vif.paddr),.PWRITE(APB_vif.pwrite),.PSTRB(APB_vif.pstrb),.PWDATA (APB_vif.pwdata),      
    .PRDATA(APB_vif.prdata), .PREADY (APB_vif.pready),.PSLVERR(APB_vif.pslverr),         
    .src(src),.irq(irq) );
    // Clock generation
    initial begin
        pclk = 0;
        forever #5 pclk = ~pclk;
    end

    // Reset generation via reset_if (reset-aware driver will also drive RST_vif.rst_n via resource_db)
    initial begin
        RST_vif.rst_n = 1'b0;
        repeat (5) @(posedge pclk);
        RST_vif.rst_n = 1'b1;
    end

    // Waveform dump for Sim (VCD/FST)
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, plic_apb_test_top);
    end

    // Resource DB registration - only resource_db, no config_db, no modports
    initial begin
        uvm_resource_db#(virtual plic_reset_if)::set("*", "rst_vif", RST_vif);
        uvm_resource_db#(virtual plic_apb_if)::set("*", "vif", APB_vif);
        run_test();
    end
endmodule
