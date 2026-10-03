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
        
        // Generated Reset Agent for APB_to_I2C_Controller - resource_db only, no modports, reset-aware
        // Based on user-provided reset_transaction/sequencer/driver/monitor/agent, adapted to uvm_resource_db
        `include "uvm_macros.svh"
        import uvm_pkg::*;
        
%000000 class apb_i2c_reset_transaction extends uvm_sequence_item;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
%000001   `uvm_object_utils(apb_i2c_reset_transaction)
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_transaction__Vclpkg
          rand time delay;
          rand time pulse_width;
          constraint c_delay { delay >= 0; }
%000002   function new(string name = "apb_i2c_reset_transaction");
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
-000002  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
%000002     super.new(name);
-000002  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
%000002     delay = 0;
-000002  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
%000002     pulse_width = 0;
-000002  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
          endfunction
%000000   function string convert2string();
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
%000000     return $sformatf("{delay=%0t, pulse_width=%0t}", delay, pulse_width);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_transaction__Vclpkg
          endfunction
        endclass : apb_i2c_reset_transaction
        
        class apb_i2c_reset_sequencer extends uvm_sequencer #(apb_i2c_reset_transaction);
%000001   `uvm_component_utils(apb_i2c_reset_sequencer)
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_sequencer__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_sequencer__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_sequencer__Vclpkg
%000001   function new(string name = "apb_i2c_reset_sequencer", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_sequencer__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_sequencer__Vclpkg
          endfunction : new
        endclass : apb_i2c_reset_sequencer
        
        class apb_i2c_reset_seq extends uvm_sequence #(apb_i2c_reset_transaction);
%000001   `uvm_object_utils(apb_i2c_reset_seq)
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_seq__Vclpkg
          rand time delay;
          rand time pulse_width;
%000001   function new(string name = "apb_i2c_reset_seq");
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
%000001     super.new(name);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
%000001     delay = 0;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
%000001     pulse_width = 100;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
          endfunction
%000001   task body();
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
%000001     apb_i2c_reset_transaction tr;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
%000001     tr = apb_i2c_reset_transaction::type_id::create("tr");
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
%000001     tr.delay = delay;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
%000001     tr.pulse_width = pulse_width;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
%000001     start_item(tr);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
%000001     finish_item(tr);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_seq__Vclpkg
          endtask
        endclass : apb_i2c_reset_seq
        
        class apb_i2c_reset_driver extends uvm_driver #(apb_i2c_reset_transaction);
%000005   `uvm_component_utils(apb_i2c_reset_driver)
-000005  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
          // No modports - plain virtual interface
          virtual apb_i2c_reset_if vif;
          localparam time DEFAULT_RESET_DURATION = 100;
%000001   function new(string name = "apb_i2c_reset_driver", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
          endfunction : new
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001     if (!uvm_resource_db#(virtual apb_i2c_reset_if)::read_by_name(get_full_name(), "rst_vif", vif)) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_driver__Vclpkg
-000001  point: type=branch comment=else hier=$unit::apb_i2c_reset_driver__Vclpkg
-000000  point: type=expr comment=(read_by_name(string'(get_full_name())%22rst_vif%22vifnull)==0) => 1 hier=$unit::apb_i2c_reset_driver__Vclpkg
-000001  point: type=expr comment=(read_by_name(string'(get_full_name())%22rst_vif%22vifnull)==1) => 0 hier=$unit::apb_i2c_reset_driver__Vclpkg
%000000       `uvm_fatal(get_type_name(), "Virtual interface 'rst_vif' not set for apb_i2c_reset_driver (uvm_resource_db). Expected test_top to set rst_vif through uvm_resource_db")
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_driver__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_driver__Vclpkg
            end
          endfunction : build_phase
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000000     apb_i2c_reset_transaction tr;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
            // Initialize reset line to deasserted via resource_db vif
%000000     vif.rst_n = 1'b0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001     forever begin
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001       seq_item_port.get_next_item(tr);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001       drive_reset(tr);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001       seq_item_port.item_done();
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
            end
          endtask : run_phase
%000001   task drive_reset(apb_i2c_reset_transaction tr);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001         time width;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001         width = (tr.pulse_width > 0) ? tr.pulse_width : DEFAULT_RESET_DURATION;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001         if (tr.delay > 0) #(tr.delay);
-000001  point: type=branch comment=else hier=$unit::apb_i2c_reset_driver__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001         `uvm_info(get_type_name(),$sformatf("Pulsing reset low for %0t (async). Start=%0t", width, $time),UVM_LOW)
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_driver__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001         vif.rst_n = 1'b0;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001         #(width);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001         vif.rst_n = 1'b1;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
%000001         `uvm_info(get_type_name(),$sformatf("Reset pulse complete. End=%0t", $time),UVM_LOW)
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_driver__Vclpkg
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_driver__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_driver__Vclpkg
          endtask : drive_reset
        endclass : apb_i2c_reset_driver
        
        class apb_i2c_reset_monitor extends uvm_monitor;
%000003   `uvm_component_utils(apb_i2c_reset_monitor)
-000003  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
          virtual apb_i2c_reset_if vif;
          uvm_analysis_port #(apb_i2c_reset_transaction) ap;
%000001   function new(string name = "apb_i2c_reset_monitor", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     ap = new("ap", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
          endfunction : new
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     if (!uvm_resource_db#(virtual apb_i2c_reset_if)::read_by_name(get_full_name(), "rst_vif", vif)) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000001  point: type=branch comment=else hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=expr comment=(read_by_name(string'(get_full_name())%22rst_vif%22vifnull)==0) => 1 hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000001  point: type=expr comment=(read_by_name(string'(get_full_name())%22rst_vif%22vifnull)==1) => 0 hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000000       `uvm_fatal(get_type_name(), "Virtual interface 'rst_vif' not set for apb_i2c_reset_monitor")
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_monitor__Vclpkg
            end
          endfunction : build_phase
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000000     bit last_rst_n;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000000     last_rst_n = (vif.rst_n === 1'b1) ? 1'b1 : 1'b0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=expr comment=((vif.rst_n === 1'h1)==0) => 0 hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=expr comment=((vif.rst_n === 1'h1)==1) => 1 hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     forever begin
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001       @(vif.rst_n);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001       if ((last_rst_n === 1'b1) && (vif.rst_n === 1'b0)) begin
-000000  point: type=expr comment=((last_rst_n === 1'h1)==0) => 0 hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=expr comment=((last_rst_n === 1'h1)==1 && (vif.rst_n === 1'h0)==1) => 1 hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000001  point: type=expr comment=((vif.rst_n === 1'h0)==0) => 0 hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=line comment=elsif hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000000         send_event(1'b1);
-000000  point: type=line comment=elsif hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001       end else if ((last_rst_n === 1'b0) && (vif.rst_n === 1'b1)) begin
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=expr comment=((last_rst_n === 1'h0)==0) => 0 hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000001  point: type=expr comment=((last_rst_n === 1'h0)==1 && (vif.rst_n === 1'h1)==1) => 1 hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=expr comment=((vif.rst_n === 1'h1)==0) => 0 hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001         send_event(1'b0);
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_monitor__Vclpkg
              end
%000001       last_rst_n = vif.rst_n;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
            end
          endtask : run_phase
%000001   task send_event(bit is_assert);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     apb_i2c_reset_transaction tr;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     tr = apb_i2c_reset_transaction::type_id::create("tr");
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     tr.delay = 0;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     tr.pulse_width = 0;
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     ap.write(tr);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
%000001     `uvm_info(get_type_name(), $sformatf("Reset %s at %0t", is_assert ? "assert" : "deassert", $time), UVM_MEDIUM)
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000001  point: type=expr comment=(is_assert==0) => 0 hier=$unit::apb_i2c_reset_monitor__Vclpkg
-000000  point: type=expr comment=(is_assert==1) => 1 hier=$unit::apb_i2c_reset_monitor__Vclpkg
          endtask : send_event
        endclass : apb_i2c_reset_monitor
        
        class apb_i2c_reset_agent extends uvm_agent;
%000001   `uvm_component_utils(apb_i2c_reset_agent)
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
          apb_i2c_reset_sequencer  seqr;
          apb_i2c_reset_driver     drv;
          apb_i2c_reset_monitor    mon;
%000001   function new(string name = "apb_i2c_reset_agent", uvm_component parent = null);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
          endfunction : new
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
%000001     super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
%000001     mon = apb_i2c_reset_monitor::type_id::create("mon", this);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
%000001     if (is_active == UVM_ACTIVE) begin
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_agent__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_agent__Vclpkg
%000001       seqr = apb_i2c_reset_sequencer ::type_id::create("seqr", this);
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_agent__Vclpkg
%000001       drv  = apb_i2c_reset_driver    ::type_id::create("drv",  this);
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_agent__Vclpkg
            end
          endfunction : build_phase
%000001   function void connect_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
%000001     super.connect_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_reset_agent__Vclpkg
%000001     if (is_active == UVM_ACTIVE) begin
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_agent__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_reset_agent__Vclpkg
%000001       drv.seq_item_port.connect(seqr.seq_item_export);
-000001  point: type=branch comment=if hier=$unit::apb_i2c_reset_agent__Vclpkg
            end
          endfunction : connect_phase
        endclass : apb_i2c_reset_agent
        
