// BP-DV-011: randomized request/response ready-valid backpressure.
`ifndef MEMORY_BACKPRESSURE_TEST_SEQ_SV
`define MEMORY_BACKPRESSURE_TEST_SEQ_SV

class memory_backpressure_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(memory_backpressure_test_seq)

  function new(string name = "memory_backpressure_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "memory_backpressure_function.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.require_cache_refill = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("MEM_BACKPRESSURE_SEQ",
              $sformatf("boot image %0s loaded; running randomized request/response backpressure stress",
                        nbf_file), UVM_LOW)
  endtask
endclass

`endif
