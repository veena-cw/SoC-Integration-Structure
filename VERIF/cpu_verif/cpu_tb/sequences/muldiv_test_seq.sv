// BP-DV-006: RV64M multiply, divide, and remainder instruction test.

`ifndef MULDIV_TEST_SEQ_SV
`define MULDIV_TEST_SEQ_SV

class muldiv_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(muldiv_test_seq)

  function new(string name = "muldiv_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "muldiv_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_alu = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("MULDIV_SEQ", $sformatf("boot image %0s loaded; waiting for tohost completion", nbf_file), UVM_LOW)
  endtask

endclass

`endif
