`timescale 1ns/1ps

interface c_phy_bfm_if #(
  parameter int unsigned ENABLE_TIMEOUT            = 100,
  parameter int unsigned BFM_CLK_PERIOD_NS          = 10,
  parameter int unsigned T3_PREPARE_NS              = 38,

  // C-PHY timing expressed in UI. One 16-bit PPI word per Trio
  // represents one seven-symbol group, therefore one word clock is 7 UI.
  parameter int unsigned UI_PER_WORD                = 7,
  parameter int unsigned T3_PREBEGIN_UI             = 7,
  parameter bit          PROGRAMMABLE_PREAMBLE_EN   = 1'b0,
  parameter int unsigned T3_PROGSEQ_UI              = 14,
  parameter int unsigned T3_PREEND_UI               = 7,
  parameter int unsigned T3_POST_UI                 = 7,

  parameter logic [2:0] DEFAULT_SYNC_TYPE           = 3'b011
)(
  input logic bfm_clk
);

  // ------------------------------------------------------------------
  // Static configuration and reset
  // ------------------------------------------------------------------
  logic        rst_n;
  logic [31:0] lane_configuration;
  logic [31:0] mode_selection;

  // The current RX RTL smoke test requires these clocks at the same rate.
  // They remain separate signals so the clocking model can be replaced later.
  wire rxwordclkhs;
  wire cphy_rxwordclkhs;
  wire rxclkesc;

  assign rxwordclkhs      = bfm_clk;
  assign cphy_rxwordclkhs = bfm_clk;
  assign rxclkesc         = bfm_clk;

  // ------------------------------------------------------------------
  // PHY BFM -> RX RTL
  // ------------------------------------------------------------------
  logic        rxactivehs;
  logic        direction;
  logic        stopstate;
  logic        ulpsactivenot;

  logic        rx_lane_sts_reg7;  // Current RTL's SoT indication
  logic        rx_lane_sts_reg4;  // Current RTL's EoT indication

  logic [63:0] rxdatahs;
  logic [3:0]  rxinvalidcodehs;
  logic [3:0]  rxvalidhs;
  logic [3:0]  rxsynchs;
  logic [2:0]  rxsynctypehs0;
  logic [2:0]  rxsynctypehs1;
  logic [2:0]  rxsynctypehs2;
  logic [2:0]  rxsynctypehs3;

  logic        rxcalibrationprehs;
  logic        rxerrcalhs;
  logic [1:0]  rxcalibrationformat;

  logic [3:0]  rxalpvalidhs;
  logic [3:0]  rxalpcode0;
  logic [3:0]  rxalpcode1;
  logic [3:0]  rxalpcode2;
  logic [3:0]  rxalpcode3;
  logic [3:0]  rxalpnibble0;
  logic [3:0]  rxalpnibble1;
  logic [3:0]  rxalpnibble2;
  logic [3:0]  rxalpnibble3;

  logic        rxlpdtesc;
  logic        rxulpsesc;
  logic        rxvalidesc;
  logic [3:0]  rxtriggeresc;
  logic [7:0]  rxdataesc;

  logic        errsoths;
  logic        errsotsynchs;
  logic        erresc;
  logic        errsyncesc;
  logic        errcontrol;
  logic        errcontentionlp0;
  logic        errcontentionlp1;

  // ------------------------------------------------------------------
  // RX RTL -> PHY BFM
  // ------------------------------------------------------------------
  logic        turnrequest;
  logic        turndisable;
  logic        forcerxmode;
  logic        enable;
  logic        rxalp_lpselect;
  logic [1:0]  rxdatawidthhs;
  logic [2:0]  alpwakestate;

  // ------------------------------------------------------------------
  // Timing derived directly from the C-PHY timing description.
  // ------------------------------------------------------------------
  localparam int unsigned T3_ACTIVE_PROGSEQ_UI =
      PROGRAMMABLE_PREAMBLE_EN ? T3_PROGSEQ_UI : 0;

  localparam int unsigned T3_PREAMBLE_UI =
      T3_PREBEGIN_UI + T3_ACTIVE_PROGSEQ_UI + T3_PREEND_UI;

  localparam int unsigned PREAMBLE_WORD_CYCLES = T3_PREAMBLE_UI / UI_PER_WORD;
  localparam int unsigned POST_WORD_CYCLES     = T3_POST_UI / UI_PER_WORD;
  localparam int unsigned PREPARE_WORD_CYCLES  =
      (T3_PREPARE_NS + BFM_CLK_PERIOD_NS - 1) / BFM_CLK_PERIOD_NS;

  typedef enum logic [3:0] {
    BFM_IDLE,
    BFM_WAIT_ENABLE,
    BFM_HS_REQUEST,
    BFM_HS_PREPARE,
    BFM_HS_SETTLE,
    BFM_HS_PREAMBLE,
    BFM_HS_SYNC,
    BFM_HS_DATA,
    BFM_HS_POST,
    BFM_HS_EOT
  } cphy_bfm_state_e;

  typedef enum logic [3:0] {
    BFM_STATUS_OK,
    BFM_STATUS_RESET_ABORT,
    BFM_STATUS_ENABLE_TIMEOUT,
    BFM_STATUS_EMPTY_PACKET,
    BFM_STATUS_BUSY,
    BFM_STATUS_ILLEGAL_STATE,
    BFM_STATUS_BAD_SEGMENT_MASK
  } cphy_bfm_status_e;

  cphy_bfm_state_e  bfm_state;
  cphy_bfm_status_e last_status;

  // Current RTL requires all four 16-bit segments because it uses
  // reduction-AND on RxValidHS/RxSyncHS.
  logic [3:0] active_segment_mask;

  // Independent workarounds let tests isolate each RTL issue.
  // 1: place SoT on the first valid data word and suppress the PPI sync beat.
  // 0: drive RxSyncHS and RxValidHS together to expose the sync priority bug.
  bit rtl_sync_workaround;

  // 1: drive 0 as the current RTL's normal-operation value.
  // 0: drive the specified active-low normal value of 1.
  bit rtl_ulps_polarity_workaround;

  // 1: assert the current RTL's custom EoT status with the final valid word.
  // 0: report EoT after the specification-style Post interval.
  bit rtl_eot_workaround;

  bit pending_sot_on_first_word;

  function automatic logic normal_ulpsactivenot_value();
    return rtl_ulps_polarity_workaround ? 1'b0 : 1'b1;
  endfunction

  task automatic clear_hs_indications();
    rx_lane_sts_reg7 = 1'b0;
    rx_lane_sts_reg4 = 1'b0;
    rxvalidhs        = 4'b0000;
    rxsynchs         = 4'b0000;
    rxinvalidcodehs  = 4'b0000;
    rxdatahs         = 64'b0;
    rxsynctypehs0    = 3'b000;
    rxsynctypehs1    = 3'b000;
    rxsynctypehs2    = 3'b000;
    rxsynctypehs3    = 3'b000;
  endtask

  task automatic drive_unsupported_inactive();
    rxcalibrationprehs  = 1'b0;
    rxcalibrationformat = 2'b00;
    rxerrcalhs           = 1'b0;

    rxalpvalidhs = 4'b0000;
    rxalpcode0    = 4'b0000;
    rxalpcode1    = 4'b0000;
    rxalpcode2    = 4'b0000;
    rxalpcode3    = 4'b0000;
    rxalpnibble0  = 4'b0000;
    rxalpnibble1  = 4'b0000;
    rxalpnibble2  = 4'b0000;
    rxalpnibble3  = 4'b0000;

    rxlpdtesc    = 1'b0;
    rxulpsesc    = 1'b0;
    rxvalidesc   = 1'b0;
    rxtriggeresc = 4'b0000;
    rxdataesc    = 8'b0;

    errsoths         = 1'b0;
    errsotsynchs     = 1'b0;
    erresc           = 1'b0;
    errsyncesc       = 1'b0;
    errcontrol       = 1'b0;
    errcontentionlp0 = 1'b0;
    errcontentionlp1 = 1'b0;
  endtask

  task automatic drive_idle();
    bfm_state                = BFM_IDLE;
    pending_sot_on_first_word = 1'b0;
    direction                = 1'b1;
    stopstate                = 1'b1;
    rxactivehs               = 1'b0;
    ulpsactivenot            = normal_ulpsactivenot_value();
    clear_hs_indications();
    drive_unsupported_inactive();
  endtask

  task automatic wait_for_rx_enable(
    output bit          enable_seen,
    input  int unsigned timeout_cycles = ENABLE_TIMEOUT
  );
    enable_seen = 1'b0;
    bfm_state   = BFM_WAIT_ENABLE;

    for (int unsigned cycle = 0; cycle < timeout_cycles; cycle++) begin
      if (rst_n !== 1'b1) begin
        last_status = BFM_STATUS_RESET_ABORT;
        return;
      end

      if (enable === 1'b1) begin
        enable_seen = 1'b1;
        return;
      end

      @(negedge bfm_clk);
    end

    last_status = BFM_STATUS_ENABLE_TIMEOUT;
    $error("C-PHY BFM: RX enable timeout after %0d cycles", timeout_cycles);
  endtask

  task automatic drive_prepare_and_settle(output bit prepared);
    prepared = 1'b0;

    if (bfm_state != BFM_WAIT_ENABLE) begin
      last_status = BFM_STATUS_ILLEGAL_STATE;
      $error("C-PHY BFM: prepare called from state %0d", bfm_state);
      return;
    end

    bfm_state     = BFM_HS_REQUEST;
    direction     = 1'b1;
    stopstate     = 1'b0;
    rxactivehs    = 1'b0;
    ulpsactivenot = normal_ulpsactivenot_value();
    clear_hs_indications();

    // TX/RX Prepare and Settle are analog states below the PPI boundary.
    // Convert the selected legal t3-PREPARE time to whole PPI word clocks.
    bfm_state = BFM_HS_PREPARE;
    repeat (PREPARE_WORD_CYCLES)
      begin
      @(negedge bfm_clk);
      if (rst_n !== 1'b1)
       begin
        last_status = BFM_STATUS_RESET_ABORT;
        return;
      end
    end

    bfm_state = BFM_HS_SETTLE;
    prepared  = 1'b1;
  endtask

  task automatic drive_normal_preamble(output bit preamble_done);
    preamble_done = 1'b0;

    if (bfm_state != BFM_HS_SETTLE)
    begin
      last_status = BFM_STATUS_ILLEGAL_STATE;
      $error("C-PHY BFM: preamble called from state %0d", bfm_state);
      return;
    end

    bfm_state     = BFM_HS_PREAMBLE;
    direction     = 1'b1;
    stopstate     = 1'b0;
    rxactivehs    = 1'b0;
    ulpsactivenot = normal_ulpsactivenot_value();
    clear_hs_indications();

    // Physical PREBEGIN/PROGSEQ/PREEND symbols are consumed by the PHY.
    // The protocol controller sees only this elapsed PPI word-clock time.
    repeat (PREAMBLE_WORD_CYCLES)
    begin
      @(negedge bfm_clk);
      if (rst_n !== 1'b1)
      begin
        last_status = BFM_STATUS_RESET_ABORT;
        return;
      end
    end

    preamble_done = 1'b1;
  endtask

  task automatic start_hs(output bit started);
    bit enable_seen;
    bit prepared;
    bit preamble_done;

    started     = 1'b0;
    last_status = BFM_STATUS_OK;

    if (rst_n !== 1'b1)
    begin
      last_status = BFM_STATUS_RESET_ABORT;
      $error("C-PHY BFM: HS start requested during reset");
      return;
    end

    if (bfm_state != BFM_IDLE)
    begin
      last_status = BFM_STATUS_BUSY;
      $error("C-PHY BFM: HS start requested while state=%0d", bfm_state);
      return;
    end

    wait_for_rx_enable(enable_seen);
    if (!enable_seen)
      return;

    drive_prepare_and_settle(prepared);
    if (!prepared)
      return;

    drive_normal_preamble(preamble_done);
    if (!preamble_done)
      return;

    started = 1'b1;
  endtask


  task automatic drive_rtl_inter_header_sync(
  input logic [2:0] sync_type,
  input logic [3:0] segment_mask
);

  if (rst_n !== 1'b1) begin
    last_status = BFM_STATUS_RESET_ABORT;
    $error("C-PHY BFM: inter-header Sync requested during reset");
    return;
  end

  if (bfm_state != BFM_HS_DATA) begin
    last_status = BFM_STATUS_ILLEGAL_STATE;
    $error(
      "C-PHY BFM: inter-header Sync requested from state=%0d",
      bfm_state
    );
    return;
  end

  if (segment_mask == 4'b0000) begin
    last_status = BFM_STATUS_ILLEGAL_STATE;
    $error("C-PHY BFM: inter-header Sync has empty segment mask");
    return;
  end

  bfm_state = BFM_HS_SYNC;

  // Remain inside the current HS burst.
  stopstate  = 1'b0;
  direction  = 1'b1;
  rxactivehs = 1'b1;

  // This is not another SoT or EoT.
  rx_lane_sts_reg7 = 1'b0;
  rx_lane_sts_reg4 = 1'b0;

  // Important RTL-specific behavior:
  // rxdatahs must not be selected by lane_merging during Sync.
  rxdatahs        = 64'h0;
  rxvalidhs       = 4'h0;
  rxsynchs        = segment_mask;
  rxinvalidcodehs = 4'h0;

  rxsynctypehs0 = sync_type;
  rxsynctypehs1 = sync_type;
  rxsynctypehs2 = sync_type;
  rxsynctypehs3 = sync_type;

  // Hold the Sync indication for one complete RX word-clock beat.
  @(negedge bfm_clk);

  // Remove Sync before Header 2 is driven.
   rxsynchs = 4'h0;

   rxsynctypehs0 = 3'b000;
   rxsynctypehs1 = 3'b000;
   rxsynctypehs2 = 3'b000;
   rxsynctypehs3 = 3'b000;

   bfm_state  = BFM_HS_DATA;
   last_status = BFM_STATUS_OK;

  endtask
  task automatic drive_sync(
    input logic [2:0] sync_type   = DEFAULT_SYNC_TYPE,
    input bit         initial_sync = 1'b1,
    input logic [3:0] segment_mask = 4'b1111
  );
    if (segment_mask == 4'b0000)
    begin
      last_status = BFM_STATUS_BAD_SEGMENT_MASK;
      $error("C-PHY BFM: zero Sync segment mask");
      return;
    end

    if (initial_sync && (bfm_state != BFM_HS_PREAMBLE))
      begin
      last_status = BFM_STATUS_ILLEGAL_STATE;
      $error("C-PHY BFM: initial Sync called from state %0d", bfm_state);
      return;
    end

    if (!initial_sync && (bfm_state != BFM_HS_DATA))
    begin
      last_status = BFM_STATUS_ILLEGAL_STATE;
      $error("C-PHY BFM: additional Sync called from state %0d", bfm_state);
      return;
    end

    // An additional Sync must not truncate the preceding data word.
    if (!initial_sync)
      @(negedge bfm_clk);

    if (rst_n !== 1'b1)
    begin
      last_status = BFM_STATUS_RESET_ABORT;
      return;
    end

    bfm_state     = BFM_HS_SYNC;
    direction     = 1'b1;
    ulpsactivenot = normal_ulpsactivenot_value();
    rx_lane_sts_reg4 = 1'b0;
    rxinvalidcodehs  = 4'b0000;
    rxdatahs          = 64'b0;

    if (rtl_sync_workaround)
    begin
      // Current RTL cannot accept its SoT and Sync indications as a clean
      // PPI Sync beat. Defer SoT until the first valid data word.
      rxactivehs                = 1'b0;
      stopstate                 = 1'b0;
      rx_lane_sts_reg7          = 1'b0;
      rxvalidhs                 = 4'b0000;
      rxsynchs                  = 4'b0000;
      rxsynctypehs0             = 3'b000;
      rxsynctypehs1             = 3'b000;
      rxsynctypehs2             = 3'b000;
      rxsynctypehs3             = 3'b000;
      pending_sot_on_first_word = initial_sync;
    end
    else
    begin
      // Spec-facing stimulus used to reproduce the RTL priority conflict.
      rxactivehs        = 1'b1;
      rx_lane_sts_reg7  = initial_sync;
      rxvalidhs         = segment_mask;
      rxsynchs          = segment_mask;
      rxsynctypehs0     = sync_type;
      rxsynctypehs1     = sync_type;
      rxsynctypehs2     = sync_type;
      rxsynctypehs3     = sync_type;
    end
  endtask

  task automatic drive_hs_word(
    input logic [63:0] data_word,
    input bit          last_word = 1'b0,
    input logic [3:0]  segment_mask = 4'b1111
  );
    if (segment_mask == 4'b0000) begin
      last_status = BFM_STATUS_BAD_SEGMENT_MASK;
      $error("C-PHY BFM: zero data segment mask");
      return;
    end

    if (!((bfm_state == BFM_HS_SYNC) ||
          (bfm_state == BFM_HS_DATA))) begin
      last_status = BFM_STATUS_ILLEGAL_STATE;
      $error("C-PHY BFM: HS data called from state %0d", bfm_state);
      return;
    end

    // Hold the previous Sync/data indication for one complete sample cycle.
    @(negedge bfm_clk);

    if (rst_n !== 1'b1) begin
      last_status = BFM_STATUS_RESET_ABORT;
      return;
    end

    bfm_state     = BFM_HS_DATA;
    direction     = 1'b1;
    stopstate     = 1'b0;
    ulpsactivenot = normal_ulpsactivenot_value();
    rxactivehs    = 1'b1;

    rx_lane_sts_reg7 = pending_sot_on_first_word;
    rx_lane_sts_reg4 = last_word && rtl_eot_workaround;
    pending_sot_on_first_word = 1'b0;

    rxsynchs         = 4'b0000;
    rxvalidhs        = segment_mask;
    rxdatahs         = data_word;
    rxinvalidcodehs  = 4'b0000;
    rxsynctypehs0    = 3'b000;
    rxsynctypehs1    = 3'b000;
    rxsynctypehs2    = 3'b000;
    rxsynctypehs3    = 3'b000;
  endtask

  task automatic drive_post_and_eot();
    if (bfm_state != BFM_HS_DATA) begin
      last_status = BFM_STATUS_ILLEGAL_STATE;
      $error("C-PHY BFM: Post/EoT called from state %0d", bfm_state);
      return;
    end

    // Preserve the final data word for one complete sampling cycle.
    @(negedge bfm_clk);
    if (rst_n !== 1'b1) begin
      last_status = BFM_STATUS_RESET_ABORT;
      return;
    end

    bfm_state          = BFM_HS_POST;
    direction          = 1'b1;
    stopstate          = 1'b0;
    ulpsactivenot      = normal_ulpsactivenot_value();
    // Post symbols are below the controller-facing data boundary. Keeping
    // RxActiveHS low also prevents the current RTL's FIFO write enable
    // (which incorrectly follows RxActiveHS alone) from inserting zero words.
    rxactivehs         = 1'b0;
    rx_lane_sts_reg7   = 1'b0;
    rx_lane_sts_reg4   = 1'b0;
    rxvalidhs          = 4'b0000;
    rxsynchs           = 4'b0000;
    rxdatahs           = 64'b0;
    rxinvalidcodehs    = 4'b0000;
    rxsynctypehs0      = 3'b000;
    rxsynctypehs1      = 3'b000;
    rxsynctypehs2      = 3'b000;
    rxsynctypehs3      = 3'b000;

    // Physical Post is a sequence of value-4 symbols below the PPI data bus.
    repeat (POST_WORD_CYCLES) begin
      @(negedge bfm_clk);
      if (rst_n !== 1'b1) begin
        last_status = BFM_STATUS_RESET_ABORT;
        return;
      end
    end

    bfm_state        = BFM_HS_EOT;
    rxactivehs       = 1'b0;
    rx_lane_sts_reg4 = !rtl_eot_workaround;

    // Hold EoT for one complete receiver sample cycle.
    @(negedge bfm_clk);
    if (rst_n !== 1'b1) begin
      last_status = BFM_STATUS_RESET_ABORT;
      return;
    end

    drive_idle();
  endtask

  task automatic finish_without_eot();
    if (bfm_state != BFM_HS_DATA) begin
      last_status = BFM_STATUS_ILLEGAL_STATE;
      $error("C-PHY BFM: missing-EoT stimulus called from state %0d", bfm_state);
      return;
    end

    // Negative-test behavior: stop supplying words but deliberately leave
    // the receiver inside the HS burst without Post, EoT, or Stop state.
    @(negedge bfm_clk);
    rx_lane_sts_reg7 = 1'b0;
    rx_lane_sts_reg4 = 1'b0;
    rxvalidhs        = 4'b0000;
    rxsynchs         = 4'b0000;
    rxdatahs         = 64'b0;
    rxactivehs       = 1'b1;
    stopstate        = 1'b0;
    bfm_state        = BFM_HS_DATA;
  endtask

  task automatic force_idle();
    drive_idle();
  endtask

 task automatic transfer_1_packet(
  input  logic [63:0] packet_words[$],
  input  logic [2:0]  send_sync_type,
  input  bit          send_eot,
  output bit          completed
);
  bit started;
  bit compl;

  completed   = 1'b0;
  compl       = 1'b0;
  last_status = BFM_STATUS_OK;

  if (packet_words.size() == 0) begin
    last_status = BFM_STATUS_EMPTY_PACKET;
    $error("C-PHY BFM: empty packet queue");
    return;
  end

  if (rst_n !== 1'b1) begin
    last_status = BFM_STATUS_RESET_ABORT;
    $error("C-PHY BFM: packet requested during reset");
    return;
  end

  if (bfm_state != BFM_IDLE) begin
    last_status = BFM_STATUS_BUSY;
    $error("C-PHY BFM: packet requested while state=%0d", bfm_state);
    return;
  end

  fork
    begin : packet_body
      start_hs(started);

      if (!started)
        disable packet_body;

      drive_sync(send_sync_type, 1'b1, active_segment_mask);

      if (last_status != BFM_STATUS_OK)
        disable packet_body;

      foreach (packet_words[index]) begin
        drive_hs_word(
          packet_words[index],
          send_eot && (index == packet_words.size()-1),
          active_segment_mask
        );

        if (last_status != BFM_STATUS_OK)
          disable packet_body;
      end

      if (send_eot)
        drive_post_and_eot();
      else
        finish_without_eot();

      if (last_status == BFM_STATUS_OK)
        compl = 1'b1;
    end

    begin : asynchronous_reset_watcher
      @(negedge rst_n);
      last_status = BFM_STATUS_RESET_ABORT;
    end
  join_any

  // Terminates whichever forked process is still running.
  disable fork;

  completed = compl;

  if (!completed)
    drive_idle();

endtask

  // ------------------------------------------------------------------
  // Initialization and configuration checks
  // ------------------------------------------------------------------
  initial begin
    if (UI_PER_WORD != 7)
      $fatal(1, "C-PHY BFM: this PPI model requires UI_PER_WORD=7");

    if ((T3_PREBEGIN_UI < 7) || (T3_PREBEGIN_UI > 448) ||
        ((T3_PREBEGIN_UI % 7) != 0))
      $fatal(1, "C-PHY BFM: T3_PREBEGIN_UI must be 7..448 in steps of 7 UI");

    if (PROGRAMMABLE_PREAMBLE_EN && (T3_PROGSEQ_UI != 14))
      $fatal(1, "C-PHY BFM: enabled programmable preamble sequence must be 14 UI");

    if (T3_PREEND_UI != 7)
      $fatal(1, "C-PHY BFM: T3_PREEND_UI must be 7 UI");

    if ((T3_POST_UI < 7) || (T3_POST_UI > 224) ||
        ((T3_POST_UI % 7) != 0))
      $fatal(1, "C-PHY BFM: T3_POST_UI must be 7..224 in steps of 7 UI");

    if (BFM_CLK_PERIOD_NS == 0)
      $fatal(1, "C-PHY BFM: BFM_CLK_PERIOD_NS must be non-zero");

    if ((T3_PREPARE_NS < 38) || (T3_PREPARE_NS > 95))
      $fatal(1, "C-PHY BFM: T3_PREPARE_NS must be within 38..95 ns");

    lane_configuration            = 32'h0000_0002;
    mode_selection                = 32'h0000_0000;
    active_segment_mask           = 4'b1111;
    rtl_sync_workaround           = 1'b1;
    rtl_ulps_polarity_workaround  = 1'b1;
    rtl_eot_workaround            = 1'b1;
    last_status                   = BFM_STATUS_OK;
    drive_idle();
  end

  // Immediate asynchronous response when reset is asserted outside a task.
  always @(negedge rst_n)
    drive_idle();

  // In spec-facing mode, Sync and Valid are deliberately simultaneous.
  always @(posedge rxwordclkhs) begin
    if ((rst_n === 1'b1) && !rtl_sync_workaround && (|rxsynchs)) begin
      assert ((rxvalidhs & rxsynchs) == rxsynchs)
      else $error("C-PHY BFM: Sync asserted without matching Valid segments");
    end
  end

endinterface
