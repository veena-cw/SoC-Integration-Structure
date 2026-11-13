//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_clk_rst_agent_driver
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Clock & reset agent driver: generates clk_tpu, clk_axil and clk_axi at the fixed ratio
//               of TPU_Host_Interface.pdf (Table 1.1) from time 0, holds rst_n low until the first
//               item, then drives one rst_n pulse per item (delay, then pulse_width low).
//=================================================================================
// The clock periods are CLK_*_PERIOD_NS of tpu_host_pkg (clk_tpu 1.25 ns, clk_axil 10 ns, clk_axi 2.5 ns:
// ratio 8 : 1 : 4). All three start low at time 0 with their first rising edge half a period later; CDC is
// not verified, so the ratio and the phase never change. rst_n is driven at plain times, asynchronous to
// all three clocks.
class tpu_host_clk_rst_agent_driver extends uvm_driver #(tpu_host_clk_rst_agent_seq_item);
  `uvm_component_utils(tpu_host_clk_rst_agent_driver)

  virtual clk_rst_if vif;
  time default_width = 100;

  function new(string name = "tpu_host_clk_rst_agent_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual clk_rst_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
  endfunction

  task run_phase(uvm_phase phase);
    vif.rst_n    = 1'b0;                   // in reset until the first sequence releases it
    vif.clk_tpu  = 1'b0;
    vif.clk_axil = 1'b0;
    vif.clk_axi  = 1'b0;
    fork
      forever #(CLK_TPU_PERIOD_NS  * 0.5ns) vif.clk_tpu  = ~vif.clk_tpu;
      forever #(CLK_AXIL_PERIOD_NS * 0.5ns) vif.clk_axil = ~vif.clk_axil;
      forever #(CLK_AXI_PERIOD_NS  * 0.5ns) vif.clk_axi  = ~vif.clk_axi;
    join_none
    forever begin
      seq_item_port.get_next_item(req);
      drive_reset(req);
      seq_item_port.item_done();
    end
  endtask

  task drive_reset(tpu_host_clk_rst_agent_seq_item tr);
    time width;
    width = (tr.pulse_width > 0) ? tr.pulse_width : default_width;
    if (tr.delay > 0) #(tr.delay);
    `uvm_info(get_type_name(), $sformatf("rst_n low for %0t", width), UVM_MEDIUM)
    vif.rst_n = 1'b0;
    #(width);
    vif.rst_n = 1'b1;
  endtask
endclass : tpu_host_clk_rst_agent_driver
