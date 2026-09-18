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

module test_top;
    logic pclk;
    logic i2c_clk;
    apb_i2c_reset_if RST_vif();

    apb_i2c_apb_if APB_vif (
        .pclk     (pclk),
        .preset_n (RST_vif.rst_n)
    );
    
    
    i2c_top  #(
    .DW (32),
    .AW (32)
  ) dut (

    // APB / FIFO WRITE CLOCK DOMAIN
    .pclk       (pclk),
    .presetn    (RST_vif.rst_n),

    // I2C / FIFO READ CLOCK DOMAIN
    .i2c_clk    (i2c_clk),
    .i2c_rst_n    (RST_vif.rst_n),

    // APB interface
    .t_paddr    (APB_vif.paddr),
    .t_pwrite   (APB_vif.pwrite),
    .t_psel     (APB_vif.psel),
    .t_penable  (APB_vif.penable),
    .t_pwdata   (APB_vif.pwdata),
    .t_pstrb    (APB_vif.pstrb),

    .t_o_prdata (APB_vif.prdata),
    .t_o_pslverr(APB_vif.pslverr),
    .t_o_pready (APB_vif.pready),

    // I2C
    .i2c_irq    (i2c_irq),
    .i2c_scl    (i2c_scl),
    .i2c_sda    (i2c_sda)
  );
    // Clock generation
    initial begin
        pclk = 0;
        forever #5 pclk = ~pclk;
    end


initial begin
   i2c_clk =0;
   forever #10 i2c_clk = ~i2c_clk;
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
        $dumpvars(0, test_top);
    end

    // Resource DB registration - only resource_db, no config_db, no modports
    initial begin
        uvm_resource_db#(virtual apb_i2c_reset_if)::set("*", "rst_vif", RST_vif);
        uvm_resource_db#(virtual apb_i2c_apb_if)::set("*", "vif", APB_vif);
        run_test("apb_i2c_reg_reset_test");
    end
    
    
    initial begin
    #1000;
    $finish;
    end
endmodule
