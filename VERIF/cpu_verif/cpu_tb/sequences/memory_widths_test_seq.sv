// BP-DV-010: byte/halfword/word load and store test.

`ifndef MEMORY_WIDTHS_TEST_SEQ_SV
`define MEMORY_WIDTHS_TEST_SEQ_SV

class memory_widths_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(memory_widths_test_seq)

  function new(string name = "memory_widths_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "width_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_memory_widths = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("MEM_WIDTH_SEQ",
              $sformatf("boot image %0s loaded; waiting for width-operation completion", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
