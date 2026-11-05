// ============================================================================
// tc_bfm_err_inject_test.sv        (place in tests/)
//
// Goal : run bfm_err_inject_vseq (BFM response error-injection knobs seen through the DUT).
// Flow : scoreboard checks off (the ref model assumes a healthy card and would flag every
//        injected error), vseq self-checks; started on env.vseqr in main_phase.
// ============================================================================
`ifndef TC_BFM_ERR_INJECT_TEST_SV
`define TC_BFM_ERR_INJECT_TEST_SV

class tc_bfm_err_inject_test extends base_test;
  `uvm_component_utils(tc_bfm_err_inject_test)

  function new(string name = "tc_bfm_err_inject_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.sb.check_axi_lite    = 1'b0;
    env.sb.check_sd_emmc     = 1'b0;
    env.sb.mask_status_reads = 1'b1;
  endfunction

  virtual task main_phase(uvm_phase phase);
    bfm_err_inject_vseq vseq = bfm_err_inject_vseq::type_id::create("vseq");
    phase.raise_objection(this, "tc_bfm_err_inject_test");
    vseq.start(env.vseqr);
    #100ns;
    phase.drop_objection(this, "tc_bfm_err_inject_test");
  endtask
endclass : tc_bfm_err_inject_test

`endif // TC_BFM_ERR_INJECT_TEST_SV
