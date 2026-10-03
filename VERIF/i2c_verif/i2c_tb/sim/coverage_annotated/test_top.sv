//      // verilator_coverage annotation
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
 250712     logic pclk;
+250712  point: type=toggle comment=pclk:0->1 hier=test_top
+250711  point: type=toggle comment=pclk:1->0 hier=test_top
 125356     logic i2c_clk;
+125356  point: type=toggle comment=i2c_clk:0->1 hier=test_top
+125355  point: type=toggle comment=i2c_clk:1->0 hier=test_top
            
            
            apb_i2c_reset_if RST_vif();
        
            apb_i2c_apb_if APB_vif (
                .pclk     (pclk),
                .preset_n (RST_vif.rst_n)
            );
            
            apb_i2c_i2c_if I2C_vif(
            .clk (i2c_clk),
            .reset_n(RST_vif.rst_n));
            
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
 000026     .i2c_irq    (i2c_irq),
+000026  point: type=toggle comment=i2c_irq:0->1 hier=test_top
+000025  point: type=toggle comment=i2c_irq:1->0 hier=test_top
            .i2c_scl    (I2C_vif.i2c_scl),
            .i2c_sda    (I2C_vif.i2c_sda)
          );
          
          //pullup(I2C_vif.i2c_sda);
          
          // assertion binding 
          bind i2c_master  i2c_assertions i2c_assertions_inst (
            .clk     (clk),
            .rst_n     (rst_n),
            .start   (start),
%000000     .datain  (datain),
-000000  point: type=toggle comment=datain:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=datain:1->0 hier=test_top.dut.i2cm
%000000     .dataout (dataout),
-000000  point: type=toggle comment=dataout:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=dataout:1->0 hier=test_top.dut.i2cm
            .sda     (i2c_sda),
            .scl     (i2c_scl)
        );
            // Clock generation
%000000     initial begin
-000000  point: type=line comment=block hier=test_top
%000000         pclk = 0;
-000000  point: type=line comment=block hier=test_top
 501423         forever #5 pclk = ~pclk;
+250711  point: type=expr comment=(pclk==0) => 1 hier=test_top
+250712  point: type=expr comment=(pclk==1) => 0 hier=test_top
+501423  point: type=line comment=block hier=test_top
            end
        
        
%000000 initial begin
-000000  point: type=line comment=block hier=test_top
%000000    i2c_clk =0;
-000000  point: type=line comment=block hier=test_top
 250711    forever #10 i2c_clk = ~i2c_clk;
+125355  point: type=expr comment=(i2c_clk==0) => 1 hier=test_top
+125356  point: type=expr comment=(i2c_clk==1) => 0 hier=test_top
+250711  point: type=line comment=block hier=test_top
        end
            // Reset generation via reset_if (reset-aware driver will also drive RST_vif.rst_n via resource_db)
%000001     initial begin
-000001  point: type=line comment=block hier=test_top
%000001         RST_vif.rst_n = 1'b0;
-000001  point: type=line comment=block hier=test_top
%000005         repeat (5) @(posedge pclk);
-000001  point: type=line comment=block hier=test_top
-000005  point: type=line comment=block hier=test_top
%000001         RST_vif.rst_n = 1'b1;
-000001  point: type=line comment=block hier=test_top
            end
        
            // Waveform dump for Sim (VCD/FST)
%000001     initial begin
-000001  point: type=line comment=block hier=test_top
%000001         $dumpfile("dump.vcd");
-000001  point: type=line comment=block hier=test_top
%000001         $dumpvars(0, test_top);
-000001  point: type=line comment=block hier=test_top
            end
        
            // Resource DB registration - only resource_db, no config_db, no modports
%000001     initial begin
-000001  point: type=line comment=block hier=test_top
%000001         uvm_resource_db#(virtual apb_i2c_reset_if)::set("*", "rst_vif", RST_vif);
-000001  point: type=line comment=block hier=test_top
%000001         uvm_resource_db#(virtual apb_i2c_apb_if)::set("*", "vif", APB_vif);
-000001  point: type=line comment=block hier=test_top
%000001         uvm_resource_db#(virtual apb_i2c_i2c_if)::set("*", "vif", I2C_vif);
-000001  point: type=line comment=block hier=test_top
%000001         run_test("apb_i2c_reg_reset_test");
-000001  point: type=line comment=block hier=test_top
            end
            
            /*
            initial begin
            #1000;
            $finish;
            end*/
        endmodule
        
