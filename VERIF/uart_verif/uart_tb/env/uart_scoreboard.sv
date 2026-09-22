// ------------------------------------------------------------
// uart_scoreboard.sv
//
// Single scoreboard for the whole environment. Fed by BOTH
// d1_agent.monitor.analysis_port (-> write_d1) and
// d2_agent.monitor.analysis_port (-> write_d2), so it sees
// every APB transfer on either device regardless of which one
// is currently the RAL model's default_map target.
//
// Content checking (mode-agnostic):
//   * A TXDATA write observed on d1  -> pushed to d1_to_d2_expected
//   * A RXDATA read  observed on d2  -> popped/checked against
//     d1_to_d2_expected
//   * A TXDATA write observed on d2  -> pushed to d2_to_d1_expected
//   * A RXDATA read  observed on d1  -> popped/checked against
//     d2_to_d1_expected
// This works unchanged for all four uart_virtual_sequence modes
// (D1_TO_D2, D2_TO_D1, HALF_DUPLEX, FULL_DUPLEX): the scoreboard
// does not need to know which mode is running, only which
// device produced which event.
//
// Register-access visibility (d1 only, by construction -- the
// register regression sequences in uart_ral_sequences.sv only
// ever run while the RAL model's default_map is redirected to
// d1): any transfer that is not a TXDATA write or RXDATA read
// is tallied as a register access rather than content-checked,
// since UVM's own mirror(UVM_CHECK) inside those sequences is
// what actually catches a mismatch there.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_scoreboard extends uvm_scoreboard;

    `uvm_component_utils(uart_scoreboard)

    `uvm_analysis_imp_decl(_d1)
    `uvm_analysis_imp_decl(_d2)

    uvm_analysis_imp_d1 #(uart_seq_item, uart_scoreboard) d1_imp;
    uvm_analysis_imp_d2 #(uart_seq_item, uart_scoreboard) d2_imp;

    bit [8:0] d1_to_d2_expected[$];
    bit [8:0] d2_to_d1_expected[$];

    int unsigned tx_d1_count, rx_d1_count;
    int unsigned tx_d2_count, rx_d2_count;
    int unsigned reg_access_d1_count;
    int unsigned pass_count, error_count;

    localparam bit [31:0] ADDR_TXDATA = 32'h0000_000C;
    localparam bit [31:0] ADDR_RXDATA = 32'h0000_0010;

    function new(string name = "uart_scoreboard", uvm_component parent = null);
        super.new(name, parent);
        d1_imp = new("d1_imp", this);
        d2_imp = new("d2_imp", this);
    endfunction

    // ---------- timeout handling ----------
    // Called by uart_virtual_sequence when recv_byte_on_d1/d2
    // times out (rx_level never went nonzero): the corresponding
    // TXDATA write was already observed and pushed onto the
    // expected queue, but since the read that should have
    // consumed it never happened, it would otherwise sit there
    // forever and silently desync every later check in that
    // direction against the wrong (stale) entry -- a single
    // timeout would then look like many unrelated content
    // mismatches for the rest of the run. Discarding the pending
    // entry here keeps the queue meaning "what's actually still
    // in flight," not "what's in flight plus every entry a past
    // timeout orphaned."
    virtual function void discard_d1_to_d2_pending();
        if (d1_to_d2_expected.size() > 0) begin
            void'(d1_to_d2_expected.pop_front());
            `uvm_warning("UART_SB",
                "Discarded a d1->d2 expected entry after an RX timeout")
        end
    endfunction

    virtual function void discard_d2_to_d1_pending();
        if (d2_to_d1_expected.size() > 0) begin
            void'(d2_to_d1_expected.pop_front());
            `uvm_warning("UART_SB",
                "Discarded a d2->d1 expected entry after an RX timeout")
        end
    endfunction

    // ---------- d1-side events ----------
    virtual function void write_d1(uart_seq_item tr);
        if (tr.aborted_by_reset) return;

        if (tr.pwrite && tr.paddr == ADDR_TXDATA) begin
            d1_to_d2_expected.push_back(tr.pwdata[8:0]);
            tx_d1_count++;
            $display("  [SB] d1 sent 0x%03h (TXDATA write) -> queued for d1->d2 check",
                      tr.pwdata[8:0]);
        end
        else if (!tr.pwrite && tr.paddr == ADDR_RXDATA) begin
            rx_d1_count++;
            check_d2_to_d1(tr.prdata[8:0]);
        end
        else begin
            reg_access_d1_count++;
        end
    endfunction

    // ---------- d2-side events ----------
    virtual function void write_d2(uart_seq_item tr);
        if (tr.aborted_by_reset) return;

        if (tr.pwrite && tr.paddr == ADDR_TXDATA) begin
            d2_to_d1_expected.push_back(tr.pwdata[8:0]);
            tx_d2_count++;
            $display("  [SB] d2 sent 0x%03h (TXDATA write) -> queued for d2->d1 check",
                      tr.pwdata[8:0]);
        end
        else if (!tr.pwrite && tr.paddr == ADDR_RXDATA) begin
            rx_d2_count++;
            check_d1_to_d2(tr.prdata[8:0]);
        end
        else begin
            // d2 is not expected to run register-regression tests
            // (per the approved methodology, those are d1-only),
            // but a d2 config write (see uart_config_sequence)
            // still lands here for visibility.
        end
    endfunction

    // ---------- cross checks ----------
    virtual function void check_d1_to_d2(bit [8:0] actual);
        bit [8:0] expected;
        if (d1_to_d2_expected.size() == 0) begin
            error_count++;
            `uvm_error("UART_SB",
                $sformatf("d1->d2 RX with empty queue: got 0x%03h", actual))
            return;
        end
        expected = d1_to_d2_expected.pop_front();
        if (actual === expected) begin
            pass_count++;
            $display("  [SB] PASS d1->d2  exp=0x%03h  act=0x%03h", expected, actual);
        end else begin
            error_count++;
            `uvm_error("UART_SB",
                $sformatf("FAIL d1->d2 exp=0x%03h act=0x%03h",
                          expected, actual))
        end
    endfunction

    virtual function void check_d2_to_d1(bit [8:0] actual);
        bit [8:0] expected;
        if (d2_to_d1_expected.size() == 0) begin
            error_count++;
            `uvm_error("UART_SB",
                $sformatf("d2->d1 RX with empty queue: got 0x%03h", actual))
            return;
        end
        expected = d2_to_d1_expected.pop_front();
        if (actual === expected) begin
            pass_count++;
            $display("  [SB] PASS d2->d1  exp=0x%03h  act=0x%03h", expected, actual);
        end else begin
            error_count++;
            `uvm_error("UART_SB",
                $sformatf("FAIL d2->d1 exp=0x%03h act=0x%03h",
                          expected, actual))
        end
    endfunction

    function void check_phase(uvm_phase phase);
        super.check_phase(phase);
        if (d1_to_d2_expected.size() != 0)
            `uvm_error("UART_SB",
                $sformatf("d1->d2 queue not empty at end: %0d",
                          d1_to_d2_expected.size()))
        if (d2_to_d1_expected.size() != 0)
            `uvm_error("UART_SB",
                $sformatf("d2->d1 queue not empty at end: %0d",
                          d2_to_d1_expected.size()))
    endfunction

    function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        $display("\n========================================");
        $display("        UART SCOREBOARD SUMMARY");
        $display("========================================");
        $display("  d1 sent (TXDATA wr)     : %0d", tx_d1_count);
        $display("  d2 recv (RXDATA rd)     : %0d", rx_d2_count);
        $display("  d2 sent (TXDATA wr)     : %0d", tx_d2_count);
        $display("  d1 recv (RXDATA rd)     : %0d", rx_d1_count);
        $display("  d1 register accesses   : %0d", reg_access_d1_count);
        $display("  PASS                    : %0d", pass_count);
        $display("  ERROR                   : %0d", error_count);
        $display("========================================\n");
    endfunction

endclass
