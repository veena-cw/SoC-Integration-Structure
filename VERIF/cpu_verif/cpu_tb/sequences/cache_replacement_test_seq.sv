// BP-DV-020: conflicting lines exceed cache associativity and are re-read.
`ifndef CACHE_REPLACEMENT_TEST_SEQ_SV
`define CACHE_REPLACEMENT_TEST_SEQ_SV

class cache_replacement_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(cache_replacement_test_seq)

  function new(string name = "cache_replacement_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "cache_replacement_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_cache_refill = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("CACHE_REPLACEMENT_SEQ",
              $sformatf("boot image %0s loaded; checking conflict replacement and re-fetches",
                        nbf_file), UVM_LOW)
  endtask
endclass

`endif
