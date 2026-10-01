// BP-DV-028: uncached loads/stores at every byte lane of the AXI data bus.
// Loads the axi_unaligned_access image; the scoreboard decodes the final
// tohost write. A nonzero tohost is (kind << 8) | (size << 4) | offset of
// the first failing access - see c/axi_unaligned_access.c.

`ifndef AXI_UNALIGNED_TEST_SEQ_SV
`define AXI_UNALIGNED_TEST_SEQ_SV

class axi_unaligned_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(axi_unaligned_test_seq)

  function new(string name = "axi_unaligned_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "axi_unaligned_access.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_memory_widths = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("AXI_UNALIGNED_SEQ",
              $sformatf("boot image %0s loaded; waiting for byte-lane checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
