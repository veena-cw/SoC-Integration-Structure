`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_irq_gen_test extends uart_base_test;

    `uvm_component_utils(uart_irq_gen_test)

    function new(
        string name = "uart_irq_gen_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    virtual task run_phase(uvm_phase phase);
        uart_virtual_sequence vseq;

        phase.raise_objection(this);

        vseq = uart_virtual_sequence::type_id::create("vseq");
        vseq.run_reg_tests      = 1'b0;
        vseq.mode               = uart_virtual_sequence::IRQ_TEST;
        vseq.divisor            = 16'd53;
        vseq.data_bits          = 4'd8;
        vseq.parity_en          = 1'b0;
        vseq.parity_mode        = 2'b00;
        vseq.stop_2             = 1'b0;
        vseq.data_mode          = uart_virtual_sequence::DIRECTED_DATA;

        vseq.check_rx_full_irq  = 1'b1;
        vseq.rx_full_irq_en     = 1'b1;
        vseq.flow_en             = 1'b0;
        vseq.rts_thresh          = 5'd14;

        vseq.start(env.virt_seqr);

        phase.drop_objection(this);
    endtask

endclass
