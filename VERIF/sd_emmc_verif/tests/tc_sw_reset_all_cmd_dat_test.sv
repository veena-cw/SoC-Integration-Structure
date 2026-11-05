`ifndef TC_SW_RESET_ALL_CMD_DAT_TEST_SV
`define TC_SW_RESET_ALL_CMD_DAT_TEST_SV

`include "base_test.sv"
`include "sw_reset_all_cmd_dat_vseq.sv"

//------------------------------------------------------------------------------
// Software Reset For All / CMD line / DAT line (register 0x2F).
//
// Self-checking through Present State and register read-back, so the AXI-Lite
// and SD scoreboard comparisons are switched off for this test:
//   AXI-Lite : the ref model stores every write as plain register content. It
//              does not know that the reset bits self-clear, that Reset All
//              restores defaults, or what the inhibit bits should read.
//   SD       : the BFM answers CMD17 with R1 (card not in Transfer state) and
//              stays silent for CMD13 on purpose; the ref model does not model
//              either response.
// The queues are emptied at the end so check_phase has nothing to report.
//------------------------------------------------------------------------------
class tc_sw_reset_all_cmd_dat_test extends base_test;

  `uvm_component_utils(tc_sw_reset_all_cmd_dat_test)

  function new(string name = "tc_sw_reset_all_cmd_dat_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);

    if (env != null && env.sb != null) begin
      env.sb.check_axi_lite = 1'b0;
      env.sb.check_sd_emmc  = 1'b0;
      `uvm_info("TEST", "Disabled check_axi_lite and check_sd_emmc for the software reset test", UVM_LOW)
    end
  endfunction

  virtual task main_phase(uvm_phase phase);
    sw_reset_all_cmd_dat_vseq swrst_vseq;

    phase.raise_objection(this);

    `uvm_info(get_type_name(), "Starting Software Reset (All / CMD / DAT) Test", UVM_LOW)

    swrst_vseq = sw_reset_all_cmd_dat_vseq::type_id::create("swrst_vseq");

    // >>> Use the SAME virtual-interface handle assignment that
    // >>> tc_reg_lockout_dat_cmd_inhibit_test uses for lockout_vseq.vif
   swrst_vseq.vif = sd_emmc_tb_pkg::sd_emmc_vif;
   swrst_vseq.poll_tries = 20;                       // 20 x 200 ns = 40 us window
    if ($test$plusargs("FULL_WORD"))
    swrst_vseq.use_byte_strobe = 0;                  // full-word write form

    if (env.axi_lite_agt != null && env.axi_lite_agt.seqr != null) begin
      swrst_vseq.start(env.axi_lite_agt.seqr);
    end else if (env.vseqr != null && env.vseqr.axi_lite_sqr != null) begin
      swrst_vseq.start(env.vseqr.axi_lite_sqr);
    end else begin
      `uvm_fatal("TEST_RUN_ERR", "No valid AXI-Lite Sequencer handle found in Environment!")
    end

    #1000ns;

    env.sb.axi_lite_actual_q.delete();
    env.sb.axi_lite_expected_q.delete();
    env.sb.sd_emmc_actual_q.delete();
    env.sb.sd_emmc_expected_q.delete();

    phase.drop_objection(this);
  endtask : main_phase

endclass : tc_sw_reset_all_cmd_dat_test

`endif

