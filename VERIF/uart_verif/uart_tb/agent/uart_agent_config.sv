// ------------------------------------------------------------
// uart_agent_config.sv
//
// Per the approved verification methodology: agent_config
// carries ONLY the active/passive mode and the coverage
// enable/disable switch. No protocol-specific fields belong
// here -- device identity (d1 vs d2), the virtual interface,
// and RAL wiring are handled at the environment/agent level,
// not inside this config object.
//
// Used by both the d1 and d2 uart_agent instances -- they are
// the same agent class, so they are also the same config class.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_agent_config extends uvm_object;

    `uvm_object_utils(uart_agent_config)

    uvm_active_passive_enum is_active     = UVM_ACTIVE;
    bit                     coverage_enable = 1'b1;

    function new(string name = "uart_agent_config");
        super.new(name);
    endfunction

endclass
