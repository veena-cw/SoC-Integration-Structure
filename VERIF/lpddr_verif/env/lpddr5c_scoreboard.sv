`uvm_analysis_imp_decl(_axi_agent)
`uvm_analysis_imp_decl(_apb_agent)
`uvm_analysis_imp_decl(_dfi_agent)
`uvm_analysis_imp_decl(_lp_agent)

//==============================================================================
// lpddr5c_scoreboard
//
// Existing features (kept): AXI/APB protocol accounting, expected-DFI-command
// queue (expect_ca), PASS/FAIL summary.
//
// Internal logic:
//   1. AXI data model      : write data is merged into a byte-valid memory model,
//                            every read beat is compared against it.
//   2. DFI bank-state model: ACT / RD / WR / PRE / PREA / REF legality per bank and
//                            every timing lpddr5c_cmd_scheduler (rev 3) enforces:
//                            tRCD, tRP, tRAS, tRC (>= tRAS + tRP), tRRD_L/S, tFAW,
//                            tCCD_L/S per bank group, tWTR_L/S, tRTW, tRTP,
//                            WR->PRE (tWL + tBURST + tWR), REF after tRP, tRFC.
//                            Bank = addr[11:9], bank group = bank[0] (addr[9]),
//                            row = addr[31:16] (scheduler address map).
//                            tRCD/tRP/tRAS/tRC come from TIMING0 (reset value until
//                            written) and are taken at the command that starts the
//                            interval, like the scheduler counters.
//   3. AXI -> DFI matching : every DFI RD/WR must belong to an accepted AXI
//                            request, every ACT must be needed by a request,
//                            a PRE must not close a row that a request already in
//                            the scheduler queue still hits (unless the row-miss
//                            request is starved, STARVE_AGE).
//   4. DFI write data      : dfi_wrdata_en is paired with its WR command in either
//                            order; the signed offset records data lead or lag.
//   5. APB shadow model    : timing registers are captured from APB writes
//                            (TIMING0) and read-back is compared; APB reset restores
//                            the reset state.
//   6. PASS / FAIL prints  : every check prints a PASS line or a FAIL line with
//                            the expected and the actual value.
//==============================================================================
class lpddr5c_scoreboard extends uvm_scoreboard;

  `uvm_component_utils(lpddr5c_scoreboard)

  //============================================================
  // DFI command codes (lpddr5c_cmd_scheduler)
  //============================================================
  localparam bit [5:0] CA_NOP  = 6'h00;
  localparam bit [5:0] CA_RD   = 6'h01;
  localparam bit [5:0] CA_WR   = 6'h02;
  localparam bit [5:0] CA_ACT  = 6'h03;
  localparam bit [5:0] CA_PRE  = 6'h04;
  localparam bit [5:0] CA_PREA = 6'h05;
  localparam bit [5:0] CA_REF  = 6'h06;

  //============================================================
  // Analysis implementations
  //============================================================
  uvm_analysis_imp_axi_agent #(lpddr5c_axi_agent_seq_item, lpddr5c_scoreboard) axi_agent_export;
  uvm_analysis_imp_apb_agent #(lpddr5c_apb_agent_seq_item, lpddr5c_scoreboard) apb_agent_export;
  uvm_analysis_imp_dfi_agent #(lpddr5c_dfi_agent_seq_item, lpddr5c_scoreboard) dfi_agent_export;
  uvm_analysis_imp_lp_agent #(lpddr5c_lp_agent_seq_item, lpddr5c_scoreboard) lp_agent_export;

  //============================================================
  // Knobs (set from a test: env.scoreboard.<knob> = ...)
  //============================================================
  bit en_dfi_model         = 1'b1;  // bank-state / timing legality checker
  bit en_addr_match        = 1'b1;  // AXI request <-> DFI command matching
  bit en_axi_data_check    = 1'b1;  // read-after-write data compare
  bit en_axi_bresp_check   = 1'b1;  // AXI BRESP must be OKAY
  bit en_axi_rresp_check   = 1'b1;  // AXI RRESP must be OKAY
  bit en_apb_shadow        = 1'b1;  // APB register shadow / read-back
  bit en_dfi_wrdata_mask_check = 1'b0; // AXI WSTRB -> two DFI write-data masks
  bit en_lp_check          = 1'b0;
  bit lp_exp_pd_ack        = 1'b1;
  bit lp_exp_wakeup_ack    = 1'b1;
  int unsigned lp_exp_pd_count;
  int unsigned lp_exp_wakeup_count;
  int unsigned lp_exp_wakeup_latency_min = 12;
  int unsigned lp_exp_wakeup_latency_max = 16;
  bit chk_ref_banks_closed = 1'b1;  // REF must only be issued with all banks closed
  bit chk_all_served       = 1'b0;  // at end of test every AXI request must have reached DFI
  bit known_bug_is_error   = 1'b0;  // "no fixed WR->dfi_wrdata_en latency" flag: 0 = warning, 1 = error
  int unsigned pre_hit_margin   = 8;  // clocks a hit must have been pending before a PRE is an error
  int unsigned max_msgs_per_id  = 5;  // print at most N error messages per check id

  // PASS print knobs
  bit          en_pass_print        = 1'b1;  // print PASS lines
  int unsigned max_pass_msgs_per_id = 20;    // PASS lines per check id (0 = unlimited)
  // DFI_03 write data-enable timing (signed dfi_wrdata_en - WR command offset)
  bit          en_wrdata_en_check   = 1'b0;   // enable only in tests checking DFI write-data timing
  int          exp_wrdata_en_lat    = -1;     // expected signed offset in clk; -1 = none unless check flag is set
  bit          chk_wrdata_en_lat    = 1'b0;   // set to check exp_wrdata_en_lat, including negative values
  int unsigned max_wrdata_en_wait   = 64;     // maximum lead or lag in clk before an unmatched event is an error
  int unsigned wren_beats_per_wr    = 0;      // 0: pair a WR with each RISING edge of dfi_wrdata_en
                                              // N: pair a WR with every N-cycle window of dfi_wrdata_en
  int unsigned max_wren_lat_msgs    = 50;     // per-write latency log lines (0 = unlimited)
  bit          chk_apb_ro_write     = 1'b1;  // write to STATUS0-3 (0x40-0x4C) must give PSLVERR=1
  bit          chk_apb_decode       = 1'b1;  // unmapped APB address must give PSLVERR=1 and PRDATA=apb_invalid_rdata
  bit [31:0]   apb_invalid_rdata    = 32'hDEAD_BEEF;
  bit          apb_xfer_print_all   = 1'b1;  // print EVERY expected-vs-actual APB transfer check (ignores the per-id limit)

  // Timing values in clocks. t_rcd/t_rp/t_ras/t_rc are decoded from APB TIMING0 (0x10):
  // [7:0] tRCD, [15:8] tRP, [23:16] tRAS, [31:24] tRC. Until TIMING0 is written the reset value applies.
  bit [31:0]   timing0_reset = 32'h1E12_120C;   // lpddr5c_reg_cfg reset value
  int unsigned t_rcd, t_rp, t_ras, t_rc;
  // Fixed parameters of lpddr5c_cmd_scheduler (defaults of the instance in lpddr5c_top)
  int unsigned t_ccd_l = 4, t_ccd_s = 2;        // column -> column, same / other bank group
  int unsigned t_rrd_l = 4, t_rrd_s = 2;        // ACT -> ACT, same / other bank group
  int unsigned t_wtr_l = 10, t_wtr_s = 4;       // end of write burst -> RD, same / other bank group
  int unsigned t_wr = 16, t_wl = 4, t_burst = 2;// write recovery, write latency, burst length (clk)
  int unsigned t_rtp = 8, t_rtw = 8;            // RD -> PRE, RD -> WR
  int unsigned t_faw = 20, t_rfc = 168;         // four-activate window, refresh cycle
  int unsigned starve_age = 512;                // queue age that lifts the PRE veto

  //============================================================
  // DFI command tracking (existing)
  //============================================================
  bit [5:0] expected_ca[$];
  bit       ca_expect_used;      // set once a test calls expect_ca()

  int unsigned observed_ca_count;
  int unsigned matched_ca_count;
  int unsigned mismatched_ca_count;
  int unsigned unexpected_ca_count;

  //============================================================
  // AXI tracking (existing)
  //============================================================
  int unsigned axi_aw_count;
  int unsigned axi_w_count;
  int unsigned axi_w_burst_count;
  int unsigned axi_b_count;
  int unsigned axi_ar_count;
  int unsigned axi_r_count;

  int unsigned expected_read_beats[$];

  //============================================================
  // APB tracking (existing)
  //============================================================
  int unsigned apb_transfer_count;
  int unsigned apb_error_count;
  int unsigned apb_protocol_error_count;

  bit        apb_setup_pending;
  bit        apb_setup_write;
  bit [15:0] apb_setup_addr;
  bit [31:0] apb_setup_wdata;

  //============================================================
  // AXI data model
  //============================================================
  typedef struct { bit [31:0] addr; bit [7:0] len; bit [2:0] size; bit [1:0] burst; } aw_t;
  typedef struct { bit [127:0] data; bit [15:0] strb; bit last; }                      wbeat_t;
  typedef struct { bit [31:0] addr; bit [7:0] len; bit [2:0] size; bit [1:0] burst;
                   int unsigned beat; }                                                rd_t;

  aw_t    aw_q [$];
  wbeat_t w_q  [$];
  rd_t    rd_q [$];

  // 16-byte beat memory model with per-byte valid bits, key = addr[31:4]
  bit [127:0] mem_data  [bit [27:0]];
  bit [15:0]  mem_valid [bit [27:0]];

  int unsigned wr_commit_count;
  int unsigned rd_checked_beats;
  int unsigned rd_unwritten_beats;
  int unsigned rd_data_errors;

  //============================================================
  // AXI request <-> DFI command matching
  //============================================================
  // t_acc = AXI address handshake; t_inq = entry into the scheduler queue (writes: the cycle before
  // B, which lpddr5c_top returns when the scheduler accepts the command; reads: t_acc + 1)
  typedef struct { bit [31:0] addr; bit is_wr; int unsigned t_acc; bit inq_v; int unsigned t_inq; } req_t;
  req_t req_q [$];

  //============================================================
  // DFI bank-state model (bank = addr[11:9], bank group = addr[12], row = addr[31:16])
  //============================================================
  typedef struct {
    bit          open;
    bit [15:0]   row;
    bit          act_v, pre_v, wr_v, rd_v;
    int unsigned t_act, t_pre, t_wr, t_rd;
    int unsigned need_rcd, need_ras, need_rc;   // taken at ACT (TIMING0 in force then)
    int unsigned need_rp;                       // taken at PRE / PREA
  } bank_t;

  bank_t       bank [8];
  int unsigned dfi_clk_cnt;
  // per bank group (2) history
  bit          col_v_bg [2];  int unsigned t_col_bg [2];   // last RD / WR
  bit          wr_v_bg  [2];  int unsigned t_wr_bg  [2];   // last WR
  bit          act_v_bg [2];  int unsigned t_act_bg [2];   // last ACT
  bit          rd_any_v;      int unsigned t_rd_any;       // last RD (any group)
  int unsigned act_hist [$];                               // last 4 ACT times (tFAW)
  bit          ref_v;         int unsigned t_ref;          // last REF (tRFC)

  int unsigned n_act, n_pre, n_prea, n_rd, n_wr, n_ref;
  int unsigned n_row_hit, n_row_miss, n_row_closed;
  int unsigned known_bug_count;

  //============================================================
  // APB shadow model
  //============================================================
  bit [31:0]   apb_shadow [bit [15:0]];
  bit [31:0]   apb_last_rdata [bit [15:0]];   // last PRDATA observed per address (used by sequences)
  int unsigned apb_rb_checked;

  // Expected APB transaction queue (directed tests, e.g. APB_02 write/readback)
  typedef struct { bit pwrite; bit [15:0] paddr; bit [31:0] data; bit [31:0] mask; bit pslverr; } apb_exp_t;
  apb_exp_t    expected_apb[$];
  bit          apb_expect_used;          // set by expect_apb(), cleared by end_apb_expect()
  int unsigned apb_exp_matched, apb_exp_mismatched, apb_exp_unexpected;
  int unsigned apb_exp_err_count;       // transfers that correctly returned PSLVERR=1
  int unsigned apb_invalid_checked;     // unmapped-address accesses checked
  int unsigned apb_ro_checked;          // writes to read-only status registers checked

  // Per-register expected-vs-actual statistics
  typedef struct {
    int unsigned wr;                 // writes observed
    int unsigned rd;                 // reads observed
    int unsigned rd_pass;            // reads that matched the expected value
    int unsigned rd_fail;            // reads that did not match
    bit [31:0]   last_fail_exp;      // masked expected value of the last failing read
    bit [31:0]   last_fail_act;      // masked actual   value of the last failing read
    bit [31:0]   last_fail_diff;     // differing bits of the last failing read
    time         last_fail_time;
  } reg_stat_t;
  reg_stat_t reg_stat [bit [15:0]];

  // DFI monitor visibility (diagnostic)
  int unsigned dfi_item_count;       // write_dfi_agent() calls
  int unsigned dfi_rst_low_count;    // items seen while dfi_rst_n != 1

  // DFI_03: WR command -> dfi_wrdata_en measurement
  typedef struct { int unsigned t; bit [31:0] addr; } wr_cmd_t;
  wr_cmd_t     wr_cmd_q [$];         // WR commands waiting for dfi_wrdata_en
  int unsigned wren_early_q [$];     // dfi_wrdata_en starts waiting for their WR command
  bit          wren_prev;
  int unsigned wren_beats_left;
  int unsigned wren_n;               // matched samples
  int          wren_min, wren_max;   // signed: < 0 = enable before the WR command
  longint      wren_sum;
  int unsigned wren_hist [int];
  int unsigned wren_early;           // pairs with dfi_wrdata_en before the WR command
  int unsigned wren_unmatched_en;    // dfi_wrdata_en with no pending WR
  int unsigned wren_timeouts;        // WR that never got dfi_wrdata_en
  int unsigned wren_wr_cmds;         // WR commands seen on DFI

  bit [7:0] expected_dfi_mask_q[$];
  int unsigned dfi_mask_samples;
  int unsigned lp_pd_events;
  int unsigned lp_wakeup_events;

  // Per-register read/write mask (1 = implemented RW bit). Default = all 32 bits.
  bit [31:0]   apb_rw_mask [bit [15:0]];

  //============================================================
  // PASS / FAIL summary
  //============================================================
  int unsigned scoreboard_error_count;
  bit scoreboard_pass;
  int unsigned id_cnt [string];

  int unsigned total_pass_count;
  int unsigned pass_cnt [string];

  //============================================================
  // Constructor
  //============================================================
  function new(string name = "lpddr5c_scoreboard",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  //============================================================
  // Build phase
  //============================================================
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    observed_ca_count        = 0;
    matched_ca_count         = 0;
    mismatched_ca_count      = 0;
    unexpected_ca_count      = 0;

    axi_aw_count             = 0;
    axi_w_count              = 0;
    axi_w_burst_count        = 0;
    axi_b_count              = 0;
    axi_ar_count             = 0;
    axi_r_count              = 0;

    apb_transfer_count       = 0;
    apb_error_count          = 0;
    apb_protocol_error_count = 0;

    scoreboard_error_count   = 0;
    scoreboard_pass          = 1'b1;

    total_pass_count         = 0;
    pass_cnt.delete();
    id_cnt.delete();

    expected_ca.delete();
    expected_read_beats.delete();
    aw_q.delete();  w_q.delete();  rd_q.delete();  req_q.delete();
    mem_data.delete();  mem_valid.delete();  apb_shadow.delete();
    expected_apb.delete();  apb_expect_used = 1'b0;  apb_last_rdata.delete();
    reg_stat.delete();  dfi_item_count = 0;  dfi_rst_low_count = 0;
    wr_cmd_q.delete();  wren_early_q.delete();  wren_hist.delete();  wren_prev = 1'b0;  wren_beats_left = 0;
    wren_n = 0;  wren_min = 0;  wren_max = 0;  wren_sum = 0;  wren_early = 0;
    wren_unmatched_en = 0;  wren_timeouts = 0;  wren_wr_cmds = 0;
    expected_dfi_mask_q.delete();  dfi_mask_samples = 0;
    lp_pd_events = 0;  lp_wakeup_events = 0;
    apb_exp_matched = 0;  apb_exp_mismatched = 0;  apb_exp_unexpected = 0;
    apb_exp_err_count = 0;  apb_invalid_checked = 0;  apb_ro_checked = 0;
    clear_banks();
    set_timing0(timing0_reset);

    apb_setup_pending = 1'b0;

    axi_agent_export = new("axi_agent_export", this);
    apb_agent_export = new("apb_agent_export", this);
    dfi_agent_export = new("dfi_agent_export", this);
    lp_agent_export = new("lp_agent_export", this);
  endfunction

  //============================================================
  // Clear the bank-state model
  //============================================================
  function void clear_banks();
    foreach (bank[i]) begin
      bank[i].open  = 1'b0;
      bank[i].row   = '0;
      bank[i].act_v = 1'b0;
      bank[i].pre_v = 1'b0;
      bank[i].wr_v  = 1'b0;
      bank[i].rd_v  = 1'b0;
      bank[i].t_act = 0;
      bank[i].t_pre = 0;
      bank[i].t_wr  = 0;
      bank[i].t_rd  = 0;
      bank[i].need_rcd = 0;  bank[i].need_ras = 0;  bank[i].need_rc = 0;  bank[i].need_rp = 0;
    end
    foreach (col_v_bg[g]) begin
      col_v_bg[g] = 1'b0;  t_col_bg[g] = 0;
      wr_v_bg[g]  = 1'b0;  t_wr_bg[g]  = 0;
      act_v_bg[g] = 1'b0;  t_act_bg[g] = 0;
    end
    rd_any_v = 1'b0;  t_rd_any = 0;
    act_hist.delete();
    ref_v = 1'b0;  t_ref = 0;
  endfunction

  //============================================================
  // TIMING0 decode (scheduler: tRCD [7:0], tRP [15:8], tRAS [23:16], tRC [31:24])
  //============================================================
  function void set_timing0(bit [31:0] v);
    t_rcd = v[7:0];
    t_rp  = v[15:8];
    t_ras = v[23:16];
    t_rc  = v[31:24];
  endfunction

  // ACT -> ACT same bank: the scheduler uses max(tRC, tRAS + tRP)
  function int unsigned t_rc_eff();
    return (t_rc > t_ras + t_rp) ? t_rc : t_ras + t_rp;
  endfunction

  function int unsigned t_wr_pre();    // WR -> PRE: measured from the end of the write burst
    return t_wl + t_burst + t_wr;
  endfunction

  function int unsigned t_wtr(bit same_bg);
    return t_wl + t_burst + (same_bg ? t_wtr_l : t_wtr_s);
  endfunction

  //============================================================
  // Common scoreboard error / known-bug / pass reporters
  //============================================================
  function void report_sb_error(input string id,
                                input string message);
    scoreboard_error_count++;
    scoreboard_pass = 1'b0;
    id_cnt[id] = id_cnt.exists(id) ? id_cnt[id] + 1 : 1;
    if (id_cnt[id] <= max_msgs_per_id) begin
      `uvm_error(id, message)
    end
    else if (id_cnt[id] == max_msgs_per_id + 1) begin
      `uvm_info(id, "further messages with this id are suppressed (still counted as errors)", UVM_NONE)
    end
  endfunction

  // For RTL gaps that are already known (tCCD / tWR / tRTP not enforced by the scheduler)
  function void report_known_bug(input string id,
                                 input string message);
    known_bug_count++;
    if (known_bug_is_error) begin
      report_sb_error(id, message);
    end
    else begin
      id_cnt[id] = id_cnt.exists(id) ? id_cnt[id] + 1 : 1;
      if (id_cnt[id] <= max_msgs_per_id) begin
        `uvm_warning(id, message)
      end
    end
  endfunction

  // PASS reporter (rate limited per id)
  function void report_sb_pass(input string id,
                               input string message);
    total_pass_count++;
    pass_cnt[id] = pass_cnt.exists(id) ? pass_cnt[id] + 1 : 1;
    if (en_pass_print && (max_pass_msgs_per_id == 0 || pass_cnt[id] <= max_pass_msgs_per_id ||
                          (apb_xfer_print_all && id == "APB_XFER"))) begin
      `uvm_info({id, "_PASS"}, {"PASS: ", message}, UVM_LOW)
    end
    else if (en_pass_print && pass_cnt[id] == max_pass_msgs_per_id + 1) begin
      `uvm_info({id, "_PASS"}, "further PASS messages with this id are suppressed", UVM_LOW)
    end
  endfunction

  // Generic "actual must be >= expected minimum" timing check
  function void check_min_gap(input string id,
                              input string what,
                              input int unsigned actual,
                              input int unsigned min_clk,
                              input bit known = 1'b0);
    string msg;
    msg = $sformatf("%s: expected >= %0d clk, actual = %0d clk at %0t",
                    what, min_clk, actual, $time);
    if (actual < min_clk) begin
      if (known) report_known_bug(id, {"FAIL: ", msg});
      else       report_sb_error(id, {"FAIL: ", msg});
    end
    else
      report_sb_pass(id, msg);
  endfunction

  // String select helper: a bare conditional of two different-length literals is space-padded by %s
  function string pick(bit c, string a, string b);
    return c ? a : b;
  endfunction

  // DFI command code -> name
  function string ca_name(bit [5:0] ca);
    case (ca)
      CA_NOP:  return "NOP";
      CA_RD:   return "RD";
      CA_WR:   return "WR";
      CA_ACT:  return "ACT";
      CA_PRE:  return "PRE";
      CA_PREA: return "PREA";
      CA_REF:  return "REF";
      default: return "OTHER";
    endcase
  endfunction

  //============================================================
  // Register expected DFI command (directed tests)
  //============================================================
  function void expect_ca(bit [5:0] opcode);
    ca_expect_used = 1'b1;
    expected_ca.push_back(opcode);
  endfunction

  //============================================================
  // Wait for expected DFI command count
  //============================================================
  task wait_for_ca_count(int unsigned target,
                         time timeout = 60us);
    time start_time;

    start_time = $time;

    while ((observed_ca_count < target) &&
           (($time - start_time) < timeout))
      #10ns;

    if (observed_ca_count < target)
      report_sb_error("DFI_CA_TIMEOUT",
        $sformatf("FAIL: expected %0d DFI commands, actual %0d observed before timeout",
                  target, observed_ca_count));
    else
      report_sb_pass("DFI_CA_COUNT",
        $sformatf("expected >= %0d DFI commands, actual %0d observed", target, observed_ca_count));
  endtask

  //============================================================
  // Helpers: AXI data model
  //============================================================
  function bit [31:0] beat_addr(bit [31:0] base, bit [2:0] size,
                                int unsigned k, bit [1:0] burst);
    bit [31:0] nbytes;
    nbytes = 32'd1 << size;
    if (k == 0 || burst == 2'b00)     // first beat, or FIXED burst
      return base;
    return (base & ~(nbytes - 32'd1)) + (k * nbytes);   // INCR
  endfunction

  function void apply_wbeat(aw_t aw, int unsigned k, wbeat_t b);
    bit [31:0]  a;
    bit [27:0]  key;
    bit [127:0] d;
    bit [15:0]  v;
    a   = beat_addr(aw.addr, aw.size, k, aw.burst);
    key = a[31:4];
    d   = mem_data.exists(key)  ? mem_data[key]  : '0;
    v   = mem_valid.exists(key) ? mem_valid[key] : '0;
    for (int i = 0; i < 16; i++)
      if (b.strb[i]) begin
        d[i*8 +: 8] = b.data[i*8 +: 8];
        v[i]        = 1'b1;
      end
    mem_data[key]  = d;
    mem_valid[key] = v;
  endfunction

  // A write is committed to the model when AW and all its W beats (up to WLAST) are known
  function void commit_writes();
    aw_t aw;
    int  last_idx;
    while (aw_q.size() > 0) begin
      last_idx = -1;
      for (int i = 0; i < w_q.size(); i++)
        if (w_q[i].last) begin last_idx = i; break; end
      if (last_idx < 0) break;
      aw = aw_q.pop_front();
      for (int k = 0; k <= last_idx; k++) begin
        wbeat_t b;
        b = w_q.pop_front();
        apply_wbeat(aw, k, b);
      end
      wr_commit_count++;
    end
  endfunction

  function void check_rbeat(rd_t r, bit [127:0] rdata);
    bit [31:0]  a;
    bit [27:0]  key;
    bit         bad;
    bit [127:0] mask;
    a   = beat_addr(r.addr, r.size, r.beat, r.burst);
    key = a[31:4];
    if (!mem_valid.exists(key)) begin
      rd_unwritten_beats++;          // never written: nothing to compare against
      `uvm_info("AXI_RDATA_SKIP",
        $sformatf("addr=0x%08h beat %0d never written - not compared, observed=0x%032h",
                  a, r.beat, rdata),
        UVM_HIGH)
      return;
    end
    rd_checked_beats++;
    bad  = 1'b0;
    mask = '0;
    for (int i = 0; i < 16; i++)
      if (mem_valid[key][i]) begin
        mask[i*8 +: 8] = 8'hFF;
        if (rdata[i*8 +: 8] !== mem_data[key][i*8 +: 8])
          bad = 1'b1;
      end
    if (bad) begin
      rd_data_errors++;
      report_sb_error("AXI_RDATA_MISMATCH",
        $sformatf("FAIL: addr=0x%08h beat %0d | expected=0x%032h | actual=0x%032h | valid_bytes=0x%04h | diff=0x%032h at %0t",
                  a, r.beat, mem_data[key] & mask, rdata & mask, mem_valid[key],
                  (mem_data[key] ^ rdata) & mask, $time));
    end
    else
      report_sb_pass("AXI_RDATA",
        $sformatf("addr=0x%08h beat %0d | expected=0x%032h | actual=0x%032h | valid_bytes=0x%04h at %0t",
                  a, r.beat, mem_data[key] & mask, rdata & mask, mem_valid[key], $time));
  endfunction

  //============================================================
  // Helpers: AXI request <-> DFI matching
  //============================================================
  function int find_req(bit is_wr, bit [31:0] addr);
    foreach (req_q[i])
      if (req_q[i].is_wr == is_wr && req_q[i].addr == addr)
        return i;
    return -1;
  endfunction

  function bit act_has_request(bit [2:0] bk, bit [15:0] row);
    foreach (req_q[i])
      if (req_q[i].addr[11:9] == bk && req_q[i].addr[31:16] == row)
        return 1'b1;
    return 1'b0;
  endfunction

  // A request already in the scheduler queue (for longer than the margin) that hits the open row
  function bit pre_has_pending_hit(bit [2:0] bk, bit [15:0] row);
    foreach (req_q[i])
      if (req_q[i].inq_v && req_q[i].addr[11:9] == bk && req_q[i].addr[31:16] == row &&
          ((dfi_clk_cnt - req_q[i].t_inq) > pre_hit_margin))
        return 1'b1;
    return 1'b0;
  endfunction

  // The scheduler lifts the PRE veto when the row-miss request that asks for the PRE is starved
  function bit pre_request_starved(bit [31:0] addr);
    foreach (req_q[i])
      if (req_q[i].inq_v && req_q[i].addr == addr && ((dfi_clk_cnt - req_q[i].t_inq) >= starve_age))
        return 1'b1;
    return 1'b0;
  endfunction

  // timing check of a closed interval: valid start, gap from start, required clocks
  function void check_since(string id, string what, bit v, int unsigned t0, int unsigned need);
    if (v) check_min_gap(id, what, dfi_clk_cnt - t0, need);
  endfunction

  //============================================================
  // DFI bank-state model: one call per DFI command (CA != NOP)
  //============================================================
  function void dfi_command(bit [5:0] ca, bit [31:0] addr);
    bit [2:0]  bk;
    bit        bg;
    bit [15:0] row;
    bit        any_open;
    bit        same;
    int        idx;
    string     cn;

    bk       = addr[11:9];
    bg       = bk[0];                  // scheduler: bank group = low bank bit
    row      = addr[31:16];
    cn       = ca_name(ca);
    any_open = 1'b0;

    // tRFC: no command until tRFC after REF (scheduler rfc lockout)
    if (ref_v && ca != CA_NOP)
      check_since("DFI_TRFC", $sformatf("REF->%s", cn), 1'b1, t_ref, t_rfc);

    case (ca)

      //----------------------------------------------------------
      CA_ACT: begin
        n_act++;
        if (bank[bk].open)
          report_sb_error("DFI_ACT_OPEN_BANK",
            $sformatf("FAIL: ACT bank %0d | expected: bank closed | actual: open with row 0x%04h at %0t",
                      bk, bank[bk].row, $time));
        else
          report_sb_pass("DFI_ACT_OPEN_BANK",
            $sformatf("ACT bank %0d row 0x%04h | expected: bank closed | actual: closed at %0t",
                      bk, row, $time));

        check_since("DFI_TRP", $sformatf("PRE->ACT bank %0d", bk), bank[bk].pre_v, bank[bk].t_pre, bank[bk].need_rp);
        check_since("DFI_TRC", $sformatf("ACT->ACT bank %0d (max(tRC, tRAS+tRP))", bk),
                    bank[bk].act_v, bank[bk].t_act, bank[bk].need_rc);
        for (int g = 0; g < 2; g++) begin
          same = (g == int'(bg));
          check_since("DFI_TRRD", $sformatf("ACT->ACT bank group %0d -> %0d (tRRD_%s)", g, bg, pick(same, "L", "S")),
                      act_v_bg[g], t_act_bg[g], same ? t_rrd_l : t_rrd_s);
        end
        if (act_hist.size() == 4)
          check_since("DFI_TFAW", "5th ACT inside the four-activate window", 1'b1, act_hist[0], t_faw);

        if (en_addr_match) begin
          if (!act_has_request(bk, row))
            report_sb_error("DFI_ACT_NO_REQUEST",
              $sformatf("FAIL: ACT bank %0d row 0x%04h | expected: a pending AXI request for this bank/row | actual: none (pending reqs=%0d) at %0t",
                        bk, row, req_q.size(), $time));
          else
            report_sb_pass("DFI_ACT_REQUEST",
              $sformatf("ACT bank %0d row 0x%04h matches a pending AXI request at %0t",
                        bk, row, $time));
        end
        bank[bk].open     = 1'b1;
        bank[bk].row      = row;
        bank[bk].t_act    = dfi_clk_cnt;
        bank[bk].act_v    = 1'b1;
        bank[bk].need_rcd = t_rcd;
        bank[bk].need_ras = t_ras;
        bank[bk].need_rc  = t_rc_eff();
        act_v_bg[bg] = 1'b1;  t_act_bg[bg] = dfi_clk_cnt;
        act_hist.push_back(dfi_clk_cnt);
        if (act_hist.size() > 4) void'(act_hist.pop_front());
      end

      //----------------------------------------------------------
      CA_RD, CA_WR: begin
        if (ca == CA_RD) n_rd++; else n_wr++;

        if (!bank[bk].open) begin
          n_row_closed++;
          report_sb_error("DFI_COL_CLOSED_BANK",
            $sformatf("FAIL: %s bank %0d row 0x%04h | expected: row 0x%04h open | actual: bank closed at %0t",
                      cn, bk, row, row, $time));
        end
        else if (bank[bk].row != row) begin
          n_row_miss++;
          report_sb_error("DFI_COL_WRONG_ROW",
            $sformatf("FAIL: %s bank %0d | expected open row=0x%04h (from command) | actual open row=0x%04h at %0t",
                      cn, bk, row, bank[bk].row, $time));
        end
        else begin
          n_row_hit++;
          report_sb_pass("DFI_COL_ROW",
            $sformatf("%s bank %0d | expected open row=0x%04h | actual open row=0x%04h at %0t",
                      cn, bk, row, bank[bk].row, $time));
        end

        if (bank[bk].open)
          check_since("DFI_TRCD", $sformatf("ACT->%s bank %0d", cn, bk), bank[bk].act_v, bank[bk].t_act, bank[bk].need_rcd);

        // column -> column per bank group (also guarantees the tBURST data-bus spacing, tCCD_S >= tBURST)
        for (int g = 0; g < 2; g++) begin
          same = (g == int'(bg));
          check_since("DFI_TCCD", $sformatf("col->%s bank group %0d -> %0d (tCCD_%s)", cn, g, bg, pick(same, "L", "S")),
                      col_v_bg[g], t_col_bg[g], same ? t_ccd_l : t_ccd_s);
        end
        if (ca == CA_RD) begin
          for (int g = 0; g < 2; g++) begin
            same = (g == int'(bg));
            check_since("DFI_TWTR", $sformatf("WR->RD bank group %0d -> %0d (tWL+tBURST+tWTR_%s)", g, bg, pick(same, "L", "S")),
                        wr_v_bg[g], t_wr_bg[g], t_wtr(same));
          end
        end
        else
          check_since("DFI_TRTW", "RD->WR turnaround", rd_any_v, t_rd_any, t_rtw);

        col_v_bg[bg] = 1'b1;  t_col_bg[bg] = dfi_clk_cnt;
        if (ca == CA_WR) begin
          bank[bk].wr_v = 1'b1;  bank[bk].t_wr = dfi_clk_cnt;
          wr_v_bg[bg]   = 1'b1;  t_wr_bg[bg]   = dfi_clk_cnt;
        end
        else begin
          bank[bk].rd_v = 1'b1;  bank[bk].t_rd = dfi_clk_cnt;
          rd_any_v      = 1'b1;  t_rd_any      = dfi_clk_cnt;
        end

        if (en_addr_match) begin
          idx = find_req((ca == CA_WR), addr);
          if (idx < 0)
            report_sb_error("DFI_COL_NO_REQUEST",
              $sformatf("FAIL: %s addr=0x%08h | expected: matching pending AXI %s request | actual: none (pending reqs=%0d) at %0t",
                        cn, addr, pick((ca == CA_WR), "write", "read"), req_q.size(), $time));
          else begin
            report_sb_pass("DFI_COL_REQUEST",
              $sformatf("%s addr=0x%08h | expected AXI %s addr=0x%08h | actual DFI addr=0x%08h (accepted @clk %0d, issued @clk %0d, latency %0d)",
                        cn, addr, pick((req_q[idx].is_wr), "WR", "RD"), req_q[idx].addr, addr,
                        req_q[idx].t_acc, dfi_clk_cnt, dfi_clk_cnt - req_q[idx].t_acc));
            req_q.delete(idx);
          end
        end
      end

      //----------------------------------------------------------
      CA_PRE: begin
        n_pre++;
        if (!bank[bk].open)
          report_sb_error("DFI_PRE_CLOSED_BANK",
            $sformatf("FAIL: PRE bank %0d | expected: bank open | actual: bank closed at %0t",
                      bk, $time));
        else begin
          report_sb_pass("DFI_PRE_OPEN_BANK",
            $sformatf("PRE bank %0d | expected: bank open | actual: open row 0x%04h at %0t",
                      bk, bank[bk].row, $time));
          pre_timing(bk, "PRE");
          if (en_addr_match) begin
            if (pre_has_pending_hit(bk, bank[bk].row) && !pre_request_starved(addr))
              report_sb_error("DFI_PRE_PENDING_HIT",
                $sformatf("FAIL: PRE bank %0d row 0x%04h | expected: no queued request hitting this row (older than %0d clk) unless the row-miss request 0x%08h is starved | actual: pending hit exists at %0t",
                          bk, bank[bk].row, pre_hit_margin, addr, $time));
            else
              report_sb_pass("DFI_PRE_NO_HIT",
                $sformatf("PRE bank %0d row 0x%04h | expected: no pending hit (or starved row-miss request) | actual: ok at %0t",
                          bk, bank[bk].row, $time));
          end
        end
        close_bank(bk);
      end

      //----------------------------------------------------------
      CA_PREA: begin
        n_prea++;
        foreach (bank[b])
          if (bank[b].open) pre_timing(b, "PREA");
        report_sb_pass("DFI_PREA",
          $sformatf("PREA: all banks closed in model at %0t", $time));
        foreach (bank[b])
          if (bank[b].open) close_bank(b);     // closed banks keep their own tRP history
      end

      //----------------------------------------------------------
      CA_REF: begin
        n_ref++;
        if (chk_ref_banks_closed) begin
          foreach (bank[b])
            if (bank[b].open) begin
              any_open = 1'b1;
              report_sb_error("DFI_REF_OPEN_BANK",
                $sformatf("FAIL: REF | expected: all banks closed | actual: bank %0d open (row 0x%04h) at %0t",
                          b, bank[b].row, $time));
            end
          if (!any_open)
            report_sb_pass("DFI_REF_BANKS_CLOSED",
              $sformatf("REF | expected: all banks closed | actual: all closed at %0t", $time));
        end
        foreach (bank[b])
          check_since("DFI_TRP", $sformatf("PRE->REF bank %0d", b), bank[b].pre_v, bank[b].t_pre, bank[b].need_rp);
        ref_v = 1'b1;
        t_ref = dfi_clk_cnt;
      end

      default: ;   // MRW / MRR / SRE / SRX / PDE / PDX are only counted
    endcase
  endfunction

  // tRAS / tRTP / WR recovery of an open bank that is precharged now (PRE or PREA)
  function void pre_timing(int b, string cmd);
    check_since("DFI_TRAS", $sformatf("ACT->%s bank %0d", cmd, b), bank[b].act_v, bank[b].t_act, bank[b].need_ras);
    if (bank[b].rd_v)
      check_since("DFI_TRTP", $sformatf("RD->%s bank %0d", cmd, b), 1'b1, bank[b].t_rd, t_rtp);
    if (bank[b].wr_v)
      check_since("DFI_TWR", $sformatf("WR->%s bank %0d (tWL+tBURST+tWR)", cmd, b), 1'b1, bank[b].t_wr, t_wr_pre());
  endfunction

  function void close_bank(int b);
    bank[b].open    = 1'b0;
    bank[b].t_pre   = dfi_clk_cnt;
    bank[b].pre_v   = 1'b1;
    bank[b].need_rp = t_rp;
    bank[b].wr_v    = 1'b0;
    bank[b].rd_v    = 1'b0;
  endfunction

  //============================================================
  // APB shadow model
  //============================================================
  // Register name from the register map
  function string apb_reg_name(bit [15:0] a);
    case (a)
      16'h0000: return "REG_CTRL0";
      16'h0004: return "REG_CTRL1";
      16'h0008: return "REG_CTRL2";
      16'h000C: return "REG_CTRL3";
      16'h0010: return "REG_TIMING0";
      16'h0014: return "REG_TIMING1";
      16'h0018: return "REG_TIMING2";
      16'h001C: return "REG_TIMING3";
      16'h0020: return "REG_TIMING4";
      16'h0024: return "REG_TIMING5";
      16'h0040: return "REG_STATUS0";
      16'h0044: return "REG_STATUS1";
      16'h0048: return "REG_STATUS2";
      16'h004C: return "REG_STATUS3";
      16'h0060: return "REG_ECC_CFG";
      16'h0070: return "REG_LP_CFG";
      16'h0080: return "REG_TRAIN_CFG";
      16'h00A0: return "REG_INTR_EN";
      16'h00A4: return "REG_INTR_STAT";
      16'h00A8: return "REG_INTR_CLR";
      16'h00F0: return "REG_TEST_CFG";
      16'h00F4: return "REG_TEST_CTRL";
      16'h00F8: return "REG_TEST_STAT";
      default:  return "REG_UNKNOWN";
    endcase
  endfunction

  // RW mask handling
  function void set_apb_rw_mask(bit [15:0] a, bit [31:0] m);
    apb_rw_mask[a] = m;
  endfunction

  function bit [31:0] get_apb_rw_mask(bit [15:0] a);
    return apb_rw_mask.exists(a) ? apb_rw_mask[a] : 32'hFFFF_FFFF;
  endfunction

  // Addresses that exist in the register map (RW, RO and WO). Everything else is unmapped.
  function bit apb_addr_mapped(bit [15:0] a);
    case (a)
      16'h0000, 16'h0004, 16'h0008, 16'h000C,                      // CTRL0-3
      16'h0010, 16'h0014, 16'h0018, 16'h001C, 16'h0020, 16'h0024,  // TIMING0-5
      16'h0040, 16'h0044, 16'h0048, 16'h004C,                      // STATUS0-3
      16'h0060, 16'h0070, 16'h0080,                                // ECC_CFG, LP_CFG, TRAIN_CFG
      16'h00A0, 16'h00A4, 16'h00A8,                                // INTR_EN, INTR_STAT, INTR_CLR
      16'h00F0, 16'h00F4, 16'h00F8: return 1'b1;                   // TEST_CFG, TEST_CTRL, TEST_STAT
      default: return 1'b0;
    endcase
  endfunction

  // Read-only status registers that must reject writes (extend with INTR_STAT 0x00A4 / TEST_STAT 0x00F8 if they also error)
  function bit apb_addr_status(bit [15:0] a);
    return (a == 16'h0040) || (a == 16'h0044) || (a == 16'h0048) || (a == 16'h004C);
  endfunction

  // Is PSLVERR=1 expected for the transfer that is completing now?
  //   - an expect_apb() entry is pending : use its exp_slverr
  //   - otherwise                        : only unmapped addresses (if chk_apb_decode)
  function bit apb_exp_slverr(bit [15:0] a, bit pwrite);
    if (expected_apb.size() > 0) return expected_apb[0].pslverr;
    return (chk_apb_decode && !apb_addr_mapped(a)) ||
           (chk_apb_ro_write && pwrite && apb_addr_status(a));
  endfunction

  // Register one expected APB transfer (in order). For reads, data/mask = expected PRDATA bits to compare.
  function void expect_apb(bit pwrite, bit [15:0] addr, bit [31:0] data,
                           bit [31:0] mask = 32'hFFFF_FFFF,
                           bit exp_slverr = 1'b0);
    apb_exp_t e;
    e.pwrite = pwrite;  e.paddr = addr;  e.data = data;  e.mask = mask;  e.pslverr = exp_slverr;
    apb_expect_used = 1'b1;
    expected_apb.push_back(e);
  endfunction

  function void end_apb_expect();
    apb_expect_used = 1'b0;
  endfunction

  // Compare one completed APB transfer against the next expected one.
  // Checks: direction (PWRITE), address (PADDR), data (PWDATA for writes / PRDATA for reads, under mask), PSLVERR == 0.
  // Returns 1 if the transfer was checked against the expected queue.
  function bit check_expected_apb(lpddr5c_apb_agent_seq_item t);
    apb_exp_t    e;
    reg_stat_t   rs;
    bit [31:0]   act;
    bit          ok;
    string       rn;

    if (expected_apb.size() == 0) begin
      if (apb_expect_used) begin
        apb_exp_unexpected++;
        report_sb_error("APB_XFER_UNEXPECTED",
          $sformatf("FAIL: APB transfer | expected: none | actual: %s %s PADDR=0x%04h data=0x%08h at %0t",
                    pick(t.pwrite, "WRITE", "READ"), apb_reg_name(t.paddr), t.paddr,
                    t.pwrite ? t.pwdata : t.prdata, $time));
      end
      return 1'b0;
    end

    e   = expected_apb.pop_front();
    act = t.pwrite ? t.pwdata : t.prdata;
    ok  = (t.pwrite === e.pwrite) && (t.paddr === e.paddr) &&
          ((act & e.mask) === (e.data & e.mask)) && (t.pslverr === e.pslverr);
    rn  = apb_reg_name(e.paddr);

    // per-register statistics (counted against the address that was observed)
    if (reg_stat.exists(t.paddr)) rs = reg_stat[t.paddr]; else rs = '{default:0};
    if (t.pwrite) rs.wr++;
    else begin
      rs.rd++;
      if (e.mask != 32'h0) apb_rb_checked++;      // a real data compare was done
      if (ok) rs.rd_pass++;
      else begin
        rs.rd_fail++;
        rs.last_fail_exp  = e.data & e.mask;
        rs.last_fail_act  = act & e.mask;
        rs.last_fail_diff = (act ^ e.data) & e.mask;
        rs.last_fail_time = $time;
      end
    end
    reg_stat[t.paddr] = rs;

    if (!ok) begin
      apb_exp_mismatched++;
      report_sb_error("APB_XFER_MISMATCH",
        $sformatf("FAIL: APB %s %s | expected: %s PADDR=0x%04h data=0x%08h (mask 0x%08h) PSLVERR=%0b | actual: %s PADDR=0x%04h data=0x%08h PSLVERR=%0b | diff=0x%08h at %0t",
                  pick(e.pwrite, "WRITE", "READ"), rn,
                  pick(e.pwrite, "WRITE", "READ"), e.paddr, e.data & e.mask, e.mask, e.pslverr,
                  pick(t.pwrite, "WRITE", "READ"), t.paddr, act & e.mask, t.pslverr,
                  (act ^ e.data) & e.mask, $time));
    end
    else begin
      apb_exp_matched++;
      report_sb_pass("APB_XFER",
        $sformatf("APB %s %s | expected: PADDR=0x%04h data=0x%08h (mask 0x%08h) PSLVERR=%0b | actual: PADDR=0x%04h data=0x%08h PSLVERR=%0b at %0t",
                  pick(e.pwrite, "WRITE", "READ"), rn,
                  e.paddr, e.data & e.mask, e.mask, e.pslverr, t.paddr, act & e.mask, t.pslverr, $time));
    end
    return 1'b1;
  endfunction

  function bit apb_readback_checked(bit [15:0] a);
    // Plain read/write registers only (RO / WO registers are excluded):
    //   CTRL0-3 (0x00-0x0C), TIMING0-5 (0x10-0x24), ECC_CFG (0x60), LP_CFG (0x70),
    //   TRAIN_CFG (0x80), INTR_EN (0xA0), TEST_CFG (0xF0)
    case (a)
      16'h0000, 16'h0004, 16'h0008, 16'h000C,
      16'h0010, 16'h0014, 16'h0018, 16'h001C, 16'h0020, 16'h0024,
      16'h0060, 16'h0070, 16'h0080, 16'h00A0, 16'h00F0: return 1'b1;
      default: return 1'b0;
    endcase
  endfunction

  function void apb_transfer_done(lpddr5c_apb_agent_seq_item t);
    bit        consumed;
    bit [31:0] m;

    if (!t.pwrite)
      apb_last_rdata[t.paddr] = t.prdata;

    // expected-transaction compare runs even if the shadow model is off
    consumed = check_expected_apb(t);

    // Autonomous read-only protection check (write to STATUS0-3, not covered by expect_apb)
    if (!consumed && chk_apb_ro_write && t.pwrite && apb_addr_status(t.paddr)) begin
      apb_ro_checked++;
      if (t.pslverr !== 1'b1)
        report_sb_error("APB_RO_WRITE_NO_SLVERR",
          $sformatf("FAIL: APB WRITE %s PADDR=0x%04h data=0x%08h | expected: PSLVERR=1 (read-only register) | actual: PSLVERR=%0b at %0t",
                    apb_reg_name(t.paddr), t.paddr, t.pwdata, t.pslverr, $time));
      else
        report_sb_pass("APB_RO_WRITE",
          $sformatf("APB WRITE %s PADDR=0x%04h data=0x%08h | expected: PSLVERR=1 | actual: PSLVERR=1 at %0t",
                    apb_reg_name(t.paddr), t.paddr, t.pwdata, $time));
    end

    // Autonomous invalid-address check (transfers not covered by expect_apb)
    if (!consumed && chk_apb_decode && !apb_addr_mapped(t.paddr)) begin
      apb_invalid_checked++;
      if (t.pslverr !== 1'b1)
        report_sb_error("APB_INVALID_NO_SLVERR",
          $sformatf("FAIL: APB %s unmapped PADDR=0x%04h | expected: PSLVERR=1 | actual: PSLVERR=%0b at %0t",
                    pick(t.pwrite, "WRITE", "READ"), t.paddr, t.pslverr, $time));
      else if (!t.pwrite && (t.prdata !== apb_invalid_rdata))
        report_sb_error("APB_INVALID_RDATA",
          $sformatf("FAIL: APB READ unmapped PADDR=0x%04h | expected: PSLVERR=1 PRDATA=0x%08h | actual: PSLVERR=1 PRDATA=0x%08h at %0t",
                    t.paddr, apb_invalid_rdata, t.prdata, $time));
      else
        report_sb_pass("APB_INVALID",
          $sformatf("APB %s unmapped PADDR=0x%04h | expected: PSLVERR=1%s | actual: PSLVERR=1%s at %0t",
                    pick(t.pwrite, "WRITE", "READ"), t.paddr,
                    pick(t.pwrite, "", $sformatf(" PRDATA=0x%08h", apb_invalid_rdata)),
                    pick(t.pwrite, "", $sformatf(" PRDATA=0x%08h", t.prdata)), $time));
    end

    if (t.pslverr) return;

    // TIMING0 as wired in lpddr5c_top (scheduler timing), captured even with the shadow model off
    if (t.pwrite && t.paddr == 16'h0010) begin
      set_timing0(t.pwdata);
      `uvm_info("SCBD_TIMING",
        $sformatf("TIMING0=0x%08h -> tRCD=%0d tRP=%0d tRAS=%0d tRC=%0d (ACT->ACT uses %0d)",
                  t.pwdata, t_rcd, t_rp, t_ras, t_rc, t_rc_eff()),
        UVM_LOW)
    end

    if (!en_apb_shadow) return;

    if (t.pwrite) begin
      apb_shadow[t.paddr] = t.pwdata;
    end
    else if (!consumed && apb_readback_checked(t.paddr) && apb_shadow.exists(t.paddr)) begin
      m = get_apb_rw_mask(t.paddr);
      apb_rb_checked++;
      if ((t.prdata & m) !== (apb_shadow[t.paddr] & m))
        report_sb_error("APB_READBACK_MISMATCH",
          $sformatf("FAIL: APB read PADDR=0x%04h | expected=0x%08h | actual=0x%08h | rw_mask=0x%08h at %0t",
                    t.paddr, apb_shadow[t.paddr] & m, t.prdata & m, m, $time));
      else
        report_sb_pass("APB_READBACK",
          $sformatf("APB read PADDR=0x%04h | expected=0x%08h | actual=0x%08h | rw_mask=0x%08h at %0t",
                    t.paddr, apb_shadow[t.paddr] & m, t.prdata & m, m, $time));
    end
  endfunction

  //============================================================
  // AXI monitor callback
  //============================================================
  function void write_axi_agent(lpddr5c_axi_agent_seq_item t);

    bit expected_last;
    aw_t    aw;
    wbeat_t wb;
    rd_t    rr;
    req_t   rq;

    // Write address handshake
    if (t.axi_awvalid && t.axi_awready) begin
      axi_aw_count++;
      aw.addr = t.axi_awaddr;  aw.len = t.axi_awlen;  aw.size = t.axi_awsize;  aw.burst = t.axi_awburst;
      aw_q.push_back(aw);
      rq.addr = t.axi_awaddr;  rq.is_wr = 1'b1;  rq.t_acc = dfi_clk_cnt;
      rq.inq_v = 1'b0;  rq.t_inq = 0;          // known at B (lpddr5c_top: B = scheduler accepted the WR)
      req_q.push_back(rq);
      if (en_axi_data_check) commit_writes();
    end

    // Write data handshakes
    if (t.axi_wvalid && t.axi_wready) begin
      axi_w_count++;

      if (t.axi_wlast)
        axi_w_burst_count++;

      wb.data = t.axi_wdata;  wb.strb = t.axi_wstrb;  wb.last = t.axi_wlast;
      w_q.push_back(wb);
      if (en_dfi_wrdata_mask_check) begin
        expected_dfi_mask_q.push_back(~t.axi_wstrb[7:0]);
        expected_dfi_mask_q.push_back(~t.axi_wstrb[15:8]);
      end
      if (en_axi_data_check) commit_writes();
    end

    // Read address handshake
    if (t.axi_arvalid && t.axi_arready) begin
      axi_ar_count++;
      expected_read_beats.push_back(int'(t.axi_arlen) + 1);
      rr.addr = t.axi_araddr;  rr.len = t.axi_arlen;  rr.size = t.axi_arsize;  rr.burst = t.axi_arburst;  rr.beat = 0;
      rd_q.push_back(rr);
      rq.addr = t.axi_araddr;  rq.is_wr = 1'b0;  rq.t_acc = dfi_clk_cnt;
      rq.inq_v = 1'b1;  rq.t_inq = dfi_clk_cnt + 1;   // read enters the scheduler queue the next cycle
      req_q.push_back(rq);
    end

    // Write response handshake
    if (t.axi_bvalid && t.axi_bready) begin

      if ((axi_b_count >= axi_aw_count) ||
          (axi_b_count >= axi_w_burst_count)) begin
        report_sb_error("AXI_UNEXPECTED_B",
          $sformatf("FAIL: B response without an outstanding completed write | expected: B_count < min(AW=%0d, W_bursts=%0d) | actual: B_count=%0d at %0t",
                    axi_aw_count, axi_w_burst_count, axi_b_count, $time));
      end
      else
        report_sb_pass("AXI_B_ORDER",
          $sformatf("B #%0d accepted | AW=%0d W_bursts=%0d at %0t",
                    axi_b_count + 1, axi_aw_count, axi_w_burst_count, $time));

      if (en_axi_bresp_check) begin
        if (t.axi_bresp !== 2'b00)
          report_sb_error("AXI_BRESP",
            $sformatf("FAIL: BRESP expected=2'b00 (OKAY) actual=2'b%02b at %0t",
                      t.axi_bresp, $time));
        else
          report_sb_pass("AXI_BRESP",
            $sformatf("BRESP expected=2'b00 (OKAY) actual=2'b%02b at %0t",
                      t.axi_bresp, $time));
      end

      axi_b_count++;

      // the write that got this B entered the scheduler queue one cycle earlier
      foreach (req_q[i])
        if (req_q[i].is_wr && !req_q[i].inq_v) begin
          req_q[i].inq_v = 1'b1;
          req_q[i].t_inq = (dfi_clk_cnt > 0) ? dfi_clk_cnt - 1 : 0;
          break;
        end
    end

    // Read data handshake
    if (t.axi_rvalid && t.axi_rready) begin
      axi_r_count++;

      if (expected_read_beats.size() == 0) begin
        report_sb_error("AXI_UNEXPECTED_R",
          $sformatf("FAIL: read data with no outstanding AR | expected: pending AR burst | actual: none, RDATA=0x%032h at %0t",
                    t.axi_rdata, $time));
      end
      else begin
        expected_last = (expected_read_beats[0] == 1);

        if (t.axi_rlast !== expected_last)
          report_sb_error("AXI_RLAST",
            $sformatf("FAIL: RLAST expected=%0b actual=%0b (remaining beats=%0d) at %0t",
                      expected_last, t.axi_rlast, expected_read_beats[0], $time));
        else
          report_sb_pass("AXI_RLAST",
            $sformatf("RLAST expected=%0b actual=%0b (remaining beats=%0d) at %0t",
                      expected_last, t.axi_rlast, expected_read_beats[0], $time));

        if (en_axi_rresp_check) begin
          if (t.axi_rresp !== 2'b00)
            report_sb_error("AXI_RRESP",
              $sformatf("FAIL: RRESP expected=2'b00 (OKAY) actual=2'b%02b at %0t",
                        t.axi_rresp, $time));
          else
            report_sb_pass("AXI_RRESP",
              $sformatf("RRESP expected=2'b00 (OKAY) actual=2'b%02b at %0t",
                        t.axi_rresp, $time));
        end

        // read data compare against the model
        if (en_axi_data_check && rd_q.size() > 0) begin
          check_rbeat(rd_q[0], t.axi_rdata);
          rd_q[0].beat++;
          if (rd_q[0].beat == (rd_q[0].len + 1))
            void'(rd_q.pop_front());
        end

        expected_read_beats[0]--;

        if (expected_read_beats[0] == 0)
          void'(expected_read_beats.pop_front());
      end
    end

  endfunction

  //============================================================
  // APB monitor callback
  //============================================================
  function void write_apb_agent(lpddr5c_apb_agent_seq_item t);

    bit exp_err;

    if (t.preset_n !== 1'b1) begin
      apb_setup_pending = 1'b0;
      // registers return to their reset values
      apb_shadow.delete();
      set_timing0(timing0_reset);
    end
    else if (t.psel && !t.penable) begin
      // APB setup phase
      apb_setup_pending = 1'b1;
      apb_setup_write   = t.pwrite;
      apb_setup_addr    = t.paddr;
      apb_setup_wdata   = t.pwdata;
    end
    else if (t.psel && t.penable) begin
      // APB access phase
      if (!apb_setup_pending) begin
        apb_protocol_error_count++;
        report_sb_error("APB_MISSING_SETUP",
          $sformatf("FAIL: APB access phase | expected: preceding setup phase | actual: none at %0t",
                    $time));
      end
      else if ((t.pwrite !== apb_setup_write) ||
               (t.paddr  !== apb_setup_addr)  ||
               (t.pwrite && (t.pwdata !== apb_setup_wdata))) begin
        apb_protocol_error_count++;
        report_sb_error("APB_SETUP_ACCESS_MISMATCH",
          $sformatf("FAIL: APB setup vs access | expected: PWRITE=%0b PADDR=0x%04h PWDATA=0x%08h | actual: PWRITE=%0b PADDR=0x%04h PWDATA=0x%08h at %0t",
                    apb_setup_write, apb_setup_addr, apb_setup_wdata,
                    t.pwrite, t.paddr, t.pwdata, $time));
      end
      else
        report_sb_pass("APB_SETUP_ACCESS",
          $sformatf("APB setup/access consistent: PWRITE=%0b PADDR=0x%04h PWDATA=0x%08h at %0t",
                    t.pwrite, t.paddr, t.pwdata, $time));

      // Transfer completes when PREADY is asserted
      if (t.pready) begin
        apb_transfer_count++;

        exp_err = apb_exp_slverr(t.paddr, t.pwrite);

        if (t.pslverr) begin
          if (exp_err)
            apb_exp_err_count++;            // expected error; data/direction checked by the expected-transfer compare
          else begin
            apb_error_count++;
            report_sb_error("APB_SLAVE_ERROR",
              $sformatf("FAIL: APB PSLVERR expected=0 actual=1: PWRITE=%0b PADDR=0x%04h at %0t",
                        t.pwrite, t.paddr, $time));
          end
        end
        else if (!exp_err)
          report_sb_pass("APB_SLAVE_OK",
            $sformatf("APB PSLVERR expected=0 actual=0: PWRITE=%0b PADDR=0x%04h at %0t",
                      t.pwrite, t.paddr, $time));
        // exp_err && !pslverr: reported by the expected-transfer compare, or by the decode check

        apb_transfer_done(t);          // shadow model + timing capture

        apb_setup_pending = 1'b0;
      end
    end
    else if (!t.psel) begin
      apb_setup_pending = 1'b0;
    end

  endfunction

  //============================================================
  // DFI_03: measure signed offset dfi_wrdata_en - WR command (one call per DFI clock item).
  //============================================================
  function void record_wren_latency(wr_cmd_t c, int dly);
    bit has_expected_latency;

    has_expected_latency = (exp_wrdata_en_lat >= 0) || chk_wrdata_en_lat;
    wren_n++;
    wren_sum += dly;
    if (wren_n == 1 || dly < wren_min) wren_min = dly;
    if (wren_n == 1 || dly > wren_max) wren_max = dly;
    wren_hist[dly] = wren_hist.exists(dly) ? wren_hist[dly] + 1 : 1;

    if (max_wren_lat_msgs == 0 || wren_n <= max_wren_lat_msgs)
      `uvm_info("DFI_WRDATA_EN_LAT",
        $sformatf("WR #%0d addr=0x%08h: WR cmd @clk %0d -> dfi_wrdata_en @clk %0d | measured signed offset = %0d clk | expected: %s",
                  wren_n, c.addr, c.t, int'(c.t) + dly, dly,
                  pick(has_expected_latency, $sformatf("%0d clk (fixed)", exp_wrdata_en_lat),
                       "no fixed latency defined (record only)")),
        UVM_LOW)

    if (dly < 0)
      wren_early++;

    if (has_expected_latency) begin
      if (dly != exp_wrdata_en_lat)
        report_sb_error("DFI_WRDATA_EN_LAT",
          $sformatf("FAIL: WR addr=0x%08h signed dfi_wrdata_en - WR offset | expected = %0d clk | actual = %0d clk at %0t",
                    c.addr, exp_wrdata_en_lat, dly, $time));
      else
        report_sb_pass("DFI_WRDATA_EN_LAT",
          $sformatf("WR addr=0x%08h signed dfi_wrdata_en - WR offset | expected = %0d clk | actual = %0d clk at %0t",
                    c.addr, exp_wrdata_en_lat, dly, $time));
    end
  endfunction

  // Pairs every WR command with one dfi_wrdata_en burst, in order, whichever comes first.
  function void track_wrdata_en(lpddr5c_dfi_agent_seq_item t);
    bit          en, start;
    wr_cmd_t     c;
    int unsigned te;

    // 1. WR command: pair with an enable that came first, else wait for one
    if ((t.dfi_cs_n === 1'b0) && (t.dfi_ca === CA_WR)) begin
      c.t    = dfi_clk_cnt;
      c.addr = t.dfi_addr;
      wren_wr_cmds++;
      if (wren_early_q.size() > 0) begin
        te = wren_early_q.pop_front();
        record_wren_latency(c, int'(te) - int'(c.t));
      end
      else
        wr_cmd_q.push_back(c);
    end

    // 2. start of a dfi_wrdata_en burst: pair with the oldest pending WR, else wait for the WR
    en = (t.dfi_wrdata_en === 1'b1);
    if (en) begin
      start = (wren_beats_per_wr == 0) ? !wren_prev : (wren_beats_left == 0);
      if (start) begin
        if (wr_cmd_q.size() > 0) begin
          c = wr_cmd_q.pop_front();
          record_wren_latency(c, int'(dfi_clk_cnt) - int'(c.t));
        end
        else
          wren_early_q.push_back(dfi_clk_cnt);
        wren_beats_left = wren_beats_per_wr;
      end
      if (wren_beats_left > 0) wren_beats_left--;
    end
    wren_prev = en;

    // 3. a WR that never gets dfi_wrdata_en / an enable that never gets its WR
    while (wr_cmd_q.size() > 0 && ((dfi_clk_cnt - wr_cmd_q[0].t) > max_wrdata_en_wait)) begin
      wren_timeouts++;
      report_sb_error("DFI_WRDATA_EN_MISSING",
        $sformatf("FAIL: WR addr=0x%08h @clk %0d | expected: dfi_wrdata_en within %0d clk | actual: none after %0d clk at %0t",
                  wr_cmd_q[0].addr, wr_cmd_q[0].t, max_wrdata_en_wait, dfi_clk_cnt - wr_cmd_q[0].t, $time));
      void'(wr_cmd_q.pop_front());
    end
    while (wren_early_q.size() > 0 && ((dfi_clk_cnt - wren_early_q[0]) > max_wrdata_en_wait)) begin
      wren_unmatched_en++;
      report_sb_error("DFI_WRDATA_EN_NO_WR",
        $sformatf("FAIL: dfi_wrdata_en @clk %0d | expected: a WR command within %0d clk | actual: none at %0t",
                  wren_early_q[0], max_wrdata_en_wait, $time));
      void'(wren_early_q.pop_front());
    end
  endfunction

  function void check_dfi_wrdata_mask(lpddr5c_dfi_agent_seq_item t);
    bit [7:0] expected_mask;
    bit [15:0] expected_bus;

    if (!en_dfi_wrdata_mask_check || (t.dfi_wrdata_en !== 1'b1))
      return;

    dfi_mask_samples++;
    if (expected_dfi_mask_q.size() == 0) begin
      report_sb_error("DFI_WRDATA_MASK_UNEXPECTED",
        $sformatf("FAIL: unexpected dfi_wrdata_en mask=0x%04h with no AXI WSTRB half queued at %0t",
                  t.dfi_wrdata_mask_bus, $time));
      return;
    end

    expected_mask = expected_dfi_mask_q.pop_front();
    // The DUT uses one 8-byte DFI channel; the interface's upper byte is unused.
    expected_bus = {8'h00, expected_mask};
    if (t.dfi_wrdata_mask_bus !== expected_bus)
      report_sb_error("DFI_WRDATA_MASK_MISMATCH",
        $sformatf("FAIL: DFI mask beat %0d | expected=0x%04h (inverted AXI WSTRB half) | actual=0x%04h at %0t",
                  dfi_mask_samples, expected_bus, t.dfi_wrdata_mask_bus, $time));
    else
      report_sb_pass("DFI_WRDATA_MASK",
        $sformatf("DFI mask beat %0d | expected=0x%04h | actual=0x%04h",
                  dfi_mask_samples, expected_bus, t.dfi_wrdata_mask_bus));
  endfunction

  //============================================================
  // DFI monitor callback
  //============================================================
  function void write_dfi_agent(lpddr5c_dfi_agent_seq_item t);

    bit [5:0] expected;

    dfi_item_count++;
    check_dfi_wrdata_mask(t);

    if (t.dfi_rst_n !== 1'b1) begin
      dfi_rst_low_count++;
      wr_cmd_q.delete();  wren_early_q.delete();  wren_prev = 1'b0;  wren_beats_left = 0;
      // reset: all banks closed, timing history and the scheduler queue cleared
      clear_banks();
      req_q.delete();
      return;
    end

    dfi_clk_cnt++;                     // monitor sends one item per clock

    if (en_wrdata_en_check)
      track_wrdata_en(t);               // DFI_03

    // Assumes the monitor sends one item per valid DFI command.
    if (t.dfi_cs_n === 1'b0) begin

      observed_ca_count++;

      // reference model for every real command
      if (en_dfi_model && (t.dfi_ca !== CA_NOP))
        dfi_command(t.dfi_ca, t.dfi_addr);

      if (expected_ca.size() == 0) begin
        // extra command: only an error if the test uses expect_ca()
        if (ca_expect_used) begin
          unexpected_ca_count++;
          report_sb_error("DFI_CA_UNEXPECTED",
            $sformatf("FAIL: DFI command | expected: none | actual: CA=%02h (%s) addr=0x%08h at %0t",
                      t.dfi_ca, ca_name(t.dfi_ca), t.dfi_addr, $time));
        end
      end
      else begin
        expected = expected_ca.pop_front();

        if (t.dfi_ca !== expected) begin
          mismatched_ca_count++;
          report_sb_error("DFI_CA_MISMATCH",
            $sformatf("FAIL: DFI command | expected CA=%02h (%s) | actual CA=%02h (%s) addr=0x%08h at %0t",
                      expected, ca_name(expected), t.dfi_ca, ca_name(t.dfi_ca), t.dfi_addr, $time));
        end
        else begin
          matched_ca_count++;
          report_sb_pass("DFI_CA",
            $sformatf("DFI command | expected CA=%02h (%s) | actual CA=%02h (%s) addr=0x%08h at %0t",
                      expected, ca_name(expected), t.dfi_ca, ca_name(t.dfi_ca), t.dfi_addr, $time));
        end
      end
    end

  endfunction

  function void write_lp_agent(lpddr5c_lp_agent_seq_item t);
    if (!en_lp_check)
      return;

    if (t.lp_req_pd) begin
      lp_pd_events++;
      if (t.lp_ack !== lp_exp_pd_ack)
        report_sb_error("LP_PD_ACK",
          $sformatf("FAIL: LP PD event %0d | expected lp_ack=%0b | actual=%0b | latency=%0d cycles",
                    lp_pd_events, lp_exp_pd_ack, t.lp_ack, t.pd_ack_latency));
      else
        report_sb_pass("LP_PD_ACK",
          $sformatf("LP PD event %0d | expected lp_ack=%0b | actual=%0b | latency=%0d cycles",
                    lp_pd_events, lp_exp_pd_ack, t.lp_ack, t.pd_ack_latency));
    end
    else if (t.wakeup_req) begin
      lp_wakeup_events++;
      if (t.wakeup_ack !== lp_exp_wakeup_ack)
        report_sb_error("LP_WAKEUP_ACK",
          $sformatf("FAIL: LP wakeup event %0d | expected wakeup_ack=%0b | actual=%0b | latency=%0d cycles",
                    lp_wakeup_events, lp_exp_wakeup_ack, t.wakeup_ack, t.wk_ack_latency));
      else if (lp_exp_wakeup_ack &&
               (t.wk_ack_latency < lp_exp_wakeup_latency_min ||
                t.wk_ack_latency > lp_exp_wakeup_latency_max))
        report_sb_error("LP_WAKEUP_LATENCY",
          $sformatf("FAIL: LP wakeup event %0d | expected latency=%0d..%0d cycles | actual=%0d cycles",
                    lp_wakeup_events, lp_exp_wakeup_latency_min,
                    lp_exp_wakeup_latency_max, t.wk_ack_latency));
      else
        report_sb_pass("LP_WAKEUP_ACK",
          $sformatf("LP wakeup event %0d | expected wakeup_ack=%0b | actual=%0b | latency=%0d cycles",
                    lp_wakeup_events, lp_exp_wakeup_ack, t.wakeup_ack, t.wk_ack_latency));
    end
  endfunction

  //============================================================
  // Check phase
  //============================================================
  function void check_phase(uvm_phase phase);
    super.check_phase(phase);

    if (en_lp_check) begin
      if (lp_pd_events != lp_exp_pd_count)
        report_sb_error("LP_PD_EVENT_COUNT",
          $sformatf("FAIL: expected %0d LP PD event(s) | actual=%0d",
                    lp_exp_pd_count, lp_pd_events));
      else
        report_sb_pass("LP_PD_EVENT_COUNT",
          $sformatf("LP PD events | expected=%0d actual=%0d",
                    lp_exp_pd_count, lp_pd_events));

      if (lp_wakeup_events != lp_exp_wakeup_count)
        report_sb_error("LP_WAKEUP_EVENT_COUNT",
          $sformatf("FAIL: expected %0d LP wakeup event(s) | actual=%0d",
                    lp_exp_wakeup_count, lp_wakeup_events));
      else
        report_sb_pass("LP_WAKEUP_EVENT_COUNT",
          $sformatf("LP wakeup events | expected=%0d actual=%0d",
                    lp_exp_wakeup_count, lp_wakeup_events));
    end

    // Missing expected DFI commands
    if (expected_ca.size() != 0)
      report_sb_error("DFI_CA_MISSING",
        $sformatf("FAIL: expected %0d more DFI commands, actual: none observed; next expected CA=%02h (%s)",
                  expected_ca.size(), expected_ca[0], ca_name(expected_ca[0])));
    else if (ca_expect_used)
      report_sb_pass("DFI_CA_ALL_SEEN", "all expected DFI commands were observed");

    // AXI write transaction accounting
    if ((axi_aw_count != axi_b_count) ||
        (axi_w_burst_count != axi_b_count))
      report_sb_error("AXI_WRITE_INCOMPLETE",
        $sformatf("FAIL: AXI writes | expected: AW == W_bursts == B | actual: AW=%0d W_bursts=%0d B=%0d",
                  axi_aw_count, axi_w_burst_count, axi_b_count));
    else
      report_sb_pass("AXI_WRITE_COMPLETE",
        $sformatf("AXI writes | expected: AW == W_bursts == B | actual: AW=%0d W_bursts=%0d B=%0d",
                  axi_aw_count, axi_w_burst_count, axi_b_count));

    // AXI read transaction accounting
    if (expected_read_beats.size() != 0)
      report_sb_error("AXI_READ_INCOMPLETE",
        $sformatf("FAIL: AXI reads | expected: 0 pending bursts | actual: %0d pending (AR=%0d R_beats=%0d)",
                  expected_read_beats.size(), axi_ar_count, axi_r_count));
    else
      report_sb_pass("AXI_READ_COMPLETE",
        $sformatf("AXI reads | expected: 0 pending bursts | actual: 0 pending (AR=%0d R_beats=%0d)",
                  axi_ar_count, axi_r_count));

    // write data that never completed
    if (en_axi_data_check) begin
      if (aw_q.size() != 0 || w_q.size() != 0)
        report_sb_error("AXI_WDATA_INCOMPLETE",
          $sformatf("FAIL: write data model | expected: 0 AW and 0 W beats left over | actual: %0d AW and %0d W beat(s)",
                    aw_q.size(), w_q.size()));
      else
        report_sb_pass("AXI_WDATA_COMPLETE",
          "write data model | expected: 0 AW and 0 W beats left over | actual: 0 AW and 0 W beats");
    end

    if (en_dfi_wrdata_mask_check) begin
      if (expected_dfi_mask_q.size() != 0)
        report_sb_error("DFI_WRDATA_MASK_MISSING",
          $sformatf("FAIL: expected %0d remaining DFI mask beat(s) from accepted AXI WSTRB values, actual: none observed",
                    expected_dfi_mask_q.size()));
      else if (dfi_mask_samples == 0)
        report_sb_error("DFI_WRDATA_MASK_NONE",
          "FAIL: expected DFI write-data mask samples from AXI writes, actual: none observed");
      else
        report_sb_pass("DFI_WRDATA_MASK_COMPLETE",
          $sformatf("all %0d DFI write-data mask beats matched AXI WSTRB values", dfi_mask_samples));
    end

    // every accepted AXI request must have reached DFI (enable for tests that drain the queue)
    if (en_addr_match && chk_all_served) begin
      if (req_q.size() != 0)
        report_sb_error("DFI_REQ_NOT_SERVED",
          $sformatf("FAIL: expected 0 unserved AXI requests | actual: %0d never produced a DFI RD/WR; first addr=0x%08h",
                    req_q.size(), req_q[0].addr));
      else
        report_sb_pass("DFI_REQ_SERVED",
          "expected 0 unserved AXI requests | actual: 0");
    end

    // DFI_03: report the signed WR/data-enable offset and flag an unspecified latency.
    if (en_wrdata_en_check) begin
      if (wren_n != 0) begin
        string hist;
        hist = "";
        foreach (wren_hist[d])
          hist = {hist, $sformatf(" %0dclk:%0dx", d, wren_hist[d])};
        if ((exp_wrdata_en_lat < 0) && !chk_wrdata_en_lat && (wren_min != wren_max))
          report_known_bug("WRDATA_EN_LAT_BUG",
            $sformatf("FLAG: signed dfi_wrdata_en - WR offset has no configured fixed expectation | actual: VARIABLE, min=%0d max=%0d avg=%0.2f clk over %0d writes | histogram:%s",
                      wren_min, wren_max, real'(wren_sum) / wren_n, wren_n, hist));
        else if ((exp_wrdata_en_lat < 0) && !chk_wrdata_en_lat)
          report_known_bug("WRDATA_EN_LAT_BUG",
            $sformatf("FLAG: signed dfi_wrdata_en - WR offset has no configured fixed expectation | actual: constant %0d clk over %0d writes (recorded only)",
                      wren_min, wren_n));
      end
      else if (wren_wr_cmds != 0 && wren_timeouts == 0)
        report_sb_error("DFI_WRDATA_EN_NONE",
          $sformatf("FAIL: %0d WR commands seen | expected: dfi_wrdata_en for each | actual: none observed", wren_wr_cmds));
      else
        `uvm_warning("DFI_03_NOT_RUN", "no WR command seen on DFI - write data-enable timing not exercised")
    end

    // DFI monitor sanity: warn if the scoreboard never saw a DFI command
    if (dfi_item_count == 0)
      `uvm_warning("DFI_NO_ITEMS",
        "DFI monitor delivered 0 items to the scoreboard - check dfi_agent analysis port connection")
    else if (observed_ca_count == 0)
      `uvm_warning("DFI_NO_COMMANDS",
        $sformatf("DFI monitor delivered %0d items (%0d during reset) but none had dfi_cs_n == 0 - scoreboard saw no DFI commands",
                  dfi_item_count, dfi_rst_low_count))

    // Missing expected APB transfers
    if (expected_apb.size() != 0)
      report_sb_error("APB_XFER_MISSING",
        $sformatf("FAIL: expected %0d more APB transfers, actual: none observed; next expected %s PADDR=0x%04h data=0x%08h",
                  expected_apb.size(), pick(expected_apb[0].pwrite, "WRITE", "READ"),
                  expected_apb[0].paddr, expected_apb[0].data));
    else if (apb_exp_matched != 0)
      report_sb_pass("APB_XFER_ALL_SEEN", "all expected APB transfers were observed");

    // APB transaction accounting
    if (apb_setup_pending)
      report_sb_error("APB_TRANSFER_INCOMPLETE",
        "FAIL: APB | expected: every setup phase followed by a completed access | actual: setup phase left pending");
    else
      report_sb_pass("APB_TRANSFER_COMPLETE",
        "APB | expected: every setup phase followed by a completed access | actual: none pending");

    scoreboard_pass = (scoreboard_error_count == 0);

  endfunction

  //============================================================
  // Report phase: PASS / FAIL summary
  //============================================================
  function void report_phase(uvm_phase phase);
    super.report_phase(phase);

    scoreboard_pass = (scoreboard_error_count == 0);

    `uvm_info("SCBD_SUMMARY",
      "==================================================", UVM_NONE)

    `uvm_info("SCBD_SUMMARY",
      "          LPDDR5C SCOREBOARD SUMMARY", UVM_NONE)

    `uvm_info("SCBD_SUMMARY",
      "==================================================", UVM_NONE)

    if (scoreboard_pass) begin
      `uvm_info("SCBD_RESULT",
        "******** SCOREBOARD RESULT: PASS ********", UVM_NONE)
    end
    else begin
      `uvm_info("SCBD_RESULT",
        $sformatf("******** SCOREBOARD RESULT: FAIL (%0d errors) ********",
                  scoreboard_error_count),
        UVM_NONE)
    end

    // DFI summary
    `uvm_info("SCBD_SUMMARY",
      $sformatf("DFI: observed=%0d matched=%0d mismatched=%0d unexpected=%0d pending=%0d",
                observed_ca_count, matched_ca_count,
                mismatched_ca_count, unexpected_ca_count,
                expected_ca.size()),
      UVM_NONE)

    if (en_lp_check)
      `uvm_info("SCBD_SUMMARY",
        $sformatf("LP: power-down events=%0d/%0d wakeup events=%0d/%0d",
                  lp_pd_events, lp_exp_pd_count,
                  lp_wakeup_events, lp_exp_wakeup_count),
        UVM_NONE)

    // DFI monitor visibility
    `uvm_info("SCBD_SUMMARY",
      $sformatf("DFI monitor: items=%0d items_in_reset=%0d commands(cs_n==0)=%0d",
                dfi_item_count, dfi_rst_low_count, observed_ca_count),
      UVM_NONE)

    // DFI_03 summary
    `uvm_info("SCBD_SUMMARY",
      $sformatf("DFI_03 signed dfi_wrdata_en - WR offset: WR cmds=%0d samples=%0d min=%0d max=%0d avg=%0.2f clk | enables before WR=%0d | wrdata_en without WR=%0d WR without wrdata_en=%0d",
                wren_wr_cmds, wren_n, wren_min, wren_max,
                (wren_n != 0) ? real'(wren_sum) / wren_n : 0.0, wren_early,
                wren_unmatched_en, wren_timeouts),
      UVM_NONE)

    if (en_dfi_wrdata_mask_check)
      `uvm_info("SCBD_SUMMARY",
        $sformatf("DFI write-data masks: checked=%0d pending=%0d",
                  dfi_mask_samples, expected_dfi_mask_q.size()),
        UVM_NONE)

    // DFI model summary
    `uvm_info("SCBD_SUMMARY",
      $sformatf("DFI model: ACT=%0d RD=%0d WR=%0d PRE=%0d PREA=%0d REF=%0d | row hit=%0d miss=%0d closed=%0d | known-bug flags=%0d",
                n_act, n_rd, n_wr, n_pre, n_prea, n_ref,
                n_row_hit, n_row_miss, n_row_closed, known_bug_count),
      UVM_NONE)

    // AXI summary
    `uvm_info("SCBD_SUMMARY",
      $sformatf("AXI: AW=%0d W_BEATS=%0d W_BURSTS=%0d B=%0d AR=%0d R_BEATS=%0d",
                axi_aw_count, axi_w_count, axi_w_burst_count,
                axi_b_count, axi_ar_count, axi_r_count),
      UVM_NONE)

    // AXI data model summary
    `uvm_info("SCBD_SUMMARY",
      $sformatf("AXI data: writes committed=%0d read beats checked=%0d unwritten=%0d data errors=%0d | requests not yet on DFI=%0d",
                wr_commit_count, rd_checked_beats, rd_unwritten_beats,
                rd_data_errors, req_q.size()),
      UVM_NONE)

    // APB summary
    `uvm_info("SCBD_SUMMARY",
      $sformatf("APB: transfers=%0d unexpected_slave_errors=%0d protocol_errors=%0d read-backs checked=%0d expected_slverr=%0d invalid-addr checked=%0d ro-write checked=%0d | expected-xfer matched=%0d mismatched=%0d unexpected=%0d pending=%0d",
                apb_transfer_count, apb_error_count,
                apb_protocol_error_count, apb_rb_checked,
                apb_exp_err_count, apb_invalid_checked, apb_ro_checked,
                apb_exp_matched, apb_exp_mismatched, apb_exp_unexpected,
                expected_apb.size()),
      UVM_NONE)

    // Per-register expected-vs-actual table
    if (reg_stat.size() != 0) begin
      `uvm_info("SCBD_REGTBL", "---- APB register expected-vs-actual ----", UVM_NONE)
      foreach (reg_stat[a]) begin
        if (reg_stat[a].rd_fail != 0)
          `uvm_info("SCBD_REGTBL",
            $sformatf("FAIL %-14s 0x%04h | writes=%0d reads=%0d read_pass=%0d read_fail=%0d | last fail: expected=0x%08h actual=0x%08h diff=0x%08h at %0t",
                      apb_reg_name(a), a, reg_stat[a].wr, reg_stat[a].rd, reg_stat[a].rd_pass,
                      reg_stat[a].rd_fail, reg_stat[a].last_fail_exp, reg_stat[a].last_fail_act,
                      reg_stat[a].last_fail_diff, reg_stat[a].last_fail_time),
            UVM_NONE)
        else
          `uvm_info("SCBD_REGTBL",
            $sformatf("PASS %-14s 0x%04h | writes=%0d reads=%0d read_pass=%0d read_fail=%0d",
                      apb_reg_name(a), a, reg_stat[a].wr, reg_stat[a].rd,
                      reg_stat[a].rd_pass, reg_stat[a].rd_fail),
            UVM_NONE)
      end
    end

    // Check totals
    `uvm_info("SCBD_SUMMARY",
      $sformatf("Total checks passed = %0d, failed = %0d",
                total_pass_count, scoreboard_error_count),
      UVM_NONE)

    // Total errors
    `uvm_info("SCBD_SUMMARY",
      $sformatf("Total scoreboard errors = %0d",
                scoreboard_error_count),
      UVM_NONE)

    `uvm_info("SCBD_SUMMARY",
      "==================================================", UVM_NONE)

  endfunction

endclass : lpddr5c_scoreboard
