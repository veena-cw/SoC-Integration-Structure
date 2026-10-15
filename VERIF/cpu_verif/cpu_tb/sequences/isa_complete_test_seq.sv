// BP-DV-052: instruction-decode completeness (both harts).
// Loads isa_complete; the scoreboard decodes hart 0's final tohost write -
// see c/isa_complete.c for the failure code.

`ifndef ISA_COMPLETE_TEST_SEQ_SV
`define ISA_COMPLETE_TEST_SEQ_SV

class isa_complete_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(isa_complete_test_seq)

  function new(string name = "isa_complete_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "isa_complete.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("ISA_SEQ",
              $sformatf("boot image %0s loaded; waiting for ISA completeness checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
