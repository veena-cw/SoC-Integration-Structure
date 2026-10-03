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
        
        // Generated APB Monitor for APB_to_I2C_Controller
        // Captures when PSEL && PENABLE && PREADY
        `include "uvm_macros.svh"
        import uvm_pkg::*;
        import apb_i2c_apb_item_pkg::*;
        class apb_i2c_i2c_monitor extends uvm_monitor;
%000001   `uvm_component_utils(apb_i2c_i2c_monitor)
-000001  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
          virtual apb_i2c_i2c_if vif;
             apb_i2c_i2c_item tr;
          uvm_analysis_port #(apb_i2c_i2c_item) analysis_port;
%000001   function new(string name = "apb_i2c_apb_monitor", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
%000001     analysis_port = new("analysis_port", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
          endfunction
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
%000001     if (!uvm_resource_db#(virtual apb_i2c_i2c_if)::read_by_name(get_full_name(), "vif", vif)) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_i2c_monitor__Vclpkg
-000001  point: type=branch comment=else hier=$unit::apb_i2c_i2c_monitor__Vclpkg
-000000  point: type=expr comment=(read_by_name(string'(get_full_name())%22vif%22vifnull)==0) => 1 hier=$unit::apb_i2c_i2c_monitor__Vclpkg
-000001  point: type=expr comment=(read_by_name(string'(get_full_name())%22vif%22vifnull)==1) => 0 hier=$unit::apb_i2c_i2c_monitor__Vclpkg
%000000       `uvm_fatal("NOVIF", "I2C  virtual interface not found")
-000000  point: type=branch comment=if hier=$unit::apb_i2c_i2c_monitor__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_i2c_monitor__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_i2c_monitor__Vclpkg
            end
          endfunction
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025     forever begin
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025       @(posedge vif.clk);
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025      wait(vif.done)
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
             
 000025         tr = apb_i2c_i2c_item::type_id::create("tr");
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025         tr.addr   = vif.slave_address;
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025         tr.write  = vif.write;
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025         tr.wdata  = vif.temp_reg;
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025         tr.rdata  = vif.pointer_reg;
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025         tr.strb   = vif.strb;
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025         tr.slverr = vif.slverr;
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
 000025         analysis_port.write(tr);
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
            
~000025       wait(!vif.done);
+000025  point: type=line comment=block hier=$unit::apb_i2c_i2c_monitor__Vclpkg
+000025  point: type=expr comment=(vif.done==0) => 1 hier=$unit::apb_i2c_i2c_monitor__Vclpkg
-000000  point: type=expr comment=(vif.done==1) => 0 hier=$unit::apb_i2c_i2c_monitor__Vclpkg
            end
          endtask
        endclass
        
