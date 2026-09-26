// BP-DV-015: illegal instruction trap entry and mret return.

`ifndef ILLEGAL_TRAP_TEST_SEQ_SV
`define ILLEGAL_TRAP_TEST_SEQ_SV

class illegal_trap_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(illegal_trap_test_seq)

  function new(string name = "illegal_trap_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "illegal_trap_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_illegal_trap = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("ILLEGAL_TRAP_SEQ",
              $sformatf("boot image %0s loaded; waiting for illegal traps and mret returns",
                        nbf_file), UVM_LOW)
  endtask

endclass

`endif
