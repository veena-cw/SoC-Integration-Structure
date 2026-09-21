// BP-DV-005: RV64 immediate and register shift instruction test.

`ifndef SHIFT_TEST_SEQ_SV
`define SHIFT_TEST_SEQ_SV

class shift_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(shift_test_seq)

  function new(string name = "shift_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "shift_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_alu = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("SHIFT_SEQ", $sformatf("boot image %0s loaded; waiting for tohost completion", nbf_file), UVM_LOW)
  endtask

endclass

`endif
