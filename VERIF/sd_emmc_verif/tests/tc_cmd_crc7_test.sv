// ============================================================================
// tc_cmd_crc7_test.sv               Plan ID: COMMON-F-010 (CRC-7 half)
//
// Goal : run cmd_crc7_vseq with the card BFM enabled (the vseq turns it on).
// Flow : scoreboard checks stay ON. The vseq compares status against the spec itself.
// ============================================================================
class tc_cmd_crc7_test extends base_test;
  `uvm_component_utils(tc_cmd_crc7_test)

  function new(string name = "tc_cmd_crc7_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task main_phase(uvm_phase phase);
    cmd_crc7_vseq seq;
    phase.raise_objection(this);
    seq = cmd_crc7_vseq::type_id::create("seq");
    seq.start(env.vseqr);
    phase.drop_objection(this);
  endtask
endclass
