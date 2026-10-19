// ------------------------------------------------------------
// reset_agent_config.sv
//
// Active/passive + coverage enable only. Both reset agents
// (aresetn, sram_resetn) are UVM_ACTIVE -- each is the only
// source of its reset line.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_agent_config extends uvm_object;

    `uvm_object_utils(reset_agent_config)

    uvm_active_passive_enum is_active       = UVM_ACTIVE;
    bit                     coverage_enable = 1'b1;

    // UVM constructor.
    function new(string name = "reset_agent_config");
        super.new(name);
    endfunction

endclass
