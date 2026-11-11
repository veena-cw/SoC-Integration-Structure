// Sequence item for agent "lp_agent" (bound to interface group "LP").
class lpddr5c_lp_agent_seq_item extends uvm_sequence_item;

  // ---- Driven by agent (DUT inputs) ----
  rand bit         lp_req_pd;
  rand bit         wakeup_req;

  // ---- Sampled from DUT (outputs) ----
       bit         lp_ack;
       bit         wakeup_ack;

  // ---- Transaction control / bookkeeping (not signals) ----
  rand int unsigned pre_delay;      // idle cycles before driving request
  rand int unsigned hold_cycles;    // cycles to hold request after ack
  rand bit          wait_for_ack;   // 0 = drop request without waiting for ack
       bit          expect_ack = 1'b1;
       int unsigned ack_timeout = 100;
       int unsigned pd_ack_latency;
       int unsigned wk_ack_latency;
       bit          timed_out;

  `uvm_object_utils(lpddr5c_lp_agent_seq_item)

 /* `uvm_object_utils_begin(lpddr5c_lp_agent_seq_item)
    `uvm_field_int(lp_req_pd,      UVM_ALL_ON)
    `uvm_field_int(wakeup_req,     UVM_ALL_ON)
    `uvm_field_int(lp_ack,         UVM_ALL_ON)
    `uvm_field_int(wakeup_ack,     UVM_ALL_ON)
    `uvm_field_int(pre_delay,      UVM_ALL_ON)
    `uvm_field_int(hold_cycles,    UVM_ALL_ON)
    `uvm_field_int(wait_for_ack,   UVM_ALL_ON)
    `uvm_field_int(pd_ack_latency, UVM_ALL_ON)
    `uvm_field_int(wk_ack_latency, UVM_ALL_ON)
    `uvm_field_int(timed_out,      UVM_ALL_ON)
  `uvm_object_utils_end */

  function new(string name = "lpddr5c_lp_agent_seq_item");
    super.new(name);
  endfunction

  constraint c_default {
  // At least one request is asserted per item
  (lp_req_pd || wakeup_req);

  // Power-down and wake-up requests must not be asserted together
  !(lp_req_pd && wakeup_req);

  pre_delay   inside {[0:10]};
  hold_cycles inside {[1:8]};
  wait_for_ack dist {1 := 90, 0 := 10};
}

  function string convert2string();
    return $sformatf("lp_req_pd=%0b wakeup_req=%0b | lp_ack=%0b wakeup_ack=%0b | pd_lat=%0d wk_lat=%0d timeout=%0b",
                     lp_req_pd, wakeup_req, lp_ack, wakeup_ack,
                     pd_ack_latency, wk_ack_latency, timed_out);
  endfunction

endclass : lpddr5c_lp_agent_seq_item
