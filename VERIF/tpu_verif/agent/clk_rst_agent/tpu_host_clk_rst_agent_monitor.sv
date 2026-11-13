//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_clk_rst_agent_monitor
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Clock & reset agent monitor: publishes every rst_n edge (assert / release) on its
//               analysis port and checks that the three clocks keep the fixed periods (and so the ratio).
//=================================================================================
class tpu_host_clk_rst_agent_monitor extends uvm_monitor;
  `uvm_component_utils(tpu_host_clk_rst_agent_monitor)

  virtual clk_rst_if vif;
  uvm_analysis_port #(tpu_host_clk_rst_agent_seq_item) ap;
  int unsigned n_period_err;

  function new(string name = "tpu_host_clk_rst_agent_monitor", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ap = new("ap", this);
    if (!uvm_resource_db#(virtual clk_rst_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
  endfunction

  task run_phase(uvm_phase phase);
    fork
      watch_reset();
      watch_clk(0, CLK_TPU_PERIOD_NS * 1ns);
      watch_clk(1, CLK_AXIL_PERIOD_NS * 1ns);
      watch_clk(2, CLK_AXI_PERIOD_NS * 1ns);
    join
  endtask

  task watch_reset();
    logic last;
    last = vif.rst_n;
    forever begin
      @(vif.rst_n);
      if (vif.rst_n === 1'b0 && last !== 1'b0) send(1'b1);
      if (vif.rst_n === 1'b1 && last !== 1'b1) send(1'b0);
      last = vif.rst_n;
    end
  endtask

  // rising edge to rising edge must be the nominal period within the 1 ps time precision (fixed ratio, no
  // drift, no jitter); realtime, because clk_tpu's 1.25 ns is not a whole number of time units
  task watch_clk(int which, realtime period);
    realtime t_last, dt;
    string name;
    name = (which == 0) ? "clk_tpu" : (which == 1) ? "clk_axil" : "clk_axi";
    wait_rise(which);
    t_last = $realtime;
    forever begin
      wait_rise(which);
      dt = $realtime - t_last;
      t_last = $realtime;
      if (dt > period + 0.001ns || dt < period - 0.001ns) begin
        n_period_err++;
        `uvm_error("CLK", $sformatf("%s period %0.3f ns, expected %0.3f ns (fixed ratio)", name, dt / 1ns, period / 1ns))
      end
    end
  endtask

  task wait_rise(int which);
    case (which)
      0:       @(posedge vif.clk_tpu);
      1:       @(posedge vif.clk_axil);
      default: @(posedge vif.clk_axi);
    endcase
  endtask

  function void send(bit asserted);
    tpu_host_clk_rst_agent_seq_item t;
    t = tpu_host_clk_rst_agent_seq_item::type_id::create("rst_evt");
    t.asserted = asserted;
    t.t_event  = $time;
    `uvm_info(get_type_name(), t.convert2string(), UVM_HIGH)
    ap.write(t);
  endfunction
endclass : tpu_host_clk_rst_agent_monitor
