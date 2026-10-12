// BP-DV-036: Sv39 virtual memory (page walks, TLB, 4K/2M/1G pages, page
// faults, A/D, SUM, sfence.vma) on both harts. Loads the vm_sv39 image; the scoreboard decodes
// hart 0's final tohost write - see c/vm_sv39.c for the failure code.

`ifndef VM_SV39_TEST_SEQ_SV
`define VM_SV39_TEST_SEQ_SV

class vm_sv39_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(vm_sv39_test_seq)

  function new(string name = "vm_sv39_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "vm_sv39.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_load_store = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("VM_SEQ",
              $sformatf("boot image %0s loaded; waiting for Sv39 checks", nbf_file),
              UVM_LOW)
  endtask

endclass

`endif
