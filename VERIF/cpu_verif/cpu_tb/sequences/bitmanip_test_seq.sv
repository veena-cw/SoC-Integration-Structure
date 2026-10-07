// BP-DV-040: Zba/Zbb/Zbs bit manipulation (94 generated checks) on both harts.
// Loads bitmanip_ops; the scoreboard decodes
// hart 0's final tohost write - see c/bitmanip_ops.c for the failure code.

`ifndef BITMANIP_TEST_SEQ_SV
`define BITMANIP_TEST_SEQ_SV

class bitmanip_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(bitmanip_test_seq)

  function new(string name = "bitmanip_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "bitmanip_ops.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("BITMANIP_SEQ",
              $sformatf("boot image %0s loaded; waiting for bit-manipulation checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
