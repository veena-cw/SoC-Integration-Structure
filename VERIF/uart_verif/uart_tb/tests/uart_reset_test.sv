`timescale 1ns/1ps
`include "uvm_macros.svh"
import uvm_pkg::*;

// Initial register checks, six reset interruptions, and recovery after each reset.
class uart_reset_test extends uart_base_test;
    `uvm_component_utils(uart_reset_test)

    localparam int unsigned DEFAULT_DIVISOR = 53;
    localparam bit [31:0] ADDR_THR  = 32'h00;
    localparam bit [31:0] ADDR_RHR  = 32'h04;
    localparam bit [31:0] ADDR_SR   = 32'h08;
    localparam bit [31:0] ADDR_CR   = 32'h0C;
    localparam bit [31:0] ADDR_BRDR = 32'h10;
    localparam bit [31:0] ADDR_IER  = 32'h14;
    localparam bit [31:0] ADDR_ISR  = 32'h18;

    int unsigned cfg_divisor = DEFAULT_DIVISOR;
    int unsigned pass_count, fail_count;
    int unsigned case_pass, case_fail;
    bit [31:0] cr_config = 32'h1C40; // 8N1, flow off, RTS threshold 14
    virtual uart_if d1, d2;
    virtual reset_if rst_if;

    function new(string name = "uart_reset_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // is_d1 = 1 selects D1; is_d1 = 0 selects D2.
    task apb_write(bit is_d1, bit [31:0] addr, bit [31:0] data);
        uart_apb_write_sequence wr;
        wr = uart_apb_write_sequence::type_id::create("wr");
        wr.addr = addr;
        wr.data = data;
        wr.strb = 4'hF;
        if (is_d1)
            wr.start(env.virt_seqr.d1_sequencer);
        else
            wr.start(env.virt_seqr.d2_sequencer);
    endtask

    task apb_read(bit is_d1, bit [31:0] addr, output bit [31:0] data);
        uart_apb_read_sequence rd;
        rd = uart_apb_read_sequence::type_id::create("rd");
        rd.addr = addr;
        if (is_d1)
            rd.start(env.virt_seqr.d1_sequencer);
        else
            rd.start(env.virt_seqr.d2_sequencer);
        data = rd.read_data;
    endtask

    function void check_value(string name, logic [63:0] actual,
                              logic [63:0] expected);
        if (actual === expected)
            pass_count++;
        else begin
            fail_count++;
            `uvm_error(get_type_name(),
                $sformatf("%s: expected=0x%0h actual=0x%0h", name, expected, actual))
        end
    endfunction

    function time bit_time();
        return (cfg_divisor + 1) * 160ns; // 16 clocks per bit, 10 ns PCLK
    endfunction

    task configure_both();
        for (int side = 0; side < 2; side++) begin
            apb_write(side, ADDR_BRDR, cfg_divisor);
            apb_write(side, ADDR_CR, cr_config);
            apb_write(side, ADDR_IER, 0);
        end
    endtask

    task send_byte(bit is_d1, bit [8:0] data);
        bit [31:0] sr;
        time start_time;
        start_time = $time;
        forever begin
            apb_read(is_d1, ADDR_SR, sr);
            if (!sr[1]) break;
            if ($time - start_time > 24 * bit_time())
                `uvm_fatal(get_type_name(), "TX FIFO space timeout")
            #(bit_time() / 16);
        end
        apb_write(is_d1, ADDR_THR, data);
        apb_write(is_d1, ADDR_CR, cr_config | 32'h1);
        apb_write(is_d1, ADDR_CR, cr_config);
    endtask

    task receive_byte(bit is_d1, bit [8:0] expected);
        bit [31:0] sr, data;
        time start_time;
        start_time = $time;
        forever begin
            apb_read(is_d1, ADDR_SR, sr);
            if (!sr[2]) break;
            if ($time - start_time > 24 * bit_time())
                `uvm_fatal(get_type_name(), "RX data timeout")
            #(bit_time() / 16);
        end
        apb_read(is_d1, ADDR_RHR, data);
        check_value(is_d1 ? "D1 RX data" : "D2 RX data", data, expected);
        apb_write(is_d1, ADDR_CR, cr_config | 32'h2);
        apb_write(is_d1, ADDR_CR, cr_config);
    endtask

    // Read all seven addresses on both DUTs. An ISR read clears errors,
    // so observe ISR directly before reset and read it over APB afterwards.
    // RHR reads here inspect the FIFO head; they must not consume SB entries.
    task read_all_registers(string label, bit after_reset = 0);
        bit [31:0] data, expected;
        bit saved_mode;
        saved_mode = env.scoreboard.spec_rx_mode_active;
        env.scoreboard.spec_rx_mode_active = 1;
        $display("\n[RESET] %s", label);
        for (int side = 1; side >= 0; side--) begin
            for (int addr = 0; addr <= 24; addr += 4) begin
                if (addr == ADDR_ISR && !after_reset) begin
                    if (side) data = $root.tb_top.u_dut_d1.isr_reg;
                    else      data = $root.tb_top.u_dut_d2.isr_reg;
                end
                else apb_read(side, addr, data);
                $display("  D%0d addr=0x%02h data=0x%08h", side ? 1 : 2, addr, data);
                if (after_reset) begin
                    // Live empty flags become 1 after reset is released.
                    expected = (addr == ADDR_SR || addr == ADDR_ISR) ? 5 : 0;
                    check_value($sformatf("D%0d register 0x%02h", side ? 1 : 2, addr),
                                data, expected);
                end
            end
        end
        env.scoreboard.spec_rx_mode_active = saved_mode;
    endtask

    // Check storage while reset is LOW. The internal synchronous blocks
    // need clock edges; this task is called after three falling edges.
    task check_reset_state();
        check_value("reset asserted", rst_if.rst_n, 0);

        // D1: APB register storage and write/read strobes.
        check_value("D1 THR storage", $root.tb_top.u_dut_d1.thr_reg, 0);
        check_value("D1 RHR storage", $root.tb_top.u_dut_d1.rhr_reg, 0);
        check_value("D1 SR storage", $root.tb_top.u_dut_d1.sr_reg, 0);
        check_value("D1 CR storage", $root.tb_top.u_dut_d1.cr_reg, 0);
        check_value("D1 BRDR storage", $root.tb_top.u_dut_d1.brdr_reg, 0);
        check_value("D1 IER storage", $root.tb_top.u_dut_d1.ier_reg, 0);
        check_value("D1 ISR storage", $root.tb_top.u_dut_d1.isr_reg, 0);
        check_value("D1 register valid bits",
            {$root.tb_top.u_dut_d1.thr_reg_vld,
             $root.tb_top.u_dut_d1.rhr_reg_vld,
             $root.tb_top.u_dut_d1.sr_reg_vld,
             $root.tb_top.u_dut_d1.cr_reg_vld,
             $root.tb_top.u_dut_d1.brdr_reg_vld,
             $root.tb_top.u_dut_d1.ier_reg_vld,
             $root.tb_top.u_dut_d1.isr_reg_vld,
             $root.tb_top.u_dut_d1.cr0_q,
             $root.tb_top.u_dut_d1.cr1_q}, 0);
        check_value("D1 baud counters and divisor",
            {$root.tb_top.u_dut_d1.u_uart_top.u_baud.cnt_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_baud.div_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_baud.x16_cnt_q}, 0);
        check_value("D1 FIFO pointers and levels",
            {$root.tb_top.u_dut_d1.u_uart_top.u_txf.wr_ptr_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_txf.rd_ptr_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_txf.lvl_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rxf.wr_ptr_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rxf.rd_ptr_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rxf.lvl_q}, 0);
        check_value("D1 sticky errors",
            {$root.tb_top.u_dut_d1.u_uart_top.frame_err_q,
             $root.tb_top.u_dut_d1.u_uart_top.parity_err_q,
             $root.tb_top.u_dut_d1.u_uart_top.overrun_q,
             $root.tb_top.u_dut_d1.u_uart_top.break_q}, 0);
        check_value("D1 TX state and data",
            {$root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_tx.bit_idx_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_tx.shift_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_tx.parity_en_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_tx.parity_mode_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_tx.stop_2_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_tx.parity_bit_q}, 0);
        check_value("D1 RX state and data",
            {$root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.sample_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.bit_idx_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.data_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.parity_en_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.parity_mode_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.stop_2_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.votes0_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.votes1_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.parity_bit_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.break_cnt_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.break_armed_q}, 0);
        check_value("D1 RX pulses",
            {$root.tb_top.u_dut_d1.u_uart_top.u_rx.data_valid_pulse_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.frame_err_pulse_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.parity_err_pulse_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.break_pulse_q}, 0);
        check_value("D1 RX synchronizer",
            {$root.tb_top.u_dut_d1.u_uart_top.u_rx.rx_sync0_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.rx_sync1_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.rx_sync_q}, 3'b111);
        check_value("D1 TX/RX data width",
            {$root.tb_top.u_dut_d1.u_uart_top.u_tx.data_bits_q,
             $root.tb_top.u_dut_d1.u_uart_top.u_rx.data_bits_q}, 8'h88);
        for (int i = 0; i < 16; i++) begin
            check_value($sformatf("D1 TX FIFO[%0d]", i),
                        $root.tb_top.u_dut_d1.u_uart_top.u_txf.mem_q[i], 0);
            check_value($sformatf("D1 RX FIFO[%0d]", i),
                        $root.tb_top.u_dut_d1.u_uart_top.u_rxf.mem_q[i], 0);
        end
        // cnt_q == div_q == 0 makes x16 HIGH during reset in this RTL.
        check_value("D1 reset ticks",
                    {$root.tb_top.u_dut_d1.u_uart_top.tick_x16,
                      $root.tb_top.u_dut_d1.u_uart_top.tick_x1}, 2'b10);
        check_value("D1 FIFO empty/full",
                    {$root.tb_top.u_dut_d1.tx_empty_o, $root.tb_top.u_dut_d1.rx_empty_o,
                      $root.tb_top.u_dut_d1.tx_full_o, $root.tb_top.u_dut_d1.rx_full_o}, 4'b1100);
        check_value("D1 TX/RTS/IRQ", {d1.tx_o, d1.rts_n_o, d1.irq_o}, 3'b100);

        // D2: APB register storage and write/read strobes.
        check_value("D2 THR storage", $root.tb_top.u_dut_d2.thr_reg, 0);
        check_value("D2 RHR storage", $root.tb_top.u_dut_d2.rhr_reg, 0);
        check_value("D2 SR storage", $root.tb_top.u_dut_d2.sr_reg, 0);
        check_value("D2 CR storage", $root.tb_top.u_dut_d2.cr_reg, 0);
        check_value("D2 BRDR storage", $root.tb_top.u_dut_d2.brdr_reg, 0);
        check_value("D2 IER storage", $root.tb_top.u_dut_d2.ier_reg, 0);
        check_value("D2 ISR storage", $root.tb_top.u_dut_d2.isr_reg, 0);
        check_value("D2 register valid bits",
            {$root.tb_top.u_dut_d2.thr_reg_vld,
             $root.tb_top.u_dut_d2.rhr_reg_vld,
             $root.tb_top.u_dut_d2.sr_reg_vld,
             $root.tb_top.u_dut_d2.cr_reg_vld,
             $root.tb_top.u_dut_d2.brdr_reg_vld,
             $root.tb_top.u_dut_d2.ier_reg_vld,
             $root.tb_top.u_dut_d2.isr_reg_vld,
             $root.tb_top.u_dut_d2.cr0_q,
             $root.tb_top.u_dut_d2.cr1_q}, 0);
        check_value("D2 baud counters and divisor",
            {$root.tb_top.u_dut_d2.u_uart_top.u_baud.cnt_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_baud.div_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_baud.x16_cnt_q}, 0);
        check_value("D2 FIFO pointers and levels",
            {$root.tb_top.u_dut_d2.u_uart_top.u_txf.wr_ptr_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_txf.rd_ptr_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_txf.lvl_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rxf.wr_ptr_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rxf.rd_ptr_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rxf.lvl_q}, 0);
        check_value("D2 sticky errors",
            {$root.tb_top.u_dut_d2.u_uart_top.frame_err_q,
             $root.tb_top.u_dut_d2.u_uart_top.parity_err_q,
             $root.tb_top.u_dut_d2.u_uart_top.overrun_q,
             $root.tb_top.u_dut_d2.u_uart_top.break_q}, 0);
        check_value("D2 TX state and data",
            {$root.tb_top.u_dut_d2.u_uart_top.u_tx.state_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_tx.bit_idx_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_tx.shift_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_tx.parity_en_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_tx.parity_mode_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_tx.stop_2_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_tx.parity_bit_q}, 0);
        check_value("D2 RX state and data",
            {$root.tb_top.u_dut_d2.u_uart_top.u_rx.state_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.sample_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.bit_idx_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.data_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.parity_en_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.parity_mode_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.stop_2_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.votes0_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.votes1_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.parity_bit_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.break_cnt_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.break_armed_q}, 0);
        check_value("D2 RX pulses",
            {$root.tb_top.u_dut_d2.u_uart_top.u_rx.data_valid_pulse_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.frame_err_pulse_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.parity_err_pulse_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.break_pulse_q}, 0);
        check_value("D2 RX synchronizer",
            {$root.tb_top.u_dut_d2.u_uart_top.u_rx.rx_sync0_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.rx_sync1_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.rx_sync_q}, 3'b111);
        check_value("D2 TX/RX data width",
            {$root.tb_top.u_dut_d2.u_uart_top.u_tx.data_bits_q,
             $root.tb_top.u_dut_d2.u_uart_top.u_rx.data_bits_q}, 8'h88);
        for (int i = 0; i < 16; i++) begin
            check_value($sformatf("D2 TX FIFO[%0d]", i),
                        $root.tb_top.u_dut_d2.u_uart_top.u_txf.mem_q[i], 0);
            check_value($sformatf("D2 RX FIFO[%0d]", i),
                        $root.tb_top.u_dut_d2.u_uart_top.u_rxf.mem_q[i], 0);
        end
        // cnt_q == div_q == 0 makes x16 HIGH during reset in this RTL.
        check_value("D2 reset ticks",
                    {$root.tb_top.u_dut_d2.u_uart_top.tick_x16,
                      $root.tb_top.u_dut_d2.u_uart_top.tick_x1}, 2'b10);
        check_value("D2 FIFO empty/full",
                    {$root.tb_top.u_dut_d2.tx_empty_o, $root.tb_top.u_dut_d2.rx_empty_o,
                      $root.tb_top.u_dut_d2.tx_full_o, $root.tb_top.u_dut_d2.rx_full_o}, 4'b1100);
        check_value("D2 TX/RTS/IRQ", {d2.tx_o, d2.rts_n_o, d2.irq_o}, 3'b100);
    endtask

    task apply_reset();
        reset_sequence rst;
        rst = reset_sequence::type_id::create("rst");
        rst.delay = 0;
        rst.pulse_width = 100ns;
        @(negedge d1.pclk);
        #2ns;
        fork
            rst.start(env.virt_seqr.reset_seqr);
            begin
                wait (rst_if.rst_n === 1'b0);
                d1.spec_rx_drive = 1;
                d2.spec_rx_drive = 1;
                d1.spec_rx_drive_en = 0;
                d2.spec_rx_drive_en = 0;
                repeat (3) @(negedge d1.pclk);
                check_reset_state();
                // The existing scoreboard has no reset input. Only discard
                // frames cancelled by this deliberately asserted reset.
                $display("  Reset cancels pending frames: D1->D2=%0d D2->D1=%0d",
                         env.scoreboard.d1_to_d2_expected.size(),
                         env.scoreboard.d2_to_d1_expected.size());
                env.scoreboard.d1_to_d2_expected.delete();
                env.scoreboard.d2_to_d1_expected.delete();
            end
        join
        env.ral_model.reset();
        repeat (4) @(negedge d1.pclk);
        read_all_registers("AFTER RESET", 1);
    endtask

    // No second reset here: program the DUTs and exchange new data.
    task check_recovery();
        bit [31:0] data;
        cr_config = 32'h1C40;
        configure_both();
        for (int i = 0; i < 8; i++) begin
            send_byte(1, 9'h081 + i);
            send_byte(0, 9'h051 + i);
        end
        for (int i = 0; i < 8; i++) begin
            receive_byte(0, 9'h081 + i);
            receive_byte(1, 9'h051 + i);
        end
        #(12 * bit_time());
        for (int side = 0; side < 2; side++) begin
            apb_read(side, ADDR_SR, data);
            check_value("recovery FIFOs empty, no errors", data, 5);
            apb_read(side, ADDR_ISR, data);
            check_value("recovery error flags clear", data, 5);
        end
        check_value("D1 TX idle", $root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q, 0);
        check_value("D2 TX idle", $root.tb_top.u_dut_d2.u_uart_top.u_tx.state_q, 0);
        env.scoreboard.end_scenario_check("reset recovery");
    endtask

    // Wait for DATA state on the real serial link before interrupting it.
    task wait_active_transfer(bit from_d1, bit both_directions = 0);
        bit d1_active, d2_active;
        time start_time;
        start_time = $time;
        do begin
            @(negedge d1.pclk);
            d1_active = ($root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q == 2 &&
                         $root.tb_top.u_dut_d2.u_uart_top.u_rx.state_q == 2);
            d2_active = ($root.tb_top.u_dut_d2.u_uart_top.u_tx.state_q == 2 &&
                         $root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q == 2);
            if (both_directions ? (d1_active && d2_active) :
                                  (from_d1 ? d1_active : d2_active)) return;
        end while ($time - start_time < 240 * bit_time());
        `uvm_fatal("UART_RESET", "TX/RX did not enter DATA state")
    endtask

    task wait_rx_full();
        time start_time;
        start_time = $time;
        while ($root.tb_top.u_dut_d2.rx_full_o !== 1'b1) begin
            @(negedge d1.pclk);
            if ($time - start_time > 240 * bit_time())
                `uvm_fatal("UART_RESET", "D2 RX FIFO did not become full")
        end
    endtask

    // Same RX-pin stimulus as uart_error_test: 0x55 with bad stop/parity.
    task send_bad_frame(bit parity_enable, bit bad_stop);
        bit [7:0] data;
        data = 8'h55;
        cr_config = parity_enable ? 32'h1C44 : 32'h1C40;
        apb_write(1, ADDR_CR, cr_config);
        d1.spec_rx_drive_en = 1;
        d1.spec_rx_drive = 1;
        #(2 * bit_time());
        d1.spec_rx_drive = 0;
        #(bit_time());
        for (int b = 0; b < 8; b++) begin
            d1.spec_rx_drive = data[b];
            #(bit_time());
        end
        if (parity_enable) begin
            d1.spec_rx_drive = ~(^data);
            #(bit_time());
        end
        d1.spec_rx_drive = !bad_stop;
        #(bit_time());
        d1.spec_rx_drive = 1;
        #(3 * bit_time());
    endtask

    task run_reset_case(int case_num, string case_name);
        uvm_report_server server;
        int errors_before;
        time start_time;
        server = uvm_report_server::get_server();
        errors_before = server.get_severity_count(UVM_ERROR);
        $display("\n========================================");
        $display("RESET CASE %0d: %s", case_num, case_name);
        $display("========================================");
        cr_config = 32'h1C40;
        configure_both();
        apb_write(1, ADDR_IER, 15);
        apb_write(0, ADDR_IER, 15);

        case (case_num)
            1: begin // uart_smoke_test: D1 -> D2
                for (int i = 0; i < 8; i++) send_byte(1, 9'h031 + i);
                wait_active_transfer(1);
            end
            2: begin // uart_apb_transaction_test: full duplex
                for (int i = 0; i < 8; i++) begin
                    send_byte(1, 9'h091 + i);
                    send_byte(0, 9'h061 + i);
                end
                wait_active_transfer(1, 1);
            end
            3: begin // uart_fifo_test: full RX, overrun, and active TX
                for (int i = 0; i < 16; i++) send_byte(1, 9'h021 + i);
                wait_rx_full();
                send_byte(1, 9'h0E1);
                #(12 * bit_time());
                check_value("overrun before reset", $root.tb_top.u_dut_d2.overrun_o, 1);
                for (int i = 0; i < 8; i++) send_byte(1, 9'h0B1 + i);
                wait_active_transfer(1);
            end
            4: begin // uart_error_test: sticky errors and an active RX
                send_bad_frame(0, 1);
                send_bad_frame(1, 0);
                cr_config = 32'h1C40;
                apb_write(1, ADDR_CR, cr_config);
                d1.spec_rx_drive = 0;
                #(13 * bit_time());
                d1.spec_rx_drive = 1;
                #(3 * bit_time());
                check_value("frame error before reset", $root.tb_top.u_dut_d1.frame_err_o, 1);
                check_value("parity error before reset", $root.tb_top.u_dut_d1.parity_err_o, 1);
                check_value("break before reset", $root.tb_top.u_dut_d1.break_o, 1);
                d1.spec_rx_drive = 0;
                #(2 * bit_time());
                check_value("RX active before reset", $root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q, 2);
            end
            5: begin // uart_irq_gen_test: unread RX data and next frame
                apb_write(1, ADDR_IER, 2);
                for (int i = 0; i < 8; i++) send_byte(0, 9'h041 + i);
                start_time = $time;
                while (d1.irq_o !== 1'b1) begin
                    @(negedge d1.pclk);
                    if ($time - start_time > 24 * bit_time())
                        `uvm_fatal("UART_RESET", "RX interrupt did not assert")
                end
                wait_active_transfer(0);
                check_value("RX interrupt before reset", d1.irq_o, 1);
            end
            6: begin // transaction/stress: RTS/CTS stall and reverse TX
                cr_config = 32'h0540; // 8N1, flow on, threshold 2
                configure_both();
                for (int i = 0; i < 8; i++) send_byte(1, 9'h071 + i);
                start_time = $time;
                while (d2.rts_n_o !== 1'b1) begin
                    @(negedge d1.pclk);
                    if ($time - start_time > 100 * bit_time())
                        `uvm_fatal("UART_RESET", "RTS did not stop the sender")
                end
                #(24 * bit_time());
                check_value("D1 CTS stalled", d1.cts_n_i, 1);
                check_value("D1 TX still queued", $root.tb_top.u_dut_d1.tx_empty_o, 0);
                check_value("D1 TX idle while stalled", $root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q, 0);
                for (int i = 0; i < 8; i++) send_byte(0, 9'h0A1 + i);
                wait_active_transfer(0);
            end
            default: `uvm_fatal("UART_RESET", "Unknown reset case")
        endcase

        read_all_registers("BEFORE RESET");
        apply_reset();
        check_recovery();
        if (server.get_severity_count(UVM_ERROR) == errors_before) begin
            case_pass++;
            $display("RESET CASE %0d PASS", case_num);
        end
        else begin
            case_fail++;
            $display("RESET CASE %0d FAIL", case_num);
        end
    endtask

    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        d1 = env.d1_agent.vif;
        d2 = env.d2_agent.vif;
        rst_if = env.reset_agent_inst.rst_vif;

        // reset_if starts LOW, so release startup reset before APB reads.
        apply_reset();
        read_all_registers("INITIAL REGISTER VALUES", 1);
        configure_both();
        apb_write(1, ADDR_IER, 15);
        apb_write(0, ADDR_IER, 15);
        send_byte(1, 9'h0A5);
        send_byte(0, 9'h05A);
        #(24 * bit_time());
        read_all_registers("PROGRAMMED STATE BEFORE RESET");
        apply_reset();
        check_recovery();

        run_reset_case(1, "Smoke: reset during D1 TX / D2 RX");
        run_reset_case(2, "Transaction: reset during full duplex");
        run_reset_case(3, "FIFO: reset with full RX and overrun");
        run_reset_case(4, "Error: reset sticky errors during RX");
        run_reset_case(5, "IRQ: reset RX interrupt during next frame");
        run_reset_case(6, "Flow: reset stalled TX and active reverse transfer");

        $display("\nRESET CASES: PASS=%0d FAIL=%0d", case_pass, case_fail);
        $display("RESET CHECKS: PASS=%0d FAIL=%0d", pass_count, fail_count);
        phase.drop_objection(this);
    endtask
endclass

