// Sequences for agent "lp_agent" (bound to interface group "LP").

// ---------------------------------------------------------------
// Base sequence: randomized timing for complete power-down/wakeup cycles
// ---------------------------------------------------------------
class lpddr5c_lp_agent_base_seq extends uvm_sequence #(lpddr5c_lp_agent_seq_item);

  `uvm_object_utils(lpddr5c_lp_agent_base_seq)

  rand int unsigned num_items = 10;

  function new(string name = "lpddr5c_lp_agent_base_seq");
    super.new(name);
  endfunction

  task body();
    if (num_items % 2 != 0)
      `uvm_fatal(get_type_name(), "num_items must be even so every power-down has a matching wakeup")

    repeat (num_items / 2) begin
      req = lpddr5c_lp_agent_seq_item::type_id::create("pd_req");
      start_item(req);
      if (!req.randomize() with {
            lp_req_pd == 1;
            wakeup_req == 0;
            wait_for_ack == 1;
          })
        `uvm_fatal(get_type_name(), "power-down request randomize failed")
      finish_item(req);
      `uvm_info(get_type_name(), req.convert2string(), UVM_MEDIUM)

      req = lpddr5c_lp_agent_seq_item::type_id::create("wk_req");
      start_item(req);
      if (!req.randomize() with {
            lp_req_pd == 0;
            wakeup_req == 1;
            wait_for_ack == 1;
          })
        `uvm_fatal(get_type_name(), "wakeup request randomize failed")
      finish_item(req);
      `uvm_info(get_type_name(), req.convert2string(), UVM_MEDIUM)
    end
  endtask

endclass : lpddr5c_lp_agent_base_seq

// ---------------------------------------------------------------
// Power-down entry only
// ---------------------------------------------------------------
class lpddr5c_lp_agent_pd_seq extends lpddr5c_lp_agent_base_seq;

  `uvm_object_utils(lpddr5c_lp_agent_pd_seq)

  function new(string name = "lpddr5c_lp_agent_pd_seq");
    super.new(name);
  endfunction

  task body();
    repeat (num_items) begin
      req = lpddr5c_lp_agent_seq_item::type_id::create("req");
      start_item(req);
      if (!req.randomize() with { lp_req_pd == 1; wakeup_req == 0; wait_for_ack == 1; })
        `uvm_fatal(get_type_name(), "randomize failed")
      finish_item(req);
    end
  endtask

endclass : lpddr5c_lp_agent_pd_seq

// ---------------------------------------------------------------
// Wakeup only
// ---------------------------------------------------------------
class lpddr5c_lp_agent_wakeup_seq extends lpddr5c_lp_agent_base_seq;

  `uvm_object_utils(lpddr5c_lp_agent_wakeup_seq)

  function new(string name = "lpddr5c_lp_agent_wakeup_seq");
    super.new(name);
  endfunction

  task body();
    repeat (num_items) begin
      req = lpddr5c_lp_agent_seq_item::type_id::create("req");
      start_item(req);
      if (!req.randomize() with { lp_req_pd == 0; wakeup_req == 1; wait_for_ack == 1; })
        `uvm_fatal(get_type_name(), "randomize failed")
      finish_item(req);
    end
  endtask

endclass : lpddr5c_lp_agent_wakeup_seq

// ---------------------------------------------------------------
// Directed: power-down entry followed by wakeup
// ---------------------------------------------------------------
class lpddr5c_lp_agent_pd_wakeup_seq extends lpddr5c_lp_agent_base_seq;

  `uvm_object_utils(lpddr5c_lp_agent_pd_wakeup_seq)

  function new(string name = "lpddr5c_lp_agent_pd_wakeup_seq");
    super.new(name);
  endfunction

  task body();
    repeat (num_items) begin
      // PD entry
      req = lpddr5c_lp_agent_seq_item::type_id::create("pd_req");
      start_item(req);
      if (!req.randomize() with { lp_req_pd == 1; wakeup_req == 0; wait_for_ack == 1; })
        `uvm_fatal(get_type_name(), "randomize failed")
      finish_item(req);

      // Wakeup
      req = lpddr5c_lp_agent_seq_item::type_id::create("wk_req");
      start_item(req);
      if (!req.randomize() with { lp_req_pd == 0; wakeup_req == 1; wait_for_ack == 1; })
        `uvm_fatal(get_type_name(), "randomize failed")
      finish_item(req);
    end
  endtask

endclass : lpddr5c_lp_agent_pd_wakeup_seq

// ---------------------------------------------------------------
// Back-to-back PD requests, no idle gap
// ---------------------------------------------------------------
class lpddr5c_lp_agent_stress_seq extends lpddr5c_lp_agent_base_seq;

  `uvm_object_utils(lpddr5c_lp_agent_stress_seq)

  function new(string name = "lpddr5c_lp_agent_stress_seq");
    super.new(name);
    num_items = 20;
  endfunction

  task body();
    repeat (num_items) begin
      req = lpddr5c_lp_agent_seq_item::type_id::create("req");
      start_item(req);
      if (!req.randomize() with { lp_req_pd == 1; wakeup_req == 0; pre_delay == 0; })
        `uvm_fatal(get_type_name(), "randomize failed")
      finish_item(req);
    end
  endtask

endclass : lpddr5c_lp_agent_stress_seq
