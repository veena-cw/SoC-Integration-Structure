// ------------------------------------------------------------
// reset_seq_item.sv
//
// One reset pulse on a reset_if: wait delay_cycles clocks of
// that domain, drive rst_n=0, hold for pulse_cycles clocks,
// release. Cycles (not time) because the two domains run at
// different frequencies (aclk / sram_clk).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_seq_item extends uvm_sequence_item;

    `uvm_object_utils(reset_seq_item)

    rand int unsigned delay_cycles;   // clocks before asserting rst_n = 0
    rand int unsigned pulse_cycles;   // clocks rst_n stays 0

    constraint c_sane {
        delay_cycles inside {[0:100]};
        pulse_cycles inside {[1:50]};
    }

    function new(string name = "reset_seq_item");
        super.new(name);
        delay_cycles = 0;
        pulse_cycles = 10;
    endfunction

    function string convert2string();
        return $sformatf("delay_cycles=%0d pulse_cycles=%0d", delay_cycles, pulse_cycles);
    endfunction

endclass
