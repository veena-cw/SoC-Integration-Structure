// BP-DV-029: write a 256 B AXI-mapped block, read it all back, then compare.
// Loads the axi_block_access image; the scoreboard decodes the final tohost
// write. A nonzero tohost is (mismatch_count << 16) | 0x1000 | first failing
// offset - see c/axi_block_access.c.

`ifndef AXI_BLOCK_TEST_SEQ_SV
`define AXI_BLOCK_TEST_SEQ_SV

class axi_block_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(axi_block_test_seq)

  function new(string name = "axi_block_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "axi_block_access.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("AXI_BLOCK_SEQ",
              $sformatf("boot image %0s loaded; waiting for block write/read/compare", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
