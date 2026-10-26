// BP-DV-058: external interrupts through the shared PLIC on both harts.
// Loads plic_irq; the program drives the interrupt sources through
// plic_irq_ctrl - see c/plic_irq.c for the checks and the failure code.

`ifndef PLIC_IRQ_TEST_SEQ_SV
`define PLIC_IRQ_TEST_SEQ_SV

class plic_irq_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(plic_irq_test_seq)

  function new(string name = "plic_irq_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "plic_irq.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("PLIC_IRQ_SEQ",
              $sformatf("boot image %0s loaded; waiting for PLIC interrupt checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
