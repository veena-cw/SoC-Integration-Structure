// ------------------------------------------------------------
// sram_virtual_sequencer.sv
//
// Handles to the three real sequencers; set by sram_env in
// connect_phase.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class sram_virtual_sequencer extends uvm_sequencer;

    `uvm_component_utils(sram_virtual_sequencer)

    axi_sequencer   axi_seqr;
    reset_sequencer axi_rst_seqr;
    reset_sequencer sram_rst_seqr;

    function new(string name = "sram_virtual_sequencer", uvm_component parent = null);
        super.new(name, parent);
    endfunction

endclass
