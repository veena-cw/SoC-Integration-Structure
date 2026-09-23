// BP-DV-007: conditional branch taken/not-taken and offset test.

`ifndef BRANCH_TEST_SEQ_SV
`define BRANCH_TEST_SEQ_SV

class branch_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(branch_test_seq)

  function new(string name = "branch_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "branch_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_branch = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("BRANCH_SEQ",
              $sformatf("boot image %0s loaded; waiting for branch completion", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
