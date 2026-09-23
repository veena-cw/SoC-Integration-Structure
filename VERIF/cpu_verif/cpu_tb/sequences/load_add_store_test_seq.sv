// BP-DV-007: load operands from DRAM, add them, and store/read back the sum.

`ifndef LOAD_ADD_STORE_TEST_SEQ_SV
`define LOAD_ADD_STORE_TEST_SEQ_SV

class load_add_store_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(load_add_store_test_seq)

  function new(string name = "load_add_store_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "load_add_store.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_alu = 1'b1;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("LOAD_ADD_STORE_SEQ",
              $sformatf("boot image %0s loaded; waiting for DRAM load/add/store completion", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
