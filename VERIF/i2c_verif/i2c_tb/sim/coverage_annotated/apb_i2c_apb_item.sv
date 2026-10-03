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
        
        // Generated APB Item for APB_to_I2C_Controller
        package apb_i2c_apb_item_pkg;
          import uvm_pkg::*;
          `include "uvm_macros.svh"
%000000   class apb_i2c_apb_item extends uvm_sequence_item;
-000000  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
          //  `uvm_object_utils(apb_i2c_apb_item)
            rand logic [31:0] paddr;
            rand logic [31:0] pwdata;
            logic [31:0] prdata;
            rand logic pwrite;
            rand logic [3:0] pstrb;
            logic pslverr;
            bit aborted_by_reset; // 1 if transaction aborted due to mid-reset (see driver)
~000500     function new(string name = "apb_i2c_apb_item");
+000500  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
 000500       super.new(name);
+000500  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
 000500       aborted_by_reset = 1'b0;
+000500  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
            endfunction
            
            
            
~000175      `uvm_object_utils_begin(apb_i2c_apb_item)
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000175  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
        
~000025         `uvm_field_int(paddr,            UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
~000025         `uvm_field_int(pwdata,           UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
~000025         `uvm_field_int(prdata,           UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
~000025         `uvm_field_int(pwrite,           UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
~000025         `uvm_field_int(pstrb,            UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
~000025         `uvm_field_int(pslverr,          UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
~000025         `uvm_field_int(aborted_by_reset, UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_item_pkg::apb_i2c_apb_item__Vclpkg
        
            `uvm_object_utils_end
          endclass
        endpackage
        
