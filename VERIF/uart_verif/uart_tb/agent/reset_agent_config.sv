// ------------------------------------------------------------
// reset_agent_config.sv
//
// Same shape as uart_agent_config: active/passive + coverage
// enable only, nothing protocol-specific. reset_agent is
// UVM_ACTIVE in every test that has been built so far (it is
// the only source of rst_n), but the switch is kept for
// consistency with the approved methodology.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_agent_config extends uvm_object;

    `uvm_object_utils(reset_agent_config)

    uvm_active_passive_enum is_active       = UVM_ACTIVE;
    bit                     coverage_enable = 1'b1;

    function new(string name = "reset_agent_config");
        super.new(name);
    endfunction

endclass
