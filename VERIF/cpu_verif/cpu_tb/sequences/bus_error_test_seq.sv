// BP-DV-043: AXI SLVERR/DECERR on uncached MMIO accesses (both harts).
// Loads bus_error; the scoreboard decodes hart 0's final tohost write -
// see c/bus_error.c for the failure code.

`ifndef BUS_ERROR_TEST_SEQ_SV
`define BUS_ERROR_TEST_SEQ_SV

class bus_error_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(bus_error_test_seq)

  function new(string name = "bus_error_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "bus_error.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("BUS_ERR_SEQ",
              $sformatf("boot image %0s loaded; waiting for bus-error checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
