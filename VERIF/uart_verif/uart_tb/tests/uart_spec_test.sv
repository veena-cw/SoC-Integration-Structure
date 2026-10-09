`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_spec_test extends uart_base_test;

    `uvm_component_utils(uart_spec_test)

    int unsigned scenario_num;

    function new(string name = "uart_spec_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    protected task run_spec_case(
        string test_case_name,
        bit [3:0] spec_data_bits,
        int unsigned num_bytes,
        uart_virtual_sequence::data_mode_e data_mode,
        bit target_d1
    );
        uart_virtual_sequence vseq;

        scenario_num++;

        $display("");
        $display("========================================");
        $display(" SPEC TEST CASE %0d : %s", scenario_num, test_case_name);
        $display("========================================");
        $display(" Target DUT    : %s", target_d1 ? "d1" : "d2");
        $display(" Serial bits   : %0d", spec_data_bits);
        $display(" Data count    : %0d", num_bytes);
        $display(" Data source   : %s", data_mode.name());
        $display(" Parity        : disabled");
        $display(" Stop bits     : 1");
        $display(" DUT RAL bits  : 7 (current supported setting)");
        $display("========================================");

        vseq = uart_virtual_sequence::type_id::create("vseq");
        vseq.run_reg_tests    = 1'b0;
        vseq.mode             = uart_virtual_sequence::SPEC_RX;
        vseq.num_bytes        = num_bytes;
        vseq.spec_data_bits   = spec_data_bits;
        vseq.spec_dut_data_bits = 4'd7;
        vseq.spec_target_d1   = target_d1;
        vseq.data_mode        = data_mode;
        vseq.divisor          = 16'd53;
        vseq.parity_en        = 1'b0;
        vseq.parity_mode      = 2'b00;
        vseq.stop_2           = 1'b0;

        vseq.start(env.virt_seqr);

        $display("----------------------------------------");
        $display(" SPEC TEST CASE %0d SUMMARY : %s", scenario_num, test_case_name);
        $display("----------------------------------------");
        $display(" EXPECTED CURRENT-DUT : %0d", vseq.spec_pass_count);
        $display(" UNEXPECTED            : %0d", vseq.spec_error_count);
        $display("========================================");
    endtask

    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        scenario_num = 0;

        $display("");
        $display("========================================");
        $display("       APB_UART -- SPEC 5/6-BIT TEST");
        $display("========================================");
        $display(" 5/6-bit values are generated as real");
        $display(" UART serial frames on DUT rx_i.");
        $display(" No 5/6-bit CR/RAL encoding is attempted.");
        $display("========================================");

        // 1: basic directed 5-bit serial frame test on d1.
        run_spec_case(
            "Directed 5-bit normal frames",
            4'd5, 8,
            uart_virtual_sequence::DIRECTED_DATA,
            1'b1
        );

        // 2: randomized 5-bit long stream on d2.
        run_spec_case(
            "Randomized 5-bit long stream - 20 data items",
            4'd5, 20,
            uart_virtual_sequence::RANDOMIZED_DATA,
            1'b0
        );

        // 3: randomized 6-bit long stream on d1.
        run_spec_case(
            "Randomized 6-bit long stream - 17 data items",
            4'd6, 17,
            uart_virtual_sequence::RANDOMIZED_DATA,
            1'b1
        );

        $display("");
        $display("========================================");
        $display(" SPEC 5/6-BIT TEST -- COMPLETE");
        $display(" Scenarios run : %0d", scenario_num);
        $display("========================================");
        $display("");

        phase.drop_objection(this);
    endtask

endclass
