// ============================================================================
// bfm_init_vseq.sv        (place in sequences/)
//
// Goal : verify the card BFM through the DUT during the normal identification flow,
//        for an SD card (emmc=0) or an eMMC device (emmc=1): every command is sent by
//        the DUT, the BFM decodes it (CRC7 / framing / state) and answers, and the DUT
//        response registers are compared with what the BFM must return.
// Flow : bfm_setup -> CMD0 -> (SD: CMD8, ACMD41 loop | eMMC: CMD1 loop) -> CMD2 -> CMD3
//        -> CMD9/CMD10 -> CMD13 -> CMD7 (R1b) -> CMD16 -> bus width switch.
// IDs  : (provisional, confirm with the v4 schedule)
//        SD-F-001/002/003/006, VIP-F-001 (init), VIP-F-002 (response formats),
//        VIP-F-004 (CID/CSD/OCR/ACMD41), EMMC-F init.
// Tags : [SPEC]  response content the SD/eMMC spec requires
//        [BFM]   card-model behaviour (INIT_POLLS, state, bus width) - not DUT behaviour
// If a [SPEC] check fails, read the SD_MON / SD_BFM lines of that command first to decide
// whether the DUT or the BFM is wrong.
// ============================================================================
`ifndef BFM_INIT_VSEQ_SV
`define BFM_INIT_VSEQ_SV

class bfm_init_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(bfm_init_vseq)

  bit emmc = 1'b0;                                   // 0: SD flow, 1: eMMC flow

  // Mirrors of sd_card_bfm.sv parameters / constants
  localparam int unsigned INIT_POLLS = 3;            // busy polls before ready
  localparam bit [15:0]   RCA_SD     = 16'h1234;     // BFM RCA_SD
  localparam bit [15:0]   RCA_EMMC   = 16'h0001;     // assigned by the host in the eMMC flow
  localparam bit [31:0]   OCR_WINDOW = 32'h00FF_8000;

  function new(string name = "bfm_init_vseq");
    super.new(name);
  endfunction

  virtual task body();
    `uvm_info("BFM_INIT", $sformatf("=== bfm_init_vseq start (%s) ===", emmc ? "eMMC" : "SD"), UVM_LOW)
    if (emmc) run_emmc(); else run_sd();
    `uvm_info("BFM_INIT", $sformatf("=== bfm_init_vseq done, failures=%0d ===", n_errors), UVM_LOW)
  endtask

  // --------------------------------------------------------------------------
  // SD identification flow
  // --------------------------------------------------------------------------
  task run_sd();
    bit [31:0]   ocr;
    int unsigned polls;

    bfm_setup(.emmc(1'b0), .hc(1'b1));
    enable_clocks();

    // S1: CMD0 - card goes to Idle, no response expected.
    do_cmd(6'd0, 32'h0, RESP_NONE, 1'b0);
    if (!last_ok) begin precond($sformatf("S1: CMD0 did not complete, 0x30=0x%08h", last_st)); return; end
    check_val("S1_STATE_IDLE", "BFM", vif.dbg_state, 0);

    // S2: CMD8 - R7 must echo the check pattern 0x1AA. This is the first CRC7 round trip
    //     (DUT command CRC checked by the BFM, BFM response CRC checked by the DUT).
    do_cmd(6'd8, 32'h0000_01AA, RESP_48, 1'b1);
    if (!last_ok) begin
      precond($sformatf("S2: CMD8 failed, 0x30=0x%08h (look at SD_MON crc= and SD_BFM lines)", last_st));
      return;
    end
    check_val("S2_R7_ECHO", "SPEC", last_resp[0], 32'h0000_01AA);

    // S3: CMD55 must report APP_CMD (bit 5); ACMD41 with arg 0 is the OCR inquiry (no init).
    do_cmd(6'd55, 32'h0, RESP_48, 1'b1);
    check_val("S3_APP_CMD_BIT", "SPEC", last_resp[0], 32'h20, 32'h20);
    do_cmd(6'd41, 32'h0, RESP_48, 1'b0);
    check_val("S3_OCR_WINDOW",  "SPEC", last_resp[0], OCR_WINDOW, 32'h00FF_8000);
    check_val("S3_INQUIRY_IDLE", "BFM", vif.dbg_state, 0);

    // S4: ACMD41 loop with HCS=1: busy (bit 31 = 0) for INIT_POLLS polls, then ready with CCS=1.
    acmd41_loop(32'h4000_0000 | OCR_WINDOW, 16'h0, ocr, polls);
    check_val("S4_POLL_COUNT",  "BFM",  polls, INIT_POLLS + 1);
    check_val("S4_OCR_READY",   "SPEC", ocr, 32'h8000_0000, 32'h8000_0000);
    check_val("S4_CCS",         "SPEC", ocr, 32'h4000_0000, 32'h4000_0000);
    check_val("S4_OCR_WINDOW",  "SPEC", ocr, OCR_WINDOW,    32'h00FF_8000);
    check_val("S4_S18A_CLR",    "BFM",  ocr, 32'h0,         32'h0100_0000);
    check_val("S4_STATE_READY", "BFM",  vif.dbg_state, 1);

    // S5: CMD2 -> R2 carrying the CID (response registers hold bits [127:8]).
    do_cmd(6'd2, 32'h0, RESP_136, 1'b0);
    check_r2("S5_CID", vif.dbg_cid);
    check_val("S5_STATE_IDENT", "BFM", vif.dbg_state, 2);

    // S6: CMD3 -> R6: RCA in [31:16]; status shows the state before the transition (Ident = 2).
    do_cmd(6'd3, 32'h0, RESP_48, 1'b1);
    check_val("S6_RCA",           "SPEC", last_resp[0][31:16], RCA_SD);
    check_val("S6_R6_STATE",      "SPEC", last_resp[0][12:9],  2);
    check_val("S6_STATE_STBY",    "BFM",  vif.dbg_state,       3);

    // S7/S8: CMD9 -> CSD, CMD10 -> CID (both R2, addressed by RCA, Stand-by state).
    do_cmd(6'd9,  {RCA_SD, 16'h0}, RESP_136, 1'b0);
    check_r2("S7_CSD", vif.dbg_csd);
    do_cmd(6'd10, {RCA_SD, 16'h0}, RESP_136, 1'b0);
    check_r2("S8_CID_VIA_CMD10", vif.dbg_cid);

    // S9: CMD13 in Stand-by: R1 state field = 3.
    do_cmd(6'd13, {RCA_SD, 16'h0}, RESP_48, 1'b1);
    check_val("S9_R1_STATE_STBY", "SPEC", last_resp[0][12:9], 3);

    // S10: CMD7 select -> R1b (busy on DAT0 for cfg_busy clocks), card moves to Transfer.
    do_cmd(6'd7, {RCA_SD, 16'h0}, RESP_48B, 1'b1);
    if (!last_ok) begin precond($sformatf("S10: CMD7 (R1b) failed, 0x30=0x%08h", last_st)); return; end
    check_val("S10_R1B_STATE_STBY", "SPEC", last_resp[0][12:9], 3);
    check_val("S10_STATE_TRAN",     "BFM",  vif.dbg_state,      4);

    // S11: CMD13 in Transfer: state 4, READY_FOR_DATA (bit 8) = 1.
    do_cmd(6'd13, {RCA_SD, 16'h0}, RESP_48, 1'b1);
    check_val("S11_R1_STATE_TRAN", "SPEC", last_resp[0][12:9], 4);
    check_val("S11_READY_FOR_DATA","SPEC", last_resp[0], 32'h100, 32'h100);

    // S12: CMD16 with 512 must not report any error bit (31:19).
    do_cmd(6'd16, 32'd512, RESP_48, 1'b1);
    check_val("S12_NO_ERR", "SPEC", last_resp[0], 32'h0, 32'hFFF8_0000);

    // S13: ACMD6 switches the bus width: 4-bit then back to 1-bit.
    do_cmd(6'd55, {RCA_SD, 16'h0}, RESP_48, 1'b1);
    do_cmd(6'd6,  32'h2, RESP_48, 1'b1);
    check_val("S13_BUS_4BIT", "BFM", vif.dbg_bw, 4);
    do_cmd(6'd55, {RCA_SD, 16'h0}, RESP_48, 1'b1);
    do_cmd(6'd6,  32'h0, RESP_48, 1'b1);
    check_val("S13_BUS_1BIT", "BFM", vif.dbg_bw, 1);

    // S14: S18A reporting. CMD0 re-inits the card; S18A must only appear when the host asks
    //      (S18R = arg[24]) AND the test enabled cfg_s18a.
    do_cmd(6'd0, 32'h0, RESP_NONE, 1'b0);
    do_cmd(6'd8, 32'h0000_01AA, RESP_48, 1'b1);
    vif.cfg_s18a = 1'b1;
    acmd41_loop(32'h4100_0000 | OCR_WINDOW, 16'h0, ocr, polls);          // HCS=1, S18R=1
    check_val("S14_S18A_SET", "BFM", ocr, 32'h0100_0000, 32'h0100_0000);
    vif.cfg_s18a = 1'b0;

    // S15: standard-capacity card (cfg_hc=0): CCS must be 0 even when the host sets HCS.
    do_cmd(6'd0, 32'h0, RESP_NONE, 1'b0);
    vif.cfg_hc = 1'b0;
    do_cmd(6'd8, 32'h0000_01AA, RESP_48, 1'b1);
    acmd41_loop(32'h4000_0000 | OCR_WINDOW, 16'h0, ocr, polls);
    check_val("S15_CCS_CLR_SDSC", "SPEC", ocr, 32'h0, 32'h4000_0000);
    vif.cfg_hc = 1'b1;
  endtask

  // --------------------------------------------------------------------------
  // eMMC identification flow
  // --------------------------------------------------------------------------
  task run_emmc();
    bit [31:0]   ocr;
    int unsigned polls;

    bfm_setup(.emmc(1'b1), .hc(1'b1));
    enable_clocks();

    // E1: CMD0 -> Idle.
    do_cmd(6'd0, 32'h0, RESP_NONE, 1'b0);
    if (!last_ok) begin precond($sformatf("E1: CMD0 did not complete, 0x30=0x%08h", last_st)); return; end
    check_val("E1_STATE_IDLE", "BFM", vif.dbg_state, 0);

    // E2: CMD8 is SEND_EXT_CSD for eMMC and only legal in Transfer: in Idle it must be ILLEGAL.
    do_cmd(6'd8, 32'h0000_01AA, RESP_48, 1'b1);
    check_val("E2_CMD8_ILLEGAL", "SPEC", last_resp[0], R1_ILLEGAL, R1_ILLEGAL);

    // E3: CMD1 loop (sector mode): ready after INIT_POLLS busy answers, access mode = sector.
    cmd1_loop(32'h40FF_8080, ocr, polls);
    check_val("E3_POLL_COUNT", "BFM",  polls, INIT_POLLS + 1);
    check_val("E3_OCR_READY",  "SPEC", ocr, 32'h8000_0000, 32'h8000_0000);
    check_val("E3_SECTOR_MODE","SPEC", ocr, 32'h4000_0000, 32'h4000_0000);
    check_val("E3_OCR_WINDOW", "SPEC", ocr, 32'h00FF_8080, 32'h00FF_8080);
    check_val("E3_STATE_READY","BFM",  vif.dbg_state, 1);

    // E4: CMD2 -> CID.
    do_cmd(6'd2, 32'h0, RESP_136, 1'b0);
    check_r2("E4_CID", vif.dbg_cid);
    check_val("E4_STATE_IDENT", "BFM", vif.dbg_state, 2);

    // E5: CMD3 - for eMMC the HOST assigns the RCA.
    do_cmd(6'd3, {RCA_EMMC, 16'h0}, RESP_48, 1'b1);
    check_val("E5_RCA_ASSIGNED", "BFM", vif.dbg_rca,   RCA_EMMC);
    check_val("E5_STATE_STBY",   "BFM", vif.dbg_state, 3);

    // E6: CMD9 -> CSD.
    do_cmd(6'd9, {RCA_EMMC, 16'h0}, RESP_136, 1'b0);
    check_r2("E6_CSD", vif.dbg_csd);

    // E7: CMD7 select (R1b) -> Transfer.
    do_cmd(6'd7, {RCA_EMMC, 16'h0}, RESP_48B, 1'b1);
    if (!last_ok) begin precond($sformatf("E7: CMD7 (R1b) failed, 0x30=0x%08h", last_st)); return; end
    check_val("E7_STATE_TRAN", "BFM", vif.dbg_state, 4);

    // E8: CMD6 SWITCH, EXT_CSD[183] BUS_WIDTH (access=write byte: arg[25:24]=11): 4, 8, back to 1.
    do_cmd(6'd6, 32'h03B7_0100, RESP_48B, 1'b1);
    check_val("E8_BUS_4BIT", "BFM", vif.dbg_bw, 4);
    do_cmd(6'd6, 32'h03B7_0200, RESP_48B, 1'b1);
    check_val("E8_BUS_8BIT", "BFM", vif.dbg_bw, 8);
    do_cmd(6'd6, 32'h03B7_0000, RESP_48B, 1'b1);
    check_val("E8_BUS_1BIT", "BFM", vif.dbg_bw, 1);

    // E9: CMD13 in Transfer: state 4.
    do_cmd(6'd13, {RCA_EMMC, 16'h0}, RESP_48, 1'b1);
    check_val("E9_R1_STATE_TRAN", "SPEC", last_resp[0][12:9], 4);
  endtask

endclass : bfm_init_vseq

`endif // BFM_INIT_VSEQ_SV
