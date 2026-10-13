// BP-DV-049: two-core cache-coherence stress (CCE FSM states).
// Loads smp_coherence; the scoreboard decodes hart 0's final tohost write -
// see c/smp_coherence.c for the failure code.

`ifndef SMP_COHERENCE_TEST_SEQ_SV
`define SMP_COHERENCE_TEST_SEQ_SV

class smp_coherence_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(smp_coherence_test_seq)

  function new(string name = "smp_coherence_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "smp_coherence.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("COH_SEQ",
              $sformatf("boot image %0s loaded; waiting for coherence checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
