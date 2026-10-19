// ------------------------------------------------------------
// sram_virtual_sequence.sv
//
// sram_reset_vseq   : reset both domains (aresetn, sram_resetn)
//                     with a configurable release skew.
// sram_reset_traffic_vseq : random AXI traffic with both resets
//                     pulsed in the middle of it, then more
//                     traffic to prove recovery.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class sram_base_vseq extends uvm_sequence;

    `uvm_object_utils(sram_base_vseq)
    `uvm_declare_p_sequencer(sram_virtual_sequencer)

    // UVM constructor.
    function new(string name = "sram_base_vseq");
        super.new(name);
    endfunction

endclass

class sram_reset_vseq extends sram_base_vseq;

    `uvm_object_utils(sram_reset_vseq)

    int unsigned axi_delay_cycles  = 0;
    int unsigned sram_delay_cycles = 0;
    int unsigned axi_pulse_cycles  = 10;
    int unsigned sram_pulse_cycles = 20;

    // UVM constructor.
    function new(string name = "sram_reset_vseq");
        super.new(name);
    endfunction

    // Pulse both resets in parallel with the configured delays / lengths.
    virtual task body();
        reset_sequence axi_rst, sram_rst;
        axi_rst  = reset_sequence::type_id::create("axi_rst");
        sram_rst = reset_sequence::type_id::create("sram_rst");
        axi_rst.delay_cycles  = axi_delay_cycles;
        axi_rst.pulse_cycles  = axi_pulse_cycles;
        sram_rst.delay_cycles = sram_delay_cycles;
        sram_rst.pulse_cycles = sram_pulse_cycles;
        fork
            axi_rst.start(p_sequencer.axi_rst_seqr);
            sram_rst.start(p_sequencer.sram_rst_seqr);
        join
    endtask

endclass

class sram_reset_traffic_vseq extends sram_base_vseq;

    `uvm_object_utils(sram_reset_traffic_vseq)

    int unsigned num_resets      = 3;
    int unsigned txn_per_phase   = 20;

    // UVM constructor.
    function new(string name = "sram_reset_traffic_vseq");
        super.new(name);
    endfunction

    // num_resets rounds of (random traffic || reset pulse on both domains),
    // then clean traffic to prove recovery.
    virtual task body();
        axi_random_sequence traffic;
        sram_reset_vseq     rst;

        for (int r = 0; r < num_resets; r++) begin
            traffic = axi_random_sequence::type_id::create("traffic");
            traffic.num_txn = txn_per_phase;
            traffic.len_max = 31;

            rst = sram_reset_vseq::type_id::create("rst");
            rst.axi_delay_cycles  = $urandom_range(50, 400);
            // ~same instant in both domains (sram_clk/aclk = 750/400)
            rst.sram_delay_cycles = (rst.axi_delay_cycles * 15) / 8;
            rst.axi_pulse_cycles  = $urandom_range(5, 20);
            rst.sram_pulse_cycles = $urandom_range(40, 80);  // SRAM side released last

            `uvm_info(get_type_name(),
                $sformatf("Reset-in-traffic round %0d: aresetn after %0d aclk, sram_resetn after %0d sram_clk",
                          r, rst.axi_delay_cycles, rst.sram_delay_cycles), UVM_LOW)
            fork
                traffic.start(p_sequencer.axi_seqr);
                rst.start(p_sequencer, this);
            join
        end

        // Recovery: clean traffic after the last reset.
        traffic = axi_random_sequence::type_id::create("recovery");
        traffic.num_txn = txn_per_phase;
        traffic.len_max = 31;
        traffic.start(p_sequencer.axi_seqr);
    endtask

endclass
