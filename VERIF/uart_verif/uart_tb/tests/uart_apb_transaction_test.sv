// ------------------------------------------------------------
// uart_apb_transaction_test.sv
//
// Runs ONLY UART data-transfer scenarios (no d1-only register
// regression -- that has its own dedicated test and report, see
// uart_reg_access_test.sv). This is the "transaction" half of
// verification: it exercises the four mandatory modes
// (D1_TO_D2, D2_TO_D1, HALF_DUPLEX, FULL_DUPLEX) plus a frame-
// format sweep (data-bit widths, parity, stop bits), covering
// the categories from the verification-scope deck ("UART
// Transmission: Start, 5-9 data bits, LSB-first, parity modes,
// 1/2 stop bits"; "Basic TX/RX"; "Continuous Operation").
//
// All reporting is plain $display text (see uart_virtual_sequence
// and uart_scoreboard), not `uvm_info. Each scenario's PASS/FAIL
// delta is read directly off the shared scoreboard's counters
// (public fields) before/after it runs, then printed as a
// per-scenario summary, plus a grand total at the end.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_apb_transaction_test extends uart_base_test;

    `uvm_component_utils(uart_apb_transaction_test)

    int unsigned scenario_num;

    function new(string name = "uart_apb_transaction_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // ------------------------------------------------------------
    // Runs one named scenario, printing a config header before it
    // and a pass/fail delta summary after it -- mirrors the old
    // reference log's per-test "config block + scoreboard summary"
    // structure.
    // ------------------------------------------------------------
    protected task run_named_scenario(
        string                        test_case_name,
        uart_virtual_sequence::mode_e mode,
        int unsigned                  num_bytes,
        bit [3:0]                     data_bits,
        bit                           parity_en,
        bit [1:0]                     parity_mode,
        bit                           stop_2
    );
        uart_virtual_sequence vseq;
        int unsigned          pass_before, pass_after;
        int unsigned          fail_before, fail_after;
        string                parity_str;

        case ({parity_en, parity_mode})
            3'b0_00, 3'b0_01, 3'b0_10, 3'b0_11: parity_str = "disabled";
            3'b1_00: parity_str = "even";
            3'b1_01: parity_str = "odd";
            3'b1_10: parity_str = "mark";
            3'b1_11: parity_str = "space";
            default: parity_str = "?";
        endcase

        scenario_num++;

        $display("");
        $display("========================================");
        $display("   TEST CASE %0d : %s", scenario_num, test_case_name);
        $display("========================================");
        $display("  Mode          : %s", mode.name());
        $display("  Bytes/rounds  : %0d", num_bytes);
        $display("  Data bits     : %0d", data_bits);
        $display("  Parity        : %s", parity_str);
        $display("  Stop bits     : %0d", stop_2 ? 2 : 1);
        $display("========================================");

        pass_before = env.scoreboard.pass_count;
        fail_before = env.scoreboard.error_count;

        vseq = uart_virtual_sequence::type_id::create("vseq");
        vseq.run_reg_tests = 1'b0;
        vseq.mode          = mode;
        vseq.num_bytes     = num_bytes;
        vseq.data_bits     = data_bits;
        vseq.parity_en     = parity_en;
        vseq.parity_mode   = parity_mode;
        vseq.stop_2        = stop_2;

        vseq.start(env.virt_seqr);

        pass_after = env.scoreboard.pass_count;
        fail_after = env.scoreboard.error_count;

        $display("----------------------------------------");
        $display("   TEST CASE %0d SUMMARY : %s", scenario_num, test_case_name);
        $display("----------------------------------------");
        $display("  PASS  : %0d", pass_after - pass_before);
        $display("  FAIL  : %0d", fail_after - fail_before);
        $display("========================================");
    endtask

    virtual task run_phase(uvm_phase phase);

        int unsigned grand_pass;
        int unsigned grand_fail;

        phase.raise_objection(this);

        $display("");
        $display("========================================");
        $display("      APB_UART -- TRANSACTION TEST");
        $display("========================================");
        $display("  DUT           : apb_uart_top d1 <-serial link-> apb_uart_top d2");
        $display("  Register map  : TXDATA 0x0C (WO), RXDATA 0x10 (RO)");
        $display("  Modes covered : D1_TO_D2, D2_TO_D1, HALF_DUPLEX, FULL_DUPLEX");
        $display("========================================");

        // ---- the four mandatory modes, default 9N1 frame ----
        run_named_scenario("uart_tx_basic_test / uart_rx_basic_test (D1_TO_D2)",
            uart_virtual_sequence::D1_TO_D2, 4, 4'd9, 1'b0, 2'b00, 1'b0);

        run_named_scenario("D2_TO_D1 unidirectional",
            uart_virtual_sequence::D2_TO_D1, 4, 4'd9, 1'b0, 2'b00, 1'b0);

        run_named_scenario("uart_half_duplex_test (Continuous Operation)",
            uart_virtual_sequence::HALF_DUPLEX, 4, 4'd9, 1'b0, 2'b00, 1'b0);

        run_named_scenario("uart_full_duplex_test (Continuous Operation, simultaneous TX & RX)",
            uart_virtual_sequence::FULL_DUPLEX, 4, 4'd9, 1'b0, 2'b00, 1'b0);

        // ---- data-bit-width sweep (5..9), per verification scope ----
        run_named_scenario("uart_5bit_test", uart_virtual_sequence::FULL_DUPLEX, 2, 4'd5, 1'b0, 2'b00, 1'b0);
        run_named_scenario("uart_6bit_test", uart_virtual_sequence::FULL_DUPLEX, 2, 4'd6, 1'b0, 2'b00, 1'b0);
        run_named_scenario("uart_7bit_test", uart_virtual_sequence::FULL_DUPLEX, 2, 4'd7, 1'b0, 2'b00, 1'b0);
        run_named_scenario("uart_8bit_test", uart_virtual_sequence::FULL_DUPLEX, 2, 4'd8, 1'b0, 2'b00, 1'b0);
        run_named_scenario("uart_9bit_test", uart_virtual_sequence::FULL_DUPLEX, 2, 4'd9, 1'b0, 2'b00, 1'b0);

        // ---- parity sweep ----
        run_named_scenario("uart_even_parity_test", uart_virtual_sequence::FULL_DUPLEX, 2, 4'd8, 1'b1, 2'b00, 1'b0);
        run_named_scenario("uart_odd_parity_test",  uart_virtual_sequence::FULL_DUPLEX, 2, 4'd8, 1'b1, 2'b01, 1'b0);
        run_named_scenario("uart_mark_parity_test", uart_virtual_sequence::FULL_DUPLEX, 2, 4'd8, 1'b1, 2'b10, 1'b0);
        run_named_scenario("uart_space_parity_test",uart_virtual_sequence::FULL_DUPLEX, 2, 4'd8, 1'b1, 2'b11, 1'b0);

        // ---- stop-bit sweep ----
        run_named_scenario("uart_single_stop_test", uart_virtual_sequence::FULL_DUPLEX, 2, 4'd8, 1'b0, 2'b00, 1'b0);
        run_named_scenario("uart_two_stop_test",    uart_virtual_sequence::FULL_DUPLEX, 2, 4'd8, 1'b0, 2'b00, 1'b1);

        // ---- grand total ----
        grand_pass = env.scoreboard.pass_count;
        grand_fail = env.scoreboard.error_count;

        $display("");
        $display("========================================");
        $display("   TRANSACTION TEST -- GRAND TOTAL");
        $display("========================================");
        $display("  Scenarios run : %0d", scenario_num);
        $display("  PASS          : %0d", grand_pass);
        $display("  FAIL          : %0d", grand_fail);
        $display("========================================");
        $display("");
        $display("  NOTE: this test covers frame-format variety");
        $display("  (data bits, parity, stop bits) and the four");
        $display("  mandatory transfer modes. It does NOT cover");
        $display("  pin-level fault injection (invalid start bit,");
        $display("  missing stop bit, RX glitch, break, forced");
        $display("  overrun/frame/parity errors) or CTS-block/RTS-");
        $display("  threshold flow-control tests from the");
        $display("  verification-scope deck -- those need dedicated");
        $display("  fault-injection sequences that don't exist yet.");
        $display("========================================");

        phase.drop_objection(this);
    endtask

endclass
