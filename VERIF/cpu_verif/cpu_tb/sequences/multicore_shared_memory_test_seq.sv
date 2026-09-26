// BP-DV-017: two-core coherent shared-memory traffic.

`ifndef MULTICORE_SHARED_MEMORY_TEST_SEQ_SV
`define MULTICORE_SHARED_MEMORY_TEST_SEQ_SV

class multicore_shared_memory_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(multicore_shared_memory_test_seq)

  function new(string name = "multicore_shared_memory_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "multicore_shared_memory.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    // BP-DV-017 checks normal two-core shared-memory traffic. AMO/LR-SC
    // coverage is owned by BP-DV-013, so do not require an atomic opcode here.
    load_seq.require_atomic = 1'b0;
    load_seq.start(m_sequencer);

    `uvm_info("MULTICORE_SEQ",
              $sformatf("boot image %0s loaded; waiting for two-core shared-memory completion",
                        nbf_file), UVM_LOW)
  endtask

endclass

`endif
