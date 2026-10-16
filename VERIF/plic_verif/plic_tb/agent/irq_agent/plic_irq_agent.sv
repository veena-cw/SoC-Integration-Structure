//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: SoC Integration
//  Module            				: plic_irq_agent
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Interrupt agent. The driver is the src[] BFM; the monitor
//               samples src[] and irq[] once per clock.
//=================================================================================

`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_irq_item_pkg::*;

class plic_irq_agent extends uvm_agent;
  `uvm_component_utils(plic_irq_agent)
  plic_irq_sequencer sequencer;
  plic_irq_driver    driver;
  plic_irq_monitor   monitor;

  function new(string name = "plic_irq_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    sequencer = plic_irq_sequencer::type_id::create("sequencer", this);
    driver    = plic_irq_driver::type_id::create("driver", this);
    monitor   = plic_irq_monitor::type_id::create("monitor", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    driver.seq_item_port.connect(sequencer.seq_item_export);
  endfunction
endclass
