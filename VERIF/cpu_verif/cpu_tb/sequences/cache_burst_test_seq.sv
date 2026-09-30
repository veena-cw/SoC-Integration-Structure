// BP-DV-025: cache-line refill used to observe AXI multi-beat bursts.

`ifndef CACHE_BURST_TEST_SEQ_SV
`define CACHE_BURST_TEST_SEQ_SV

class cache_burst_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(cache_burst_test_seq)

  function new(string name = "cache_burst_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "cache_burst_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_cache_refill = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("CACHE_BURST_SEQ",
              $sformatf("boot image %0s loaded; requiring AXI AWLEN/ARLEN > 0",
                        nbf_file), UVM_LOW)
  endtask
endclass

`endif
