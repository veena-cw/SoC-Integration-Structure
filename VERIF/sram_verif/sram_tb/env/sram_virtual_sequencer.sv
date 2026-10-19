// ------------------------------------------------------------
// sram_virtual_sequencer.sv
//
// Handles to the real sequencers; set by sram_env in connect_phase.
// axi_seqr is AXI agent 0 (sram_top); axi_seqrs[i] is AXI agent i
// (null for a passive agent).
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_virtual_sequencer extends uvm_sequencer;

    `uvm_component_utils(sram_virtual_sequencer)

    axi_sequencer   axi_seqr;
    axi_sequencer   axi_seqrs[];   // one per AXI agent (sized by sram_env)
    reset_sequencer axi_rst_seqr;
    reset_sequencer sram_rst_seqr;

    // UVM constructor.
    function new(string name = "sram_virtual_sequencer", uvm_component parent = null);
        super.new(name, parent);
    endfunction

endclass
