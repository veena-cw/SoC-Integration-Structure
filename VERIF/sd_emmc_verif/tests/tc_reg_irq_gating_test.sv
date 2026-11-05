// ============================================================================
// tc_reg_irq_gating.sv              Plan ID: COMMON-F-016
//
// Goal : run reg_irq_gating_vseq. No card needed.
// Flow : the ref model does not predict Force Event or enable gating, so the
//        AXI-Lite read check is off; the vseq checks 0x30 and the pin itself.
// ============================================================================
class tc_reg_irq_gating_test extends base_test;
  `uvm_component_utils(tc_reg_irq_gating_test)

  function new(string name = "tc_reg_irq_gating_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.sb.check_axi_lite = 0;
  endfunction

  task main_phase(uvm_phase phase);
    reg_irq_gating_vseq seq;
    phase.raise_objection(this);
    seq = reg_irq_gating_vseq::type_id::create("seq");
    seq.start(env.vseqr);
    phase.drop_objection(this);
  endtask
endclass

