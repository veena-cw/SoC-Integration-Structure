// BP-DV-047: L1-uncached DRAM loads/stores/AMOs executed in the L2 (both harts).
// Loads l2_uncached_ops; the scoreboard decodes hart 0's final tohost write -
// see c/l2_uncached_ops.c for the failure code.

`ifndef L2_UNCACHED_OPS_TEST_SEQ_SV
`define L2_UNCACHED_OPS_TEST_SEQ_SV

class l2_uncached_ops_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(l2_uncached_ops_test_seq)

  function new(string name = "l2_uncached_ops_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "l2_uncached_ops.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("L2_UC_SEQ",
              $sformatf("boot image %0s loaded; waiting for L2 sub-block op checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
