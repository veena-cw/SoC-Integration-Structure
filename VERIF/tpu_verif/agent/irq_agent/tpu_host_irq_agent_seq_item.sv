//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_irq_agent_seq_item
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: IRQ agent item: one irq level change seen by the passive monitor.
//=================================================================================
class tpu_host_irq_agent_seq_item extends uvm_sequence_item;
  `uvm_object_utils(tpu_host_irq_agent_seq_item)

  bit  irq_level;      // new level of irq (1 = rise, 0 = fall)
  time t_event;        // clk_axil edge at which the change was sampled

  function new(string name = "tpu_host_irq_agent_seq_item");
    super.new(name);
  endfunction

  function string convert2string();
    return $sformatf("IRQ %s @%0t", irq_level ? "rise" : "fall", t_event);
  endfunction

  function void do_copy(uvm_object rhs);
    tpu_host_irq_agent_seq_item r;
    super.do_copy(rhs);
    if (!$cast(r, rhs)) return;
    irq_level = r.irq_level; t_event = r.t_event;
  endfunction
endclass : tpu_host_irq_agent_seq_item
