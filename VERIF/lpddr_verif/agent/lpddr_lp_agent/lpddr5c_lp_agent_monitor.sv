`include "uvm_macros.svh"
import uvm_pkg::*;

class lpddr5c_lp_agent_monitor extends uvm_monitor;

  `uvm_component_utils(lpddr5c_lp_agent_monitor)

  //============================================================
  // Virtual interface
  //============================================================
  virtual lp_if vif;

  //============================================================
  // Analysis port (to scoreboard / coverage)
  //============================================================
  uvm_analysis_port #(lpddr5c_lp_agent_seq_item) ap;

  // Max cycles to wait for ack before flagging a timeout
  int unsigned ack_timeout = 100;


  //============================================================
  // Constructor
  //============================================================
  function new(string name = "lpddr5c_lp_agent_monitor",
               uvm_component parent = null);

    super.new(name, parent);

  endfunction


  //============================================================
  // Build Phase
  //============================================================
function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_resource_db#(virtual lp_if)::read_by_name(
            "*",
            "lp_vif",
            vif,
            this)) begin

        `uvm_fatal("LP_MON",
                   "Could not get lp_vif from uvm_resource_db")
    end
ap = new("ap",this);
    `uvm_info("LP_MON",
              "LP virtual interface obtained successfully",
              UVM_LOW)
endfunction


  //============================================================
  // Run Phase
  //============================================================
  task run_phase(uvm_phase phase);

    forever begin

      `uvm_info("LP_MON",
                "Waiting for system reset deassertion",
                UVM_LOW)

      wait (vif.sys_rst_n === 1'b1);

      `uvm_info("LP_MON",
                "LP monitor ready",
                UVM_LOW)

      fork
        monitor_pd();
        monitor_wakeup();
        monitor_reset();
      join_any
      disable fork;

    end

  endtask


  //============================================================
  // Reset watcher: aborts in-flight handshakes on reset
  //============================================================
  task monitor_reset();

    wait (vif.sys_rst_n === 1'b0);

    `uvm_info("LP_MON",
              "System reset asserted, aborting in-flight LP handshakes",
              UVM_MEDIUM)

  endtask


  //============================================================
  // Power-down handshake: lp_req_pd <-> lp_ack
  //============================================================
  task monitor_pd();

    lpddr5c_lp_agent_seq_item item;
    bit          req_prev = 1'b0;
    bit          ack_seen = 1'b0;
    bit          active   = 1'b0;
    int unsigned cnt      = 0;
    int unsigned hold_cnt = 0;

    forever begin

      @(vif.mon_cb);

      //========================================================
      // lp_ack without request
      //========================================================
      if (vif.mon_cb.lp_ack === 1'b1 && !active &&
          vif.mon_cb.lp_req_pd !== 1'b1) begin
        `uvm_error("LP_MON",
                   "lp_ack asserted without lp_req_pd")
      end

      //========================================================
      // Request rising edge
      //========================================================
      if (vif.mon_cb.lp_req_pd === 1'b1 && !req_prev) begin

        active   = 1'b1;
        ack_seen = 1'b0;
        cnt      = 0;
        hold_cnt = 0;

        item = lpddr5c_lp_agent_seq_item::type_id::create("lp_pd_item");
        item.lp_req_pd  = 1'b1;
        item.wakeup_req = 1'b0;

        `uvm_info("LP_MON",
                  $sformatf("lp_req_pd RISE at %0t", $time),
                  UVM_MEDIUM)

      end

      //========================================================
      // Track ack / hold while request is active
      //========================================================
      if (active) begin

        if (!ack_seen) begin

          if (vif.mon_cb.lp_ack === 1'b1) begin

            ack_seen            = 1'b1;
            item.lp_ack         = 1'b1;
            item.pd_ack_latency = cnt;

            `uvm_info("LP_MON",
                      $sformatf(
                        "LP PD HANDSHAKE: lp_req_pd=1 lp_ack=1 LATENCY=%0d TIME=%0t",
                        cnt, $time),
                      UVM_MEDIUM)

          end
          else begin

            cnt++;

            if (cnt > ack_timeout && vif.mon_cb.lp_req_pd === 1'b1) begin
              item.timed_out = 1'b1;
              `uvm_error("LP_MON",
                         $sformatf("lp_ack TIMEOUT after %0d cycles", ack_timeout))
              cnt = 0;   // report once per timeout window
            end

          end

        end
        else begin
          hold_cnt++;
        end

        //======================================================
        // Request falling edge: publish transaction
        //======================================================
        if (vif.mon_cb.lp_req_pd !== 1'b1 && req_prev) begin

          active           = 1'b0;
          item.hold_cycles = hold_cnt;

          `uvm_info("LP_MON",
                    $sformatf("Collected LP PD transaction:\n%s", item.sprint()),
                    UVM_MEDIUM)

          ap.write(item);

        end

      end

      req_prev = (vif.mon_cb.lp_req_pd === 1'b1);

    end

  endtask


  //============================================================
  // Wakeup handshake: wakeup_req <-> wakeup_ack
  //============================================================
  task monitor_wakeup();

    lpddr5c_lp_agent_seq_item item;
    bit          req_prev = 1'b0;
    bit          ack_seen = 1'b0;
    bit          active   = 1'b0;
    int unsigned cnt      = 0;
    int unsigned hold_cnt = 0;

    forever begin

      @(vif.mon_cb);

      //========================================================
      // wakeup_ack without request
      //========================================================
      if (vif.mon_cb.wakeup_ack === 1'b1 && !active &&
          vif.mon_cb.wakeup_req !== 1'b1) begin
        `uvm_error("LP_MON",
                   "wakeup_ack asserted without wakeup_req")
      end

      //========================================================
      // Request rising edge
      //========================================================
      if (vif.mon_cb.wakeup_req === 1'b1 && !req_prev) begin

        active   = 1'b1;
        ack_seen = 1'b0;
        cnt      = 0;
        hold_cnt = 0;

        item = lpddr5c_lp_agent_seq_item::type_id::create("lp_wk_item");
        item.lp_req_pd  = 1'b0;
        item.wakeup_req = 1'b1;

        `uvm_info("LP_MON",
                  $sformatf("wakeup_req RISE at %0t", $time),
                  UVM_MEDIUM)

      end

      //========================================================
      // Track ack / hold while request is active
      //========================================================
      if (active) begin

        if (!ack_seen) begin

          if (vif.mon_cb.wakeup_ack === 1'b1) begin

            ack_seen            = 1'b1;
            item.wakeup_ack     = 1'b1;
            item.wk_ack_latency = cnt;

            `uvm_info("LP_MON",
                      $sformatf(
                        "LP WAKEUP HANDSHAKE: wakeup_req=1 wakeup_ack=1 LATENCY=%0d TIME=%0t",
                        cnt, $time),
                      UVM_MEDIUM)

          end
          else begin

            cnt++;

            if (cnt > ack_timeout && vif.mon_cb.wakeup_req === 1'b1) begin
              item.timed_out = 1'b1;
              `uvm_error("LP_MON",
                         $sformatf("wakeup_ack TIMEOUT after %0d cycles", ack_timeout))
              cnt = 0;
            end

          end

        end
        else begin
          hold_cnt++;
        end

        //======================================================
        // Request falling edge: publish transaction
        //======================================================
        if (vif.mon_cb.wakeup_req !== 1'b1 && req_prev) begin

          active           = 1'b0;
          item.hold_cycles = hold_cnt;

          `uvm_info("LP_MON",
                    $sformatf("Collected LP WAKEUP transaction:\n%s", item.sprint()),
                    UVM_MEDIUM)

          ap.write(item);

        end

      end

      req_prev = (vif.mon_cb.wakeup_req === 1'b1);

    end

  endtask

endclass : lpddr5c_lp_agent_monitor
