// BP-DV-019: RV64C compressed arithmetic, memory, branch, and jump test.

`ifndef COMPRESSED_TEST_SEQ_SV
`define COMPRESSED_TEST_SEQ_SV

class compressed_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(compressed_test_seq)

  function new(string name = "compressed_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "compressed_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_compressed = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("COMPRESSED_SEQ",
              $sformatf("boot image %0s loaded; checking RV64C execution results",
                        nbf_file), UVM_LOW)
  endtask

endclass

`endif
