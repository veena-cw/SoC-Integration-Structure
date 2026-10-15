// BP-DV-053: hazard-detector dependency-chain stress (both harts).
// Loads hazard_chains; the scoreboard decodes hart 0's final tohost write -
// see c/hazard_chains.c for the failure code.

`ifndef HAZARD_CHAINS_TEST_SEQ_SV
`define HAZARD_CHAINS_TEST_SEQ_SV

class hazard_chains_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(hazard_chains_test_seq)

  function new(string name = "hazard_chains_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "hazard_chains.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("HAZ_SEQ",
              $sformatf("boot image %0s loaded; waiting for dependency-chain checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
