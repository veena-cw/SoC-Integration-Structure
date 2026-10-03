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
        package apb_i2c_i2c_item_pkg;
        
          import uvm_pkg::*;
          `include "uvm_macros.svh"
        
          class apb_i2c_i2c_item extends uvm_sequence_item;
        
           // `uvm_object_utils(apb_i2c_i2c_item)
        
            logic [31:0] addr;
            logic [31:0] wdata;
            logic [31:0] rdata;
            logic        write;
            logic [3:0]  strb;
            logic        slverr;
        
            bit aborted_by_reset;
        
~000050     function new(string name = "apb_i2c_i2c_item");
+000050  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
 000050       super.new(name);
+000050  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
 000050       aborted_by_reset = 1'b0;
+000050  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
            endfunction
        
        
        
        
~000025  `uvm_object_utils_begin(apb_i2c_i2c_item)
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
        
~000025         `uvm_field_int(addr,             UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
~000025         `uvm_field_int(wdata,            UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
~000025         `uvm_field_int(rdata,            UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
~000025         `uvm_field_int(write,            UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
~000025         `uvm_field_int(strb,             UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
~000025         `uvm_field_int(slverr,           UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
~000025         `uvm_field_int(aborted_by_reset, UVM_ALL_ON)
+000025  point: type=line comment=block hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
+000025  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=line comment=case hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_i2c_item_pkg::apb_i2c_i2c_item__Vclpkg
        
            `uvm_object_utils_end
          endclass
        
        endpackage
        
