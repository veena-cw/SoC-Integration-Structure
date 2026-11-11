
`timescale 1ns/1ps
`include "uvm_macros.svh"
import uvm_pkg::*;

// STOP-duration experiment on DUT1 of the original two-DUT testbench.
// DUT2 is present but does not generate any serial traffic in this test.
// The DUT1 serial RX input is driven through the existing spec_rx override.
class uart_stop_duration_test extends uart_base_test;
    `uvm_component_utils(uart_stop_duration_test)

    localparam time BIT_TIME  = 800ns;  // BRDR=4, PCLK=10ns: (4+1)*16*10ns
    localparam time HALF_BIT  = 400ns;

    localparam bit [31:0] ADDR_RHR  = 32'h04;
    localparam bit [31:0] ADDR_SR   = 32'h08;
    localparam bit [31:0] ADDR_CR   = 32'h0C;
    localparam bit [31:0] ADDR_BRDR = 32'h10;
    localparam bit [31:0] ADDR_ISR  = 32'h18;

    int unsigned pass_count = 0;
    int unsigned fail_count = 0;

    function new(string name = "uart_stop_duration_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void check_result(string description, bit condition);
        if (condition) begin
            pass_count++;
            $display("[STOP_TEST][PASS] %s", description);
        end
        else begin
            fail_count++;
            $display("[STOP_TEST][FAIL] %s", description);
            `uvm_error("STOP_TEST", description)
        end
    endfunction

    // Reset both DUTs with the reset agent already in the original env.
    task automatic reset_dut();
        reset_sequence rst;
        rst = reset_sequence::type_id::create("stop_rst");
        rst.delay       = 0;
        rst.pulse_width = 100ns;
        rst.start(env.virt_seqr.reset_seqr);
    endtask

    // Raw APB accesses on DUT1 only. DUT2 is not used.
    task automatic apb_write(bit [31:0] address, bit [31:0] value);
        uart_apb_write_sequence wr;
        wr = uart_apb_write_sequence::type_id::create("stop_wr");
        wr.addr = address;
        wr.data = value;
        wr.strb = 4'hF;
        wr.start(env.virt_seqr.d1_sequencer);
    endtask

    task automatic apb_read(bit [31:0] address,
                            output bit [31:0] value);
        uart_apb_read_sequence rd;
        rd = uart_apb_read_sequence::type_id::create("stop_rd");
        rd.addr = address;
        rd.start(env.virt_seqr.d1_sequencer);
        value = rd.read_data;
    endtask

    // Inject one 7-bit UART frame directly into DUT1 RX.
    // stop_halfbits: 2 = 1 STOP, 3 = 1.5 STOP, 4 = 2 STOP.
    // The STOP portion is HIGH; the next START can follow immediately.
    task automatic send_frame(bit [6:0] payload,
                              int unsigned stop_halfbits);
        env.virt_seqr.d1_vif.spec_rx_drive = 1'b0; // START
        #(BIT_TIME);

        for (int i = 0; i < 7; i++) begin
            env.virt_seqr.d1_vif.spec_rx_drive = payload[i];
            #(BIT_TIME);
        end

        env.virt_seqr.d1_vif.spec_rx_drive = 1'b1; // STOP HIGH
        #(HALF_BIT * stop_halfbits);
    endtask

    // Test a pair of frames. The second START follows the specified
    // first STOP duration plus any additional HIGH idle interval.
    task automatic run_case(string case_name,
                            bit dut_two_stops,
                            int unsigned first_stop_halfbits,
                            int unsigned extra_idle_halfbits,
                            bit expect_both_frames);
        bit [31:0] cr_value, cr_read, sr, isr, rhr;
        bit [8:0] received[$];
        bit framing_error;
        time first_start, second_start;
        time actual_interval, expected_interval;

        $display("\n====================================================");
        $display(" STOP TEST: %s", case_name);
        $display(" DUT config = %0d STOP bits", dut_two_stops ? 2 : 1);
        $display(" First frame STOP HIGH = %0d half-bits", first_stop_halfbits);
        $display(" Extra idle HIGH = %0d half-bits", extra_idle_halfbits);
        $display("====================================================");

        // Ensure an idle RX line throughout reset and setup.
        env.virt_seqr.d1_vif.spec_rx_drive = 1'b1;
        env.virt_seqr.d1_vif.spec_rx_drive_en = 1'b1;
        reset_dut();
        repeat (5) @(posedge env.virt_seqr.d1_vif.pclk);

        // DUT1 supports 7 data bits, no parity, 1 or 2 STOP bits.
        cr_value = dut_two_stops ? 32'h20 : 32'h00;
        apb_write(ADDR_CR, cr_value);
        apb_write(ADDR_BRDR, 32'd4);
        repeat (16) @(posedge env.virt_seqr.d1_vif.pclk);

        apb_read(ADDR_CR, cr_read);
        check_result("DUT1 STOP configuration readback",
                     cr_read[5] == dut_two_stops);
        check_result("DUT1 configured for 7 data bits, no parity",
                     cr_read[7:6] == 2'b00 && cr_read[2] == 1'b0);

        // Create the first frame, then an optional HIGH idle interval,
        // then the second frame. No idle is inserted by send_frame().
        #(2 * BIT_TIME);
        first_start = $time;
        send_frame(7'h55, first_stop_halfbits);

        #(HALF_BIT * extra_idle_halfbits);
        second_start = $time;
        send_frame(7'h33, dut_two_stops ? 4 : 2);

        env.virt_seqr.d1_vif.spec_rx_drive = 1'b1;
        #(5 * BIT_TIME); // Finish RX processing before reading registers.

        actual_interval = second_start - first_start;
        expected_interval = (8 * BIT_TIME) +
                            (HALF_BIT *
                             (first_stop_halfbits + extra_idle_halfbits));
        $display("[STOP_TEST][TIMING] START-to-START actual=%0t expected=%0t",
                 actual_interval, expected_interval);
        check_result("Generated START-to-START timing",
                     actual_interval == expected_interval);

        // SR[5] is the UART core's latched framing-error status.
        // Read ISR before consuming RX data: ISR reads clear errors.
        apb_read(ADDR_SR, sr);
        framing_error = sr[5];
        apb_read(ADDR_ISR, isr);
        $display("[STOP_TEST][STATUS] SR=0x%08h ISR=0x%08h FRAME_ERR=%0b",
                 sr, isr, framing_error);

        // Read up to two entries from DUT1's actual RX FIFO.
        // The UART VIP has no role in this DUT-only experiment.
        for (int i = 0; i < 2; i++) begin
            apb_read(ADDR_SR, sr);
            if (sr[2])
                break; // RX empty

            apb_read(ADDR_RHR, rhr);
            received.push_back(rhr[8:0]);
            $display("[STOP_TEST][DUT1 RX] word[%0d]=0x%03h",
                     i, rhr[8:0]);

            // Pulse CR[1] to pop exactly one DUT1 RX FIFO entry.
            apb_write(ADDR_CR, cr_value | 32'h2);
            apb_write(ADDR_CR, cr_value);
            repeat (4) @(posedge env.virt_seqr.d1_vif.pclk);
        end

        $display("[STOP_TEST][RESULT] words=%0d frame_err=%0b",
                 received.size(), framing_error);

        if (expect_both_frames) begin
            check_result("Both valid frames received", received.size() == 2);
            if (received.size() == 2) begin
                check_result("First payload = 0x55", received[0] == 9'h055);
                check_result("Second payload = 0x33", received[1] == 9'h033);
            end
            check_result("No framing error for valid timing", !framing_error);
        end
        else begin
            // Negative tests observe actual DUT behavior. A receiver
            // may lose the next START without asserting FRAME_ERR.
            $display("[STOP_TEST][NEGATIVE OBSERVE] Early next START");
            $display("[STOP_TEST][NEGATIVE OBSERVE] No fixed DUT error assumed");
        end

        env.virt_seqr.d1_vif.spec_rx_drive = 1'b1;
        env.virt_seqr.d1_vif.spec_rx_drive_en = 1'b0;
    endtask

    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this);

        // Direct injection is not a DUT2 -> DUT1 UART transaction.
        // Disable the normal cross-DUT payload comparison for RHR reads.
        env.scoreboard.spec_rx_mode_active = 1'b1;

        // Change or add scenarios here:
        // run_case(name, DUT_2_STOP, first_stop_halfbits,
        //          extra_idle_halfbits, expect_both_frames)
        run_case("01: 7N1, one STOP, next START",         0, 2, 0, 1);
        run_case("02: 7N2, two STOP, next START",         1, 4, 0, 1);
        run_case("03: 7N2, one STOP + one IDLE HIGH",     1, 2, 2, 1);
        run_case("04: 7N2, one STOP, early next START",   1, 2, 0, 0);
        run_case("05: 7N2, 1.5 STOP, early next START",   1, 3, 0, 0);

        // Case 03 already tests one STOP + one idle bit followed by START.
        // Adding a sixth identical case is unnecessary.

        env.scoreboard.spec_rx_mode_active = 1'b0;
        $display("\n====================================================");
        $display(" STOP-DURATION SUMMARY: PASS=%0d FAIL=%0d",
                 pass_count, fail_count);
        $display("====================================================");
        if (fail_count != 0)
            `uvm_error("STOP_TEST", "STOP-duration verification failed")

        phase.drop_objection(this);
    endtask
endclass

