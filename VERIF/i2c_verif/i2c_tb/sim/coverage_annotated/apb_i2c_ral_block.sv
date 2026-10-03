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
        
        // Generated UVM RAL Block for APB_to_I2C_Controller
        // IP: APB_I2C
        // Bus-independent
        
        package apb_i2c_ral_block_pkg;
          import uvm_pkg::*;
          `include "uvm_macros.svh"
          import apb_i2c_ral_pkg::*;
        
          class apb_i2c_ral_block extends uvm_reg_block;
%000001     `uvm_object_utils(apb_i2c_ral_block)
-000000  point: type=branch comment=else hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
            rand ctrl_reg_reg CTRL_REG; // original: CTRL_REG @'h10
            rand status_reg_reg STATUS_REG; // original: STATUS_REG @'h14
            rand txdata_reg_reg TXDATA_REG; // original: TXDATA_REG @'h18
            rand rxdata_reg_reg RXDATA_REG; // original: RXDATA_REG @'h1C
            uvm_reg_map default_map;
        
%000001     function new(string name = "apb_i2c_ral_block");
-000000  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       super.new(name, UVM_NO_COVERAGE);
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
            endfunction
        
%000001     virtual function void build();
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       default_map = create_map("default_map", 32'h30010000, 4, UVM_LITTLE_ENDIAN, 0);
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
        
%000001       CTRL_REG = ctrl_reg_reg::type_id::create("CTRL_REG");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       CTRL_REG.configure(this, null, "");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       CTRL_REG.build();
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       default_map.add_reg(CTRL_REG, 'h10, "RW");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
        
%000001       STATUS_REG = status_reg_reg::type_id::create("STATUS_REG");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       STATUS_REG.configure(this, null, "");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       STATUS_REG.build();
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       default_map.add_reg(STATUS_REG, 'h14, "RO");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
        
%000001       TXDATA_REG = txdata_reg_reg::type_id::create("TXDATA_REG");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       TXDATA_REG.configure(this, null, "");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       TXDATA_REG.build();
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       default_map.add_reg(TXDATA_REG, 'h18, "RW");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
        
%000001       RXDATA_REG = rxdata_reg_reg::type_id::create("RXDATA_REG");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       RXDATA_REG.configure(this, null, "");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       RXDATA_REG.build();
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
%000001       default_map.add_reg(RXDATA_REG, 'h1C, "RO");
-000001  point: type=line comment=block hier=apb_i2c_ral_block_pkg::apb_i2c_ral_block__Vclpkg
        
            endfunction
        
          endclass
        
        endpackage
        
