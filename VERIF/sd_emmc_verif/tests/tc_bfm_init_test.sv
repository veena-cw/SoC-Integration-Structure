// ============================================================================
// tc_bfm_init_test.sv        (place in tests/)
//
// Goal : two tests that run bfm_init_vseq: SD identification and eMMC identification.
// Flow : connect_phase switches the scoreboard checks off (the ref model behaves like a healthy
//        SD card and cannot predict the eMMC flow, illegal commands or injected errors; the
//        vseq checks everything itself). main_phase starts the vseq on env.vseqr.
// Note : if base_test already raises/drops objections in main_phase, remove the two
//        objection lines here.
// ============================================================================
`ifndef TC_BFM_INIT_TEST_SV
`define TC_BFM_INIT_TEST_SV

class tc_bfm_init_sd_test extends base_test;
  `uvm_component_utils(tc_bfm_init_sd_test)

  function new(string name = "tc_bfm_init_sd_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.sb.check_axi_lite    = 1'b0;
    env.sb.check_sd_emmc     = 1'b0;
    env.sb.mask_status_reads = 1'b1;
  endfunction

  virtual task main_phase(uvm_phase phase);
    bfm_init_vseq vseq = bfm_init_vseq::type_id::create("vseq");
    phase.raise_objection(this, "tc_bfm_init_sd_test");
    vseq.emmc = 1'b0;
    vseq.start(env.vseqr);
    #100ns;
    phase.drop_objection(this, "tc_bfm_init_sd_test");
  endtask
endclass : tc_bfm_init_sd_test


class tc_bfm_init_emmc_test extends base_test;
  `uvm_component_utils(tc_bfm_init_emmc_test)

  function new(string name = "tc_bfm_init_emmc_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.sb.check_axi_lite    = 1'b0;
    env.sb.check_sd_emmc     = 1'b0;
    env.sb.mask_status_reads = 1'b1;
  endfunction

  virtual task main_phase(uvm_phase phase);
    bfm_init_vseq vseq = bfm_init_vseq::type_id::create("vseq");
    phase.raise_objection(this, "tc_bfm_init_emmc_test");
    vseq.emmc = 1'b1;
    vseq.start(env.vseqr);
    #100ns;
    phase.drop_objection(this, "tc_bfm_init_emmc_test");
  endtask
endclass : tc_bfm_init_emmc_test

`endif // TC_BFM_INIT_TEST_SV
