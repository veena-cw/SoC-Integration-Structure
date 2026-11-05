// ============================================================================
// bfm_cmd_legality_vseq.sv        (place in sequences/)
//
// Goal : verify that the card BFM accepts a command only in the card states where the spec
//        allows it. An illegal command must be answered with R1 carrying ILLEGAL_COMMAND
//        (bit 22) and must NOT move the card; a legal command must leave bit 22 clear.
// Flow : walk the card through Idle -> Ready -> Ident -> Stand-by -> Transfer. In every state
//        send a few commands that are illegal there, then the legal one that advances.
// IDs  : (provisional) VIP-F-001 / VIP-F-002 (command legality per state).
// Note : illegal commands are sent with a 48-bit response type on purpose, because the BFM
//        answers an illegal CMD2/CMD9 with a 48-bit R1, not an R2.
//        Legal data commands (CMD17/18/24/25) are NOT sent here (data batch).
// ============================================================================
`ifndef BFM_CMD_LEGALITY_VSEQ_SV
`define BFM_CMD_LEGALITY_VSEQ_SV

class bfm_cmd_legality_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(bfm_cmd_legality_vseq)

  localparam bit [15:0] RCA_SD  = 16'h1234;
  localparam bit [31:0] RCA_ARG = {RCA_SD, 16'h0000};
  localparam bit [31:0] OCR_ARG = 32'h40FF_8000;     // HCS=1 + voltage window

  function new(string name = "bfm_cmd_legality_vseq");
    super.new(name);
  endfunction

  // Goal: send one command that must be illegal in the current state (app=1: CMD55 first).
  // Fits the flow: checks R1 bit 22 and that the BFM state did not change.
  task expect_illegal(string tag, bit [5:0] idx, bit [31:0] arg, int exp_state, bit app = 1'b0);
    if (app) do_cmd(6'd55, 32'h0, RESP_48, 1'b1);
    do_cmd(idx, arg, RESP_48, 1'b1);
    if (!last_ok)
      precond($sformatf("%s: command did not complete, 0x30=0x%08h", tag, last_st));
    else begin
      check_val({tag, "_ILL"},   "SPEC", last_resp[0], R1_ILLEGAL, R1_ILLEGAL);
      check_val({tag, "_STATE"}, "BFM",  vif.dbg_state, exp_state);
    end
  endtask

  // Goal: send one R1/R1b command that must be legal; checks bit 22 clear and the new state.
  task expect_legal(string tag, bit [5:0] idx, bit [31:0] arg, int exp_state,
                    bit [1:0] resp = RESP_48, bit app = 1'b0);
    if (app) do_cmd(6'd55, 32'h0, RESP_48, 1'b1);
    do_cmd(idx, arg, resp, 1'b1);
    if (!last_ok)
      precond($sformatf("%s: command did not complete, 0x30=0x%08h", tag, last_st));
    else begin
      check_val({tag, "_ILL_CLR"}, "SPEC", last_resp[0], 32'h0, R1_ILLEGAL);
      check_val({tag, "_STATE"},   "BFM",  vif.dbg_state, exp_state);
    end
  endtask

  // Goal: move the card with a command whose response is R2/R3/R6 (no R1 ILL bit to check).
  task advance(string tag, bit [5:0] idx, bit [31:0] arg, bit [1:0] resp, bit chk, int exp_state);
    do_cmd(idx, arg, resp, chk);
    if (!last_ok) precond($sformatf("%s: command did not complete, 0x30=0x%08h", tag, last_st));
    check_val({tag, "_STATE"}, "BFM", vif.dbg_state, exp_state);
  endtask

  virtual task body();
    bit [31:0]   ocr;
    int unsigned polls;

    `uvm_info("BFM_LEGAL", "=== bfm_cmd_legality_vseq start ===", UVM_LOW)
    bfm_setup(.emmc(1'b0), .hc(1'b1));
    enable_clocks();

    // ---- Idle (0) ---------------------------------------------------------
    advance("L0_CMD0", 6'd0, 32'h0, RESP_NONE, 1'b0, 0);
    expect_illegal("L1_IDLE_CMD2",   6'd2,  32'h0, 0);
    expect_illegal("L1_IDLE_CMD3",   6'd3,  32'h0, 0);
    expect_illegal("L1_IDLE_CMD7",   6'd7,  32'h0, 0);
    expect_illegal("L1_IDLE_CMD9",   6'd9,  32'h0, 0);
    expect_illegal("L1_IDLE_CMD10",  6'd10, 32'h0, 0);
    expect_illegal("L1_IDLE_CMD17",  6'd17, 32'h0, 0);
    expect_illegal("L1_IDLE_CMD24",  6'd24, 32'h0, 0);
    expect_illegal("L1_IDLE_ACMD6",  6'd6,  32'h2, 0, 1'b1);
    expect_illegal("L1_IDLE_ACMD51", 6'd51, 32'h0, 0, 1'b1);

    // ---- Ready (1) --------------------------------------------------------
    do_cmd(6'd8, 32'h0000_01AA, RESP_48, 1'b1);
    acmd41_loop(OCR_ARG, 16'h0, ocr, polls);
    check_val("L2_READY_STATE", "BFM", vif.dbg_state, 1);
    expect_illegal("L2_READY_CMD3",  6'd3,  32'h0, 1);
    expect_illegal("L2_READY_CMD7",  6'd7,  32'h0, 1);
    expect_illegal("L2_READY_CMD9",  6'd9,  32'h0, 1);
    expect_illegal("L2_READY_CMD17", 6'd17, 32'h0, 1);

    // ---- Identification (2) ----------------------------------------------
    advance("L3_CMD2", 6'd2, 32'h0, RESP_136, 1'b0, 2);
    expect_illegal("L3_IDENT_CMD7",  6'd7,  32'h0, 2);
    expect_illegal("L3_IDENT_CMD9",  6'd9,  32'h0, 2);
    expect_illegal("L3_IDENT_CMD17", 6'd17, 32'h0, 2);

    // ---- Stand-by (3) -----------------------------------------------------
    advance("L4_CMD3", 6'd3, 32'h0, RESP_48, 1'b1, 3);
    expect_illegal("L4_STBY_CMD2",   6'd2,  32'h0, 3);
    expect_illegal("L4_STBY_CMD17",  6'd17, 32'h0, 3);
    expect_illegal("L4_STBY_CMD24",  6'd24, 32'h0, 3);
    expect_illegal("L4_STBY_ACMD6",  6'd6,  32'h2, 3, 1'b1);
    advance("L4_STBY_CMD9",  6'd9,  RCA_ARG, RESP_136, 1'b0, 3);
    advance("L4_STBY_CMD10", 6'd10, RCA_ARG, RESP_136, 1'b0, 3);
    expect_legal("L4_STBY_CMD13", 6'd13, RCA_ARG, 3);

    // ---- Transfer (4) -----------------------------------------------------
    expect_legal("L5_CMD7_SELECT", 6'd7, RCA_ARG, 4, RESP_48B);
    expect_illegal("L5_TRAN_CMD2", 6'd2, 32'h0,    4);
    expect_illegal("L5_TRAN_CMD3", 6'd3, 32'h0,    4);
    expect_illegal("L5_TRAN_CMD9", 6'd9, RCA_ARG,  4);
    expect_legal("L5_TRAN_CMD13", 6'd13, RCA_ARG,  4);       // ILL cleared after the illegal ones
    expect_legal("L5_TRAN_CMD16", 6'd16, 32'd512,  4);
    expect_legal("L5_TRAN_CMD23", 6'd23, 32'd1,    4);
    expect_legal("L5_TRAN_ACMD6", 6'd6,  32'h2,    4, RESP_48, 1'b1);
    check_val("L5_BUS_4BIT", "BFM", vif.dbg_bw, 4);
    expect_legal("L5_TRAN_ACMD6_1BIT", 6'd6, 32'h0, 4, RESP_48, 1'b1);
    check_val("L5_BUS_1BIT", "BFM", vif.dbg_bw, 1);

    // CMD7 with a different RCA deselects the card: SD cards send NO response, state -> Stand-by.
    do_cmd(6'd7, 32'h0, RESP_NONE, 1'b0);
    if (!last_ok) precond($sformatf("L6: deselect CMD7 did not complete, 0x30=0x%08h", last_st));
    check_val("L6_DESELECT_STATE", "SPEC", vif.dbg_state, 3);
    expect_legal("L6_RESELECT", 6'd7, RCA_ARG, 4, RESP_48B);

    // ---- eMMC personality: a few state/command checks -----------------------
    vif.cfg_emmc = 1'b1;
    advance("L7_EMMC_CMD0", 6'd0, 32'h0, RESP_NONE, 1'b0, 0);
    expect_illegal("L7_EMMC_IDLE_CMD2", 6'd2, 32'h0, 0);
    expect_illegal("L7_EMMC_IDLE_CMD3", 6'd3, 32'h0, 0);
    expect_illegal("L7_EMMC_IDLE_CMD7", 6'd7, 32'h0, 0);
    expect_illegal("L7_EMMC_IDLE_CMD8", 6'd8, 32'h0000_01AA, 0);
    expect_illegal("L7_EMMC_ACMD41",    6'd41, OCR_ARG, 0, 1'b1);   // ACMD41 does not exist on eMMC
    vif.cfg_emmc = 1'b0;

    `uvm_info("BFM_LEGAL", $sformatf("=== bfm_cmd_legality_vseq done, failures=%0d ===", n_errors), UVM_LOW)
  endtask

endclass : bfm_cmd_legality_vseq

`endif // BFM_CMD_LEGALITY_VSEQ_SV
