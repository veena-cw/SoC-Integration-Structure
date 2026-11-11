`include "uvm_macros.svh"
import uvm_pkg::*;

class lpddr5c_lp_agent_driver extends uvm_driver #(lpddr5c_lp_agent_seq_item);

  `uvm_component_utils(lpddr5c_lp_agent_driver)

  //============================================================
  // Virtual interface
  //============================================================
  virtual lp_if vif;


  //============================================================
  // Constructor
  //============================================================
  function new(string name = "lpddr5c_lp_agent_driver",
               uvm_component parent = null);

    super.new(name, parent);

  endfunction


  //============================================================
  // Build Phase
  //============================================================
  //============================================================
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_resource_db#(virtual lp_if)::read_by_name(
            "*",
            "lp_vif",
            vif,
            this)) begin

        `uvm_fatal("LP_DRV",
                   "Could not get lpddr5c_LP_if from uvm_resource_db")
    end

    `uvm_info("LP_DRV",
              "LP virtual interface obtained successfully",
              UVM_LOW)
endfunction


  //============================================================
  // Run Phase
  //============================================================
  task run_phase(uvm_phase phase);

    lpddr5c_lp_agent_seq_item req;

    reset_signals();

    forever begin

      wait (vif.sys_rst_n === 1'b1);

      `uvm_info("LP_DRV",
                "LP driver ready",
                UVM_LOW)

      seq_item_port.get_next_item(req);

      `uvm_info("LP_DRV",
                $sformatf("Received LP transaction:\n%s",
                          req.sprint()),
                UVM_MEDIUM)

      drive_item(req);

      seq_item_port.item_done();

    end

  endtask


  //============================================================
  // Reset Signals
  //============================================================
  task reset_signals();

    `uvm_info("LP_DRV",
              "Waiting for system reset assertion",
              UVM_LOW)

    wait (vif.sys_rst_n === 1'b0);

    `uvm_info("LP_DRV",
              "System reset asserted",
              UVM_LOW)

    //==========================================================
    // LP sideband requests
    //==========================================================
    vif.drv_cb.lp_req_pd  <= 1'b0;
    vif.drv_cb.wakeup_req <= 1'b0;

    `uvm_info("LP_DRV",
              "Waiting for reset deassertion",
              UVM_LOW)

    wait (vif.sys_rst_n === 1'b1);

    `uvm_info("LP_DRV",
              $sformatf("System reset deasserted at %0t",
                        $time),
              UVM_LOW)

    @(vif.drv_cb);

  endtask


  //============================================================
  // Drive one LP item
  //============================================================
  task drive_item(lpddr5c_lp_agent_seq_item req);

    `uvm_info("LP_DRV",
              $sformatf(
                "Received LP transaction: lp_req_pd=%0b wakeup_req=%0b wait_for_ack=%0b",
                req.lp_req_pd,
                req.wakeup_req,
                req.wait_for_ack),
              UVM_MEDIUM)

    // Optional idle gap before request
    repeat (req.pre_delay) @(vif.drv_cb);

    fork
      begin
        if (req.lp_req_pd == 1'b1) begin
          `uvm_info("LP_DRV",
                    "Starting LP POWER-DOWN request",
                    UVM_MEDIUM)
          drive_pd_request(req);
          wait_pd_ack(req);
          release_pd_request(req);
          `uvm_info("LP_DRV",
                    "LP POWER-DOWN transaction completed",
                    UVM_MEDIUM)
        end
      end

      begin
        if (req.wakeup_req == 1'b1) begin
          `uvm_info("LP_DRV",
                    "Starting LP WAKEUP request",
                    UVM_MEDIUM)
          drive_wakeup_request(req);
          wait_wakeup_ack(req);
          release_wakeup_request(req);
          `uvm_info("LP_DRV",
                    "LP WAKEUP transaction completed",
                    UVM_MEDIUM)
        end
      end
    join

  endtask


  //============================================================
  // Power-down request: lp_req_pd <-> lp_ack
  //============================================================
  task drive_pd_request(lpddr5c_lp_agent_seq_item req);

    `uvm_info("LP_DRV",
              "Driving lp_req_pd = 1",
              UVM_MEDIUM)

    @(vif.drv_cb);

    vif.drv_cb.lp_req_pd <= 1'b1;

  endtask


  task wait_pd_ack(lpddr5c_lp_agent_seq_item req);

    int unsigned cnt = 0;

    if (!req.expect_ack) begin
      repeat (req.hold_cycles) begin
        @(vif.drv_cb);
        if (vif.drv_cb.lp_ack !== 1'b0 && !req.lp_ack) begin
          req.lp_ack = 1'b1;
          `uvm_error("LP_DRV_PD_UNEXPECTED_ACK",
                     $sformatf("lp_ack asserted during expected no-ack window at cycle %0d",
                               cnt))
        end
        cnt++;
      end
      return;
    end

    if (req.wait_for_ack == 1'b0) begin
      `uvm_info("LP_DRV",
                "wait_for_ack=0, not waiting for lp_ack",
                UVM_MEDIUM)
      return;
    end

    //==========================================================
    // Wait for lp_ack
    //==========================================================
    while (vif.drv_cb.lp_ack !== 1'b1 && cnt < req.ack_timeout) begin

      `uvm_info("LP_DRV",
                $sformatf(
                  "Waiting lp_ack: lp_ack=%b cnt=%0d",
                  vif.drv_cb.lp_ack, cnt),
                UVM_HIGH)

      @(vif.drv_cb);
      cnt++;

    end

    if (vif.drv_cb.lp_ack === 1'b1) begin

      req.lp_ack         = 1'b1;
      req.pd_ack_latency = cnt;

      `uvm_info("LP_DRV",
                $sformatf(
                  "LP PD HANDSHAKE: lp_req_pd=1 lp_ack=1 LATENCY=%0d TIME=%0t",
                  req.pd_ack_latency, $time),
                UVM_MEDIUM)

    end
    else begin

      req.timed_out = 1'b1;

      `uvm_error("LP_DRV",
                 $sformatf(
                   "lp_ack TIMEOUT after %0d cycles",
                   req.ack_timeout))

    end

  endtask


  task release_pd_request(lpddr5c_lp_agent_seq_item req);

    int unsigned cnt = 0;

    // Hold request for hold_cycles
    if (req.expect_ack)
      repeat (req.hold_cycles) @(vif.drv_cb);

    //==========================================================
    // Deassert lp_req_pd
    //==========================================================
    vif.drv_cb.lp_req_pd <= 1'b0;

    `uvm_info("LP_DRV",
              "Driving lp_req_pd = 0",
              UVM_MEDIUM)

    // Wait for ack to drop (only if ack was seen)
    if (req.wait_for_ack && req.lp_ack) begin

      @(vif.drv_cb);

      while (vif.drv_cb.lp_ack !== 1'b0 && cnt < req.ack_timeout) begin
        @(vif.drv_cb);
        cnt++;
      end

      if (vif.drv_cb.lp_ack !== 1'b0)
        `uvm_error("LP_DRV",
                   "lp_ack did not deassert after lp_req_pd deassertion")

    end

    @(vif.drv_cb);

  endtask


  //============================================================
  // Wakeup request: wakeup_req <-> wakeup_ack
  //============================================================
  task drive_wakeup_request(lpddr5c_lp_agent_seq_item req);

    `uvm_info("LP_DRV",
              "Driving wakeup_req = 1",
              UVM_MEDIUM)

    @(vif.drv_cb);

    vif.drv_cb.wakeup_req <= 1'b1;

  endtask


  task wait_wakeup_ack(lpddr5c_lp_agent_seq_item req);

    int unsigned cnt = 0;

    if (!req.expect_ack) begin
      repeat (req.hold_cycles) begin
        @(vif.drv_cb);
        if (vif.drv_cb.wakeup_ack !== 1'b0 && !req.wakeup_ack) begin
          req.wakeup_ack = 1'b1;
          `uvm_error("LP_DRV_WAKEUP_UNEXPECTED_ACK",
                     $sformatf("wakeup_ack asserted during expected no-ack window at cycle %0d",
                               cnt))
        end
        cnt++;
      end
      return;
    end

    if (req.wait_for_ack == 1'b0) begin
      `uvm_info("LP_DRV",
                "wait_for_ack=0, not waiting for wakeup_ack",
                UVM_MEDIUM)
      return;
    end

    //==========================================================
    // Wait for wakeup_ack
    //==========================================================
    while (vif.drv_cb.wakeup_ack !== 1'b1 && cnt < req.ack_timeout) begin

      `uvm_info("LP_DRV",
                $sformatf(
                  "Waiting wakeup_ack: wakeup_ack=%b cnt=%0d",
                  vif.drv_cb.wakeup_ack, cnt),
                UVM_HIGH)

      @(vif.drv_cb);
      cnt++;

    end

    if (vif.drv_cb.wakeup_ack === 1'b1) begin

      req.wakeup_ack     = 1'b1;
      req.wk_ack_latency = cnt;

      `uvm_info("LP_DRV",
                $sformatf(
                  "LP WAKEUP HANDSHAKE: wakeup_req=1 wakeup_ack=1 LATENCY=%0d TIME=%0t",
                  req.wk_ack_latency, $time),
                UVM_MEDIUM)

    end
    else begin

      req.timed_out = 1'b1;

      `uvm_error("LP_DRV",
                 $sformatf(
                   "wakeup_ack TIMEOUT after %0d cycles",
                   req.ack_timeout))

    end

  endtask


  task release_wakeup_request(lpddr5c_lp_agent_seq_item req);

    int unsigned cnt = 0;

    if (req.expect_ack)
      repeat (req.hold_cycles) @(vif.drv_cb);

    //==========================================================
    // Deassert wakeup_req
    //==========================================================
    vif.drv_cb.wakeup_req <= 1'b0;

    `uvm_info("LP_DRV",
              "Driving wakeup_req = 0",
              UVM_MEDIUM)

    if (req.wait_for_ack && req.wakeup_ack) begin

      @(vif.drv_cb);

      while (vif.drv_cb.wakeup_ack !== 1'b0 && cnt < req.ack_timeout) begin
        @(vif.drv_cb);
        cnt++;
      end

      if (vif.drv_cb.wakeup_ack !== 1'b0)
        `uvm_error("LP_DRV",
                   "wakeup_ack did not deassert after wakeup_req deassertion")

    end

    @(vif.drv_cb);

  endtask

endclass : lpddr5c_lp_agent_driver
