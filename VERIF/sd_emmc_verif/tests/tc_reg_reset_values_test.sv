// ============================================================================
// tc_reg_reset_values.sv            Plan ID: COMMON-F-014
//
// Goal : run reg_reset_values_vseq straight after the power-on reset.
// Flow : no BFM needed. mask_status_reads covers 0x24, the vseq checks every
//        value against the spec itself, so the AXI-Lite read check is off.
// ============================================================================
class tc_reg_reset_values_test extends base_test;
  `uvm_component_utils(tc_reg_reset_values_test)

  function new(string name = "tc_reg_reset_values_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.sb.check_axi_lite     = 0;
    env.sb.mask_status_reads  = 1;
  endfunction

  task main_phase(uvm_phase phase);
    reg_reset_values_vseq seq;
    phase.raise_objection(this);
    seq = reg_reset_values_vseq::type_id::create("seq");
    seq.start(env.vseqr);
    phase.drop_objection(this);
  endtask
endclass

