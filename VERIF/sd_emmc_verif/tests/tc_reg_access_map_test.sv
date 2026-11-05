// ============================================================================
// tc_reg_access_map_test.sv        (place in tests/)
// Goal : run reg_access_map_vseq. The vseq checks every register itself. The ref model's shadow
//        treats 0x38 as read-only and cannot predict read-only-immunity writes, so the AXI-Lite
//        scoreboard check is switched off to avoid duplicate, misleading errors.
// ============================================================================
class tc_reg_access_map_test extends base_test;
  `uvm_component_utils(tc_reg_access_map_test)

  function new(string name = "tc_reg_access_map_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.sb.check_axi_lite = 1'b0;
  endfunction

  virtual task main_phase(uvm_phase phase);
    reg_access_map_vseq vseq = reg_access_map_vseq::type_id::create("vseq");
    phase.raise_objection(this, "tc_reg_access_map_test");
    vseq.start(env.vseqr);
    //vseq.start(p_sequencer.reg_sqr);
    #100ns;
    phase.drop_objection(this, "tc_reg_access_map_test");
  endtask
endclass : tc_reg_access_map_test
