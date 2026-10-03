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
        class apb_i2c_apb_monitor extends uvm_monitor;
%000001   `uvm_component_utils(apb_i2c_apb_monitor)
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
          virtual apb_i2c_apb_if vif;
          uvm_analysis_port #(apb_i2c_apb_item) analysis_port;
%000001   function new(string name = "apb_i2c_apb_monitor", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
%000001     analysis_port = new("analysis_port", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
          endfunction
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
%000001     if (!uvm_resource_db#(virtual apb_i2c_apb_if)::read_by_name(get_full_name(), "vif", vif)) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
-000001  point: type=branch comment=else hier=$unit::apb_i2c_apb_monitor__Vclpkg
-000000  point: type=expr comment=(read_by_name(string'(get_full_name())%22vif%22vifnull)==0) => 1 hier=$unit::apb_i2c_apb_monitor__Vclpkg
-000001  point: type=expr comment=(read_by_name(string'(get_full_name())%22vif%22vifnull)==1) => 0 hier=$unit::apb_i2c_apb_monitor__Vclpkg
%000000       `uvm_fatal("NOVIF", "APB virtual interface not found")
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_monitor__Vclpkg
            end
          endfunction
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
 250712     forever begin
+250712  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
 250712       @(posedge vif.pclk);
+250712  point: type=line comment=block hier=$unit::apb_i2c_apb_monitor__Vclpkg
 250412       if (vif.psel && vif.penable && vif.pready) begin
+250362  point: type=expr comment=(vif.penable==0) => 0 hier=$unit::apb_i2c_apb_monitor__Vclpkg
+250412  point: type=expr comment=(vif.pready==0) => 0 hier=$unit::apb_i2c_apb_monitor__Vclpkg
+250187  point: type=expr comment=(vif.psel==0) => 0 hier=$unit::apb_i2c_apb_monitor__Vclpkg
+000300  point: type=expr comment=(vif.psel==1 && vif.penable==1 && vif.pready==1) => 1 hier=$unit::apb_i2c_apb_monitor__Vclpkg
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
+250412  point: type=branch comment=else hier=$unit::apb_i2c_apb_monitor__Vclpkg
 000300         apb_i2c_apb_item tr;
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
 000300         tr = apb_i2c_apb_item::type_id::create("tr");
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
 000300         tr.paddr   = vif.paddr;
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
 000300         tr.pwrite  = vif.pwrite;
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
 000300         tr.pwdata  = vif.pwdata;
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
 000300         tr.prdata  = vif.prdata;
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
 000300         tr.pstrb   = vif.pstrb;
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
 000300         tr.pslverr = vif.pslverr;
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
 000300         analysis_port.write(tr);
+000300  point: type=branch comment=if hier=$unit::apb_i2c_apb_monitor__Vclpkg
              end
            end
          endtask
        endclass
        
