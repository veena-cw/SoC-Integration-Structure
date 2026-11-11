`include "uvm_macros.svh"
import uvm_pkg::*;

// Sequencer for agent "lp_agent" (bound to interface group "LP").
class lpddr5c_lp_agent_sequencer extends uvm_sequencer #(lpddr5c_lp_agent_seq_item);

  `uvm_component_utils(lpddr5c_lp_agent_sequencer)

  function new(string name = "lpddr5c_lp_agent_sequencer", uvm_component parent = null);
    super.new(name, parent);
  endfunction

endclass : lpddr5c_lp_agent_sequencer
