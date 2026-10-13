`timescale 1ns/1ps
`include "uvm_macros.svh"
import uvm_pkg::*;

// Change DEFAULT_DIVISOR once; all eight cases use it.
class uart_baud_gen_test extends uart_base_test;
    `uvm_component_utils(uart_baud_gen_test)

    // 100 MHz: baud = 100_000_000 / (16 * (divisor + 1)).
    // Baud:     9600  19200  38400  57600  115200  230400  460800  921600
    // Divisor:   650    325    162    108      53      26      13       6
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

    function new(string name = "uart_baud_gen_test", uvm_component parent = null);
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

    task reset_and_configure();
        reset_sequence rst;
        env.scoreboard.end_scenario_check("before baud case reset");
        rst = reset_sequence::type_id::create("rst");
        rst.delay = 0;
        rst.pulse_width = 100ns;
        @(negedge d1.pclk);
        #2ns;
        rst.start(env.virt_seqr.reset_seqr);
        env.ral_model.reset();
        configure_both();
    endtask

    // Fixed-length measurement: missing ticks cannot hang or pass silently.
    task check_baud_ticks(bit is_d1, int unsigned divisor_value);
        bit [31:0] data;
        logic tick16, tick1, previous16, previous1;
        int count16, count1;
        time last16, last1;
        apb_write(is_d1, ADDR_BRDR, divisor_value);
        apb_read(is_d1, ADDR_BRDR, data);
        check_value("BRDR readback", data, divisor_value);
        repeat (4) @(negedge d1.pclk);
        if (is_d1)
            check_value("D1 divisor loaded", $root.tb_top.u_dut_d1.u_uart_top.u_baud.div_q, divisor_value);
        else
            check_value("D2 divisor loaded", $root.tb_top.u_dut_d2.u_uart_top.u_baud.div_q, divisor_value);

        count16 = 0;
        count1 = 0;
        previous16 = 0;
        previous1 = 0;
        repeat (64 * (divisor_value + 1)) begin
            @(negedge d1.pclk);
            if (is_d1) begin
                tick16 = $root.tb_top.u_dut_d1.u_uart_top.tick_x16;
                tick1 = $root.tb_top.u_dut_d1.u_uart_top.tick_x1;
            end
            else begin
                tick16 = $root.tb_top.u_dut_d2.u_uart_top.tick_x16;
                tick1 = $root.tb_top.u_dut_d2.u_uart_top.tick_x1;
            end
            if (tick16 === 1'b1) begin
                check_value("x16 pulse is one clock", previous16, 0);
                if (count16 > 0)
                    check_value("x16 period", $time - last16, (divisor_value + 1) * 10ns);
                last16 = $time;
                count16++;
            end
            if (tick1 === 1'b1) begin
                check_value("x1 pulse is one clock", previous1, 0);
                check_value("x1 coincides with x16", tick16, 1);
                if (count1 > 0)
                    check_value("x1 period", $time - last1, (divisor_value + 1) * 160ns);
                last1 = $time;
                count1++;
            end
            previous16 = tick16;
            previous1 = tick1;
        end
        check_value("x16 tick count", count16, 64);
        check_value("x1 tick count", count1, 4);
        $display("  D%0d divisor=%0d: x16 ticks=%0d x1 ticks=%0d",
                 is_d1 ? 1 : 2, divisor_value, count16, count1);
    endtask

    task wait_tx_level(bit is_d1, bit level, output time edge_time);
        time start_time;
        start_time = $time;
        do begin
            @(negedge d1.pclk);
            if ((is_d1 ? d1.tx_o : d2.tx_o) === level) begin
                edge_time = $time;
                return;
            end
        end while ($time - start_time < 3 * bit_time());
        `uvm_fatal("UART_BAUD", "Expected serial edge did not arrive")
    endtask

    // 0x55 gives an edge at every data-bit boundary.
    task check_serial_timing(bit is_d1);
        time start_edge, last_edge, current_edge;
        wait_tx_level(is_d1, 0, start_edge);
        wait_tx_level(is_d1, 1, last_edge);
        // Current RTL drives START one PCLK after accepting a frame.
        check_value("start bit width (current RTL)", last_edge - start_edge, bit_time() - 10ns);
        for (int b = 1; b < 8; b++) begin
            wait_tx_level(is_d1, (b % 2 == 0), current_edge);
            check_value("serial data bit width", current_edge - last_edge, bit_time());
            last_edge = current_edge;
        end
        wait_tx_level(is_d1, 1, current_edge); // data7=0 -> stop=1
        check_value("last data bit width", current_edge - last_edge, bit_time());
        #(bit_time() / 2);
        check_value("stop bit high", is_d1 ? d1.tx_o : d2.tx_o, 1);
    endtask

    task timing_transfer(bit is_d1);
        fork
            check_serial_timing(is_d1);
            send_byte(is_d1, 9'h055);
        join
        receive_byte(!is_d1, 9'h055);
        #(3 * bit_time());
        env.scoreboard.end_scenario_check("baud timing transfer");
    endtask

    task run_baud_case(int case_num, string case_name);
        uart_virtual_sequence vseq;
        uvm_report_server server;
        int errors_before;
        int alternate_divisor;
        bit case_done;
        server = uvm_report_server::get_server();
        errors_before = server.get_severity_count(UVM_ERROR);
        $display("\n========================================");
        $display("BAUD CASE %0d: %s", case_num, case_name);
        $display("Divisor=%0d actual baud=%0.3f", cfg_divisor,
                 100000000.0 / (16.0 * (cfg_divisor + 1)));
        $display("========================================");

        reset_and_configure();
        check_baud_ticks(1, cfg_divisor);
        check_baud_ticks(0, cfg_divisor);
        timing_transfer(1);
        timing_transfer(0);

        vseq = uart_virtual_sequence::type_id::create("vseq");
        vseq.run_reg_tests = 0;
        vseq.divisor = cfg_divisor;
        vseq.poll_timeout = 512 * bit_time();
        vseq.num_bytes = 8;
        vseq.data_bits = 8;
        vseq.parity_en = 0;
        vseq.parity_mode = 0;
        vseq.stop_2 = 0;
        vseq.flow_en = 0;
        vseq.rts_thresh = 14;
        vseq.data_mode = uart_virtual_sequence::DIRECTED_DATA;

        // Some reused tasks have unbounded waits. Limit the whole case.
        case_done = 0;
        fork
            begin
                repeat (10000) begin
                    if (case_done) break;
                    #(bit_time());
                end
                if (!case_done)
                    `uvm_fatal("UART_BAUD", "Baud case timeout")
            end
            begin
                case (case_num)
                    1: begin // uart_smoke_test
                        vseq.mode = uart_virtual_sequence::D1_TO_D2;
                        vseq.start(env.virt_seqr);
                    end
                    2: begin // uart_apb_transaction_test
                        vseq.mode = uart_virtual_sequence::FULL_DUPLEX;
                        vseq.data_bits = 9;
                        vseq.start(env.virt_seqr);
                    end
                    3: begin // One existing FIFO case, stable RHR and pop order
                        vseq.set_sequencer(env.virt_seqr);
                        vseq.fifo_scenario_rhr_head_order();
                    end
                    4: begin // uart_error_test: all four parity modes
                        vseq.mode = uart_virtual_sequence::ERROR_TEST;
                        vseq.error_case = uart_virtual_sequence::ERROR_PARITY;
                        vseq.start(env.virt_seqr);
                    end
                    5: begin // uart_irq_gen_test: RX-nonempty interrupt case
                        apb_write(1, ADDR_IER, 2);
                        check_value("RX IRQ initially low", d1.irq_o, 0);
                        send_byte(0, 9'h055);
                        #(12 * bit_time());
                        check_value("RX IRQ asserted", d1.irq_o, 1);
                        receive_byte(1, 9'h055);
                        repeat (4) @(negedge d1.pclk);
                        check_value("RX IRQ clears after pop", d1.irq_o, 0);
                    end
                    6: begin // uart_spec_test: existing 5-bit stimulus case
                        vseq.mode = uart_virtual_sequence::SPEC_RX;
                        vseq.spec_data_bits = 5;
                        vseq.spec_dut_data_bits = 7;
                        vseq.spec_target_d1 = 1;
                        // This checks the current DUT's 7-bit interpretation.
                        vseq.start(env.virt_seqr);
                    end
                    7: begin // Long randomized transfer with RTS/CTS pressure
                        vseq.mode = uart_virtual_sequence::FULL_DUPLEX;
                        vseq.num_bytes = 18;
                        vseq.parity_en = 1;
                        vseq.data_mode = uart_virtual_sequence::RANDOMIZED_DATA;
                        vseq.flow_en = 1;
                        vseq.flow_control_test = 1;
                        vseq.start(env.virt_seqr);
                    end
                    8: begin // Register programming and reload without reset
                        alternate_divisor = (cfg_divisor == 65535) ? 65534 : cfg_divisor + 1;
                        check_baud_ticks(1, alternate_divisor);
                        check_baud_ticks(0, alternate_divisor);
                        check_baud_ticks(1, cfg_divisor);
                        check_baud_ticks(0, cfg_divisor);
                        timing_transfer(1);
                        timing_transfer(0);
                        for (int i = 0; i < 8; i++) begin
                            send_byte(1, 9'h031 + i);
                            send_byte(0, 9'h0A1 + i);
                        end
                        for (int i = 0; i < 8; i++) begin
                            receive_byte(0, 9'h031 + i);
                            receive_byte(1, 9'h0A1 + i);
                        end
                    end
                    default: `uvm_fatal("UART_BAUD", "Unknown baud case")
                endcase
                #(3 * bit_time());
                case_done = 1;
            end
        join

        env.scoreboard.end_scenario_check(case_name);
        if (server.get_severity_count(UVM_ERROR) == errors_before) begin
            case_pass++;
            $display("BAUD CASE %0d PASS", case_num);
        end
        else begin
            case_fail++;
            $display("BAUD CASE %0d FAIL", case_num);
        end
    endtask

    virtual task run_phase(uvm_phase phase);
        time clock_edge;
        phase.raise_objection(this);
        d1 = env.d1_agent.vif;
        d2 = env.d2_agent.vif;
        rst_if = env.reset_agent_inst.rst_vif;
        // Optional override; normal make runs use DEFAULT_DIVISOR above.
        void'($value$plusargs("BAUD_DIVISOR=%d", cfg_divisor));
        if (cfg_divisor < 6 || cfg_divisor > 65535)
            `uvm_fatal("UART_BAUD", "Divisor must be 6..65535 for these integration cases")
        @(negedge d1.pclk);
        clock_edge = $time;
        @(negedge d1.pclk);
        if ($time - clock_edge != 10ns)
            `uvm_fatal("UART_BAUD", "This test expects the supplied 100 MHz PCLK")

        run_baud_case(1, "Smoke: directed 8N1 D1 to D2");
        run_baud_case(2, "Transaction: directed 9N1 full duplex");
        run_baud_case(3, "FIFO: stable RHR head and FIFO order");
        run_baud_case(4, "Error: parity error and valid-frame recovery");
        run_baud_case(5, "IRQ: RX interrupt and data service");
        run_baud_case(6, "Spec: 5-bit input interpreted by 7-bit DUT");
        run_baud_case(7, "Stress: 18-byte full duplex with RTS/CTS");
        run_baud_case(8, "Register: divisor reload and UART recovery");

        $display("\nBAUD CASES: PASS=%0d FAIL=%0d", case_pass, case_fail);
        $display("BAUD CHECKS: PASS=%0d FAIL=%0d", pass_count, fail_count);
        phase.drop_objection(this);
    endtask
endclass

