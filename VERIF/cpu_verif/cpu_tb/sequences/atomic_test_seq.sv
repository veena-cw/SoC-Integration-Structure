// BP-DV-013: AMO and LR/SC atomic-operation test.

`ifndef ATOMIC_TEST_SEQ_SV
`define ATOMIC_TEST_SEQ_SV

class atomic_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(atomic_test_seq)

  function new(string name = "atomic_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "atomic_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_atomic = 1'b1;
    load_seq.require_lrsc = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("ATOMIC_SEQ",
              $sformatf("boot image %0s loaded; waiting for AMO/LR-SC completion", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
