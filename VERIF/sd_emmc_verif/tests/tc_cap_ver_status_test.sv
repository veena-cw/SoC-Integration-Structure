// ============================================================================
// tc_cap_ver_status_test.sv         Plan ID: COMMON-F-017
//
// Goal : run cap_ver_status_vseq. Register-only, no card.
// Flow : AXI-Lite scoreboard check stays ON. If it reports mismatches on 0x40/0x44/0xFC,
//        that is a ref-model gap for the identification constants, not an RTL bug.
// ============================================================================
class tc_cap_ver_status_test extends base_test;
  `uvm_component_utils(tc_cap_ver_status_test)

  function new(string name = "tc_cap_ver_status_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task main_phase(uvm_phase phase);
    cap_ver_status_vseq seq;
    phase.raise_objection(this);
    seq = cap_ver_status_vseq::type_id::create("seq");
    seq.start(env.vseqr);
    phase.drop_objection(this);
  endtask
endclass
