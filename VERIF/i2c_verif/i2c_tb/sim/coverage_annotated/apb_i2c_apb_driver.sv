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
        
        // Generated APB Driver for APB_to_I2C_Controller - reset-aware, resource_db only, no modports
        // IDLE -> SETUP -> ACCESS -> wait PREADY -> IDLE - reset handled inline inside drive(), no concurrent thread
        `include "uvm_macros.svh"
        import uvm_pkg::*;
        import apb_i2c_apb_item_pkg::*;
        class apb_i2c_apb_driver extends uvm_driver #(apb_i2c_apb_item);
%000001   `uvm_component_utils(apb_i2c_apb_driver)
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
          virtual apb_i2c_apb_if vif;
          virtual apb_i2c_reset_if rst_vif; // reset-aware via resource_db
%000001   function new(string name = "apb_i2c_apb_driver", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
          endfunction
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000001     if (!uvm_resource_db#(virtual apb_i2c_apb_if)::read_by_name(get_full_name(), "vif", vif)) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000001  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=expr comment=(read_by_name(string'(get_full_name())%22vif%22vifnull)==0) => 1 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000001  point: type=expr comment=(read_by_name(string'(get_full_name())%22vif%22vifnull)==1) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       `uvm_fatal("NOVIF", "APB virtual interface not found")
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
            end
            // reset interface via resource_db only, no config_db, optional (test_top always sets it)
%000001     void'(uvm_resource_db#(virtual apb_i2c_reset_if)::read_by_name(get_full_name(), "rst_vif", rst_vif));
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
          endfunction
          // Reset helper - drives ALL master signals to 0 (never DUT outputs pready/prdata/pslverr)
%000000   task reset_signals();
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000     vif.psel    <= 0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000     vif.penable <= 0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000     vif.pwrite  <= 0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000     vif.paddr   <= '0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000     vif.pwdata  <= '0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000     vif.pstrb   <= '0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000     `uvm_info(get_type_name(), "Reset asserted: all APB master signals driven to 0", UVM_MEDIUM)
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
          endtask
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     forever begin
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175       seq_item_port.get_next_item(req);
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175       drive(req);
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175       seq_item_port.item_done();
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
            end
          endtask
 000175   task drive(apb_i2c_apb_item tr);
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
            // Ensure clean flag at start
 000175     tr.aborted_by_reset = 1'b0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
            // 1. Before starting transaction - handles initial reset already asserted (no negedge needed)
~000175     if (rst_vif != null && !rst_vif.rst_n) begin
-000000  point: type=expr comment=((rst_vif != null)==0) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=expr comment=((rst_vif != null)==1 && rst_vif.rst_n==0) => 1 hier=$unit::apb_i2c_apb_driver__Vclpkg
+000175  point: type=expr comment=(rst_vif.rst_n==1) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
+000175  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       reset_signals();
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       wait (rst_vif.rst_n === 1'b1);
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       tr.aborted_by_reset = 1'b1;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       `uvm_info(get_type_name(), "Reset before IDLE - transaction aborted, will resume next item after deassert", UVM_MEDIUM)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
            end
            // IDLE
 000175     vif.psel    <= 0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.penable <= 0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.pwrite  <= 0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.paddr   <= '0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.pwdata  <= '0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.pstrb   <= '0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     @(posedge vif.pclk);
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
            // 2. After IDLE clock
~000175     if (rst_vif != null && !rst_vif.rst_n) begin
-000000  point: type=expr comment=((rst_vif != null)==0) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=expr comment=((rst_vif != null)==1 && rst_vif.rst_n==0) => 1 hier=$unit::apb_i2c_apb_driver__Vclpkg
+000175  point: type=expr comment=(rst_vif.rst_n==1) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
+000175  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       reset_signals();
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       wait (rst_vif.rst_n === 1'b1);
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       tr.aborted_by_reset = 1'b1;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
            end
            // SETUP
 000175     vif.paddr   <= tr.paddr;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.pwrite  <= tr.pwrite;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000125     if (tr.pwrite) vif.pwdata <= tr.pwdata;
+000050  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
+000125  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.pstrb   <= tr.pstrb;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.psel    <= 1;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.penable <= 0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     @(posedge vif.pclk);
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
            // 3. After SETUP clock
~000175     if (rst_vif != null && !rst_vif.rst_n) begin
-000000  point: type=expr comment=((rst_vif != null)==0) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=expr comment=((rst_vif != null)==1 && rst_vif.rst_n==0) => 1 hier=$unit::apb_i2c_apb_driver__Vclpkg
+000175  point: type=expr comment=(rst_vif.rst_n==1) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
+000175  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       reset_signals();
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       wait (rst_vif.rst_n === 1'b1);
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       tr.aborted_by_reset = 1'b1;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       `uvm_warning(get_type_name(), "Reset during SETUP - transaction aborted, bus forced to 0")
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
            end
            // ACCESS
 000175     vif.penable <= 1;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     @(posedge vif.pclk);
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
            // 4. During ACCESS while waiting for PREADY - check each cycle
%000000     while (!vif.pready) begin
-000000  point: type=expr comment=(vif.pready==0) => 1 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=expr comment=(vif.pready==1) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       if (rst_vif != null && !rst_vif.rst_n) begin
-000000  point: type=expr comment=((rst_vif != null)==0) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=expr comment=((rst_vif != null)==1 && rst_vif.rst_n==0) => 1 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=expr comment=(rst_vif.rst_n==1) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000         reset_signals();
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000         wait (rst_vif.rst_n === 1'b1);
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000         tr.aborted_by_reset = 1'b1;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000         `uvm_warning(get_type_name(), "Reset during ACCESS wait for PREADY - transaction aborted")
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
              end
%000000       @(posedge vif.pclk);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
            end
            // 5. Before completing transaction
~000175     if (rst_vif != null && !rst_vif.rst_n) begin
-000000  point: type=expr comment=((rst_vif != null)==0) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=expr comment=((rst_vif != null)==1 && rst_vif.rst_n==0) => 1 hier=$unit::apb_i2c_apb_driver__Vclpkg
+000175  point: type=expr comment=(rst_vif.rst_n==1) => 0 hier=$unit::apb_i2c_apb_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
+000175  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       reset_signals();
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       wait (rst_vif.rst_n === 1'b1);
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       tr.aborted_by_reset = 1'b1;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
            end
 000125     if (!tr.pwrite) tr.prdata = vif.prdata;
+000125  point: type=branch comment=if hier=$unit::apb_i2c_apb_driver__Vclpkg
+000050  point: type=branch comment=else hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     tr.pslverr = vif.pslverr;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     @(posedge vif.pclk);
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.psel    <= 0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
 000175     vif.penable <= 0;
+000175  point: type=line comment=block hier=$unit::apb_i2c_apb_driver__Vclpkg
          endtask
        endclass
        
