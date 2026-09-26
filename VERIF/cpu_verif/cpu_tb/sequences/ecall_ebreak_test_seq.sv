// BP-DV-016: machine-mode ECALL/EBREAK trap entry and mret return.

`ifndef ECALL_EBREAK_TEST_SEQ_SV
`define ECALL_EBREAK_TEST_SEQ_SV

class ecall_ebreak_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(ecall_ebreak_test_seq)

  function new(string name = "ecall_ebreak_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "ecall_ebreak_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_ecall_ebreak = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("ECALL_EBREAK_SEQ",
              $sformatf("boot image %0s loaded; waiting for ECALL/EBREAK traps and mret returns",
                        nbf_file), UVM_LOW)
  endtask

endclass

`endif
