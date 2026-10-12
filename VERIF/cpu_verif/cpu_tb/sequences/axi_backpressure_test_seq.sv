// BP-DV-044: bridge FIFOs under AXI back-pressure (both harts).
// Loads axi_backpressure; the scoreboard decodes hart 0's final tohost write -
// see c/axi_backpressure.c for the failure code.

`ifndef AXI_BACKPRESSURE_TEST_SEQ_SV
`define AXI_BACKPRESSURE_TEST_SEQ_SV

class axi_backpressure_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(axi_backpressure_test_seq)

  function new(string name = "axi_backpressure_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "axi_backpressure.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("AXI_BP_SEQ",
              $sformatf("boot image %0s loaded; waiting for back-pressure checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
