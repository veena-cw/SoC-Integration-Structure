// ============================================================================
// bfm_err_inject_vseq.sv        (place in sequences/)
//
// Goal : verify the BFM response-side error-injection knobs, seen through the DUT:
//        each knob must make the DUT raise exactly the matching Command error bit, and
//        the knob must not leak into the next command.
// Flow : bfm_setup -> baseline CMD8 (must pass) -> for each knob: set it, send CMD8, read the
//        error bits in 0x30[31:16], clear the knob, recover the DUT if CMD inhibit is stuck
//        -> final CMD8 (must pass again).
// IDs  : (provisional) VIP-F-006 (error injection), COMMON-F-013/018 (command error bits).
// 0x32 bit order (SD Host spec): 0 timeout, 1 CRC, 2 end bit, 3 index  -> 0x30 bits 16..19.
// Notes: CMD8 is used because it works from Idle (no init needed). The command timeout NCR
//        boundary is covered by tc_cmd_error_set_test (cfg_resp_dly), so it is not repeated.
//        inj_dat_crc / inj_wr_tok belong to the data batch.
// ============================================================================
`ifndef BFM_ERR_INJECT_VSEQ_SV
`define BFM_ERR_INJECT_VSEQ_SV

class bfm_err_inject_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(bfm_err_inject_vseq)

  typedef enum {INJ_NONE, INJ_NO_RESP, INJ_CRC, INJ_IDX, INJ_EB} inj_e;

  function new(string name = "bfm_err_inject_vseq");
    super.new(name);
  endfunction

  // Goal: enable exactly one BFM injection knob (or none). Keeps knobs from stacking.
  task set_inj(inj_e k);
    bfm_clear_inj();
    case (k)
      INJ_NO_RESP: vif.inj_no_resp  = 1'b1;
      INJ_CRC:     vif.inj_resp_crc = 1'b1;
      INJ_IDX:     vif.inj_idx_err  = 1'b1;
      INJ_EB:      vif.inj_eb_err   = 1'b1;
      default: ;
    endcase
  endtask

  // Goal: one knob step. exp_err is the expected bit in 0x30[19:16].
  task run_one(string tag, inj_e k, bit [3:0] exp_err);
    set_inj(k);
    do_cmd(6'd8, 32'h0000_01AA, RESP_48, 1'b1);
    set_inj(INJ_NONE);
    check_val({tag, "_ERR_BIT"}, "SPEC", last_st[19:16], exp_err, exp_err);
    check_val({tag, "_NOT_OK"},  "SPEC", last_ok, 1'b0, 1'b1);     // a failed command must not report success
    recover_if_stuck();                                             // BUG-2 style hang: reset releases it
  endtask

  virtual task body();
    `uvm_info("BFM_INJ", "=== bfm_err_inject_vseq start ===", UVM_LOW)
    bfm_setup(.emmc(1'b0), .hc(1'b1));
    enable_clocks();

    // I0: baseline - with no knob set CMD8 must succeed (proves the CMD8 CRC round trip).
    do_cmd(6'd8, 32'h0000_01AA, RESP_48, 1'b1);
    if (!last_ok) begin
      precond($sformatf("I0: baseline CMD8 failed, 0x30=0x%08h; fix the CMD8 CRC issue first", last_st));
      return;
    end
    check_val("I0_R7_ECHO", "SPEC", last_resp[0], 32'h0000_01AA);

    run_one("I1_NO_RESP", INJ_NO_RESP, 4'b0001);   // command timeout
    run_one("I2_RESP_CRC", INJ_CRC,     4'b0010);  // command CRC error
    run_one("I3_RESP_EB",  INJ_EB,      4'b0100);  // command end-bit error
    run_one("I4_RESP_IDX", INJ_IDX,     4'b1000);  // command index error

    // I5: after all knobs are cleared the card must answer normally again.
    do_cmd(6'd8, 32'h0000_01AA, RESP_48, 1'b1);
    check_val("I5_RECOVERED_OK",  "SPEC", last_ok, 1'b1, 1'b1);
    check_val("I5_R7_ECHO",       "SPEC", last_resp[0], 32'h0000_01AA);

    `uvm_info("BFM_INJ", $sformatf("=== bfm_err_inject_vseq done, failures=%0d ===", n_errors), UVM_LOW)
  endtask

endclass : bfm_err_inject_vseq

`endif // BFM_ERR_INJECT_VSEQ_SV
