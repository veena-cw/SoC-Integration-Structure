// BP-DV-032/033/034: RISC-V Zicbom cache-block operations (cbo.clean,
// cbo.flush, cbo.inval) on both harts. Loads the selected boot image; the
// scoreboard decodes hart 0's final tohost write - see c/cbo_ops.c.

`ifndef CBO_TEST_SEQ_SV
`define CBO_TEST_SEQ_SV

class cbo_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(cbo_test_seq)

  function new(string name = "cbo_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "cbo_flush.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("CBO_SEQ",
              $sformatf("boot image %0s loaded; waiting for cache-block operation checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
