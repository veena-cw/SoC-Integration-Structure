//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_axilm_agent_driver
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: AXI4-Lite master driver of the CPU model agent: register writes / reads with
//               independent AW / W channels, configurable delays, response capture.
//               A handshake completes on the edge where VALID and READY are both sampled high.
//=================================================================================
// AXI4-Lite master driver. AW and W are driven independently (each after its own delay), the
// write completes on the B handshake; a read completes on the R handshake. Every item gets a response
// item (clone of the request with resp / rdata filled in) through item_done(rsp).
class tpu_host_axilm_agent_driver extends uvm_driver #(tpu_host_axilm_agent_seq_item);
  `uvm_component_utils(tpu_host_axilm_agent_driver)

  virtual tpu_host_AXIL_if vif;
  int unsigned handshake_timeout = 20000;   // clk_axil cycles per handshake, then UVM_FATAL (VALID is never dropped)

  function new(string name = "tpu_host_axilm_agent_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual tpu_host_AXIL_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf("[%s] Virtual interface not found in resource_db", get_full_name()))
  endfunction

  task run_phase(uvm_phase phase);
    reset_idle();                             // VALIDs low from time 0 (AXI A3.1.2), not only from the first clock edge
    drive_idle();
    forever begin
      seq_item_port.get_next_item(req);
      req.t_start = $time;
      if (vif.rst_n !== 1'b1 && req.op inside {AXIL_WRITE, AXIL_READ}) begin
        `uvm_info(get_type_name(), "Reset active: waiting for reset release before the access", UVM_HIGH)
        wait (vif.rst_n === 1'b1);
        repeat (2) @(vif.drv_cb);
      end
      req.reset_abort = 0;
      case (req.op)
        AXIL_WRITE,
        AXIL_READ:     do_access(req);
        AXIL_IDLE:     repeat (req.idle_cycles) @(vif.drv_cb);
        default:       ;
      endcase
      req.t_end = $time;
      $cast(rsp, req.clone());
      rsp.set_id_info(req);
      seq_item_port.item_done(rsp);           // response (resp / rdata) back to the sequence
    end
  endtask

  task drive_idle();
    vif.drv_cb.m_axil_awvalid <= 1'b0;
    vif.drv_cb.m_axil_wvalid  <= 1'b0;
    vif.drv_cb.m_axil_bready  <= 1'b0;
    vif.drv_cb.m_axil_arvalid <= 1'b0;
    vif.drv_cb.m_axil_rready  <= 1'b0;
    vif.drv_cb.m_axil_awaddr  <= '0;
    vif.drv_cb.m_axil_araddr  <= '0;
    vif.drv_cb.m_axil_wdata   <= '0;
    vif.drv_cb.m_axil_wstrb   <= '0;
    vif.drv_cb.m_axil_awprot  <= '0;
    vif.drv_cb.m_axil_arprot  <= '0;
  endtask

  // A register access runs until its last handshake or until rst_n is asserted. On reset the access is
  // abandoned and every master output goes low at once (AXI A3.1.2: VALID low during reset); the response
  // item carries reset_abort = 1.
  task do_access(tpu_host_axilm_agent_seq_item t);
    fork begin
      fork
        if (t.op == AXIL_WRITE) do_write(t); else do_read(t);
        wait (vif.rst_n !== 1'b1);
      join_any
      disable fork;
    end join
    if (vif.rst_n !== 1'b1) begin
      t.reset_abort = 1;
      reset_idle();
      drive_idle();
      `uvm_info(get_type_name(), $sformatf("rst_n asserted during %s: access abandoned", t.convert2string()), UVM_MEDIUM)
    end
  endtask

  // master outputs low immediately, without waiting for a clk_axil edge (time 0 and reset entry)
  task reset_idle();
    vif.m_axil_awvalid <= 1'b0;
    vif.m_axil_wvalid  <= 1'b0;
    vif.m_axil_arvalid <= 1'b0;
    vif.m_axil_bready  <= 1'b0;
    vif.m_axil_rready  <= 1'b0;
    vif.m_axil_awaddr  <= '0;
    vif.m_axil_araddr  <= '0;
    vif.m_axil_wdata   <= '0;
    vif.m_axil_wstrb   <= '0;
    vif.m_axil_awprot  <= '0;
    vif.m_axil_arprot  <= '0;
  endtask

  task do_write(tpu_host_axilm_agent_seq_item t);
    fork
      begin : aw_ch
        repeat (t.aw_delay) @(vif.drv_cb);
        vif.drv_cb.m_axil_awaddr  <= t.addr;
        vif.drv_cb.m_axil_awprot  <= t.prot;
        vif.drv_cb.m_axil_awvalid <= 1'b1;
        wait_hs("AWREADY", 1);
        vif.drv_cb.m_axil_awvalid <= 1'b0;
      end
      begin : w_ch
        repeat (t.w_delay) @(vif.drv_cb);
        vif.drv_cb.m_axil_wdata  <= t.data;
        vif.drv_cb.m_axil_wstrb  <= t.strb;
        vif.drv_cb.m_axil_wvalid <= 1'b1;
        wait_hs("WREADY", 2);
        vif.drv_cb.m_axil_wvalid <= 1'b0;
      end
    join
    repeat (t.ready_delay) @(vif.drv_cb);
    vif.drv_cb.m_axil_bready <= 1'b1;
    wait_hs("BVALID", 3);
    t.resp = vif.mon_cb.m_axil_bresp;
    vif.drv_cb.m_axil_bready <= 1'b0;
  endtask

  task do_read(tpu_host_axilm_agent_seq_item t);
    repeat (t.aw_delay) @(vif.drv_cb);
    vif.drv_cb.m_axil_araddr  <= t.addr;
    vif.drv_cb.m_axil_arprot  <= t.prot;
    vif.drv_cb.m_axil_arvalid <= 1'b1;
    wait_hs("ARREADY", 4);
    vif.drv_cb.m_axil_arvalid <= 1'b0;
    repeat (t.ready_delay) @(vif.drv_cb);
    vif.drv_cb.m_axil_rready <= 1'b1;
    wait_hs("RVALID", 5);
    t.rdata = vif.mon_cb.m_axil_rdata;
    t.resp  = vif.mon_cb.m_axil_rresp;
    vif.drv_cb.m_axil_rready <= 1'b0;
  endtask

  // wait for one handshake (1 AW, 2 W, 3 B, 4 AR, 5 R): VALID and READY both sampled high at the same
  // clk_axil edge through mon_cb, i.e. the edge the DUT accepts the transfer. READY alone is not enough:
  // the slave holds AWREADY / WREADY / ARREADY high while idle, before our VALID is on the bus.
  // VALID stays asserted until the handshake (AXI A3.2.1); if it never comes the test ends with UVM_FATAL
  // instead of dropping VALID. A reset ends the wait from do_access.
  task wait_hs(string name, int which);
    int unsigned n = 0;
    forever begin
      @(vif.mon_cb);
      case (which)
        1: if (vif.mon_cb.m_axil_awvalid === 1'b1 && vif.mon_cb.m_axil_awready === 1'b1) return;
        2: if (vif.mon_cb.m_axil_wvalid  === 1'b1 && vif.mon_cb.m_axil_wready  === 1'b1) return;
        3: if (vif.mon_cb.m_axil_bvalid  === 1'b1 && vif.mon_cb.m_axil_bready  === 1'b1) return;
        4: if (vif.mon_cb.m_axil_arvalid === 1'b1 && vif.mon_cb.m_axil_arready === 1'b1) return;
        5: if (vif.mon_cb.m_axil_rvalid  === 1'b1 && vif.mon_cb.m_axil_rready  === 1'b1) return;
      endcase
      if (++n >= handshake_timeout)
        `uvm_fatal("AXIL_TMO", $sformatf("No %s handshake after %0d clk_axil cycles (VALID held, not dropped)", name, n))
    end
  endtask
endclass : tpu_host_axilm_agent_driver
