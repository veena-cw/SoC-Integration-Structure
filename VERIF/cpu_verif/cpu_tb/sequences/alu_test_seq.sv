// alu_test_seq.sv
// BP-DV-003: ADD/SUB/AND/OR/XOR/SLT/SLTU with boundary operands.
// 1. Loads the compiled test binary via nbf_load_seq. The image can be
//    selected with +NBF_FILE=..., and defaults to bp_dv_003_alu.nbf.
// The test waits for the scoreboard to observe the program's tohost write;
// the scoreboard decodes that write as pass or fail.

`ifndef ALU_TEST_SEQ_SV
`define ALU_TEST_SEQ_SV

class alu_test_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(alu_test_seq)

  function new(string name = "alu_test_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "bp_dv_003_alu.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_alu = 1'b1;
    load_seq.start(m_sequencer);

    `uvm_info("ALU_SEQ", $sformatf("boot image %0s loaded; waiting for tohost completion", nbf_file), UVM_LOW)
  endtask

endclass

`endif
