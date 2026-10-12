// BP-DV-042: CPU writes/reads the shared PLIC registers over AHB on both
// harts. Loads plic_reg_access; the scoreboard decodes hart 0's final
// tohost write - see c/plic_reg_access.c for the failure code.

`ifndef PLIC_REG_TEST_SEQ_SV
`define PLIC_REG_TEST_SEQ_SV

class plic_reg_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(plic_reg_test_seq)

  function new(string name = "plic_reg_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "plic_reg_access.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("PLIC_REG_SEQ",
              $sformatf("boot image %0s loaded; waiting for PLIC register checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
