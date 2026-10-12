`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_error_test extends uart_base_test;

    `uvm_component_utils(uart_error_test)

    int unsigned scenario_num;
    int unsigned total_pass;
    int unsigned total_fail;

    function new(string name = "uart_error_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    protected task run_error_case(
        string test_case_name,
        uart_virtual_sequence::error_case_e error_case
    );
        uart_virtual_sequence vseq;
        int unsigned case_pass;
        int unsigned case_fail;

        scenario_num++;

        $display("");
        $display("========================================");
        $display(" ERROR TEST CASE %0d : %s", scenario_num, test_case_name);
        $display("========================================");

        vseq = uart_virtual_sequence::type_id::create("vseq");
        vseq.run_reg_tests  = 1'b0;
        vseq.mode           = uart_virtual_sequence::ERROR_TEST;
        vseq.error_case     = error_case;
        vseq.divisor        = 16'd53;
        vseq.data_bits      = 4'd8;
        vseq.parity_en      = 1'b0;
        vseq.parity_mode    = 2'b00;
        vseq.stop_2         = 1'b0;
        vseq.rx_irq_en      = 1'b0;
        vseq.err_irq_en     = 1'b0;
        vseq.flow_en        = 1'b0;
        vseq.rts_thresh     = 5'd14;
        vseq.rx_full_irq_en = 1'b0;
        vseq.spec_target_d1 = 1'b1;

        vseq.start(env.virt_seqr);

        case_pass = vseq.error_pass_count;
        case_fail = vseq.error_fail_count;

        total_pass += case_pass;
        total_fail += case_fail;

        $display("----------------------------------------");
        $display(" ERROR TEST CASE %0d SUMMARY", scenario_num);
        $display("----------------------------------------");
        $display(" PASS : %0d", case_pass);
        $display(" FAIL : %0d", case_fail);
        $display("========================================");
    endtask

    virtual task run_phase(uvm_phase phase);

        phase.raise_objection(this);

        scenario_num = 0;
        total_pass   = 0;
        total_fail   = 0;

        $display("");
        $display("========================================");
        $display("       APB_UART -- ERROR TEST");
        $display("========================================");
        $display(" Frame Error");
        $display(" Invalid Start / RX Glitch");
        $display(" Parity Error: Even/Odd/Mark/Space");
        $display(" RX Overrun");
        $display(" Break Error");
        $display(" Sticky Error Clear + Recovery");
        $display("========================================");

        // --------------------------------------------------------
        // 1. Frame error
        //    8N1 + 8N2, invalid first stop bit.
        // --------------------------------------------------------
        run_error_case(
            "Frame Error - invalid stop bit (8N1 + 8N2)",
            uart_virtual_sequence::ERROR_FRAME
        );

        // --------------------------------------------------------
        // 2. Invalid start / RX glitch
        // --------------------------------------------------------
        run_error_case(
            "Invalid Start + RX Glitch rejection",
            uart_virtual_sequence::ERROR_START_GLITCH
        );

        // --------------------------------------------------------
        // 3. All four parity modes
        //    Each mode: correct parity + wrong parity + recovery.
        // --------------------------------------------------------
        run_error_case(
            "Parity Error - Even/Odd/Mark/Space",
            uart_virtual_sequence::ERROR_PARITY
        );

        // --------------------------------------------------------
        // 4. RX overrun
        //    16 valid frames + 17th frame while RX FIFO is full.
        // --------------------------------------------------------
        run_error_case(
            "RX Overrun - 16 full + 17th UART frame on normal link",
            uart_virtual_sequence::ERROR_OVERRUN
        );

        // --------------------------------------------------------
        // 5. Break
        // --------------------------------------------------------
        run_error_case(
            "Break Error - continuous RX low",
            uart_virtual_sequence::ERROR_BREAK
        );

        // --------------------------------------------------------
        // 6. Sticky error accumulation / clear / recovery
        // --------------------------------------------------------
        run_error_case(
            "Sticky Error Clear + Receiver Recovery",
            uart_virtual_sequence::ERROR_CLEAR_RECOVERY
        );

        $display("");
        $display("========================================");
        $display(" UART ERROR TEST -- GRAND TOTAL");
        $display("========================================");
        $display(" Scenarios : %0d", scenario_num);
        $display(" PASS      : %0d", total_pass);
        $display(" FAIL      : %0d", total_fail);
        $display("========================================");
        $display("");

        phase.drop_objection(this);

    endtask

endclass
