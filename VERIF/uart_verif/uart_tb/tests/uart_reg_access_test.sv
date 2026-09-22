// ------------------------------------------------------------
// uart_reg_access_test.sv
//
// Runs ONLY the d1-only RAL register regression suite (reset
// value check, write/read, walking-ones, walking-zeros,
// mirror/predict, generic RO/WO access) -- no UART data transfer.
// This is the "reg access" half of verification: it exercises
// every register in rtl/apb_uart_top.sv through the RAL model
// and reports what was written and what was read back for each
// operation.
//
// All test-content reporting here is plain $display text (see
// uart_ral_sequences.sv), not `uvm_info -- so a log of this test
// reads as a clean report. Low-level component activity (reset
// assert/deassert from reset_driver/reset_monitor, and UVM's own
// framework lines) still comes through the normal UVM mechanism,
// since silencing those isn't useful -- only the RESULTS
// reporting needed to be clean text.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_reg_access_test extends uart_base_test;

    `uvm_component_utils(uart_reg_access_test)

    function new(string name = "uart_reg_access_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual task run_phase(uvm_phase phase);

        reset_sequence               rst;
        uart_ral_reset_check_seq     reset_chk;
        uart_ral_write_read_seq      wr_rd;
        uart_ral_walk_one_seq        walk1;
        uart_ral_walk_zero_seq       walk0;
        uart_ral_mirror_predict_seq  mirror_pred;
        uart_ral_access_seq          acc;

        int unsigned total_pass;
        int unsigned total_fail;

        phase.raise_objection(this);

        $display("");
        $display("========================================");
        $display("      APB_UART -- RAL REG ACCESS TEST");
        $display("========================================");
        $display("  DUT           : apb_uart_top (d1 only)");
        $display("  Register Map  :");
        $display("    DIVISOR   0x00  RW  (baud divisor)");
        $display("    FRAME     0x04  RW  (data bits / parity / stop)");
        $display("    FLOW      0x08  RW  (flow control enable / RTS threshold)");
        $display("    TXDATA    0x0C  WO  (not exercised by this test)");
        $display("    RXDATA    0x10  RO  (not exercised by this test)");
        $display("    STATUS    0x14  RO  (FIFO levels / error flags / irq)");
        $display("    IRQ       0x18  RW  (interrupt enables)");
        $display("    CLEAR     0x1C  WO  (sticky-error clear pulse)");
        $display("========================================");

        // ---- reset ----
        rst = reset_sequence::type_id::create("rst");
        rst.delay       = 0;
        rst.pulse_width = 100;
        rst.start(env.virt_seqr.reset_seqr);

        env.virt_seqr.ral_model.default_map.set_sequencer(
            env.virt_seqr.d1_sequencer, env.virt_seqr.adapter);
        env.virt_seqr.ral_model.reset();

        // ---- run every reg-access sequence, d1 only ----
        reset_chk = uart_ral_reset_check_seq::type_id::create("reset_chk");
        reset_chk.model = env.virt_seqr.ral_model;
        reset_chk.start(env.virt_seqr.d1_sequencer);

        wr_rd = uart_ral_write_read_seq::type_id::create("wr_rd");
        wr_rd.model = env.virt_seqr.ral_model;
        wr_rd.start(env.virt_seqr.d1_sequencer);

        walk1 = uart_ral_walk_one_seq::type_id::create("walk1");
        walk1.model = env.virt_seqr.ral_model;
        walk1.start(env.virt_seqr.d1_sequencer);

        walk0 = uart_ral_walk_zero_seq::type_id::create("walk0");
        walk0.model = env.virt_seqr.ral_model;
        walk0.start(env.virt_seqr.d1_sequencer);

        mirror_pred = uart_ral_mirror_predict_seq::type_id::create("mirror_pred");
        mirror_pred.model = env.virt_seqr.ral_model;
        mirror_pred.start(env.virt_seqr.d1_sequencer);

        acc = uart_ral_access_seq::type_id::create("acc");
        acc.model = env.virt_seqr.ral_model;
        acc.start(env.virt_seqr.d1_sequencer);

        // ---- overall summary ----
        total_pass = reset_chk.pass_count + wr_rd.pass_count + walk1.pass_count
                   + walk0.pass_count + mirror_pred.pass_count + acc.pass_count;
        total_fail = reset_chk.fail_count + wr_rd.fail_count + walk1.fail_count
                   + walk0.fail_count + mirror_pred.fail_count + acc.fail_count;

        $display("");
        $display("========================================");
        $display("      RAL REG ACCESS TEST -- OVERALL SUMMARY");
        $display("========================================");
        $display("  %-24s PASS=%-4d FAIL=%-4d", "Reset value check",     reset_chk.pass_count,   reset_chk.fail_count);
        $display("  %-24s PASS=%-4d FAIL=%-4d", "Write / read",          wr_rd.pass_count,       wr_rd.fail_count);
        $display("  %-24s PASS=%-4d FAIL=%-4d", "Walking-ones",          walk1.pass_count,       walk1.fail_count);
        $display("  %-24s PASS=%-4d FAIL=%-4d", "Walking-zeros",         walk0.pass_count,       walk0.fail_count);
        $display("  %-24s PASS=%-4d FAIL=%-4d", "Mirror / predict",      mirror_pred.pass_count, mirror_pred.fail_count);
        $display("  %-24s PASS=%-4d FAIL=%-4d", "Generic access (RO/WO)", acc.pass_count,        acc.fail_count);
        $display("----------------------------------------");
        $display("  %-24s PASS=%-4d FAIL=%-4d", "TOTAL", total_pass, total_fail);
        $display("========================================");
        $display("");

        phase.drop_objection(this);
    endtask

endclass
