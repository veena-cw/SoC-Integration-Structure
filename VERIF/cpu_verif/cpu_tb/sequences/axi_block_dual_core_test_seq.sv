// BP-DV-030: BP-DV-029's AXI block write/read/compare on both cores at once.
// Loads the axi_block_dual_core image (two-core build, BP_CFG_ID=9); the
// scoreboard decodes hart 0's final tohost write. A nonzero tohost is
// (hart1_result << 32) | hart0_result - see c/axi_block_dual_core.c.

`ifndef AXI_BLOCK_DUAL_CORE_TEST_SEQ_SV
`define AXI_BLOCK_DUAL_CORE_TEST_SEQ_SV

class axi_block_dual_core_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(axi_block_dual_core_test_seq)

  function new(string name = "axi_block_dual_core_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "axi_block_dual_core.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("AXI_BLOCK_DUAL_SEQ",
              $sformatf("boot image %0s loaded; waiting for both harts' block checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
