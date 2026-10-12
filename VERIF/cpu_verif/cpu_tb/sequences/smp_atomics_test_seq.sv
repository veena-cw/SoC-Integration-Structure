// BP-DV-038: two-core atomics and cache coherence (shared counters with AMO,
// LR/SC and a spinlock, false sharing, message passing). Loads smp_atomics; the scoreboard decodes
// hart 0's final tohost write - see c/smp_atomics.c for the failure code.

`ifndef SMP_ATOMICS_TEST_SEQ_SV
`define SMP_ATOMICS_TEST_SEQ_SV

class smp_atomics_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(smp_atomics_test_seq)

  function new(string name = "smp_atomics_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "smp_atomics.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("SMP_SEQ",
              $sformatf("boot image %0s loaded; waiting for two-core atomics and coherence checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
