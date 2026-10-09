// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_virtual_sequence extends uvm_sequence;

    `uvm_object_utils(uart_virtual_sequence)
    `uvm_declare_p_sequencer(uart_virtual_sequencer)

    typedef enum {
        D1_TO_D2,
        D2_TO_D1,
        HALF_DUPLEX,
        FULL_DUPLEX,
        FIFO_TEST,
        SPEC_RX,
        ERROR_TEST,
        IRQ_TEST
    } mode_e;

    typedef enum {
        ERROR_FRAME,
        ERROR_START_GLITCH,
        ERROR_PARITY,
        ERROR_OVERRUN,
        ERROR_BREAK,
        ERROR_CLEAR_RECOVERY
    } error_case_e;

    typedef enum {
        DIRECTED_DATA,
        RANDOMIZED_DATA
    } data_mode_e;

    mode_e       mode = FULL_DUPLEX;
    int unsigned num_bytes = 8;
    bit          run_reg_tests = 1'b1;

    bit [15:0] divisor     = 16'd53;
    bit [3:0]  data_bits   = 4'd9;
    bit        parity_en   = 1'b0;
    bit [1:0]  parity_mode = 2'b00;
    bit        stop_2      = 1'b0;
    bit        flow_en     = 1'b0;
    bit [4:0]  rts_thresh  = 5'd14;

    data_mode_e data_mode = RANDOMIZED_DATA;

    // SPEC_RX parameters. The spec width is used only to generate
    // the serial waveform. The present APB wrapper is configured
    // only to its supported 7-bit format during this test.
    bit [3:0] spec_data_bits    = 4'd5;
    bit [3:0] spec_dut_data_bits = 4'd7;
    bit       spec_target_d1    = 1'b1;

    int unsigned spec_pass_count = 0;
    int unsigned spec_error_count = 0;

    error_case_e error_case = ERROR_FRAME;
    int unsigned error_pass_count = 0;
    int unsigned error_fail_count = 0;

    int unsigned irq_pass_count = 0;
    int unsigned irq_fail_count = 0;
    int unsigned irq_skip_count = 0;

    // Transaction-test local checks. These are separate from the
    // scoreboard because they verify protocol/control behavior that
    // has no TXDATA/RHR data comparison.
    int unsigned flow_pass_count = 0;
    int unsigned flow_fail_count = 0;

    // Dedicated final RTS-hold scenario. This is intentionally
    // different from threshold cycling: while CTS=1, data remains
    // queued in the source TX FIFO and the destination RX FIFO is
    // not read until the hold check is complete.
    bit rts_hold_test = 1'b0;

    // The APB wrapper exposes IER[3] as rx_full_irq_en_i.
    bit check_rx_full_irq = 1'b1;

    // Long-stream cases use this flag.  When set, the sequence first
    // fills the remote RX FIFO until RTS de-asserts, observes CTS, then
    // drains the RX FIFO while continuing the remaining TX burst.
    bit flow_control_test = 1'b0;

    bit rx_irq_en        = 1'b1;
    bit tx_empty_irq_en = 1'b0;
    bit err_irq_en      = 1'b1;
    bit rx_full_irq_en  = 1'b0;

    time reset_pulse_width = 100;
    time poll_timeout      = 5_000_000;

    // Shared RAL model / default_map is redirected between d1 and d2.
    // Serial APB operations in full-duplex are therefore serialized.
    semaphore ral_lock;

    function new(string name = "uart_virtual_sequence");
        super.new(name);
        ral_lock = new(1);
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

    protected task automatic read_sr_d1(output uvm_reg_data_t s);
        uvm_status_e st;
        ral_lock.get(1);
        redirect_to_d1();
        p_sequencer.ral_model.SR.read(st, s, UVM_FRONTDOOR);
        ral_lock.put(1);
    endtask

    protected task automatic read_sr_d2(output uvm_reg_data_t s);
        uvm_status_e st;
        ral_lock.get(1);
        redirect_to_d2();
        p_sequencer.ral_model.SR.read(st, s, UVM_FRONTDOOR);
        ral_lock.put(1);
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

        ral_lock.get(1);
        redirect_to_d1();
        p_sequencer.ral_model.reset();
        ral_lock.put(1);
    endtask

    // ------------------------------------------------------------
    // Configuration helpers
    // ------------------------------------------------------------
    protected function bit [1:0] encode_data_bits(bit [3:0] bits);
        case (bits)
            4'd7: return 2'b00;
            4'd8: return 2'b01;
            4'd9: return 2'b10;
            default: begin
                // Normal APB configuration must never silently turn an
                // unsupported request (5/6 bits) into a different frame.
                `uvm_error("UART_CFG",
                    $sformatf("data_bits=%0d is not representable by CR[7:6]; normal UART mode cannot use this width",
                              bits))
                return 2'b00;
            end
        endcase
    endfunction

    protected function uvm_reg_data_t build_cr_config();
        uvm_reg_data_t cr;

        cr = '0;
        cr[7:6] = encode_data_bits(data_bits);
        cr[5]   = stop_2;
        cr[4:3] = parity_mode;
        cr[2]   = parity_en;

        // CR[8] and CR[13:9] are implemented by the current APB wrapper.
        // Keep these bits in every CR write, including the TX/RX strobe
        // writes, so a strobe cannot accidentally disable flow control.
        cr[8]    = flow_en;
        cr[13:9] = rts_thresh;

        return cr;
    endfunction

    protected function time uart_bit_time();
        return (divisor + 1) * 16 * 10;
    endfunction

    protected function time uart_frame_time();
        int unsigned frame_bits;
        frame_bits = 1 + data_bits + (parity_en ? 1 : 0) +
                     (stop_2 ? 2 : 1);
        return frame_bits * uart_bit_time();
    endfunction

    protected task config_device_via_ral();
        uvm_status_e   status;
        uvm_reg_data_t cr_val;
        uvm_reg_data_t ier_val;

        p_sequencer.ral_model.BRDR.write(status,
                                         {16'h0, divisor},
                                         UVM_FRONTDOOR);

        cr_val = build_cr_config();
        p_sequencer.ral_model.CR.write(status,
                                       cr_val,
                                       UVM_FRONTDOOR);

        ier_val = {28'h0, rx_full_irq_en, err_irq_en, rx_irq_en,
                   tx_empty_irq_en};
        p_sequencer.ral_model.IER.write(status,
                                        ier_val,
                                        UVM_FRONTDOOR);
    endtask

    protected task config_d1();
        ral_lock.get(1);
        redirect_to_d1();
        config_device_via_ral();
        ral_lock.put(1);
    endtask

    protected task config_d2();
        ral_lock.get(1);
        redirect_to_d2();
        config_device_via_ral();
        ral_lock.put(1);
    endtask

    // ------------------------------------------------------------
    // RAL register regression -- unchanged in purpose: d1 only.
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
    // Data generation
    // ------------------------------------------------------------
    protected function bit [8:0] directed_value(
        int unsigned index,
        bit          d1_to_d2
    );
        bit [8:0] value;

        case (index % 12)
            0:  value = d1_to_d2 ? 9'h000 : 9'h1FF;
            1:  value = d1_to_d2 ? 9'h001 : 9'h100;
            2:  value = d1_to_d2 ? 9'h055 : 9'h0AA;
            3:  value = d1_to_d2 ? 9'h0AA : 9'h055;
            4:  value = d1_to_d2 ? 9'h0FF : 9'h100;
            5:  value = d1_to_d2 ? 9'h100 : 9'h0FF;
            6:  value = d1_to_d2 ? 9'h155 : 9'h0AA;
            7:  value = d1_to_d2 ? 9'h1AA : 9'h055;
            8:  value = d1_to_d2 ? 9'h1FF : 9'h001;
            9:  value = d1_to_d2 ? 9'h012 : 9'h16D;
            10: value = d1_to_d2 ? 9'h1B6 : 9'h049;
            default: value = d1_to_d2 ? 9'h07E : 9'h181;
        endcase

        case (data_bits)
            4'd7:    return {2'b00, value[6:0]};
            4'd8:    return {1'b0, value[7:0]};
            default: return value;
        endcase
    endfunction

    protected function bit [8:0] rand_byte();
        int unsigned max_val;
        max_val = (1 << data_bits) - 1;
        return $urandom_range(max_val, 0);
    endfunction

    protected function bit [8:0] make_data(
        int unsigned index,
        bit          d1_to_d2
    );
        if (data_mode == DIRECTED_DATA)
            return directed_value(index, d1_to_d2);
        return rand_byte();
    endfunction

    protected task make_payload(
        input  int unsigned count,
        input  bit          d1_to_d2,
        output bit [8:0]    payload[]
    );
        payload = new[count];
        for (int i = 0; i < count; i++)
            payload[i] = make_data(i, d1_to_d2);
    endtask

    // ------------------------------------------------------------
    // Specification-level serial RX stimulus
    // ------------------------------------------------------------
    // This path intentionally does not try to encode 5/6 bits into
    // CR[7:6]. The current APB wrapper maps only 7/8/9. Instead,
    // the TB generates a genuine 5/6-bit UART frame on rx_i and the
    // resulting DUT-side behavior is observed through SR/RHR.
    // ------------------------------------------------------------
    protected function bit [8:0] spec_directed_value(int unsigned index);
        bit [8:0] max_value;
        max_value = (9'h001 << spec_data_bits) - 1'b1;

        case (index % 8)
            0: return '0;
            1: return {{8{1'b0}}, 1'b1};
            2: return (9'h001 << (spec_data_bits - 1));
            3: return max_value;
            4: return (max_value >> 1);
            5: return (max_value ^ 9'h001);
            6: return ((9'h001 << (spec_data_bits - 1)) | 9'h003);
            default: return (max_value - 1'b1);
        endcase
    endfunction

    protected function bit [8:0] spec_random_value();
        int unsigned max_value;
        max_value = (1 << spec_data_bits) - 1;
        return $urandom_range(max_value, 0);
    endfunction

    protected function bit [8:0] make_spec_data(int unsigned index);
        if (data_mode == DIRECTED_DATA)
            return spec_directed_value(index);
        return spec_random_value();
    endfunction

    protected function bit spec_parity_value(
        input bit [8:0] data,
        input bit [3:0] nbits,
        input bit [1:0] mode
    );
        bit p;
        p = 1'b0;
        for (int i = 0; i < 9; i++) begin
            if (i < nbits)
                p ^= data[i];
        end

        case (mode)
            2'b00: return p;
            2'b01: return ~p;
            2'b10: return 1'b1;
            default: return 1'b0;
        endcase
    endfunction

    protected task spec_drive_line(input bit target_d1, input bit value);
        if (target_d1)
            p_sequencer.d1_vif.spec_rx_drive = value;
        else
            p_sequencer.d2_vif.spec_rx_drive = value;
    endtask

    protected task spec_enable_line(input bit target_d1, input bit enable);
        if (target_d1)
            p_sequencer.d1_vif.spec_rx_drive_en = enable;
        else
            p_sequencer.d2_vif.spec_rx_drive_en = enable;
    endtask

    protected function bit spec_rx_value(input bit target_d1);
        if (target_d1)
            return p_sequencer.d1_vif.rx_i;
        return p_sequencer.d2_vif.rx_i;
    endfunction

    protected function bit spec_tx_value(input bit target_d1);
        if (target_d1)
            return p_sequencer.d1_vif.tx_o;
        return p_sequencer.d2_vif.tx_o;
    endfunction

    protected task config_spec_device_d1();
        uvm_status_e   status;
        uvm_reg_data_t cr_val;
        uvm_reg_data_t ier_val;

        ral_lock.get(1);
        redirect_to_d1();

        p_sequencer.ral_model.BRDR.write(
            status, {16'h0, divisor}, UVM_FRONTDOOR);

        // 00 in CR[7:6] is the current wrapper's 7-bit setting.
        cr_val = '0;
        cr_val[7:6] = 2'b00; // DUT receiver = 7 bits
        cr_val[5]   = stop_2;
        cr_val[4:3] = parity_mode;
        cr_val[2]   = parity_en;
        p_sequencer.ral_model.CR.write(status, cr_val, UVM_FRONTDOOR);

        ier_val = {28'h0, rx_full_irq_en, err_irq_en, rx_irq_en,
                   tx_empty_irq_en};
        p_sequencer.ral_model.IER.write(status, ier_val, UVM_FRONTDOOR);

        ral_lock.put(1);
    endtask

    protected task config_spec_device_d2();
        uvm_status_e   status;
        uvm_reg_data_t cr_val;
        uvm_reg_data_t ier_val;

        ral_lock.get(1);
        redirect_to_d2();

        p_sequencer.ral_model.BRDR.write(
            status, {16'h0, divisor}, UVM_FRONTDOOR);

        cr_val = '0;
        cr_val[7:6] = 2'b00; // DUT receiver = 7 bits
        cr_val[5]   = stop_2;
        cr_val[4:3] = parity_mode;
        cr_val[2]   = parity_en;
        p_sequencer.ral_model.CR.write(status, cr_val, UVM_FRONTDOOR);

        ier_val = {28'h0, rx_full_irq_en, err_irq_en, rx_irq_en,
                   tx_empty_irq_en};
        p_sequencer.ral_model.IER.write(status, ier_val, UVM_FRONTDOOR);

        ral_lock.put(1);
    endtask

    protected task spec_drive_frame(input bit [8:0] data);
        spec_enable_line(spec_target_d1, 1'b1);
        spec_drive_line(spec_target_d1, 1'b1);
        #(uart_bit_time());

        // Start bit.
        spec_drive_line(spec_target_d1, 1'b0);
        #(uart_bit_time());

        // Data, LSB first.
        for (int i = 0; i < spec_data_bits; i++) begin
            spec_drive_line(spec_target_d1, data[i]);
            #(uart_bit_time());
        end

        if (parity_en) begin
            spec_drive_line(
                spec_target_d1,
                spec_parity_value(data, spec_data_bits, parity_mode));
            #(uart_bit_time());
        end

        // Stop bit(s) are always logic 1.
        spec_drive_line(spec_target_d1, 1'b1);
        #(uart_bit_time());
        if (stop_2) begin
            #(uart_bit_time());
        end

        // Keep the line idle until the next frame is explicitly started.
        spec_drive_line(spec_target_d1, 1'b1);
    endtask

    protected task spec_read_sr(output uvm_reg_data_t s);
        if (spec_target_d1)
            read_sr_d1(s);
        else
            read_sr_d2(s);
    endtask

    protected task spec_read_rhr(output bit [8:0] data);
        uvm_status_e   status;
        uvm_reg_data_t rdata;
        uvm_reg_data_t cr_val;

        ral_lock.get(1);
        if (spec_target_d1)
            redirect_to_d1();
        else
            redirect_to_d2();

        p_sequencer.ral_model.RHR.read(
            status, rdata, UVM_FRONTDOOR);
        data = rdata[8:0];

        cr_val       = '0;
        cr_val[7:6]  = 2'b00; // DUT receiver = 7 bits
        cr_val[5]    = stop_2;
        cr_val[4:3]  = parity_mode;
        cr_val[2]    = parity_en;
        cr_val[1]    = 1'b1;
        p_sequencer.ral_model.CR.write(status, cr_val, UVM_FRONTDOOR);
        p_sequencer.ral_model.CR.write(status, cr_val & 32'hFFFF_FFFD,
                                       UVM_FRONTDOOR);

        ral_lock.put(1);
    endtask

    protected task spec_wait_for_rx_data(output bit timed_out);
        uvm_reg_data_t s;
        time t0;

        timed_out = 1'b0;
        t0 = $time;

        forever begin
            spec_read_sr(s);
            if (!s[2])
                return;

            if (($time - t0) > poll_timeout) begin
                timed_out = 1'b1;
                `uvm_error(get_type_name(),
                    $sformatf("SPEC_RX %0d-bit frame was not received", spec_data_bits))
                return;
            end
            #200;
        end
    endtask

    protected task run_spec_rx();
        bit [8:0] data;
        bit [8:0] actual;
        bit [8:0] dut_expected;
        bit       timed_out;
        uvm_reg_data_t sr;
        string side;

        spec_pass_count  = 0;
        spec_error_count = 0;

        if ((spec_data_bits != 4'd5) && (spec_data_bits != 4'd6)) begin
            `uvm_fatal(get_type_name(),
                $sformatf("SPEC_RX supports only 5-bit or 6-bit serial stimulus; got %0d",
                          spec_data_bits))
            return;
        end

        if (spec_dut_data_bits != 4'd7) begin
            `uvm_fatal(get_type_name(),
                $sformatf("SPEC_RX currently expects the DUT to be configured for 7 bits; got %0d",
                          spec_dut_data_bits))
            return;
        end

        if (spec_target_d1) begin
            side = "d1";
            config_spec_device_d1();
            p_sequencer.scoreboard.spec_rx_mode_active = 1'b1;
        end else begin
            side = "d2";
            config_spec_device_d2();
            p_sequencer.scoreboard.spec_rx_mode_active = 1'b1;
        end

        spec_enable_line(spec_target_d1, 1'b1);
        spec_drive_line(spec_target_d1, 1'b1);

        $display("  [SPEC] target=%s  stimulus=%0d-bit  DUT-config=%0d-bit  divisor=%0d",
                 side, spec_data_bits, spec_dut_data_bits, divisor);
        $display("  [SPEC] TB drives rx_i directly; tx_o remains DUT output-only");

        #(2 * uart_bit_time());

        for (int i = 0; i < num_bytes; i++) begin
            data = make_spec_data(i);

            $display("  [SPEC] %s rx_i <- %0d-bit frame  data=0x%03h",
                     side, spec_data_bits, data);

            spec_drive_frame(data);

            // The current wrapper configures the receiver for 7 bits.
            // With an N-bit injected frame (N=5/6), the first injected
            // stop bit is consequently sampled as the next data bit.
            dut_expected = data;
            //dut_expected[spec_data_bits] = 1'b1;
            for (int b = spec_data_bits; b < spec_dut_data_bits; b++) begin
            dut_expected[b] = 1'b1;
            end

            spec_wait_for_rx_data(timed_out);
            if (timed_out)
                continue;

            spec_read_sr(sr);
            if (sr[4] || sr[5]) begin
                `uvm_warning("UART_SPEC",
                    $sformatf("%s received %0d-bit injected frame with error flags: parity=%0b frame=%0b",
                              side, spec_data_bits, sr[4], sr[5]))
            end

            spec_read_rhr(actual);

            $display("  [SPEC] %s RHR <= 0x%03h   tx_o=%0b",
                     side, actual, spec_tx_value(spec_target_d1));

            if (actual === dut_expected) begin
                spec_pass_count++;
                $display("  [SPEC] OBSERVED: current DUT interpreted %0d-bit frame as %0d-bit data -> 0x%03h",
                         spec_data_bits, spec_dut_data_bits, actual);
            end else begin
                spec_error_count++;
                `uvm_error("UART_SPEC",
                    $sformatf("Unexpected %s RHR result for injected %0d-bit frame: data=0x%03h actual=0x%03h current-7bit-expected=0x%03h",
                              side, spec_data_bits, data, actual, dut_expected))
            end

            if (spec_rx_value(spec_target_d1) !== 1'b1) begin
                `uvm_error("UART_SPEC",
                    $sformatf("%s rx_i did not return to idle-high after the injected frame",
                              side))
            end
        end

        spec_drive_line(spec_target_d1, 1'b1);
        spec_enable_line(spec_target_d1, 1'b0);

        p_sequencer.scoreboard.spec_rx_mode_active = 1'b0;

        $display("  [SPEC] %s  stimulus frames=%0d  observed=%0d  unexpected=%0d",
                 side, num_bytes, spec_pass_count, spec_error_count);
    endtask

    // ------------------------------------------------------------
    // Error verification / direct serial injection
    // ------------------------------------------------------------
    protected task automatic error_read_isr_d1(output uvm_reg_data_t isr);
        uvm_status_e st;

        ral_lock.get(1);
        redirect_to_d1();
        p_sequencer.ral_model.ISR.read(st, isr, UVM_FRONTDOOR);
        ral_lock.put(1);
    endtask

    protected task automatic error_print_flags(
        input string         label,
        input uvm_reg_data_t isr
    );
        $display(
            "  [FLAG] %-34s ISR[7:4]=%b%b%b%b  BREAK=%0b OVERRUN=%0b FRAME=%0b PARITY=%0b",
            label,
            isr[7], isr[6], isr[5], isr[4],
            isr[7], isr[6], isr[5], isr[4]
        );
    endtask

    protected task automatic error_read_flags(
        input  string         label,
        output uvm_reg_data_t isr
    );
        error_read_isr_d1(isr);
        error_print_flags(label, isr);
    endtask

    protected task automatic error_check(
        input string message,
        input bit    condition
    );
        if (condition) begin
            error_pass_count++;
            $display("  [ERROR] PASS: %s", message);
        end
        else begin
            error_fail_count++;
            `uvm_error("UART_ERROR", $sformatf("FAIL: %s", message))
        end
    endtask

    // ISR is read-to-clear on this DUT. Therefore one ISR read is the
    // observation point "before clear", and the next ISR read verifies
    // the post-clear state.
    protected task automatic error_check_flags_and_clear(
        input string message,
        input bit    expected_frame,
        input bit    expected_parity,
        input bit    expected_overrun,
        input bit    expected_break
    );
        uvm_reg_data_t isr_before_clear;
        uvm_reg_data_t isr_after_clear;
        bit            expected_ok;

        error_read_flags("AFTER INJECTION / BEFORE CLEAR", isr_before_clear);

        expected_ok =
            (isr_before_clear[5] === expected_frame) &&
            (isr_before_clear[4] === expected_parity) &&
            (isr_before_clear[6] === expected_overrun) &&
            (isr_before_clear[7] === expected_break);

        error_check(
            $sformatf(
                "%s: expected flags F=%0b P=%0b O=%0b B=%0b",
                message,
                expected_frame,
                expected_parity,
                expected_overrun,
                expected_break
            ),
            expected_ok
        );

        error_read_flags("AFTER ISR READ / CLEAR", isr_after_clear);
        error_check(
            $sformatf("%s: all sticky flags cleared", message),
            isr_after_clear[7:4] == 4'b0000
        );
    endtask

    protected task automatic error_report_sr(input string label);
        uvm_reg_data_t sr;

        read_sr_d1(sr);
        $display(
            "  [SR]   %-34s RX_EMPTY=%0b RX_FULL=%0b",
            label,
            sr[2],
            sr[3]
        );
    endtask

    // Show and remove any data already accepted into RX FIFO by the
    // error frame itself. This is important because an error condition
    // does not necessarily mean the received data is discarded.
    protected task automatic error_drain_pending_data(input string reason);
        uvm_reg_data_t sr;
        bit [8:0]      got;
        bit             timed_out;
        int unsigned    index;

        index = 0;

        read_sr_d1(sr);
        while (!sr[2]) begin
            recv_byte_on_d1(got, timed_out);

            if (timed_out) begin
                `uvm_error(
                    "UART_ERROR",
                    $sformatf("%s: timeout while draining RX FIFO", reason)
                )
                return;
            end

            $display(
                "  [DATA] %-29s entry[%0d] RECEIVED = 0x%03h",
                reason,
                index,
                got
            );

            index++;
            read_sr_d1(sr);
        end

        if (index == 0)
            $display("  [DATA] %-29s no data received (RX_EMPTY=1)", reason);
        else
            $display("  [DATA] %-29s total received entries = %0d", reason, index);
    endtask

    protected task automatic error_start_case_state(input string case_name);
        uvm_reg_data_t isr;

        error_read_flags(
            {"BEFORE ", case_name},
            isr
        );

        error_check(
            $sformatf("%s starts with all error flags cleared", case_name),
            isr[7:4] == 4'b0000
        );
    endtask

    protected task automatic error_drive_frame(
        input bit [8:0] data,
        input bit       wrong_parity = 1'b0,
        input bit       bad_stop1   = 1'b0,
        input bit       bad_stop2   = 1'b0
    );
        bit parity_expected;
        bit parity_sent;

        parity_expected = 1'b0;
        parity_sent     = 1'b0;

        if (parity_en) begin
            parity_expected = spec_parity_value(
                data, data_bits, parity_mode
            );
            parity_sent = wrong_parity ? ~parity_expected : parity_expected;
        end

        if (!parity_en) begin
            $display(
                "  [FRAME] SEND: START=0 DATA=0x%03h (%0d bits, LSB-first) STOP1=%0b%s",
                data,
                data_bits,
                bad_stop1 ? 1'b0 : 1'b1,
                stop_2 ? $sformatf(" STOP2=%0b", bad_stop2 ? 1'b0 : 1'b1) : ""
            );
        end
        else begin
            $display(
                "  [FRAME] SEND: START=0 DATA=0x%03h (%0d bits, LSB-first) PARITY_MODE=%b (%s) EXPECTED=%0b SENT=%0b STOP1=%0b",
                data,
                data_bits,
                parity_mode,
                (parity_mode == 2'b00) ? "EVEN" :
                (parity_mode == 2'b01) ? "ODD"  :
                (parity_mode == 2'b10) ? "MARK" : "SPACE",
                parity_expected,
                parity_sent,
                bad_stop1 ? 1'b0 : 1'b1
            );
        end

        p_sequencer.d1_vif.spec_rx_drive_en = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        #(uart_bit_time());

        // Start bit.
        p_sequencer.d1_vif.spec_rx_drive = 1'b0;
        #(uart_bit_time());

        // Data, LSB first.
        for (int i = 0; i < data_bits; i++) begin
            p_sequencer.d1_vif.spec_rx_drive = data[i];
            #(uart_bit_time());
        end

        // Optional parity bit.
        if (parity_en) begin
            p_sequencer.d1_vif.spec_rx_drive = parity_sent;
            #(uart_bit_time());
        end

        // Stop bit(s).
        p_sequencer.d1_vif.spec_rx_drive = bad_stop1 ? 1'b0 : 1'b1;
        #(uart_bit_time());

        if (stop_2) begin
            p_sequencer.d1_vif.spec_rx_drive = bad_stop2 ? 1'b0 : 1'b1;
            #(uart_bit_time());
        end

        p_sequencer.d1_vif.spec_rx_drive = 1'b1;
    endtask

    protected task automatic error_drive_start_glitch(input bit [1:0] width_sel);
        time low_time;

        case (width_sel)
            2'd0: low_time = uart_bit_time() / 4;
            default: low_time = uart_bit_time() / 8;
        endcase

        $display(
            "  [FRAME] SEND: invalid start/glitch START pulse LOW for %0t (of 1 bit=%0t)",
            low_time,
            uart_bit_time()
        );

        p_sequencer.d1_vif.spec_rx_drive_en = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        #(uart_bit_time());

        p_sequencer.d1_vif.spec_rx_drive = 1'b0;
        #(low_time);
        p_sequencer.d1_vif.spec_rx_drive = 1'b1;
        #(2 * uart_bit_time());
    endtask

    protected task automatic error_recover_with_valid_frame(
        input string message,
        input bit [8:0] data
    );
        bit [8:0] got;
        bit       timed_out;
        uvm_reg_data_t isr_before;
        uvm_reg_data_t isr_after;

        // A previous bad frame may have deposited data in RX FIFO.
        // Drain it and show it before sending the actual recovery frame.
        error_report_sr({message, " : before recovery"});
        error_drain_pending_data({message, " : stale/error-frame RX data"});

        error_read_flags({"BEFORE RECOVERY: ", message}, isr_before);
        error_check(
            $sformatf("%s: flags are clear before recovery", message),
            isr_before[7:4] == 4'b0000
        );

        // Give the receiver a clean idle-high interval before the
        // recovery start bit. This is especially important after
        // BREAK/continuous-low injection because the RX state machine
        // must return to its idle state before accepting a new frame.
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        $display("  [RECOVERY] IDLE: waiting 4 UART bit times before recovery frame");
        #(4 * uart_bit_time());

        $display("  [RECOVERY] SEND valid frame: DATA=0x%03h", data);
        error_drive_frame(data, 1'b0, 1'b0, 1'b0);

        // Allow the completed recovery frame to settle in the RX path
        // before the RHR read/poll starts.
        #(2 * uart_bit_time());
        recv_byte_on_d1(got, timed_out);

        if (timed_out) begin
            error_check(
                $sformatf("%s: valid recovery frame received", message),
                1'b0
            );
            return;
        end

        $display(
            "  [DATA]   %-31s RECEIVED=0x%03h",
            message,
            got
        );

        error_check(
            $sformatf(
                "%s: recovery data expected=0x%03h actual=0x%03h",
                message,
                data,
                got
            ),
            got === data
        );

        error_read_flags({"AFTER RECOVERY: ", message}, isr_after);
        error_check(
            $sformatf("%s: no error flags after recovery", message),
            isr_after[7:4] == 4'b0000
        );
    endtask

    protected task automatic run_error_frame_case();
        uvm_reg_data_t isr;
        uvm_reg_data_t sr;

        data_bits   = 4'd8;
        parity_en   = 1'b0;
        parity_mode = 2'b00;
        stop_2      = 1'b0;
        rx_irq_en   = 1'b0;
        err_irq_en  = 1'b0;
        config_d1();

        error_start_case_state("FRAME ERROR 8N1");

        $display("  [FRAME] CONDITION: stop bit is forced LOW instead of HIGH");
        error_drive_frame(9'h055, 1'b0, 1'b1, 1'b0);
        #(2 * uart_bit_time());
        error_check_flags_and_clear(
            "8N1 invalid stop",
            1'b1, 1'b0, 1'b0, 1'b0
        );
        error_report_sr("8N1 after error");
        error_drain_pending_data("8N1 received data");
        error_recover_with_valid_frame("8N1 frame-error recovery", 9'h0A5);

        stop_2 = 1'b1;
        config_d1();

        error_start_case_state("FRAME ERROR 8N2");

        $display("  [FRAME] CONDITION: first stop bit is forced LOW");
        error_drive_frame(9'h02A, 1'b0, 1'b1, 1'b0);
        #(3 * uart_bit_time());
        error_check_flags_and_clear(
            "8N2 invalid first stop",
            1'b1, 1'b0, 1'b0, 1'b0
        );
        error_report_sr("8N2 after error");
        error_drain_pending_data("8N2 received data");
        error_recover_with_valid_frame("8N2 frame-error recovery", 9'h05A);

        read_sr_d1(sr);
        error_check("RX FIFO is empty after frame-error recovery", sr[2] == 1'b1);
    endtask

    protected task automatic run_error_start_glitch_case();
        uvm_reg_data_t isr;

        data_bits   = 4'd8;
        parity_en   = 1'b0;
        parity_mode = 2'b00;
        stop_2      = 1'b0;
        rx_irq_en   = 1'b0;
        err_irq_en  = 1'b0;
        config_d1();

        error_start_case_state("INVALID START");

        $display("  [START] CONDITION: LOW pulse lasts only 1/4 bit time");
        error_drive_start_glitch(2'd0);
        error_report_sr("invalid-start after glitch");
        error_read_flags("invalid-start flags", isr);
        error_check("invalid start does not set an error", isr[7:4] == 4'b0000);
        error_check("invalid start leaves RX FIFO empty", isr[2] == 1'b1);
        error_recover_with_valid_frame("invalid-start recovery", 9'h03C);

        p_sequencer.d1_vif.spec_rx_drive = 1'b1;
        #(2 * uart_bit_time());

        error_start_case_state("RX GLITCH");

        $display("  [GLITCH] CONDITION: LOW pulse lasts only 1/8 bit time");
        error_drive_start_glitch(2'd1);
        error_report_sr("RX glitch after pulse");
        error_read_flags("RX-glitch flags", isr);
        error_check("RX glitch does not set an error", isr[7:4] == 4'b0000);
        error_check("RX glitch leaves RX FIFO empty", isr[2] == 1'b1);
        error_recover_with_valid_frame("RX-glitch recovery", 9'h0C3);
    endtask

    protected task automatic run_error_parity_case();
        uvm_reg_data_t isr;
        bit [8:0]      good_data;
        bit [8:0]      recovery_data;
        bit            parity_expected;
        bit            parity_wrong;
        string         parity_name;
        string         mode_text;

        data_bits  = 4'd8;
        parity_en  = 1'b1;
        stop_2     = 1'b0;
        rx_irq_en  = 1'b0;
        err_irq_en = 1'b0;

        for (int m = 0; m < 4; m++) begin
            case (m)
                0: begin
                    parity_mode = 2'b00;
                    parity_name = "EVEN";
                    mode_text   = "00";
                end
                1: begin
                    parity_mode = 2'b01;
                    parity_name = "ODD";
                    mode_text   = "01";
                end
                2: begin
                    parity_mode = 2'b10;
                    parity_name = "MARK";
                    mode_text   = "10";
                end
                default: begin
                    parity_mode = 2'b11;
                    parity_name = "SPACE";
                    mode_text   = "11";
                end
            endcase

            config_d1();
            good_data     = 9'h055 + m;
            recovery_data = 9'h0A0 + m;

            parity_expected = spec_parity_value(
                good_data, data_bits, parity_mode
            );
            parity_wrong = ~parity_expected;

            $display("");
            $display("================================================");
            $display(" PARITY TEST : MODE %s (%s)", mode_text, parity_name);
            $display("================================================");

            // ----------------------------------------------------
            // BEFORE
            // ----------------------------------------------------
            error_read_flags("BEFORE", isr);
            error_check(
                $sformatf("%s parity starts with all error flags cleared", parity_name),
                isr[7:4] == 4'b0000
            );

            // ----------------------------------------------------
            // CORRECT PARITY
            // ----------------------------------------------------
            $display("  [CORRECT PARITY]");
            $display("  DATA            = 0x%03h", good_data);
            $display("  EXPECTED PARITY = %0b", parity_expected);
            $display("  SENT PARITY     = %0b", parity_expected);

            error_drive_frame(good_data, 1'b0, 1'b0, 1'b0);
            #(2 * uart_bit_time());
            error_read_flags("CORRECT: AFTER FRAME", isr);
            error_check(
                $sformatf("%s correct parity: no error flags", parity_name),
                isr[7:4] == 4'b0000
            );
            error_drain_pending_data({parity_name, " correct parity RX"});

            // ----------------------------------------------------
            // WRONG PARITY
            // ----------------------------------------------------
            $display("");
            $display("  [WRONG PARITY]");
            $display("  DATA            = 0x%03h", good_data);
            $display("  EXPECTED PARITY = %0b", parity_expected);
            $display("  SENT PARITY     = %0b", parity_wrong);

            error_start_case_state({"PARITY ", parity_name, " WRONG"});
            error_drive_frame(good_data, 1'b1, 1'b0, 1'b0);
            #(2 * uart_bit_time());
            error_check_flags_and_clear(
                {parity_name, " wrong parity"},
                1'b0, 1'b1, 1'b0, 1'b0
            );
            error_drain_pending_data({parity_name, " wrong parity RX"});

            // ----------------------------------------------------
            // RECOVERY
            // ----------------------------------------------------
            $display("");
            $display("  [AFTER CLEAR / RECOVERY]");
            error_recover_with_valid_frame(
                {parity_name, " parity recovery"},
                recovery_data
            );
        end
    endtask

    protected task automatic run_error_overrun_case();
        uvm_reg_data_t sr;
        uvm_reg_data_t isr;
        bit [8:0]      got;
        bit            timed_out;
        time           t0;

        data_bits        = 4'd8;
        parity_en        = 1'b0;
        parity_mode      = 2'b00;
        stop_2           = 1'b0;
        flow_en          = 1'b0;
        rts_thresh       = 5'd14;
        rx_irq_en        = 1'b0;
        tx_empty_irq_en  = 1'b0;
        err_irq_en       = 1'b0;
        rx_full_irq_en   = 1'b0;

        config_d1();
        config_d2();
        p_sequencer.scoreboard.spec_rx_mode_active = 1'b0;

        // This overrun scenario intentionally uses the normal d1->d2
        // UART connection.  No TB waveform is driven onto either rx_i.
        redirect_to_d2();
        fifo_read_isr(isr);
        error_check(
            "RX OVERRUN starts with all D2 error flags clear",
            isr[7:4] == 4'b0000
        );

        $display("  [OVERRUN] CONDITION: 16 valid UART frames sent d1 -> d2 without RX reads");
        for (int i = 0; i < FIFO_DEPTH; i++) begin
            wait_tx_space_d1();
            send_byte_from_d1(9'h010 + i);
        end

        t0 = $time;
        forever begin
            read_sr_d2(sr);
            if (sr[3]) break;
            if (($time - t0) > (uart_frame_time() * (FIFO_DEPTH + 4))) begin
                `uvm_error("UART_ERROR",
                    "D2 RX FIFO did not become full while receiving the first 16 UART frames")
                break;
            end
            #200;
        end

        read_sr_d2(sr);
        $display("  [SR]   D2 AFTER 16 FRAMES: RX_EMPTY=%0b RX_FULL=%0b", sr[2], sr[3]);
        error_check("D2 RX FIFO is full after 16 normal-link UART frames", sr[3] == 1'b1);

        redirect_to_d2();
        fifo_read_isr(isr);
        error_check(
            "RX FIFO full alone does not set the OVERRUN sticky flag",
            isr[6] == 1'b0
        );

        $display("  [OVERRUN] CONDITION: 17th valid UART frame sent while D2 RX FIFO is FULL");
        wait_tx_space_d1();
        send_byte_from_d1(9'h077);
        #(uart_frame_time() + (2 * uart_bit_time()));

        redirect_to_d2();
        fifo_read_isr(isr);
        error_check("17th valid UART frame sets OVERRUN error on D2", isr[6] == 1'b1);

        // ISR is read-to-clear. The read above clears the sticky error.
        fifo_read_isr(isr);
        error_check(
            "OVERRUN sticky flag clears on the subsequent ISR read",
            isr[7:4] == 4'b0000
        );

        $display("  [OVERRUN] RECEIVED DATA: draining the 16 stored FIFO entries from d2");
        for (int i = 0; i < FIFO_DEPTH; i++) begin
            recv_byte_on_d2(got, timed_out);
            error_check(
                $sformatf("D2 RX FIFO drain entry %0d received", i),
                !timed_out
            );
            if (!timed_out)
                $display("  [DATA]   OVERRUN FIFO entry[%0d] RECEIVED = 0x%03h", i, got);
        end

        p_sequencer.scoreboard.discard_d1_to_d2_pending(1'b1);
        read_sr_d2(sr);
        error_check("D2 RX FIFO empty after overrun drain", sr[2] == 1'b1);

        // Normal-link recovery: send another valid frame from d1 and
        // receive it at d2.  This confirms the overrun path recovers
        // without using the direct TB rx_i injection mechanism.
        $display("  [RECOVERY] SEND valid frame on normal d1 -> d2 link: DATA=0x0A5");
        send_byte_from_d1(9'h0A5);
        recv_byte_on_d2(got, timed_out);
        error_check("overrun recovery frame received on d2",
                    !timed_out && got === 9'h0A5);

        redirect_to_d2();
        fifo_read_isr(isr);
        error_check("no sticky D2 error flags after overrun recovery",
                    isr[7:4] == 4'b0000);
    endtask

    protected task automatic run_error_break_case();
        uvm_reg_data_t isr;

        data_bits   = 4'd8;
        parity_en   = 1'b0;
        parity_mode = 2'b00;
        stop_2      = 1'b0;
        rx_irq_en   = 1'b0;
        err_irq_en  = 1'b0;
        config_d1();

        error_start_case_state("BREAK");

        p_sequencer.d1_vif.spec_rx_drive_en = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        #(uart_bit_time());

        $display("  [BREAK] CONDITION: rx_i forced LOW for 13 UART bit times");
        $display("  [FRAME] SEND: START=0 with continuous LOW condition (no valid data/stop frame)");
        p_sequencer.d1_vif.spec_rx_drive = 1'b0;
        #(13 * uart_bit_time());
        p_sequencer.d1_vif.spec_rx_drive = 1'b1;
        #(2 * uart_bit_time());

        error_read_flags("BREAK: AFTER LOW / BEFORE CLEAR", isr);
        error_check("continuous LOW sets BREAK error", isr[7] == 1'b1);
        if (isr[5])
            $display("  [BREAK] NOTE: FRAME error is also set by the continuous-low condition");

        error_read_flags("BREAK: AFTER ISR READ / CLEAR", isr);
        error_check("BREAK sticky flags clear on ISR read", isr[7:4] == 4'b0000);

        error_report_sr("BREAK after condition");
        error_drain_pending_data("BREAK received/stale RX data");
        error_recover_with_valid_frame("break recovery", 9'h096);
    endtask

    protected task automatic run_error_clear_recovery_case();
        uvm_reg_data_t isr;

        data_bits   = 4'd8;
        parity_en   = 1'b0;
        parity_mode = 2'b00;
        stop_2      = 1'b0;
        rx_irq_en   = 1'b0;
        err_irq_en  = 1'b0;
        config_d1();

        error_start_case_state("STICKY CLEAR / RECOVERY");

        // Latch FRAME error first and deliberately do NOT read ISR.
        // The error must remain sticky while the UART is reconfigured.
        $display("  [CLEAR] CONDITION 1: latch FRAME error and do not clear ISR");
        error_drive_frame(9'h055, 1'b0, 1'b1, 1'b0);
        #(2 * uart_bit_time());

        // Reconfigure parity without reading ISR, then add PARITY error.
        parity_en   = 1'b1;
        parity_mode = 2'b00;
        config_d1();
        $display("  [CLEAR] CONDITION 2: latch PARITY error without clearing FRAME");
        error_drive_frame(9'h003, 1'b1, 1'b0, 1'b0);
        #(2 * uart_bit_time());

        // Disable parity without reading ISR, then add BREAK.
        parity_en = 1'b0;
        config_d1();
        $display("  [CLEAR] CONDITION 3: latch BREAK without clearing FRAME/PARITY");
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive    = 1'b0;
        #(13 * uart_bit_time());
        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        #(2 * uart_bit_time());

        // Now all three sticky conditions are observed together.
        error_read_flags("COMBINED: BEFORE CLEAR", isr);
        error_check(
            "multiple sticky errors remain set before clear",
            (isr[5] == 1'b1) &&
            (isr[4] == 1'b1) &&
            (isr[7] == 1'b1)
        );

        error_read_flags("COMBINED: AFTER ISR READ / CLEAR", isr);
        error_check("all sticky error flags clear together", isr[7:4] == 4'b0000);

        error_report_sr("COMBINED after clear");
        error_drain_pending_data("COMBINED received/stale RX data");
        error_recover_with_valid_frame("combined-error clear recovery", 9'h0CC);
    endtask

    protected task run_error_test();
        error_pass_count = 0;
        error_fail_count = 0;

        if (p_sequencer.scoreboard != null)
            p_sequencer.scoreboard.spec_rx_mode_active = 1'b1;

        $display("");
        $display("========================================");
        $display("       UART ERROR VERIFICATION");
        $display("========================================");
        $display(" Target DUT : d1");
        $display(" Injection  : direct TB waveform on rx_i");
        $display(" DUT format : 8 data bits");
        $display(" Flags      : BREAK=ISR[7] OVERRUN=ISR[6] FRAME=ISR[5] PARITY=ISR[4]");
        $display(" Clear      : ISR read");
        $display(" RTS/CTS    : bypassed for direct-RX injection");
        $display("========================================");

        case (error_case)
            ERROR_FRAME:
                run_error_frame_case();

            ERROR_START_GLITCH:
                run_error_start_glitch_case();

            ERROR_PARITY:
                run_error_parity_case();

            ERROR_OVERRUN:
                run_error_overrun_case();

            ERROR_BREAK:
                run_error_break_case();

            ERROR_CLEAR_RECOVERY:
                run_error_clear_recovery_case();

            default:
                `uvm_fatal(get_type_name(), "Unsupported UART error testcase")
        endcase

        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b0;

        if (p_sequencer.scoreboard != null)
            p_sequencer.scoreboard.spec_rx_mode_active = 1'b0;

        redirect_to_d1();

        $display("----------------------------------------");
        $display(" UART ERROR TEST SUMMARY");
        $display(" PASS : %0d", error_pass_count);
        $display(" FAIL : %0d", error_fail_count);
        $display("----------------------------------------");
    endtask

    // ------------------------------------------------------------
    // Interrupt generation verification
    // ------------------------------------------------------------
    protected task automatic irq_check(
        input string message,
        input bit    condition
    );
        if (condition) begin
            irq_pass_count++;
            $display("  [IRQ] PASS: %s", message);
        end
        else begin
            irq_fail_count++;
            `uvm_error("UART_IRQ", $sformatf("FAIL: %s", message))
        end
    endtask

    protected task automatic irq_skip(input string message);
        irq_skip_count++;
        $display("  [IRQ] SKIP: %s", message);
    endtask

    protected task automatic irq_wait_d1(
        input bit    expected,
        input string message
    );
        time t0;

        t0 = $time;
        forever begin
            if (p_sequencer.d1_vif.irq_o === expected) begin
                irq_check(message, 1'b1);
                return;
            end

            if (($time - t0) > poll_timeout) begin
                irq_check(message, 1'b0);
                return;
            end
            #200;
        end
    endtask

    protected task automatic irq_drain_all_rx_d1();
        uvm_reg_data_t sr;
        bit [8:0]      got;
        bit            timed_out;
        int unsigned   drain_count;

        drain_count = 0;
        forever begin
            read_sr_d1(sr);
            if (sr[2] === 1'b1)
                break;

            recv_byte_on_d1(got, timed_out);
            if (timed_out) begin
                `uvm_error("UART_IRQ",
                    "RX FIFO drain timed out while cleaning an IRQ scenario")
                break;
            end
            drain_count++;
        end

        $display("  [IRQ] RX cleanup drained %0d stored frame(s)", drain_count);
    endtask

    protected task automatic irq_read_isr_d1(output uvm_reg_data_t isr);
        uvm_status_e st;

        ral_lock.get(1);
        redirect_to_d1();
        p_sequencer.ral_model.ISR.read(st, isr, UVM_FRONTDOOR);
        ral_lock.put(1);
    endtask

    protected task automatic irq_config_d1(
        input bit rx_en,
        input bit tx_empty_en,
        input bit err_en,
        input bit rx_full_en = 1'b0
    );
        rx_irq_en        = rx_en;
        tx_empty_irq_en  = tx_empty_en;
        err_irq_en       = err_en;
        rx_full_irq_en   = rx_full_en;
        config_d1();
    endtask

    protected task automatic irq_config_d2_all_off();
        bit old_rx_en;
        bit old_tx_empty_en;
        bit old_err_en;
        bit old_rx_full_en;

        old_rx_en       = rx_irq_en;
        old_tx_empty_en = tx_empty_irq_en;
        old_err_en      = err_irq_en;
        old_rx_full_en  = rx_full_irq_en;

        rx_irq_en       = 1'b0;
        tx_empty_irq_en = 1'b0;
        err_irq_en      = 1'b0;
        rx_full_irq_en  = 1'b0;
        config_d2();

        rx_irq_en       = old_rx_en;
        tx_empty_irq_en = old_tx_empty_en;
        err_irq_en      = old_err_en;
        rx_full_irq_en  = old_rx_full_en;
    endtask

    protected task automatic irq_case_rx_nonempty();
        uvm_reg_data_t sr;
        bit [8:0]      got;
        bit            timed_out;

        do_reset();

        data_bits   = 4'd8;
        parity_en   = 1'b0;
        parity_mode = 2'b00;
        stop_2      = 1'b0;

        $display("");
        $display("========================================");
        $display(" IRQ CASE 1 : RX FIFO NON-EMPTY");
        $display("========================================");

        irq_config_d1(1'b1, 1'b0, 1'b0, 1'b0);
        irq_config_d2_all_off();

        irq_wait_d1(1'b0, "IRQ is low while RX FIFO is empty");

        $display("  [RX IRQ] SEND: d2 -> d1 DATA=0x055");
        send_byte_from_d2(9'h055);
        forever begin
        read_sr_d1(sr);
        if (sr[2] == 1'b0)
        break;
        #200;
        end

        //read_sr_d1(sr);
        irq_check("RX FIFO becomes non-empty", sr[2] == 1'b0);
        irq_wait_d1(1'b1, "RX FIFO non-empty asserts IRQ");

        recv_byte_on_d1(got, timed_out);
        irq_check("RX data is available to service the interrupt", !timed_out);
        irq_wait_d1(1'b0, "RX FIFO empty de-asserts IRQ after RHR read");

        $display("========================================");
    endtask

    protected task automatic irq_case_tx_empty();
        uvm_reg_data_t sr;
        bit [8:0] got;
        bit       timed_out;

        do_reset();

        data_bits   = 4'd8;
        parity_en   = 1'b0;
        parity_mode = 2'b00;
        stop_2      = 1'b0;

        $display("");
        $display("========================================");
        $display(" IRQ CASE 2 : TX FIFO EMPTY");
        $display("========================================");

        irq_config_d1(1'b0, 1'b1, 1'b0, 1'b0);
        irq_config_d2_all_off();

        // TX FIFO is empty immediately after reset, so the level IRQ
        // is expected to be asserted before any TX data is queued.
        irq_wait_d1(1'b1, "TX FIFO empty asserts IRQ when enabled");

        $display("  [TX IRQ] SEND: d1 THR=0x066");
        send_byte_from_d1(9'h066);

        read_sr_d1(sr);
        irq_check("TX FIFO becomes non-empty after THR write", sr[0] == 1'b0);
        irq_wait_d1(1'b0, "TX FIFO non-empty clears TX-empty IRQ");

        #(uart_frame_time() + uart_bit_time());
        read_sr_d1(sr);
        irq_check("TX FIFO becomes empty after transmission", sr[0] == 1'b1);
        irq_wait_d1(1'b1, "TX FIFO empty re-asserts IRQ after transmission");
        
        recv_byte_on_d2(got, timed_out);
        irq_check("Transmitted data is received at D2", !timed_out && (got === 9'h066));

        irq_config_d1(1'b0, 1'b0, 1'b0);
        irq_wait_d1(1'b0, "TX-empty IRQ clears when interrupt is disabled");

        $display("========================================");
    endtask

    protected task automatic irq_case_error_sources();
        uvm_reg_data_t isr;
        uvm_reg_data_t sr;
        bit [8:0]      got;
        bit            timed_out;

        do_reset();

        data_bits   = 4'd8;
        parity_en   = 1'b0;
        parity_mode = 2'b00;
        stop_2      = 1'b0;

        irq_config_d1(1'b0, 1'b0, 1'b1, 1'b0);
        irq_config_d2_all_off();

        p_sequencer.scoreboard.spec_rx_mode_active = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;

        // --------------------------------------------------------
        // 3A. FRAME ERROR
        // --------------------------------------------------------
        $display("");
        $display("----------------------------------------");
        $display(" IRQ CASE 3A : ERROR IRQ - FRAME");
        $display("----------------------------------------");
        error_drive_frame(9'h055, 1'b0, 1'b1, 1'b0);
        #(2 * uart_bit_time());

        irq_wait_d1(1'b1, "FRAME error asserts error IRQ");
        irq_read_isr_d1(isr);
        irq_check("FRAME error flag is set", isr[5] == 1'b1);
        irq_wait_d1(1'b0, "FRAME error IRQ clears after ISR read");
        irq_read_isr_d1(isr);
        irq_check("FRAME error remains cleared after ISR read", isr[5] == 1'b0);
        read_sr_d1(sr);
        irq_check("Frame-error frame is not placed into RX FIFO", sr[2] == 1'b1);

        // --------------------------------------------------------
        // 3B. PARITY ERROR
        // --------------------------------------------------------
        $display("");
        $display("----------------------------------------");
        $display(" IRQ CASE 3B : ERROR IRQ - PARITY");
        $display("----------------------------------------");

        parity_en   = 1'b1;
        parity_mode = 2'b00;
        config_d1();

        error_drive_frame(9'h055, 1'b1, 1'b0, 1'b0);
        #(2 * uart_bit_time());

        irq_wait_d1(1'b1, "PARITY error asserts error IRQ");
        irq_read_isr_d1(isr);
        irq_check("PARITY error flag is set", isr[4] == 1'b1);
        irq_wait_d1(1'b0, "PARITY error IRQ clears after ISR read");
        irq_read_isr_d1(isr);
        irq_check("PARITY error remains cleared after ISR read", isr[4] == 1'b0);
        read_sr_d1(sr);
        irq_check("Parity-error frame is not placed into RX FIFO", sr[2] == 1'b1);

        // --------------------------------------------------------
        // 3C. RX OVERRUN
        // --------------------------------------------------------
        $display("");
        $display("----------------------------------------");
        $display(" IRQ CASE 3C : ERROR IRQ - RX OVERRUN");
        $display("----------------------------------------");

        parity_en   = 1'b0;
        parity_mode = 2'b00;
        config_d1();

        // Error frames are not valid RX data. Verify the FIFO is empty
        // before starting the controlled 16-frame overrun setup.
        read_sr_d1(sr);
        irq_check("RX FIFO is empty before controlled overrun fill", sr[2] == 1'b1);
        if (sr[2] != 1'b1)
            irq_drain_all_rx_d1();

        $display("  [OVERRUN] SEND 16 valid frames to fill RX FIFO");
        for (int i = 0; i < 16; i++)
            error_drive_frame(9'h010 + i, 1'b0, 1'b0, 1'b0);

        read_sr_d1(sr);
        irq_check("RX FIFO is full before overrun frame", sr[3] == 1'b1);

        $display("  [OVERRUN] SEND 17th valid frame while RX FIFO is full");
        error_drive_frame(9'h077, 1'b0, 1'b0, 1'b0);
        #(2 * uart_bit_time());

        irq_wait_d1(1'b1, "OVERRUN error asserts error IRQ");
        irq_read_isr_d1(isr);
        irq_check("OVERRUN error flag is set", isr[6] == 1'b1);

        irq_wait_d1(check_rx_full_irq ? 1'b1 : 1'b0,
                    "After OVERRUN ISR clear, IRQ reflects only any remaining enabled source");
        irq_read_isr_d1(isr);
        irq_check("OVERRUN error remains cleared after ISR read", isr[6] == 1'b0);

        $display("  [OVERRUN] DRAIN 16 stored RX FIFO entries");
        for (int i = 0; i < 16; i++) begin
            recv_byte_on_d1(got, timed_out);
            irq_check($sformatf("RX FIFO entry %0d can be read after overrun", i),
                      !timed_out);
        end
        irq_wait_d1(1'b0, "Error IRQ is low after overrun is cleared and RX FIFO is empty");

        // --------------------------------------------------------
        // 3D. BREAK ERROR
        // --------------------------------------------------------
        $display("");
        $display("----------------------------------------");
        $display(" IRQ CASE 3D : ERROR IRQ - BREAK");
        $display("----------------------------------------");

        p_sequencer.d1_vif.spec_rx_drive = 1'b1;
        #(uart_bit_time());
        $display("  [BREAK] SEND: rx_i LOW for 13 UART bit times");
        p_sequencer.d1_vif.spec_rx_drive = 1'b0;
        #(13 * uart_bit_time());
        p_sequencer.d1_vif.spec_rx_drive = 1'b1;
        #(2 * uart_bit_time());

        irq_wait_d1(1'b1, "BREAK error asserts error IRQ");
        irq_read_isr_d1(isr);
        irq_check("BREAK error flag is set", isr[7] == 1'b1);
        irq_wait_d1(1'b0, "BREAK error IRQ clears after ISR read");
        irq_read_isr_d1(isr);
        irq_check("BREAK error remains cleared after ISR read", isr[7] == 1'b0);

        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b0;
        p_sequencer.scoreboard.spec_rx_mode_active = 1'b0;

        $display("========================================");
    endtask

    protected task automatic irq_case_rx_full();
        uvm_reg_data_t sr;

        do_reset();

        data_bits   = 4'd8;
        parity_en   = 1'b0;
        parity_mode = 2'b00;
        stop_2      = 1'b0;

        $display("");
        $display("========================================");
        $display(" IRQ CASE 4 : RX FIFO FULL");
        $display("========================================");
        $display("  [RX FULL] RX-full interrupt is enabled");

        irq_config_d1(1'b0, 1'b0, 1'b0, check_rx_full_irq);
        irq_config_d2_all_off();

        p_sequencer.scoreboard.spec_rx_mode_active = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;

        for (int i = 0; i < 16; i++)
            error_drive_frame(9'h020 + i, 1'b0, 1'b0, 1'b0);

        read_sr_d1(sr);
        irq_check("RX FIFO becomes full after 16 frames", sr[3] == 1'b1);

        if (check_rx_full_irq)
            irq_wait_d1(1'b1, "RX-full IRQ asserts when RX FIFO is full");
        else
            irq_skip("RX-full IRQ check disabled by the test configuration");

        // One pop clears the full condition and therefore this IRQ source.
        begin
            bit [8:0] got;
            bit       timed_out;
            recv_byte_on_d1(got, timed_out);
            irq_check("RX-full test first FIFO entry can be drained", !timed_out);
        end
        if (check_rx_full_irq)
            irq_wait_d1(1'b0, "RX-full IRQ clears after one RX FIFO pop");

        // Drain the remaining FIFO entries so the next IRQ scenario starts clean.
        for (int i = 1; i < 16; i++) begin
            bit [8:0] got;
            bit       timed_out;
            recv_byte_on_d1(got, timed_out);
            irq_check($sformatf("RX-full test FIFO entry %0d can be drained", i),
                      !timed_out);
        end

        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b0;
        p_sequencer.scoreboard.spec_rx_mode_active = 1'b0;

        $display("========================================");
    endtask

    protected task automatic irq_case_simultaneous();
        uvm_reg_data_t isr;
        uvm_reg_data_t sr;
        bit [8:0]      got;
        bit            timed_out;

        do_reset();

        data_bits   = 4'd8;
        parity_en   = 1'b0;
        parity_mode = 2'b00;
        stop_2      = 1'b0;

        $display("");
        $display("========================================");
        $display(" IRQ CASE 5 : SIMULTANEOUS INTERRUPTS");
        $display("========================================");
        $display("  Combination : RX FIFO NON-EMPTY + ERROR");

        irq_config_d1(1'b1, 1'b0, 1'b1, 1'b0);
        irq_config_d2_all_off();

        p_sequencer.scoreboard.spec_rx_mode_active = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;

        // First create the RX FIFO non-empty interrupt source.
        error_drive_frame(9'h066, 1'b0, 1'b0, 1'b0);
        #(2 * uart_bit_time());

        read_sr_d1(sr);
        irq_check("RX FIFO is non-empty before simultaneous error", sr[2] == 1'b0);
        irq_wait_d1(1'b1, "RX FIFO non-empty asserts IRQ");

        // Now create an error without removing the RX FIFO entry.
        parity_en   = 1'b1;
        parity_mode = 2'b00;
        config_d1();

        error_drive_frame(9'h055, 1'b1, 1'b0, 1'b0);
        #(2 * uart_bit_time());

        irq_read_isr_d1(isr);
        irq_check("PARITY error is active together with RX non-empty", 
                  isr[4] == 1'b1);
        irq_wait_d1(1'b1, "Simultaneous RX non-empty + ERROR keeps IRQ asserted");

        // Clear only the error source. RX FIFO source must keep IRQ high.
        irq_read_isr_d1(isr);
        irq_check("PARITY error clears after ISR read", isr[4] == 1'b0);
        read_sr_d1(sr);
        irq_check("Parity-error frame does not add a second RX FIFO entry", sr[2] == 1'b0);
        irq_wait_d1(1'b1, "IRQ remains asserted because RX FIFO is still non-empty");

        recv_byte_on_d1(got, timed_out);
        irq_check("Stored RX data can be serviced after simultaneous IRQ",
                  !timed_out && (got === 9'h066));
        read_sr_d1(sr);
        irq_check("RX FIFO is empty after servicing the valid entry", sr[2] == 1'b1);
        irq_wait_d1(1'b0, "IRQ clears after the RX FIFO is emptied");

        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b0;
        p_sequencer.scoreboard.spec_rx_mode_active = 1'b0;

        $display("========================================");
    endtask

    protected task automatic run_irq_test();
        irq_pass_count = 0;
        irq_fail_count = 0;
        irq_skip_count = 0;

        $display("");
        $display("========================================");
        $display("       UART IRQ GENERATION VERIFICATION");
        $display("========================================");
        $display("  1. RX FIFO Non-Empty Interrupt");
        $display("  2. TX FIFO Empty Interrupt");
        $display("  3. Error Interrupt: Frame/Parity/Overrun/Break");
        $display("  4. RX FIFO Full Interrupt");
        $display("  5. Simultaneous RX + Error Interrupts");
        $display("========================================");

        irq_case_rx_nonempty();
        irq_case_tx_empty();
        irq_case_error_sources();
        irq_case_rx_full();
        irq_case_simultaneous();

        p_sequencer.d1_vif.spec_rx_drive    = 1'b1;
        p_sequencer.d1_vif.spec_rx_drive_en = 1'b0;
        p_sequencer.scoreboard.spec_rx_mode_active = 1'b0;
        redirect_to_d1();

        $display("");
        $display("----------------------------------------");
        $display(" UART IRQ GENERATION SUMMARY");
        $display(" PASS : %0d", irq_pass_count);
        $display(" FAIL : %0d", irq_fail_count);
        $display(" SKIP : %0d", irq_skip_count);
        $display("----------------------------------------");
    endtask

    // ------------------------------------------------------------
    // TX FIFO handling
    // ------------------------------------------------------------
    protected task wait_tx_space_d1();
        uvm_reg_data_t s;
        time t0;
        t0 = $time;

        forever begin
            read_sr_d1(s);
            if (!s[1]) return; // TX_FULL == 0

            if (($time - t0) > poll_timeout) begin
                `uvm_error(get_type_name(),
                    "d1 TX FIFO remained full during continuous transmit")
                return;
            end
            #200;
        end
    endtask

    protected task wait_tx_space_d2();
        uvm_reg_data_t s;
        time t0;
        t0 = $time;

        forever begin
            read_sr_d2(s);
            if (!s[1]) return;

            if (($time - t0) > poll_timeout) begin
                `uvm_error(get_type_name(),
                    "d2 TX FIFO remained full during continuous transmit")
                return;
            end
            #200;
        end
    endtask

    // ------------------------------------------------------------
    // Byte-level TX
    // ------------------------------------------------------------
    protected task send_byte_from_d1(bit [8:0] data);
        uvm_status_e   status;
        uvm_reg_data_t cr_val;

        ral_lock.get(1);
        redirect_to_d1();

        p_sequencer.ral_model.THR.write(
            status, {23'h0, data}, UVM_FRONTDOOR);

        cr_val    = build_cr_config();
        cr_val[0] = 1'b1;
        p_sequencer.ral_model.CR.write(
            status, cr_val, UVM_FRONTDOOR);

        // Clear the one-cycle software strobe.
        p_sequencer.ral_model.CR.write(
            status, build_cr_config(), UVM_FRONTDOOR);

        ral_lock.put(1);

        $display("  [d1] WRITE THR <= 0x%03h", data);
    endtask

    protected task send_byte_from_d2(bit [8:0] data);
        uvm_status_e   status;
        uvm_reg_data_t cr_val;

        ral_lock.get(1);
        redirect_to_d2();

        p_sequencer.ral_model.THR.write(
            status, {23'h0, data}, UVM_FRONTDOOR);

        cr_val    = build_cr_config();
        cr_val[0] = 1'b1;
        p_sequencer.ral_model.CR.write(
            status, cr_val, UVM_FRONTDOOR);

        p_sequencer.ral_model.CR.write(
            status, build_cr_config(), UVM_FRONTDOOR);

        ral_lock.put(1);

        $display("  [d2] WRITE THR <= 0x%03h", data);
    endtask

    // ------------------------------------------------------------
    // Continuous TX bursts -- no RX operation is done here.
    // If the TX FIFO is temporarily full, wait for the serializer
    // to consume an entry instead of silently dropping a THR write.
    // ------------------------------------------------------------
    protected task send_burst_d1(input bit [8:0] payload[]);
        for (int i = 0; i < payload.size(); i++) begin
            wait_tx_space_d1();
            send_byte_from_d1(payload[i]);
        end
    endtask

    protected task send_burst_d2(input bit [8:0] payload[]);
        for (int i = 0; i < payload.size(); i++) begin
            wait_tx_space_d2();
            send_byte_from_d2(payload[i]);
        end
    endtask

    // ------------------------------------------------------------
    // Raw APB helpers for true D1/D2 parallel RHR servicing.
    // The shared RAL model cannot be used concurrently because its
    // default_map is redirected between D1 and D2. These helpers use
    // the two independent APB sequencers directly.
    // ------------------------------------------------------------
    localparam bit [31:0] APB_ADDR_RHR = 32'h0000_0004;
    localparam bit [31:0] APB_ADDR_SR  = 32'h0000_0008;
    localparam bit [31:0] APB_ADDR_CR  = 32'h0000_000C;

    protected task automatic raw_apb_read(
        input  bit          is_d1,
        input  bit [31:0]   addr,
        output bit [31:0]   data
    );
        uart_apb_read_sequence rd;

        rd = uart_apb_read_sequence::type_id::create(
            is_d1 ? "raw_rd_d1" : "raw_rd_d2"
        );
        rd.addr = addr;

        if (is_d1)
            rd.start(p_sequencer.d1_sequencer);
        else
            rd.start(p_sequencer.d2_sequencer);

        data = rd.read_data;
    endtask

    protected task automatic raw_apb_write(
        input bit          is_d1,
        input bit [31:0]   addr,
        input bit [31:0]   data
    );
        uart_apb_write_sequence wr;

        wr = uart_apb_write_sequence::type_id::create(
            is_d1 ? "raw_wr_d1" : "raw_wr_d2"
        );
        wr.addr = addr;
        wr.data = data;
        wr.strb = 4'hF;

        if (is_d1)
            wr.start(p_sequencer.d1_sequencer);
        else
            wr.start(p_sequencer.d2_sequencer);
    endtask

    protected task automatic recv_byte_parallel_d1(
        output bit [8:0] data,
        output bit       timed_out
    );
        bit [31:0] sr;
        bit [31:0] rhr;
        bit [31:0] cr_val;
        time       t0;

        data       = '0;
        timed_out  = 1'b0;
        t0         = $time;

        forever begin
            raw_apb_read(1'b1, APB_ADDR_SR, sr);
            if (sr[2] == 1'b0)
                break;

            if (($time - t0) > poll_timeout) begin
                timed_out = 1'b1;
                `uvm_error(get_type_name(),
                    "FULL_DUPLEX d2->d1 RX poll timeout")
                return;
            end
            #200;
        end

        raw_apb_read(1'b1, APB_ADDR_RHR, rhr);
        data = rhr[8:0];

        cr_val = build_cr_config();
        cr_val[1] = 1'b1;
        raw_apb_write(1'b1, APB_ADDR_CR, cr_val);
        raw_apb_write(1'b1, APB_ADDR_CR, build_cr_config());
    endtask

    protected task automatic recv_byte_parallel_d2(
        output bit [8:0] data,
        output bit       timed_out
    );
        bit [31:0] sr;
        bit [31:0] rhr;
        bit [31:0] cr_val;
        time       t0;

        data       = '0;
        timed_out  = 1'b0;
        t0         = $time;

        forever begin
            raw_apb_read(1'b0, APB_ADDR_SR, sr);
            if (sr[2] == 1'b0)
                break;

            if (($time - t0) > poll_timeout) begin
                timed_out = 1'b1;
                `uvm_error(get_type_name(),
                    "FULL_DUPLEX d1->d2 RX poll timeout")
                return;
            end
            #200;
        end

        raw_apb_read(1'b0, APB_ADDR_RHR, rhr);
        data = rhr[8:0];

        cr_val = build_cr_config();
        cr_val[1] = 1'b1;
        raw_apb_write(1'b0, APB_ADDR_CR, cr_val);
        raw_apb_write(1'b0, APB_ADDR_CR, build_cr_config());
    endtask

    // ------------------------------------------------------------
    // Byte-level RX
    // ------------------------------------------------------------
    protected task recv_byte_on_d2(
        output bit [8:0] data,
        output bit       timed_out
    );
        uvm_status_e   status;
        uvm_reg_data_t rdata;
        uvm_reg_data_t cr_val;
        time           t0;

        timed_out = 1'b0;
        t0 = $time;

        forever begin
            read_sr_d2(rdata);
            if (!rdata[2]) break; // RX_EMPTY == 0

            if (($time - t0) > poll_timeout) begin
                timed_out = 1'b1;
                `uvm_error(get_type_name(),
                    "d1->d2 RX poll timeout")
                return;
            end
            #200;
        end

        ral_lock.get(1);
        redirect_to_d2();

        p_sequencer.ral_model.RHR.read(
            status, rdata, UVM_FRONTDOOR);
        data = rdata[8:0];

        cr_val    = build_cr_config();
        cr_val[1] = 1'b1;
        p_sequencer.ral_model.CR.write(
            status, cr_val, UVM_FRONTDOOR);
        p_sequencer.ral_model.CR.write(
            status, build_cr_config(), UVM_FRONTDOOR);

        ral_lock.put(1);

        $display("  [d2] READ RHR => 0x%03h", data);
    endtask

    protected task recv_byte_on_d1(
        output bit [8:0] data,
        output bit       timed_out
    );
        uvm_status_e   status;
        uvm_reg_data_t rdata;
        uvm_reg_data_t cr_val;
        time           t0;

        timed_out = 1'b0;
        t0 = $time;

        forever begin
            read_sr_d1(rdata);
            if (!rdata[2]) break;

            if (($time - t0) > poll_timeout) begin
                timed_out = 1'b1;
                `uvm_error(get_type_name(),
                    "d2->d1 RX poll timeout")
                return;
            end
            #200;
        end

        ral_lock.get(1);
        redirect_to_d1();

        p_sequencer.ral_model.RHR.read(
            status, rdata, UVM_FRONTDOOR);
        data = rdata[8:0];

        cr_val    = build_cr_config();
        cr_val[1] = 1'b1;
        p_sequencer.ral_model.CR.write(
            status, cr_val, UVM_FRONTDOOR);
        p_sequencer.ral_model.CR.write(
            status, build_cr_config(), UVM_FRONTDOOR);

        ral_lock.put(1);

        $display("  [d1] READ RHR => 0x%03h", data);
    endtask

    protected task recv_burst_d2(input int unsigned count);
        bit [8:0] got;
        bit       timed_out;

        for (int i = 0; i < count; i++) begin
            recv_byte_on_d2(got, timed_out);
            if (timed_out) return;
        end
    endtask

    protected task recv_burst_d1(input int unsigned count);
        bit [8:0] got;
        bit       timed_out;

        for (int i = 0; i < count; i++) begin
            recv_byte_on_d1(got, timed_out);
            if (timed_out) return;
        end
    endtask

    // ------------------------------------------------------------
    // Flow-control configuration/protocol checks
    // ------------------------------------------------------------
    protected task automatic flow_check(
        input string message,
        input bit    condition
    );
        if (condition) begin
            flow_pass_count++;
            $display("  [FLOW] PASS: %s", message);
        end
        else begin
            flow_fail_count++;
            `uvm_error("UART_FLOW", $sformatf("FAIL: %s", message))
        end
    endtask

    // Flow-control selection used by the transaction testcase.  The values
    // are programmed through CR[8] and CR[13:9], then verified on the
    // RTS/CTS pins below.

    protected task automatic wait_for_rx_burst_arrival(input int unsigned count);
        if (count != 0)
            #((count + 1) * uart_frame_time());
    endtask

    protected task automatic check_tx_idle_d1(
        input time duration,
        output bit idle
    );
        time t0;

        idle = 1'b1;
        t0   = $time;
        while (($time - t0) < duration) begin
            if (p_sequencer.d1_vif.tx_o !== 1'b1)
                idle = 1'b0;
            #200;
        end
    endtask

    // ------------------------------------------------------------
    // RTS/CTS observation
    // Current DUT RTL:
    //     rts_n_o = (rx_lvl > rts_thresh_i)
    // Therefore RTS de-asserts at the first RX FIFO level above the programmed threshold.
    // The test observes the actual pin and the opposite CTS pin.
    // ------------------------------------------------------------
    protected task wait_rts_high_d1(output bit seen);
        time t0;

        seen = 1'b0;
        t0   = $time;
        forever begin
            if (p_sequencer.d1_vif.rts_n_o === 1'b1) begin
                seen = 1'b1;
                return;
            end
            if (($time - t0) > poll_timeout)
                return;
            #200;
        end
    endtask

    protected task wait_rts_high_d2(output bit seen);
        time t0;

        seen = 1'b0;
        t0   = $time;
        forever begin
            if (p_sequencer.d2_vif.rts_n_o === 1'b1) begin
                seen = 1'b1;
                return;
            end
            if (($time - t0) > poll_timeout)
                return;
            #200;
        end
    endtask

    protected task wait_rts_low_d1(output bit seen);
        time t0;

        seen = 1'b0;
        t0   = $time;
        forever begin
            if (p_sequencer.d1_vif.rts_n_o === 1'b0) begin
                seen = 1'b1;
                return;
            end
            if (($time - t0) > poll_timeout)
                return;
            #200;
        end
    endtask

    protected task wait_rts_low_d2(output bit seen);
        time t0;

        seen = 1'b0;
        t0   = $time;
        forever begin
            if (p_sequencer.d2_vif.rts_n_o === 1'b0) begin
                seen = 1'b1;
                return;
            end

            if (($time - t0) > poll_timeout) begin
                `uvm_error(get_type_name(),
                    "d2 RTS did not re-assert after RX FIFO service")
                return;
            end
            #200;
        end
    endtask

    // ------------------------------------------------------------
    // Flow-controlled long stream, D1 -> D2.
    //
    // Required threshold-cycle process:
    //   1. Fill RX FIFO to RTS threshold + 1.
    //   2. Observe RTS=1 / CTS=1.
    //   3. Read exactly ONE RHR entry -> RTS must become 0 / CTS=0.
    //   4. Push exactly ONE new TX entry.
    //   5. Wait until that entry reaches the remote RX FIFO -> RTS=1 / CTS=1.
    //   6. Repeat steps 3-5 for every remaining TX byte.
    //   7. Only after all new bytes are injected, drain the remaining RX FIFO.
    //
    // This keeps RX occupancy around the programmed threshold and makes
    // each RTS/CTS transition directly correlate with one RX read and one
    // new TX write, matching the intended waveform/debug process.
    // ------------------------------------------------------------
    protected task run_flow_d1_to_d2(input bit [8:0] payload[]);
        bit [8:0] got;
        bit       timed_out;
        int unsigned preload_count;
        int unsigned remaining_rx_count;

        if (!flow_en) begin
            flow_check("flow-control test requested with flow_en=0", 1'b0);
            return;
        end
        if (rts_thresh >= FIFO_DEPTH) begin
            flow_check(
                $sformatf("rts_thresh=%0d is below RX FIFO depth", rts_thresh),
                1'b0
            );
            return;
        end

        flow_check("D2 RTS is initially asserted (receiver ready)",
                   p_sequencer.d2_vif.rts_n_o === 1'b0);
        flow_check("D1 CTS is initially asserted",
                   p_sequencer.d1_vif.cts_n_i === 1'b0);

        preload_count = rts_thresh + 1;
        if (payload.size() <= preload_count) begin
            flow_check(
                $sformatf("flow-control stream has more than threshold+1 bytes (count=%0d threshold=%0d)",
                          payload.size(), rts_thresh),
                1'b0
            );
            return;
        end

        $display("  [FLOW] d1->d2 threshold=%0d: fill RX FIFO to level=%0d without RHR reads",
                 rts_thresh, preload_count);
        for (int i = 0; i < preload_count; i++) begin
            wait_tx_space_d1();
            send_byte_from_d1(payload[i]);
        end

        begin
            bit rts_seen;
            wait_rts_high_d2(rts_seen);
            flow_check("D2 RTS de-asserts after RX FIFO crosses threshold",
                       rts_seen && (p_sequencer.d2_vif.rts_n_o === 1'b1));
            flow_check("D1 CTS follows D2 RTS=1",
                       p_sequencer.d1_vif.cts_n_i === 1'b1);
        end
        $display("  [FLOW] D2 RTS=1 / D1 CTS=1 / RX FIFO level=%0d", preload_count);

        // Each remaining data item is handled by one complete RTS cycle.
        for (int i = preload_count; i < payload.size(); i++) begin

            // Step 1: pop exactly one RX FIFO entry.
            recv_byte_on_d2(got, timed_out);
            if (timed_out) begin
                `uvm_error(get_type_name(),
                    $sformatf("d1->d2 RTS cycle timed out while reading frame %0d", i));
                return;
            end

            flow_check(
                $sformatf("D2 RTS de-asserts back to 0 after exactly one RHR read before frame %0d",
                          i),
                !timed_out && (p_sequencer.d2_vif.rts_n_o === 1'b0)
            );
            flow_check(
                "D1 CTS follows D2 RTS=0",
                p_sequencer.d1_vif.cts_n_i === 1'b0
            );
            if (!timed_out)
                $display("  [FLOW] d2 RX <= 0x%03h | one RHR read -> d2 RTS=0 / d1 CTS=0",
                         got);

            // Step 2: push exactly one new TX entry.
            wait_tx_space_d1();
            send_byte_from_d1(payload[i]);
            $display("  [FLOW] d1 TX -> 0x%03h | one new byte queued after RTS release",
                     payload[i]);

            // Step 3: wait for that one byte to reach RX and reassert RTS.
            begin
                bit rts_seen;
                wait_rts_high_d2(rts_seen);
                flow_check(
                    $sformatf("D2 RTS reasserts for cycle frame %0d", i),
                    rts_seen && (p_sequencer.d2_vif.rts_n_o === 1'b1)
                );
                flow_check(
                    $sformatf("D1 CTS follows D2 RTS=1 for cycle frame %0d", i),
                    p_sequencer.d1_vif.cts_n_i === 1'b1
                );
                if (rts_seen)
                    $display("  [FLOW] one new byte reached d2 RX -> d2 RTS=1 / d1 CTS=1 (cycle frame %0d)",
                             i);
            end
        end

        // At this point exactly (threshold+1) entries remain in the RX FIFO.
        remaining_rx_count = preload_count;
        $display("  [FLOW] Threshold cycling complete; draining remaining RX FIFO entries=%0d",
                 remaining_rx_count);

        for (int i = 0; i < remaining_rx_count; i++) begin
            recv_byte_on_d2(got, timed_out);
            if (timed_out) begin
                `uvm_error(get_type_name(),
                    $sformatf("d1->d2 final RX drain timed out at entry %0d", i));
                return;
            end
        end
    endtask

    // ------------------------------------------------------------
    // Flow-controlled long stream, D2 -> D1.
    // Same one-read -> one-new-write -> RTS-reassert cycle as D1 -> D2.
    // ------------------------------------------------------------
    protected task run_flow_d2_to_d1(input bit [8:0] payload[]);
        bit [8:0] got;
        bit       timed_out;
        int unsigned preload_count;
        int unsigned remaining_rx_count;

        if (!flow_en) begin
            flow_check("flow-control test requested with flow_en=0", 1'b0);
            return;
        end
        if (rts_thresh >= FIFO_DEPTH) begin
            flow_check(
                $sformatf("rts_thresh=%0d is below RX FIFO depth", rts_thresh),
                1'b0
            );
            return;
        end

        flow_check("D1 RTS is initially asserted (receiver ready)",
                   p_sequencer.d1_vif.rts_n_o === 1'b0);
        flow_check("D2 CTS is initially asserted",
                   p_sequencer.d2_vif.cts_n_i === 1'b0);

        preload_count = rts_thresh + 1;
        if (payload.size() <= preload_count) begin
            flow_check(
                $sformatf("flow-control stream has more than threshold+1 bytes (count=%0d threshold=%0d)",
                          payload.size(), rts_thresh),
                1'b0
            );
            return;
        end

        $display("  [FLOW] d2->d1 threshold=%0d: fill RX FIFO to level=%0d without RHR reads",
                 rts_thresh, preload_count);
        for (int i = 0; i < preload_count; i++) begin
            wait_tx_space_d2();
            send_byte_from_d2(payload[i]);
        end

        begin
            bit rts_seen;
            wait_rts_high_d1(rts_seen);
            flow_check("D1 RTS de-asserts after RX FIFO crosses threshold",
                       rts_seen && (p_sequencer.d1_vif.rts_n_o === 1'b1));
            flow_check("D2 CTS follows D1 RTS=1",
                       p_sequencer.d2_vif.cts_n_i === 1'b1);
        end
        $display("  [FLOW] D1 RTS=1 / D2 CTS=1 / RX FIFO level=%0d", preload_count);

        for (int i = preload_count; i < payload.size(); i++) begin

            // Step 1: pop exactly one RX FIFO entry.
            recv_byte_on_d1(got, timed_out);
            if (timed_out) begin
                `uvm_error(get_type_name(),
                    $sformatf("d2->d1 RTS cycle timed out while reading frame %0d", i));
                return;
            end

            flow_check(
                $sformatf("D1 RTS de-asserts back to 0 after exactly one RHR read before frame %0d",
                          i),
                !timed_out && (p_sequencer.d1_vif.rts_n_o === 1'b0)
            );
            flow_check(
                "D2 CTS follows D1 RTS=0",
                p_sequencer.d2_vif.cts_n_i === 1'b0
            );
            if (!timed_out)
                $display("  [FLOW] d1 RX <= 0x%03h | one RHR read -> d1 RTS=0 / d2 CTS=0",
                         got);

            // Step 2: push exactly one new TX entry.
            wait_tx_space_d2();
            send_byte_from_d2(payload[i]);
            $display("  [FLOW] d2 TX -> 0x%03h | one new byte queued after RTS release",
                     payload[i]);

            // Step 3: wait for that one byte to reach RX and reassert RTS.
            begin
                bit rts_seen;
                wait_rts_high_d1(rts_seen);
                flow_check(
                    $sformatf("D1 RTS reasserts for cycle frame %0d", i),
                    rts_seen && (p_sequencer.d1_vif.rts_n_o === 1'b1)
                );
                flow_check(
                    $sformatf("D2 CTS follows D1 RTS=1 for cycle frame %0d", i),
                    p_sequencer.d2_vif.cts_n_i === 1'b1
                );
                if (rts_seen)
                    $display("  [FLOW] one new byte reached d1 RX -> d1 RTS=1 / d2 CTS=1 (cycle frame %0d)",
                             i);
            end
        end

        remaining_rx_count = preload_count;
        $display("  [FLOW] Threshold cycling complete; draining remaining RX FIFO entries=%0d",
                 remaining_rx_count);

        for (int i = 0; i < remaining_rx_count; i++) begin
            recv_byte_on_d1(got, timed_out);
            if (timed_out) begin
                `uvm_error(get_type_name(),
                    $sformatf("d2->d1 final RX drain timed out at entry %0d", i));
                return;
            end
        end
    endtask

    // ------------------------------------------------------------
    // Dedicated RTS hold / CTS-gating test, D1 -> D2.
    //
    // This is deliberately different from threshold cycling:
    //  * fill D2 RX FIFO until RTS de-asserts;
    //  * queue the remaining D1 TX data while CTS is HIGH;
    //  * do NOT read D2 RHR during the hold;
    //  * after the current in-flight frame is allowed to finish,
    //    verify TX remains idle-high while queued data is waiting;
    //  * then drain all D2 RX data and verify RTS/CTS release.
    // ------------------------------------------------------------
    protected task run_rts_hold_d1_to_d2(input bit [8:0] payload[]);
        int unsigned preload_count;
        bit [8:0] got;
        bit timed_out;
        bit tx_idle;

        if (!flow_en) begin
            flow_check("RTS-hold test requested with flow_en=0", 1'b0);
            return;
        end

        if (rts_thresh >= FIFO_DEPTH) begin
            flow_check(
                $sformatf("RTS-hold threshold %0d is below RX FIFO depth", rts_thresh),
                1'b0
            );
            return;
        end

        preload_count = rts_thresh + 1;
        if (payload.size() <= preload_count) begin
            flow_check(
                $sformatf("RTS-hold requires more than threshold+1 bytes (count=%0d threshold=%0d)",
                          payload.size(), rts_thresh),
                1'b0
            );
            return;
        end

        flow_check("D2 RTS is initially asserted before hold",
                   p_sequencer.d2_vif.rts_n_o === 1'b0);
        flow_check("D1 CTS is initially asserted before hold",
                   p_sequencer.d1_vif.cts_n_i === 1'b0);

        $display("  [FLOW-HOLD] Fill D2 RX FIFO to level=%0d without any RHR read",
                 preload_count);

        for (int i = 0; i < preload_count; i++) begin
            wait_tx_space_d1();
            send_byte_from_d1(payload[i]);
        end

        begin
            bit rts_seen;
            wait_rts_high_d2(rts_seen);
            flow_check("D2 RTS=1 at the start of the hold",
                       rts_seen && (p_sequencer.d2_vif.rts_n_o === 1'b1));
            flow_check("D1 CTS=1 while D2 requests the sender to stop",
                       p_sequencer.d1_vif.cts_n_i === 1'b1);
        end

        // Keep the randomized payload unchanged after RTS asserts.
        // The CTS=1 check does not depend on the payload value: while
        // CTS is high, tx_o must remain idle-high and no new frame may
        // start.
        for (int i = preload_count; i < payload.size(); i++) begin
            wait_tx_space_d1();
            send_byte_from_d1(payload[i]);
        end

        flow_check("D2 RTS remains high while no RHR reads occur",
                   p_sequencer.d2_vif.rts_n_o === 1'b1);
        flow_check("D1 CTS remains high while D2 RX FIFO is held full-side",
                   p_sequencer.d1_vif.cts_n_i === 1'b1);

        // Allow the frame already in flight when RTS asserted to finish.
        #(2 * uart_frame_time());

        // With queued all-one frames waiting and CTS still high, no
        // new TX start bit is legal. Any low pulse is therefore a
        // direct DUT flow-control violation.
        check_tx_idle_d1(uart_frame_time(), tx_idle);
        flow_check("CTS=1 prevents a new TX frame from starting (no new TX low pulse)", tx_idle);

        // Now release flow control by servicing the RX FIFO. The first
        // read must lower RTS/CTS; all remaining entries are then read
        // to completion so no expected data is left behind.
        for (int i = 0; i < payload.size(); i++) begin
            recv_byte_on_d2(got, timed_out);
            if (timed_out) begin
                flow_check(
                    $sformatf("RTS-hold final RX drain entry %0d is received", i),
                    1'b0
                );
                return;
            end
        end

        begin
            bit rts_seen;
            wait_rts_low_d2(rts_seen);
            flow_check("D2 RTS=0 after the held RX FIFO is fully drained",
                       rts_seen && (p_sequencer.d2_vif.rts_n_o === 1'b0));
            flow_check("D1 CTS=0 after D2 RX FIFO service",
                       p_sequencer.d1_vif.cts_n_i === 1'b0);
        end
    endtask

    // ------------------------------------------------------------
    // Basic continuous streams: all TX first, then all RX.
    // This is the requested replacement for the old round-based model.
    // ------------------------------------------------------------
    protected task run_d1_to_d2();
        bit [8:0] payload[];

        make_payload(num_bytes, 1'b1, payload);

        $display("  MODE: D1_TO_D2 continuous (%0d bytes)", num_bytes);
        send_burst_d1(payload);
        wait_for_rx_burst_arrival(num_bytes);
        recv_burst_d2(num_bytes);
    endtask

    protected task run_d2_to_d1();
        bit [8:0] payload[];

        make_payload(num_bytes, 1'b0, payload);

        $display("  MODE: D2_TO_D1 continuous (%0d bytes)", num_bytes);
        send_burst_d2(payload);
        wait_for_rx_burst_arrival(num_bytes);
        recv_burst_d1(num_bytes);
    endtask

    protected task run_half_duplex();
        bit [8:0] payload_d1_to_d2[];
        bit [8:0] payload_d2_to_d1[];

        make_payload(num_bytes, 1'b1, payload_d1_to_d2);
        make_payload(num_bytes, 1'b0, payload_d2_to_d1);

        $display("  MODE: HALF_DUPLEX continuous (%0d bytes/direction)", num_bytes);

        // Direction 1: complete TX burst, then complete RX burst.
        send_burst_d1(payload_d1_to_d2);
        wait_for_rx_burst_arrival(num_bytes);
        recv_burst_d2(num_bytes);

        // Direction 2: complete TX burst, then complete RX burst.
        send_burst_d2(payload_d2_to_d1);
        wait_for_rx_burst_arrival(num_bytes);
        recv_burst_d1(num_bytes);
    endtask

    protected task run_full_duplex();
        bit [8:0] payload_d1_to_d2[];
        bit [8:0] payload_d2_to_d1[];
        bit [8:0] got_d2;
        bit [8:0] got_d1;
        bit       timed_out_d2;
        bit       timed_out_d1;
        bit       pair_failed;

        make_payload(num_bytes, 1'b1, payload_d1_to_d2);
        make_payload(num_bytes, 1'b0, payload_d2_to_d1);

        $display("  MODE: FULL_DUPLEX continuous (%0d bytes/direction)", num_bytes);

        // The two UARTs transmit independently. The APB writes are
        // serialized only because the TX path still uses the shared RAL
        // model; once written, the two UART serializers run concurrently.
        fork
            send_burst_d1(payload_d1_to_d2);
            send_burst_d2(payload_d2_to_d1);
        join

        // Wait until the serial streams have had time to populate the RX
        // FIFOs. Do not start the RHR reads immediately after each frame;
        // the purpose of this phase is to exercise FIFO accumulation.
        wait_for_rx_burst_arrival(num_bytes);

        // Each iteration services both RX FIFOs in parallel. Raw APB access
        // is used here so D1 and D2 are genuinely independent; the shared
        // RAL default_map/ral_lock is deliberately not involved.
        pair_failed = 1'b0;
        if (p_sequencer.scoreboard != null)
            p_sequencer.scoreboard.full_duplex_pair_log = 1'b1;

        for (int i = 0; i < num_bytes; i++) begin
            fork
                recv_byte_parallel_d2(got_d2, timed_out_d2);
                recv_byte_parallel_d1(got_d1, timed_out_d1);
            join

            if (timed_out_d2 || timed_out_d1) begin
                pair_failed = 1'b1;
                `uvm_error(get_type_name(),
                    $sformatf("FULL_DUPLEX RX pair %0d timed out (d1->d2=%0b d2->d1=%0b)",
                              i, timed_out_d2, timed_out_d1))
                break;
            end

            // The actual APB reads occurred concurrently above. The log is
            // intentionally printed in a deterministic direction order:
            // D1->D2 first, then D2->D1.
            if (got_d2 === payload_d1_to_d2[i])
                $display("  [SB] PASS d1->d2  exp=0x%03h  act=0x%03h",
                         payload_d1_to_d2[i], got_d2);
            else
                $display("  [SB] FAIL d1->d2  exp=0x%03h  act=0x%03h",
                         payload_d1_to_d2[i], got_d2);
            $display("  [d2] READ RHR => 0x%03h", got_d2);

            if (got_d1 === payload_d2_to_d1[i])
                $display("  [SB] PASS d2->d1  exp=0x%03h  act=0x%03h",
                         payload_d2_to_d1[i], got_d1);
            else
                $display("  [SB] FAIL d2->d1  exp=0x%03h  act=0x%03h",
                         payload_d2_to_d1[i], got_d1);
            $display("  [d1] READ RHR => 0x%03h", got_d1);
        end

        if (p_sequencer.scoreboard != null)
            p_sequencer.scoreboard.full_duplex_pair_log = 1'b0;

        if (pair_failed)
            return;
    endtask

    localparam int unsigned FIFO_DEPTH = 16;

    int unsigned fifo_pass, fifo_fail;
    int unsigned fifo_scenario_num;

    task automatic fifo_read_sr(output uvm_reg_data_t s);
        uvm_status_e st;
        p_sequencer.ral_model.SR.read(st, s, UVM_FRONTDOOR);
    endtask

    task automatic fifo_read_isr(output uvm_reg_data_t s);
        uvm_status_e st;
        p_sequencer.ral_model.ISR.read(st, s, UVM_FRONTDOOR);
    endtask

    task automatic fifo_read_cr(output uvm_reg_data_t s);
        uvm_status_e st;
        p_sequencer.ral_model.CR.read(st, s, UVM_FRONTDOOR);
    endtask

    task automatic fifo_check(string what, bit cond);
        if (cond) begin
            fifo_pass++;
            $display("  [FIFO] PASS: %s", what);
        end else begin
            fifo_fail++;
            `uvm_error("UART_FIFO", $sformatf("FAIL: %s", what))
        end
    endtask

    task automatic fifo_scenario_reset();
        uvm_reg_data_t s;

        redirect_to_d1();
        fifo_read_sr(s);
        fifo_check("d1 TX_EMPTY after reset", s[0]);
        fifo_check("d1 RX_EMPTY after reset", s[2]);
        fifo_check("d1 TX_FULL clear after reset", !s[1]);
        fifo_check("d1 RX_FULL clear after reset", !s[3]);

        redirect_to_d2();
        fifo_read_sr(s);
        fifo_check("d2 TX_EMPTY after reset", s[0]);
        fifo_check("d2 RX_EMPTY after reset", s[2]);
        fifo_check("d2 TX_FULL clear after reset", !s[1]);
        fifo_check("d2 RX_FULL clear after reset", !s[3]);
    endtask

    // TX FIFO fill (checking only EMPTY-deasserts-on-first-push
    // and FULL-asserts-at-capacity, since no level field exists)
    // followed by a full drain whose content/order is checked by
    // the scoreboard.
    task automatic fifo_scenario_tx_fill_and_drain();
        uvm_reg_data_t s;
        bit [8:0]      data;
        bit [8:0]      got;
        bit            timed_out;

        for (int i = 0; i < FIFO_DEPTH; i++) begin
            data = rand_byte();
            send_byte_from_d1(data);
            fifo_read_sr(s);
            if (i == 0)
                fifo_check("TX_EMPTY clears after 1st push", !s[0]);
            if (i == FIFO_DEPTH - 1)
                fifo_check("TX_FULL asserted at capacity", s[1]);
            else
                fifo_check($sformatf("TX_FULL clear before capacity (push %0d)", i), !s[1]);
        end

        for (int i = 0; i < FIFO_DEPTH; i++) begin
            recv_byte_on_d2(got, timed_out);
            if (timed_out)
                `uvm_error("UART_FIFO", $sformatf("TX fill/drain: byte %0d timed out", i))
        end

        redirect_to_d1();
        fifo_read_sr(s);
        fifo_check("TX_EMPTY after full drain", s[0]);
        fifo_check("TX_FULL clear after full drain", !s[1]);
    endtask

    // Push while TX FIFO is full: must be silently dropped
    // (uart_tx_fifo.sv gates push on !full_o).
    task automatic fifo_scenario_tx_overflow();
        uvm_reg_data_t s;
        bit [8:0]      filler;
        bit [8:0]      overflow_byte;
        bit [8:0]      got;
        bit            timed_out;
        bit            full_before_overflow;
        int unsigned   accepted_count;

        for (int i = 0; i < FIFO_DEPTH; i++) begin
            filler = rand_byte();
            send_byte_from_d1(filler);
        end
        fifo_read_sr(s);
        full_before_overflow = (s[1] === 1'b1);
        fifo_check("TX_FULL asserted before overflow attempt", full_before_overflow);

        overflow_byte = rand_byte();
        send_byte_from_d1(overflow_byte);
        fifo_read_sr(s);
        if (full_before_overflow)
            fifo_check("TX_FULL still asserted after push-while-full", s[1]);

        accepted_count = full_before_overflow ? FIFO_DEPTH : (FIFO_DEPTH + 1);

        // Drain every APB write that the observed DUT state permits.
        // Only when TX_FULL was actually high before the extra write is
        // that extra expected entry an intentional FIFO overflow drop.
        for (int i = 0; i < accepted_count; i++) begin
            recv_byte_on_d2(got, timed_out);
            if (timed_out)
                `uvm_error("UART_FIFO", $sformatf("TX overflow drain: byte %0d timed out", i))
        end

        if (full_before_overflow) begin
            // The scoreboard sees the APB write but cannot know the DUT
            // refused it internally. Mark exactly that one drop as
            // intentional because TX_FULL was observed beforehand.
            p_sequencer.scoreboard.discard_d1_to_d2_pending(1'b1);
        end

        redirect_to_d1();
        fifo_read_sr(s);
        fifo_check("TX_EMPTY after overflow-scenario drain", s[0]);

        // A write issued while TX_FULL was already asserted must not
        // eventually create an extra serial frame. Allow any in-flight
        // activity to settle, then verify the destination RX FIFO is empty.
        if (full_before_overflow) begin
            #(2 * uart_frame_time());
            redirect_to_d2();
            fifo_read_sr(s);
            fifo_check("RX_EMPTY after TX overflow drain (no extra byte accepted)",
                       s[2]);
        end
    endtask

    // RX FIFO fill -> overrun.  D2 deliberately does not read while
    // the first 16 frames are arriving, so RX_FULL is reached.  The
    // 17th frame is then transmitted only after RX_FULL is observed,
    // ensuring it reaches the already-full RX FIFO and triggers the
    // DUT overrun condition.
    task automatic fifo_scenario_rx_overrun();
        uvm_reg_data_t s;
        uvm_reg_data_t isr;
        bit [8:0]      data;
        bit [8:0]      got;
        bit            timed_out;
        bit            level_timed_out;
        time           rx_wait_timeout;
        time           t0;

        data_bits       = 4'd8;
        parity_en       = 1'b0;
        parity_mode     = 2'b00;
        stop_2          = 1'b0;
        flow_en         = 1'b0;
        rts_thresh      = 5'd14;
        rx_irq_en       = 1'b0;
        tx_empty_irq_en = 1'b0;
        err_irq_en      = 1'b0;
        rx_full_irq_en  = 1'b0;
        config_d1();
        config_d2();
        p_sequencer.scoreboard.spec_rx_mode_active = 1'b0;

        // First make sure the 16 valid frames physically reach the
        // RX FIFO.  Only after RX_FULL is observed do we inject the
        // 17th frame, so the 17th TX FIFO write cannot be the item
        // that gets dropped before crossing the serial link.
        rx_wait_timeout = uart_frame_time() * (FIFO_DEPTH + 4);

        for (int i = 0; i < FIFO_DEPTH; i++) begin
            data = rand_byte();
            send_byte_from_d1(data);
        end

        redirect_to_d2();
        level_timed_out = 1'b0;
        t0 = $time;
        forever begin
            fifo_read_sr(s);
            if (s[3]) break;  // RX_FULL
            if (($time - t0) > rx_wait_timeout) begin
                level_timed_out = 1'b1;
                break;
            end
            #200;
        end

        if (level_timed_out)
            `uvm_error("UART_FIFO",
                "RX FIFO never reached full while filling for overrun test")

        fifo_read_sr(s);
        fifo_check("RX_FULL asserted before 17th frame", s[3]);

        // Now transmit one additional frame.  It has been accepted
        // by D1's TX FIFO because that FIFO has had time to drain
        // while the first 16 frames were travelling to D2.
        data = rand_byte();
        send_byte_from_d1(data);

        // Allow the complete 17th UART frame to reach D2 and be
        // rejected by its already-full RX FIFO before reading ISR.
        #(uart_frame_time() + (2 * uart_bit_time()));

        redirect_to_d2();
        fifo_read_sr(s);
        fifo_check("RX_FULL remains asserted after 17th frame", s[3]);

        fifo_read_isr(isr);
        fifo_check("ISR OVERRUN_ERR asserted after 17th frame", isr[6]);

        // The first 16 expected entries correspond to the 16 valid
        // frames in the RX FIFO and must be checked in order.  The
        // 17th entry is the intentionally overrun frame; it will
        // never be returned by RHR, so discard only that final entry
        // after the valid FIFO contents have been drained.
        for (int i = 0; i < FIFO_DEPTH; i++) begin
            recv_byte_on_d2(got, timed_out);
            if (timed_out)
                `uvm_error("UART_FIFO",
                    $sformatf("RX overrun drain: byte %0d timed out", i))
        end

        p_sequencer.scoreboard.discard_d1_to_d2_pending(1'b1);

        fifo_read_sr(s);
        fifo_check("RX_EMPTY after overrun-scenario drain", s[2]);
    endtask

    // This directed scenario programs RTS threshold 14. With
    // RX_FIFO_DEPTH=16 and rts_n_o = (rx_level > 14), occupancy 15
    // must de-assert RTS, while occupancy 14 must release it again.
    // This FIFO scenario checks the programmed CR flow-control fields.
    task automatic fifo_scenario_rts_threshold();
        localparam int unsigned RTS_THRESHOLD = 14;
        uvm_reg_data_t s;
        bit [8:0] got;
        bit timed_out;
        time t0;

        fifo_scenario_num++;
        $display("-- scenario %0d: fixed RTS threshold = %0d --",
                 fifo_scenario_num, RTS_THRESHOLD);

        do_reset();

        data_bits        = 4'd8;
        parity_en        = 1'b0;
        parity_mode      = 2'b00;
        stop_2           = 1'b0;
        flow_en          = 1'b0;
        rts_thresh       = RTS_THRESHOLD[4:0];
        rx_irq_en        = 1'b0;
        tx_empty_irq_en  = 1'b0;
        err_irq_en       = 1'b0;
        rx_full_irq_en   = 1'b0;
        config_d1();
        config_d2();

        fifo_check("D2 RTS asserted at empty RX FIFO",
                   p_sequencer.d2_vif.rts_n_o === 1'b0);
        fifo_check("D1 CTS follows D2 RTS while RX FIFO is empty",
                   p_sequencer.d1_vif.cts_n_i === 1'b0);

        // Occupancy 15 is the first level above threshold 14.
        for (int i = 0; i < RTS_THRESHOLD + 1; i++) begin
            wait_tx_space_d1();
            send_byte_from_d1(9'h080 + i);
        end

        t0 = $time;
        forever begin
            if (p_sequencer.d2_vif.rts_n_o === 1'b1)
                break;
            if (($time - t0) > poll_timeout) begin
                `uvm_error("UART_FIFO",
                    "D2 RTS did not de-assert after RX FIFO crossed threshold 14")
                break;
            end
            #200;
        end

        fifo_check("D2 RTS de-asserts at RX occupancy above threshold 14",
                   p_sequencer.d2_vif.rts_n_o === 1'b1);
        fifo_check("D1 CTS follows D2 RTS=1",
                   p_sequencer.d1_vif.cts_n_i === 1'b1);

        // Exactly one RHR service must reduce occupancy from 15 to 14 and
        // therefore release RTS/CTS again. No extra read is performed here.
        recv_byte_on_d2(got, timed_out);
        fifo_check("One RHR read succeeds while RTS is asserted", !timed_out);
        fifo_check("D2 RTS releases after exactly one RX FIFO pop",
                   !timed_out && (p_sequencer.d2_vif.rts_n_o === 1'b0));
        fifo_check("D1 CTS releases after one RX FIFO pop",
                   !timed_out && (p_sequencer.d1_vif.cts_n_i === 1'b0));

        // Verify the RX FIFO is still non-empty after the single pop; all
        // remaining entries must be drained explicitly by the test.
        redirect_to_d2();
        fifo_read_sr(s);
        fifo_check("RX FIFO remains non-empty after one RHR read", !s[2]);
        fifo_check("RX FIFO is not full after one RHR read", !s[3]);

        for (int i = 0; i < RTS_THRESHOLD; i++) begin
            recv_byte_on_d2(got, timed_out);
            if (timed_out) begin
                fifo_check($sformatf("Final RX drain entry %0d", i), 1'b0);
                break;
            end
        end

        redirect_to_d2();
        fifo_read_sr(s);
        fifo_check("RX FIFO empty after complete drain", s[2]);
        fifo_check("RX FIFO full clear after complete drain", !s[3]);
        fifo_check("D2 RTS asserted after complete drain",
                   p_sequencer.d2_vif.rts_n_o === 1'b0);
        fifo_check("D1 CTS asserted after complete drain",
                   p_sequencer.d1_vif.cts_n_i === 1'b0);
    endtask

    // ISR read is the clear mechanism now (no separate CLEAR
    // register).  The previous scenario performs one ISR read to
    // detect the overrun; this second read verifies that the sticky
    // error was cleared by that CPU read.
    task automatic fifo_scenario_isr_clears_overrun();
        uvm_reg_data_t isr;

        redirect_to_d2();
        fifo_read_isr(isr);
        fifo_check("ISR OVERRUN_ERR cleared by the read in the previous scenario",
                   !isr[6]);
    endtask

    // Reading RHR while RX_EMPTY is a safe no-op (no underflow).
    task automatic fifo_scenario_rx_empty_read_safe();
        uvm_status_e   st;
        uvm_reg_data_t s;
        uvm_reg_data_t junk;

        redirect_to_d2();
        fifo_read_sr(s);
        fifo_check("RX_EMPTY true before empty-read probe", s[2]);

        p_sequencer.scoreboard.allow_empty_d1_to_d2_read = 1'b1;
        for (int i = 0; i < 3; i++)
            p_sequencer.ral_model.RHR.read(st, junk, UVM_FRONTDOOR);
        p_sequencer.scoreboard.allow_empty_d1_to_d2_read = 1'b0;

        fifo_read_sr(s);
        fifo_check("RX_EMPTY still true after reading an empty FIFO", s[2]);
    endtask

    // RHR is a view of the RX FIFO head; a read alone must not advance
    // the pointer.  This catches the old/stale-RHR symptom directly:
    // first push stays visible until CR.RX_RD_EN performs the first pop.
    task automatic fifo_scenario_rhr_head_order();
        uvm_status_e   st;
        uvm_reg_data_t first_read;
        uvm_reg_data_t second_read;
        bit [8:0]      got;
        bit            timed_out;

        do_reset();
        data_bits        = 4'd9;
        parity_en        = 1'b0;
        parity_mode      = 2'b00;
        stop_2           = 1'b0;
        flow_en          = 1'b0;
        rts_thresh       = 5'd14;
        rx_irq_en        = 1'b0;
        tx_empty_irq_en  = 1'b0;
        err_irq_en       = 1'b0;
        rx_full_irq_en   = 1'b0;
        config_d1();
        config_d2();

        send_byte_from_d1(9'h055);
        send_byte_from_d1(9'h1A6);
        #(3 * uart_frame_time());

        // These observations intentionally do not consume scoreboard
        // expectations; they are non-destructive observations of one head.
        p_sequencer.scoreboard.spec_rx_mode_active = 1'b1;
        ral_lock.get(1);
        redirect_to_d2();
        p_sequencer.ral_model.RHR.read(st, first_read, UVM_FRONTDOOR);
        p_sequencer.ral_model.RHR.read(st, second_read, UVM_FRONTDOOR);
        ral_lock.put(1);
        p_sequencer.scoreboard.spec_rx_mode_active = 1'b0;

        fifo_check("RHR exposes the first pushed RX byte before pop",
                   first_read[8:0] == 9'h055);
        fifo_check("RHR remains on the first RX byte until pop",
                   second_read[8:0] == 9'h055);

        recv_byte_on_d2(got, timed_out);
        fifo_check("First CR.RX_RD_EN pop returns first pushed byte",
                   !timed_out && (got == 9'h055));
        recv_byte_on_d2(got, timed_out);
        fifo_check("Second CR.RX_RD_EN pop advances to second pushed byte",
                   !timed_out && (got == 9'h1A6));
    endtask

    protected task automatic fifo_scoreboard_scenario_check(string scenario_name);
        if (p_sequencer.scoreboard != null)
            p_sequencer.scoreboard.end_scenario_check(scenario_name);
    endtask

    protected task run_fifo_test();
        int unsigned sb_pass_before;
        int unsigned sb_fail_before;
        int unsigned sb_pass_delta;
        int unsigned sb_fail_delta;

        fifo_pass = 0;
        fifo_fail = 0;
        fifo_scenario_num = 0;

        sb_pass_before = 0;
        sb_fail_before = 0;
        if (p_sequencer.scoreboard != null) begin
            sb_pass_before = p_sequencer.scoreboard.pass_count;
            sb_fail_before = p_sequencer.scoreboard.error_count;
        end

        $display("");
        $display("========================================");
        $display("   UART FIFO TEST");
        $display("========================================");

        $display("-- scenario 1: reset clears both FIFOs --");
        fifo_scenario_num = 1;
        fifo_scenario_reset();
        fifo_scoreboard_scenario_check("FIFO scenario 1");

        fifo_scenario_num++;
        $display("-- scenario %0d: TX FIFO fill / drain --", fifo_scenario_num);
        fifo_scenario_tx_fill_and_drain();
        fifo_scoreboard_scenario_check("FIFO scenario 2");

        fifo_scenario_num++;
        $display("-- scenario %0d: TX FIFO overflow (push while full is dropped) --", fifo_scenario_num);
        fifo_scenario_tx_overflow();
        fifo_scoreboard_scenario_check("FIFO scenario 3");

        fifo_scenario_num++;
        $display("-- scenario %0d: RX FIFO fill / overrun / drain --", fifo_scenario_num);
        fifo_scenario_rx_overrun();
        fifo_scoreboard_scenario_check("FIFO scenario 4");

        fifo_scenario_num++;
        $display("-- scenario %0d: ISR read clears OVERRUN_ERR --", fifo_scenario_num);
        fifo_scenario_isr_clears_overrun();
        fifo_scoreboard_scenario_check("FIFO scenario 5");

        fifo_scenario_num++;
        $display("-- scenario %0d: reading RHR while empty is safe --", fifo_scenario_num);
        fifo_scenario_rx_empty_read_safe();
        fifo_scoreboard_scenario_check("FIFO scenario 6");

        fifo_scenario_num++;
        $display("-- scenario %0d: RHR head is stable until RX pop --", fifo_scenario_num);
        fifo_scenario_rhr_head_order();
        fifo_scoreboard_scenario_check("FIFO scenario 7");

        fifo_scenario_rts_threshold();
        fifo_scoreboard_scenario_check("FIFO scenario 8");

        if (p_sequencer.scoreboard != null) begin
            sb_pass_delta = p_sequencer.scoreboard.pass_count - sb_pass_before;
            sb_fail_delta = p_sequencer.scoreboard.error_count - sb_fail_before;
        end else begin
            sb_pass_delta = 0;
            sb_fail_delta = 0;
        end

        fifo_pass += sb_pass_delta;
        fifo_fail += sb_fail_delta;

        $display("");
        $display("========================================");
        $display("   UART FIFO TEST -- SUMMARY");
        $display("========================================");
        $display("  CHECK PASS : %0d", fifo_pass - sb_pass_delta);
        $display("  CHECK FAIL : %0d", fifo_fail - sb_fail_delta);
        $display("  DATA PASS  : %0d", sb_pass_delta);
        $display("  DATA FAIL  : %0d", sb_fail_delta);
        $display("  PASS       : %0d", fifo_pass);
        $display("  FAIL       : %0d", fifo_fail);
        $display("========================================");
        $display("");
    endtask

    // ------------------------------------------------------------
    // Top level
    // ------------------------------------------------------------
    virtual task body();

        bit [8:0] payload[];
        bit [8:0] payload_d1_to_d2[];
        bit [8:0] payload_d2_to_d1[];

        flow_pass_count = 0;
        flow_fail_count = 0;

        do_reset();

        if (run_reg_tests)
            run_reg_access_tests();

        if (mode == SPEC_RX) begin
            run_spec_rx();
        end
        else if (mode == ERROR_TEST) begin
            run_error_test();
        end
        else if (mode == IRQ_TEST) begin
            run_irq_test();
        end
        else begin
            if ((data_bits < 4'd7) || (data_bits > 4'd9)) begin
                `uvm_error("UART_CFG",
                    $sformatf("Normal UART mode requested unsupported data width %0d. Use SPEC_RX for 5/6-bit specification-level stimulus.",
                              data_bits))
                return;
            end

            config_d1();
            config_d2();

            case (mode)
            D1_TO_D2: begin
                make_payload(num_bytes, 1'b1, payload);
                if (flow_control_test && rts_hold_test)
                    run_rts_hold_d1_to_d2(payload);
                else if (flow_control_test)
                    run_flow_d1_to_d2(payload);
                else
                    run_d1_to_d2();
            end

            D2_TO_D1: begin
                make_payload(num_bytes, 1'b0, payload);
                if (flow_control_test)
                    run_flow_d2_to_d1(payload);
                else
                    run_d2_to_d1();
            end

            HALF_DUPLEX: begin
                run_half_duplex();
            end

            FULL_DUPLEX: begin
                if (flow_control_test) begin
                    make_payload(num_bytes, 1'b1, payload_d1_to_d2);
                    make_payload(num_bytes, 1'b0, payload_d2_to_d1);

                    fork
                        run_flow_d1_to_d2(payload_d1_to_d2);
                        run_flow_d2_to_d1(payload_d2_to_d1);
                    join
                end
                else begin
                    run_full_duplex();
                end
            end

            FIFO_TEST:
                run_fifo_test();

                default:
                    `uvm_fatal(get_type_name(), "Unsupported UART virtual-sequence mode")
            endcase
        end

        ral_lock.get(1);
        redirect_to_d1();
        ral_lock.put(1);

    endtask

endclass

