// BP-DV-008: JAL/JALR aligned-target and link-register test.

`ifndef JUMP_TEST_SEQ_SV
`define JUMP_TEST_SEQ_SV

class jump_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(jump_test_seq)

  function new(string name = "jump_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "jump_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_jump = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("JUMP_SEQ",
              $sformatf("boot image %0s loaded; waiting for JAL/JALR completion", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
