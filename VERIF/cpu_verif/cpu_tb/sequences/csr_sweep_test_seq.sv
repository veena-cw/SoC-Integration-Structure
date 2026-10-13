// BP-DV-050: CSR read/write sweep (both harts).
// Loads csr_sweep; the scoreboard decodes hart 0's final tohost write -
// see c/csr_sweep.c for the failure code.

`ifndef CSR_SWEEP_TEST_SEQ_SV
`define CSR_SWEEP_TEST_SEQ_SV

class csr_sweep_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(csr_sweep_test_seq)

  function new(string name = "csr_sweep_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "csr_sweep.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("CSR_SEQ",
              $sformatf("boot image %0s loaded; waiting for CSR checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
