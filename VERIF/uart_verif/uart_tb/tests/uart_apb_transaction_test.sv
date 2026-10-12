`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_apb_transaction_test extends uart_base_test;

    `uvm_component_utils(uart_apb_transaction_test)

    int unsigned scenario_num;
    int unsigned local_pass_total;
    int unsigned local_fail_total;

    function new(
        string name = "uart_apb_transaction_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    protected task run_named_scenario(
        string                              test_case_name,
        uart_virtual_sequence::mode_e      mode,
        int unsigned                        num_bytes,
        bit [3:0]                           data_bits,
        bit                                 parity_en,
        bit [1:0]                           parity_mode,
        bit                                 stop_2,
        uart_virtual_sequence::data_mode_e data_mode =
            uart_virtual_sequence::RANDOMIZED_DATA,
        bit                                 flow_control_test = 1'b0,
        bit                                 rts_hold_test     = 1'b0,
        bit                                 flow_en            = 1'b0,
        bit [4:0]                           rts_thresh         = 5'd14,
        bit                                 spec_target_d1    = 1'b1
    );
        uart_virtual_sequence vseq;
        int unsigned pass_before;
        int unsigned pass_after;
        int unsigned fail_before;
        int unsigned fail_after;
        int unsigned scenario_pass;
        int unsigned scenario_fail;
        int unsigned scenario_local_pass;
        int unsigned scenario_local_fail;
        string parity_str;

        scenario_num++;

        case ({parity_en, parity_mode})
            3'b0_00,
            3'b0_01,
            3'b0_10,
            3'b0_11: parity_str = "disabled";
            3'b1_00:  parity_str = "even";
            3'b1_01:  parity_str = "odd";
            3'b1_10:  parity_str = "mark";
            3'b1_11:  parity_str = "space";
            default:  parity_str = "?";
        endcase

        $display("");
        $display("========================================");
        $display("   TEST CASE %0d : %s", scenario_num, test_case_name);
        $display("========================================");
        $display("  Mode          : %s", mode.name());
        $display("  Data count    : %0d", num_bytes);
        if (mode == uart_virtual_sequence::SPEC_RX)
            $display("  Stimulus bits : %0d (DUT configured for 7 bits)", data_bits);
        else
            $display("  Data bits     : %0d", data_bits);
        $display("  Data source   : %s", data_mode.name());
        $display("  Parity        : %s", parity_str);
        $display("  Stop bits     : %0d", stop_2 ? 2 : 1);
        $display("  Flow control  : %0b (%s)", flow_en, flow_en ? "RTS/CTS" : "disabled");
        $display("  RTS threshold : %0d", rts_thresh);
        if (rts_hold_test)
            $display("  RTS test      : long hold with NO RHR reads");
        $display("========================================");

        pass_before = env.scoreboard.pass_count;
        fail_before = env.scoreboard.error_count;

        vseq = uart_virtual_sequence::type_id::create("vseq");
        vseq.run_reg_tests     = 1'b0;
        vseq.mode              = mode;
        vseq.num_bytes         = num_bytes;
        vseq.parity_en         = parity_en;
        vseq.parity_mode       = parity_mode;
        vseq.stop_2            = stop_2;
        vseq.data_mode         = data_mode;
        vseq.flow_control_test = flow_control_test;
        vseq.rts_hold_test     = rts_hold_test;
        vseq.flow_en           = flow_en;
        vseq.rts_thresh        = rts_thresh;

        if (mode == uart_virtual_sequence::SPEC_RX) begin
            // The DUT has no APB encoding for 5/6 data bits in the
            // current CR[7:6] interface. Keep the DUT at its supported
            // 7-bit configuration and inject the requested 5/6-bit
            // UART waveform directly on rx_i.
            vseq.data_bits       = 4'd7;
            vseq.spec_data_bits = data_bits;
            vseq.spec_dut_data_bits = 4'd7;
            vseq.spec_target_d1  = spec_target_d1;
        end
        else begin
            vseq.data_bits = data_bits;
        end

        vseq.start(env.virt_seqr);

        // A normal communication scenario is complete only when all
        // APB TXDATA writes have a matching RHR read. Never carry stale
        // expected data into the next scenario.
        env.scoreboard.end_scenario_check(test_case_name);

        pass_after = env.scoreboard.pass_count;
        fail_after = env.scoreboard.error_count;

        scenario_local_pass =
            vseq.flow_pass_count + vseq.spec_pass_count;
        scenario_local_fail =
            vseq.flow_fail_count + vseq.spec_error_count;

        scenario_pass = (pass_after - pass_before) + scenario_local_pass;
        scenario_fail = (fail_after - fail_before) + scenario_local_fail;

        local_pass_total += scenario_local_pass;
        local_fail_total += scenario_local_fail;

        $display("----------------------------------------");
        $display(" TEST CASE %0d SUMMARY : %s", scenario_num, test_case_name);
        $display("----------------------------------------");
        $display(" PASS  : %0d", scenario_pass);
        $display(" FAIL  : %0d", scenario_fail);
        $display("========================================");
    endtask

    virtual task run_phase(uvm_phase phase);
        int unsigned grand_pass;
        int unsigned grand_fail;

        phase.raise_objection(this);
        scenario_num      = 0;
        local_pass_total  = 0;
        local_fail_total  = 0;

        $display("");
        $display("========================================");
        $display("      APB_UART -- TRANSACTION TEST");
        $display("========================================");
        $display("  DUT           : uart_apb_top d1 <-serial link-> uart_apb_top d2");
        $display("  Transaction   : continuous streams");
        $display("  Full duplex   : TX and RX run in parallel");
        $display("  Long transfers: 4/12 cases (>16 bytes)");
        $display("========================================");

        // 1. Directed D1 -> D2, 8 bytes, 9N1
        run_named_scenario(
            "Directed D1_TO_D2 continuous stream",
            uart_virtual_sequence::D1_TO_D2,
            8,
            4'd9,
            1'b0,
            2'b00,
            1'b0,
            uart_virtual_sequence::DIRECTED_DATA
        );

        // 2. Random D2 -> D1, 8 bytes, 8N1
        run_named_scenario(
            "Randomized D2_TO_D1 continuous stream",
            uart_virtual_sequence::D2_TO_D1,
            8,
            4'd8,
            1'b0,
            2'b00,
            1'b0,
            uart_virtual_sequence::RANDOMIZED_DATA
        );

        // 3. Directed half duplex, 8 bytes per direction, 7N2
        run_named_scenario(
            "Directed HALF_DUPLEX continuous stream",
            uart_virtual_sequence::HALF_DUPLEX,
            8,
            4'd7,
            1'b0,
            2'b00,
            1'b1,
            uart_virtual_sequence::DIRECTED_DATA
        );

        // 4. Random full duplex, 8 bytes per direction, 9N1
        run_named_scenario(
            "Randomized FULL_DUPLEX continuous stream",
            uart_virtual_sequence::FULL_DUPLEX,
            8,
            4'd9,
            1'b0,
            2'b00,
            1'b0,
            uart_virtual_sequence::RANDOMIZED_DATA
        );

        // 5. Long full duplex, 18 bytes per direction, even parity
        run_named_scenario(
            "Long FULL_DUPLEX randomized even parity",
            uart_virtual_sequence::FULL_DUPLEX,
            18,
            4'd8,
            1'b1,
            2'b00,
            1'b0,
            uart_virtual_sequence::RANDOMIZED_DATA,
            1'b1,
            1'b0,
            1'b1,
            5'd14
        );

        // 6. Long D1 -> D2, 17 bytes, directed odd parity, 2 stop
        run_named_scenario(
            "Long D1_TO_D2 directed odd parity",
            uart_virtual_sequence::D1_TO_D2,
            17,
            4'd9,
            1'b1,
            2'b01,
            1'b1,
            uart_virtual_sequence::DIRECTED_DATA,
            1'b1,
            1'b0,
            1'b1,
            5'd14
        );

        // 7. Random half duplex, mark parity
        run_named_scenario(
            "Randomized HALF_DUPLEX mark parity",
            uart_virtual_sequence::HALF_DUPLEX,
            8,
            4'd8,
            1'b1,
            2'b10,
            1'b0,
            uart_virtual_sequence::RANDOMIZED_DATA
        );

        // 8. Directed full duplex, space parity, 2 stop
        run_named_scenario(
            "Directed FULL_DUPLEX space parity",
            uart_virtual_sequence::FULL_DUPLEX,
            8,
            4'd8,
            1'b1,
            2'b11,
            1'b1,
            uart_virtual_sequence::DIRECTED_DATA
        );

        // 9. Random full duplex, 7-bit framing, 8 bytes per direction
        // Kept at 8 bytes so the >16-byte transfer cases remain the
        // dedicated flow-control scenarios below.
        run_named_scenario(
            "Randomized FULL_DUPLEX 7-bit data",
            uart_virtual_sequence::FULL_DUPLEX,
            8,
            4'd7,
            1'b0,
            2'b00,
            1'b0,
            uart_virtual_sequence::RANDOMIZED_DATA
        );

        // 10. Random D1 -> D2, 8N2
        run_named_scenario(
            "Randomized D1_TO_D2 two-stop stream",
            uart_virtual_sequence::D1_TO_D2,
            8,
            4'd8,
            1'b0,
            2'b00,
            1'b1,
            uart_virtual_sequence::RANDOMIZED_DATA
        );

        // 11. Long D2 -> D1 with repeated RTS threshold cycling
        run_named_scenario(
            "Long D2_TO_D1 RTS threshold cycling",
            uart_virtual_sequence::D2_TO_D1,
            18,
            4'd8,
            1'b1,
            2'b00,
            1'b0,
            uart_virtual_sequence::RANDOMIZED_DATA,
            1'b1,
            1'b0,
            1'b1,
            5'd14
        );

        // 12. Final long RTS hold. No RHR reads during the hold.
        run_named_scenario(
            "Long D1_TO_D2 RTS hold with no RX reads",
            uart_virtual_sequence::D1_TO_D2,
            20,
            4'd8,
            1'b0,
            2'b00,
            1'b0,
            uart_virtual_sequence::RANDOMIZED_DATA,
            1'b1,
            1'b1,
            1'b1,
            5'd14
        );

        grand_pass = env.scoreboard.pass_count + local_pass_total;
        grand_fail = env.scoreboard.error_count + local_fail_total;

        $display("");
        $display("========================================");
        $display("   TRANSACTION TEST -- GRAND TOTAL");
        $display("========================================");
        $display("  Scenarios run : %0d", scenario_num);
        $display("  PASS          : %0d", grand_pass);
        $display("  FAIL          : %0d", grand_fail);
        $display("========================================");
        $display("");

        phase.drop_objection(this);
    endtask

endclass
