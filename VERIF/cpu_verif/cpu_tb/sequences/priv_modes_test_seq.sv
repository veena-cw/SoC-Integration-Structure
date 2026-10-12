// BP-DV-035: M/S/U privilege modes, trap delegation (medeleg/mideleg) and
// mret/sret on both harts. Loads the priv_modes image; the scoreboard decodes
// hart 0's final tohost write - see c/priv_modes.c for the failure code.

`ifndef PRIV_MODES_TEST_SEQ_SV
`define PRIV_MODES_TEST_SEQ_SV

class priv_modes_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(priv_modes_test_seq)

  function new(string name = "priv_modes_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "priv_modes.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("PRIV_SEQ",
              $sformatf("boot image %0s loaded; waiting for privilege-mode checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
