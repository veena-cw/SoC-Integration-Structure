// ------------------------------------------------------------
// uart_virtual_sequence.sv
//
// Drives one full test scenario: reset, configure both devices,
// run the d1-only register regression suite, then run one of
// the four mandatory data-transfer modes.
//
// RAL redirection is the key mechanic here: there is exactly
// ONE ral_model (and one adapter), and ral_model.default_map
// gets pointed at whichever device's sequencer should currently
// be the frontdoor target via redirect_to_d1()/redirect_to_d2().
// The register regression sequences in uart_ral_sequences.sv
// always run with the map redirected to d1 (register-level
// tests are d1-only, per the approved methodology). Data
// transfer, however, redirects per byte to whichever device is
// the sender (TXDATA write) or receiver (RXDATA read) for that
// step -- both devices can reach the RAL for data-transfer
// register access; only the regression tests are d1-exclusive.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_virtual_sequence extends uvm_sequence;

    `uvm_object_utils(uart_virtual_sequence)
    `uvm_declare_p_sequencer(uart_virtual_sequencer)

    // ---- the four mandatory modes ----
    typedef enum {
        D1_TO_D2,
        D2_TO_D1,
        HALF_DUPLEX,
        FULL_DUPLEX
    } mode_e;

    mode_e       mode = FULL_DUPLEX;
    int unsigned num_bytes = 4;
    bit run_reg_tests = 1'b1;

    // ---- config shared by both devices ----
    bit [15:0] divisor     = 16'd53;
    bit [3:0]  data_bits   = 4'd9;
    bit        parity_en   = 1'b0;
    bit [1:0]  parity_mode = 2'b00;
    bit        stop_2      = 1'b0;
    bit        flow_en     = 1'b0;
    bit [4:0]  rts_thresh  = 5'd8;

    bit rx_irq_en        = 1'b1;
    bit rx_full_irq_en   = 1'b0;
    bit tx_empty_irq_en  = 1'b0;
    bit err_irq_en       = 1'b1;

    time reset_pulse_width = 100;

    // 1 ms. At divisor=53 the bit time is ~8.6 us, so one 9-bit
    // frame is ~95 us, and 1 ms gives ~10x margin while still
    // surfacing a genuine timeout quickly (previous value was
    // 10 ms, which made every real timeout cost 10 s of wall
    // clock before the error line printed).
    time poll_timeout      = 1_000_000;

    
    
    function time half_duplex_settle();
        return 4 * (divisor + 1) * 16 * 10;  // 4 bit times, 10 ns clk
    endfunction

    function new(string name = "uart_virtual_sequence");
        super.new(name);
    endfunction

    // ------------------------------------------------------------
    // RAL redirect helpers
    // ------------------------------------------------------------
    task redirect_to_d1();
        p_sequencer.ral_model.default_map.set_sequencer(
            p_sequencer.d1_sequencer, p_sequencer.adapter);
    endtask

    task redirect_to_d2();
        p_sequencer.ral_model.default_map.set_sequencer(
            p_sequencer.d2_sequencer, p_sequencer.adapter);
    endtask

    // ------------------------------------------------------------
    // Reset
    // ------------------------------------------------------------
    protected task do_reset();
        reset_sequence rst;
        rst = reset_sequence::type_id::create("rst");
        rst.delay       = 0;
        rst.pulse_width = reset_pulse_width;
        rst.start(p_sequencer.reset_seqr);

        // Bring the shared RAL mirror in line with the freshly
        // reset DUTs. Map must be pointed somewhere for reset()
        // to be meaningful as a "home" state; d1 is that home.
        redirect_to_d1();
        p_sequencer.ral_model.reset();
    endtask

    // ------------------------------------------------------------
    // Configure whichever device the map currently targets
    // ------------------------------------------------------------
    protected task config_device_via_ral();
        uvm_status_e   status;
        uvm_reg_data_t frame_val;
        uvm_reg_data_t flow_val;
        uvm_reg_data_t irq_val;

        p_sequencer.ral_model.DIVISOR.write(status, {16'h0, divisor},
                                            UVM_FRONTDOOR);

        frame_val = {24'h0, stop_2, parity_mode, parity_en, data_bits};
        p_sequencer.ral_model.FRAME.write(status, frame_val, UVM_FRONTDOOR);

        flow_val = {19'h0, rts_thresh, 7'h0, flow_en};
        p_sequencer.ral_model.FLOW.write(status, flow_val, UVM_FRONTDOOR);

        irq_val = {28'h0, err_irq_en, tx_empty_irq_en,
                   rx_full_irq_en, rx_irq_en};
        p_sequencer.ral_model.IRQ.write(status, irq_val, UVM_FRONTDOOR);
    endtask

    protected task config_d1();
        redirect_to_d1();
        config_device_via_ral();
    endtask

    protected task config_d2();
        redirect_to_d2();
        config_device_via_ral();
    endtask

    // ------------------------------------------------------------
    // d1-only register regression suite (write/read, walk-1,
    // walk-0, mirror/predict, generic access, reset check). Map
    // stays on d1 for all of these -- never redirected to d2.
    // ------------------------------------------------------------
    protected task run_reg_access_tests();
        uart_ral_reset_check_seq    reset_chk;
        uart_ral_write_read_seq     wr_rd;
        uart_ral_walk_one_seq       walk1;
        uart_ral_walk_zero_seq      walk0;
        uart_ral_mirror_predict_seq mirror_pred;
        uart_ral_access_seq         acc;

        redirect_to_d1();

        reset_chk = uart_ral_reset_check_seq::type_id::create("reset_chk");
        reset_chk.model = p_sequencer.ral_model;
        reset_chk.start(p_sequencer.d1_sequencer);

        wr_rd = uart_ral_write_read_seq::type_id::create("wr_rd");
        wr_rd.model = p_sequencer.ral_model;
        wr_rd.start(p_sequencer.d1_sequencer);

        walk1 = uart_ral_walk_one_seq::type_id::create("walk1");
        walk1.model = p_sequencer.ral_model;
        walk1.start(p_sequencer.d1_sequencer);

        walk0 = uart_ral_walk_zero_seq::type_id::create("walk0");
        walk0.model = p_sequencer.ral_model;
        walk0.start(p_sequencer.d1_sequencer);

        mirror_pred = uart_ral_mirror_predict_seq::type_id::create("mirror_pred");
        mirror_pred.model = p_sequencer.ral_model;
        mirror_pred.start(p_sequencer.d1_sequencer);

        acc = uart_ral_access_seq::type_id::create("acc");
        acc.model = p_sequencer.ral_model;
        acc.start(p_sequencer.d1_sequencer);
    endtask

    // ------------------------------------------------------------
    // Byte-level send / receive, each redirecting the map to the
    // right device first.
    // ------------------------------------------------------------
    protected task send_byte_from_d1(bit [8:0] data);
        uvm_status_e status;
        redirect_to_d1();
        p_sequencer.ral_model.TXDATA.write(status, {23'h0, data}, UVM_FRONTDOOR);
        $display("  [d1] WRITE  TXDATA(0x0C) <= 0x%08h  (byte=0x%03h)", {23'h0, data}, data);
    endtask

    protected task send_byte_from_d2(bit [8:0] data);
        uvm_status_e status;
        redirect_to_d2();
        p_sequencer.ral_model.TXDATA.write(status, {23'h0, data}, UVM_FRONTDOOR);
        $display("  [d2] WRITE  TXDATA(0x0C) <= 0x%08h  (byte=0x%03h)", {23'h0, data}, data);
    endtask

    // rx_level lives at STATUS bits [13:9] -- see rtl/apb_uart_top.sv
    // and uart_ral_pkg.sv's status_reg field layout.
    protected task recv_byte_on_d2(output bit [8:0] data, output bit timed_out);
        uvm_status_e   status;
        uvm_reg_data_t rdata;
        time           t0;

        timed_out = 1'b0;
        redirect_to_d2();
        t0 = $time;

        forever begin
            if (($time - t0) > poll_timeout) begin
                timed_out = 1'b1;
                $display("  [d2] READ   RXDATA(0x10) => TIMEOUT (rx_level never went nonzero)");
                // The TXDATA write that should have landed here was
                // already pushed onto the scoreboard's d1_to_d2
                // queue when it was observed on the bus -- since
                // this read never happens, that entry must be
                // discarded now or it desyncs every later check in
                // this direction against a stale value.
                p_sequencer.scoreboard.discard_d1_to_d2_pending();
                return;
            end
            p_sequencer.ral_model.STATUS.read(status, rdata, UVM_FRONTDOOR);
            if (((rdata >> 9) & 5'h1F) != 0) break;
            #200;
        end

        p_sequencer.ral_model.RXDATA.read(status, rdata, UVM_FRONTDOOR);
        data = rdata[8:0];
        $display("  [d2] READ   RXDATA(0x10) => 0x%08h  (byte=0x%03h)", rdata, data);
    endtask

    protected task recv_byte_on_d1(output bit [8:0] data, output bit timed_out);
        uvm_status_e   status;
        uvm_reg_data_t rdata;
        time           t0;

        timed_out = 1'b0;
        redirect_to_d1();
        t0 = $time;

        forever begin
            if (($time - t0) > poll_timeout) begin
                timed_out = 1'b1;
                $display("  [d1] READ   RXDATA(0x10) => TIMEOUT (rx_level never went nonzero)");
                // Same reasoning as recv_byte_on_d2 above, mirrored
                // for the d2->d1 queue.
                p_sequencer.scoreboard.discard_d2_to_d1_pending();
                return;
            end
            p_sequencer.ral_model.STATUS.read(status, rdata, UVM_FRONTDOOR);
            if (((rdata >> 9) & 5'h1F) != 0) break;
            #200;
        end

        p_sequencer.ral_model.RXDATA.read(status, rdata, UVM_FRONTDOOR);
        data = rdata[8:0];
        $display("  [d1] READ   RXDATA(0x10) => 0x%08h  (byte=0x%03h)", rdata, data);
    endtask

    protected function bit [8:0] rand_byte();
        bit [31:0] max_val;
        max_val = (32'h1 << data_bits) - 1;
        return $urandom_range(max_val, 0);
    endfunction

    // ------------------------------------------------------------
    // Mode 1: d1 -> d2 (unidirectional)
    // ------------------------------------------------------------
    protected task run_d1_to_d2();
        bit [8:0] data;
        bit [8:0] got;
        bit       timed_out;

        $display("");
        $display("========================================");
        $display("  MODE: D1_TO_D2  (%0d bytes)", num_bytes);
        $display("========================================");

        for (int i = 0; i < num_bytes; i++) begin
            $display("  -- round %0d --", i);
            data = rand_byte();
            send_byte_from_d1(data);
            recv_byte_on_d2(got, timed_out);
            if (timed_out)
                `uvm_error(get_type_name(),
                    $sformatf("d1->d2 byte %0d: RX poll timeout", i))
        end
    endtask

    // ------------------------------------------------------------
    // Mode 2: d2 -> d1 (unidirectional)
    // ------------------------------------------------------------
    protected task run_d2_to_d1();
        bit [8:0] data;
        bit [8:0] got;
        bit       timed_out;

        $display("");
        $display("========================================");
        $display("  MODE: D2_TO_D1  (%0d bytes)", num_bytes);
        $display("========================================");

        for (int i = 0; i < num_bytes; i++) begin
            $display("  -- round %0d --", i);
            data = rand_byte();
            send_byte_from_d2(data);
            recv_byte_on_d1(got, timed_out);
            if (timed_out)
                `uvm_error(get_type_name(),
                    $sformatf("d2->d1 byte %0d: RX poll timeout", i))
        end
    endtask

    // ------------------------------------------------------------
    // ------------------------------------------------------------
	
	protected task run_half_duplex();
    bit [8:0] data_a2b;
    bit [8:0] data_b2a;
    bit [8:0] got;
    bit       timed_out;

    $display("");
    $display("========================================");
    $display("  MODE: HALF_DUPLEX  (%0d rounds)", num_bytes);
    $display("========================================");

    for (int i = 0; i < num_bytes; i++) begin

        // Fixed stimulus
        case (i)
            0: begin data_a2b = 9'h08C; data_b2a = 9'h15F; end
            1: begin data_a2b = 9'h019; data_b2a = 9'h08A; end
            2: begin data_a2b = 9'h16C; data_b2a = 9'h055; end
            3: begin data_a2b = 9'h1A5; data_b2a = 9'h03C; end
            default: begin data_a2b = 9'h055; data_b2a = 9'h0AA; end
        endcase

        $display("  -- round %0d : d1->d2 data=0x%03h --",
                 i, data_a2b);

        send_byte_from_d1(data_a2b);
        recv_byte_on_d2(got, timed_out);

        if (timed_out)
            `uvm_error(get_type_name(),
                $sformatf("half-duplex round %0d (d1->d2): RX poll timeout", i))

        #(4 * (divisor + 1) * 16 * 10);

        $display("  -- round %0d : d2->d1 data=0x%03h --",
                 i, data_b2a);

        send_byte_from_d2(data_b2a);
        recv_byte_on_d1(got, timed_out);

        if (timed_out)
            `uvm_error(get_type_name(),
                $sformatf("half-duplex round %0d (d2->d1): RX poll timeout", i))

        #(4 * (divisor + 1) * 16 * 10);
    end
endtask
	
	
	
	/*
    protected task run_half_duplex();
        bit [8:0] data_a2b;
        bit [8:0] data_b2a;
        bit [8:0] got;
        bit       timed_out;

        $display("");
        $display("========================================");
        $display("  MODE: HALF_DUPLEX  (%0d rounds)", num_bytes);
        $display("========================================");

        for (int i = 0; i < num_bytes; i++) begin

            $display("  -- round %0d : d1->d2 --", i);
            data_a2b = rand_byte();
            send_byte_from_d1(data_a2b);
            recv_byte_on_d2(got, timed_out);
            if (timed_out)
                `uvm_error(get_type_name(),
                    $sformatf("half-duplex round %0d (d1->d2): RX poll timeout", i))

            // ---- settle: ~4 bit times of idle on both lines ----
            #(4 * (divisor + 1) * 16 * 10);

            $display("  -- round %0d : d2->d1 --", i);
            data_b2a = rand_byte();
            send_byte_from_d2(data_b2a);
            recv_byte_on_d1(got, timed_out);
            if (timed_out)
                `uvm_error(get_type_name(),
                    $sformatf("half-duplex round %0d (d2->d1): RX poll timeout", i))
					#(4 * (divisor + 1) * 16 * 10);
        end
    endtask
	*/

    // ------------------------------------------------------------
    // ------------------------------------------------------------
    protected task run_full_duplex();
        bit [8:0] data_a2b;
        bit [8:0] data_b2a;
        bit [8:0] got_on_d2;
        bit [8:0] got_on_d1;
        bit       timed_out_d2;
        bit       timed_out_d1;

        $display("");
        $display("========================================");
        $display("  MODE: FULL_DUPLEX  (%0d rounds)", num_bytes);
        $display("========================================");

        for (int i = 0; i < num_bytes; i++) begin

            $display("  -- round %0d (both directions concurrently) --", i);

            data_a2b = rand_byte();
            data_b2a = rand_byte();

            send_byte_from_d1(data_a2b);
            send_byte_from_d2(data_b2a);

            recv_byte_on_d2(got_on_d2, timed_out_d2);
            recv_byte_on_d1(got_on_d1, timed_out_d1);

            if (timed_out_d2)
                `uvm_error(get_type_name(),
                    $sformatf("full-duplex round %0d (d1->d2): RX poll timeout", i))
            if (timed_out_d1)
                `uvm_error(get_type_name(),
                    $sformatf("full-duplex round %0d (d2->d1): RX poll timeout", i))

        end
    endtask

    // ------------------------------------------------------------
    // Top level
    // ------------------------------------------------------------
    virtual task body();

        do_reset();

        if (run_reg_tests) begin
            // Register regression (d1 only) runs FIRST, right after
            // reset, while the shared mirror still holds the true
            // post-reset values -- uart_ral_reset_check_seq compares
            // get_mirrored_value() against get_reset(), so this only
            // means anything if nothing has written the registers yet.
            // It intentionally scrambles d1's DIVISOR/FRAME/FLOW/IRQ
            // content (walk-1, walk-0, write/read with arbitrary
            // patterns), so real configuration happens AFTER it, not
            // before.
            run_reg_access_tests();
        end

        config_d1();
        config_d2();

        case (mode)
            D1_TO_D2:    run_d1_to_d2();
            D2_TO_D1:    run_d2_to_d1();
            HALF_DUPLEX: run_half_duplex();
            FULL_DUPLEX: run_full_duplex();
        endcase

        // Leave the shared map in its "home" state.
        redirect_to_d1();

    endtask

endclass