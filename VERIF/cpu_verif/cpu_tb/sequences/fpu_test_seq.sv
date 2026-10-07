// BP-DV-039: RV64 F/D floating point (arithmetic, FMA, div/sqrt, conversions,
// rounding, fflags, mstatus.FS) on both harts. Loads fpu_ops; the scoreboard decodes
// hart 0's final tohost write - see c/fpu_ops.c for the failure code.

`ifndef FPU_TEST_SEQ_SV
`define FPU_TEST_SEQ_SV

class fpu_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(fpu_test_seq)

  function new(string name = "fpu_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "fpu_ops.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("FPU_SEQ",
              $sformatf("boot image %0s loaded; waiting for FPU checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
