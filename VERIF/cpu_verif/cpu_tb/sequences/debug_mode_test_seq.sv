// BP-DV-051: RISC-V Debug Mode entry/exit from software (both harts).
// Loads debug_mode; the scoreboard decodes hart 0's final tohost write -
// see c/debug_mode.c for the failure code.

`ifndef DEBUG_MODE_TEST_SEQ_SV
`define DEBUG_MODE_TEST_SEQ_SV

class debug_mode_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(debug_mode_test_seq)

  function new(string name = "debug_mode_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "debug_mode.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("DBG_SEQ",
              $sformatf("boot image %0s loaded; waiting for Debug Mode checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
