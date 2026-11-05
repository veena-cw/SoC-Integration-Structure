// ============================================================================
// tc_bfm_cmd_legality_test.sv        (place in tests/)
//
// Goal : run bfm_cmd_legality_vseq (command legality per card state, SD + a few eMMC cases).
// Flow : scoreboard checks off (illegal commands and the eMMC personality are outside the
//        ref model), vseq self-checks; started on env.vseqr in main_phase.
// ============================================================================
`ifndef TC_BFM_CMD_LEGALITY_TEST_SV
`define TC_BFM_CMD_LEGALITY_TEST_SV

class tc_bfm_cmd_legality_test extends base_test;
  `uvm_component_utils(tc_bfm_cmd_legality_test)

  function new(string name = "tc_bfm_cmd_legality_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.sb.check_axi_lite    = 1'b0;
    env.sb.check_sd_emmc     = 1'b0;
    env.sb.mask_status_reads = 1'b1;
  endfunction

  virtual task main_phase(uvm_phase phase);
    bfm_cmd_legality_vseq vseq = bfm_cmd_legality_vseq::type_id::create("vseq");
    phase.raise_objection(this, "tc_bfm_cmd_legality_test");
    vseq.start(env.vseqr);
    #100ns;
    phase.drop_objection(this, "tc_bfm_cmd_legality_test");
  endtask
endclass : tc_bfm_cmd_legality_test

`endif // TC_BFM_CMD_LEGALITY_TEST_SV
