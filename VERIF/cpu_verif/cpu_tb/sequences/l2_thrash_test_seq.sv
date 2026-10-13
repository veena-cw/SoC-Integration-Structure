// BP-DV-046: L1/L2 conflict thrashing with dirty evictions (both harts).
// Loads l2_thrash; the scoreboard decodes hart 0's final tohost write -
// see c/l2_thrash.c for the failure code.

`ifndef L2_THRASH_TEST_SEQ_SV
`define L2_THRASH_TEST_SEQ_SV

class l2_thrash_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(l2_thrash_test_seq)

  function new(string name = "l2_thrash_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "l2_thrash.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("L2_THRASH_SEQ",
              $sformatf("boot image %0s loaded; waiting for L1/L2 thrash checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
