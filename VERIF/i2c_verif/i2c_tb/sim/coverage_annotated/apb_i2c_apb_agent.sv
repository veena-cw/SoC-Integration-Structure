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
        
        // Generated APB Agent for APB_to_I2C_Controller
        `include "uvm_macros.svh"
        import uvm_pkg::*;
        import apb_i2c_apb_item_pkg::*;
        class apb_i2c_apb_agent extends uvm_agent;
%000001   `uvm_component_utils(apb_i2c_apb_agent)
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
          apb_i2c_apb_sequencer sequencer;
          apb_i2c_apb_driver    driver;
          apb_i2c_apb_monitor   monitor;
%000001   function new(string name = "apb_i2c_apb_agent", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
          endfunction
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
%000001     sequencer = apb_i2c_apb_sequencer::type_id::create("sequencer", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
%000001     driver    = apb_i2c_apb_driver::type_id::create("driver", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
%000001     monitor   = apb_i2c_apb_monitor::type_id::create("monitor", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
          endfunction
%000001   function void connect_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
%000001     super.connect_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
%000001     driver.seq_item_port.connect(sequencer.seq_item_export);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_agent__Vclpkg
          endfunction
        endclass
        
