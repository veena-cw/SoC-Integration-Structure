// ============================================================================
// tc_cmd_error_set_test.sv          Plan ID: COMMON-F-018 (and F-013)
//
// Goal : run cmd_error_set_vseq with the card BFM enabled (the vseq turns it on and drives its fault knobs).
// Flow : both scoreboard checks are switched off in connect_phase: the ref model behaves like a
//        healthy card, so it cannot predict timeouts, delayed or corrupted responses, and it reads
//        0x30 as 0. The vseq checks every status word against the spec itself.
// ============================================================================
class tc_cmd_error_set_test extends base_test;
  `uvm_component_utils(tc_cmd_error_set_test)

  function new(string name = "tc_cmd_error_set_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.sb.check_axi_lite = 0;
    env.sb.check_sd_emmc  = 0;
  endfunction

  task main_phase(uvm_phase phase);
    cmd_error_set_vseq seq;
    phase.raise_objection(this);
    seq = cmd_error_set_vseq::type_id::create("seq");
    seq.start(env.vseqr);
    phase.drop_objection(this);
  endtask
endclass
