
`timescale 1ns/1ps

module lpddr5c_cmd_scheduler #(
    parameter ADDR_WIDTH        = 32,
    parameter DATA_WIDTH        = 128,
    parameter NUM_CHANNELS      = 1,      // scheduler handles channel 0 only
    parameter NUM_RANKS         = 1,
    parameter NUM_BANKS         = 8,
    parameter NUM_BANK_GROUPS   = 2,
    parameter ROW_WIDTH         = 16,
    parameter COL_WIDTH         = 10,
    parameter BA_WIDTH          = 3,
    parameter BG_WIDTH          = 1,
    parameter CMD_QUEUE_DEPTH   = 16,
    parameter CMD_ID_WIDTH      = 8,
    // Timing defaults (clocks). tRCD/tRP/tRAS/tRC come from timing_params.
    // Replace with values for your device / speed bin.
    parameter int T_RRD_L       = 4,
    parameter int T_RRD_S       = 2,
    parameter int T_CCD_L       = 4,
    parameter int T_CCD_S       = 2,
    parameter int T_WTR_L       = 10,
    parameter int T_WTR_S       = 4,
    parameter int T_RTP         = 8,
    parameter int T_WR          = 16,
    parameter int T_WL          = 4,      // write latency
    parameter int T_BURST       = 2,      // data burst duration in clocks (verify for your WCK:CK ratio)
    parameter int T_RTW         = 8,      // RD -> WR turnaround (>= RL + T_BURST - T_WL + gap)
    parameter int T_FAW         = 20,
    parameter int T_RFC         = 168,    // must be >= 1
    parameter int STARVE_AGE    = 512,    // age at which an entry is promoted
    parameter int DIR_BONUS     = 256     // used only when sched_policy[0] = 1
) (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic [31:0]                  timing_params,   // quasi-static
    input  logic [3:0]                   sched_policy,    // [0]: read/write direction batching
    input  logic [1:0]                   qos_en,

    input  logic [ADDR_WIDTH-1:0]        cmd_addr,
    input  logic [3:0]                   cmd_type,
    input  logic                         cmd_valid,
    output logic                         cmd_ready,
    input  logic [CMD_ID_WIDTH-1:0]      cmd_id,

    // Refresh protocol: hold refresh_req until refresh_ack pulses.
    input  logic                         refresh_req,
    output logic                         refresh_ack,
    input  logic                         refresh_urgent,
    input  logic [7:0]                   refresh_row,

    output logic [NUM_CHANNELS-1:0]      bank_active [0:NUM_BANKS-1],
    output logic [NUM_CHANNELS-1:0]      row_open,
    output logic [ROW_WIDTH-1:0]         open_row [0:NUM_CHANNELS-1],

    output logic [NUM_RANKS-1:0]         dfi_cs_n,
    output logic [NUM_CHANNELS-1:0]      dfi_cke,
    output logic [5:0]                   dfi_ca,
    output logic                         dfi_rw,
    output logic [ADDR_WIDTH-1:0]        dfi_addr,
    output logic                         cmd_activity,
    output logic                         rd_activity,
    output logic                         wr_activity,
    output logic                         lp_idle
);

    //========================================================================
    // Local Parameters
    //========================================================================
    localparam CMD_NOP          = 4'b0000;
    localparam CMD_READ         = 4'b0001;
    localparam CMD_WRITE        = 4'b0010;
    localparam CMD_ACTIVATE     = 4'b0011;
    localparam CMD_PRECHARGE    = 4'b0100;
    localparam CMD_REFRESH      = 4'b0101;
    localparam CMD_MRW          = 4'b0110;
    localparam CMD_MRR          = 4'b0111;
    localparam CMD_PDOWN_ENTRY  = 4'b1000;
    localparam CMD_PDOWN_EXIT   = 4'b1001;
    localparam CMD_SR_ENTRY     = 4'b1010;
    localparam CMD_SR_EXIT      = 4'b1011;

    // Placeholder CA opcodes (NOT real LPDDR5 CA encoding)
    localparam CA_NOP           = 6'b000000;
    localparam CA_RD            = 6'b000001;
    localparam CA_WR            = 6'b000010;
    localparam CA_ACT           = 6'b000011;
    localparam CA_PRE           = 6'b000100;
    localparam CA_PREA          = 6'b000101;
    localparam CA_REF           = 6'b000110;
    localparam CA_MRW           = 6'b000111;
    localparam CA_MRR           = 6'b001000;
    localparam CA_SRE           = 6'b001001;
    localparam CA_SRX           = 6'b001010;
    localparam CA_PDE           = 6'b001011;
    localparam CA_PDX           = 6'b001100;

    localparam int CH = 0;

    // Command-counter width: tRAS + tRP (two 8-bit fields) is at most 510
    localparam int CW   = 9;
    localparam int CMAX = (1 << CW) - 1;
    typedef logic [CW-1:0] cnt_t;

    localparam int RFC_W = $clog2(T_RFC + 1);
    // Runtime timing values from the register (8-bit fields)
    wire cnt_t tRCD = cnt_t'(timing_params[7:0]);
    wire cnt_t tRP  = cnt_t'(timing_params[15:8]);
    wire cnt_t tRAS = cnt_t'(timing_params[23:16]);
    wire cnt_t tRC  = cnt_t'(timing_params[31:24]);

    // [R3] ACT->ACT same bank can never be shorter than tRAS + tRP
    wire cnt_t tRAS_RP = tRAS + tRP;
    wire cnt_t tRC_eff = (tRC > tRAS_RP) ? tRC : tRAS_RP;

    localparam cnt_t tRRD_L = cnt_t'(T_RRD_L);
    localparam cnt_t tRRD_S = cnt_t'(T_RRD_S);
    localparam cnt_t tCCD_L = cnt_t'(T_CCD_L);
    localparam cnt_t tCCD_S = cnt_t'(T_CCD_S);
    localparam cnt_t tRTP   = cnt_t'(T_RTP);
    localparam cnt_t tRTW   = cnt_t'(T_RTW);
    localparam cnt_t tFAW   = cnt_t'(T_FAW);
    // Write-to-X windows are measured from the END of the write data burst
    localparam cnt_t tWR_PRE = cnt_t'(T_WL + T_BURST + T_WR);
    localparam cnt_t tWTR_LL = cnt_t'(T_WL + T_BURST + T_WTR_L);
    localparam cnt_t tWTR_SS = cnt_t'(T_WL + T_BURST + T_WTR_S);

    function automatic cnt_t dec_c(input cnt_t x);
        return (x == '0) ? '0 : (x - cnt_t'(1));
    endfunction

    function automatic cnt_t max_c(input cnt_t a, input cnt_t b);
        return (a > b) ? a : b;
    endfunction

    //========================================================================
    // Address decoding  (bank [11:9], row [31:16]; bank group = low bank bits)
    //========================================================================
    function automatic [BA_WIDTH-1:0] get_bank_addr(input [ADDR_WIDTH-1:0] addr);
        get_bank_addr = addr[9 +: BA_WIDTH];
    endfunction

    function automatic [BG_WIDTH-1:0] get_bg_from_bank(input [BA_WIDTH-1:0] bank);
        get_bg_from_bank = bank[BG_WIDTH-1:0];
    endfunction

    function automatic [ROW_WIDTH-1:0] get_row_addr(input [ADDR_WIDTH-1:0] addr);
        get_row_addr = addr[ADDR_WIDTH-1 -: ROW_WIDTH];
    endfunction

    //========================================================================
    // Command queue
    //========================================================================
    typedef struct packed {
        logic [ADDR_WIDTH-1:0]     addr;
        logic [3:0]                cmd_type;
        logic [CMD_ID_WIDTH-1:0]   cmd_id;
        logic [15:0]               age;
        logic [1:0]                qos;
        logic                      valid;
    } cmd_queue_entry_t;

    cmd_queue_entry_t cmd_queue [0:CMD_QUEUE_DEPTH-1];

    localparam QIDX_W = $clog2(CMD_QUEUE_DEPTH);
    localparam QCNT_W = $clog2(CMD_QUEUE_DEPTH+1);

    logic [QCNT_W-1:0]  cmd_queue_entries;
    logic               free_found;
    logic [QIDX_W-1:0]  free_idx;

    always_comb begin
        free_found = 1'b0;
        free_idx   = '0;
        cmd_queue_entries = '0;
        for (int k = 0; k < CMD_QUEUE_DEPTH; k++) begin
            if (cmd_queue[k].valid)
                cmd_queue_entries = cmd_queue_entries + 1'b1;
            if (!cmd_queue[k].valid && !free_found) begin
                free_found = 1'b1;
                free_idx   = k[QIDX_W-1:0];
            end
        end
    end

    //========================================================================
    // State
    //========================================================================
    typedef struct packed {
        logic                       active;
        logic [ROW_WIDTH-1:0]       open_row;
        cnt_t                       ras_counter;  // ACT -> PRE
        cnt_t                       rp_counter;   // PRE -> ACT
        cnt_t                       rcd_counter;  // ACT -> RD/WR
        cnt_t                       rc_counter;   // ACT -> ACT (same bank)
        cnt_t                       pre_counter;  // RD/WR -> PRE (tRTP / tWR)
    } bank_state_t;

    bank_state_t bank_state [0:NUM_CHANNELS-1][0:NUM_BANKS-1];

    cnt_t ccd_cnt [0:NUM_BANK_GROUPS-1];   // column -> column
    cnt_t rrd_cnt [0:NUM_BANK_GROUPS-1];   // ACT -> ACT
    cnt_t wtr_cnt [0:NUM_BANK_GROUPS-1];   // WR -> RD
    cnt_t rtw_cnt;                         // RD -> WR
    cnt_t faw_cnt [0:3];                   // sliding four-ACT window
    logic [RFC_W-1:0] rfc_cnt;             // REF -> anything

    logic ref_active;      // a refresh sequence has started
    logic last_col_wr;     // direction of the last column command (for batching)
    logic ready_q;         // [R6] registered capacity term of cmd_ready

    wire  rfc_busy    = (rfc_cnt != '0);
    wire  ref_start   = refresh_req && !rfc_busy && !ref_active;
    wire  ref_pending = ref_active || ref_start;

    wire blk_row = ref_pending || rfc_busy;                     // blocks ACT / PRE
    wire blk_col = rfc_busy || (ref_pending && refresh_urgent); // blocks RD / WR

    //========================================================================
    // Per-bank / per-group readiness
    //========================================================================
    logic bk_act_ok [0:NUM_BANKS-1];
    logic bk_col_ok [0:NUM_BANKS-1];
    logic bk_pre_ok [0:NUM_BANKS-1];
    logic bg_rrd_ok [0:NUM_BANK_GROUPS-1];
    logic bg_rd_ok  [0:NUM_BANK_GROUPS-1];
    logic bg_wr_ok  [0:NUM_BANK_GROUPS-1];
    logic              faw_ok;
    logic [1:0]        faw_idx;

    logic any_active, prea_ready, all_rp_zero;
    logic ref_prea, ref_ref;

    always_comb begin
        any_active  = 1'b0;
        prea_ready  = 1'b1;
        all_rp_zero = 1'b1;
        for (int b = 0; b < NUM_BANKS; b++) begin
            bk_act_ok[b] = !bank_state[CH][b].active &&
                           (bank_state[CH][b].rp_counter == '0) &&
                           (bank_state[CH][b].rc_counter == '0);
            bk_col_ok[b] =  bank_state[CH][b].active &&
                           (bank_state[CH][b].rcd_counter == '0);
            bk_pre_ok[b] =  bank_state[CH][b].active &&
                           (bank_state[CH][b].ras_counter == '0) &&
                           (bank_state[CH][b].pre_counter == '0);
            if (bank_state[CH][b].active) begin
                any_active = 1'b1;
                if (!bk_pre_ok[b]) prea_ready = 1'b0;
            end
            if (bank_state[CH][b].rp_counter != '0) all_rp_zero = 1'b0;
        end

        for (int g = 0; g < NUM_BANK_GROUPS; g++) begin
            bg_rrd_ok[g] = (rrd_cnt[g] == '0);
            bg_rd_ok[g]  = (ccd_cnt[g] == '0) && (wtr_cnt[g] == '0);
            bg_wr_ok[g]  = (ccd_cnt[g] == '0) && (rtw_cnt == '0);
        end

        faw_ok  = 1'b0;
        faw_idx = 2'd0;
        for (int i = 0; i < 4; i++) begin
            if (faw_cnt[i] == '0 && !faw_ok) begin
                faw_ok  = 1'b1;
                faw_idx = i[1:0];
            end
        end

        ref_prea = ref_pending && any_active && prea_ready;
        ref_ref  = ref_pending && !any_active && all_rp_zero;
    end

    //========================================================================
    // Next-command decode (per queue entry) and starvation detect
    //========================================================================
    logic [3:0]          cand_cmd        [0:CMD_QUEUE_DEPTH-1];
    logic                starved_pre     [0:NUM_BANKS-1];   // a starved request needs PRE here
    integer              dec_bk;

    always_comb begin
        dec_bk = 0;
        for (int b = 0; b < NUM_BANKS; b++) starved_pre[b] = 1'b0;
        for (int k = 0; k < CMD_QUEUE_DEPTH; k++) begin
            cand_cmd[k] = CMD_NOP;
            if (cmd_queue[k].valid) begin
                dec_bk = get_bank_addr(cmd_queue[k].addr);
                if (!bank_state[CH][dec_bk].active)
                    cand_cmd[k] = CMD_ACTIVATE;
                else if (bank_state[CH][dec_bk].open_row != get_row_addr(cmd_queue[k].addr))
                    cand_cmd[k] = CMD_PRECHARGE;
                else
                    cand_cmd[k] = cmd_queue[k].cmd_type;
                if (cand_cmd[k] == CMD_PRECHARGE && cmd_queue[k].age >= 16'(STARVE_AGE))
                    starved_pre[dec_bk] = 1'b1;
            end
        end
    end

    //========================================================================
    // Candidate generation (per queue entry, fully parallel)
    //========================================================================
    logic [31:0]         candidate_score [0:CMD_QUEUE_DEPTH-1];
    logic                candidate_valid [0:CMD_QUEUE_DEPTH-1];
    integer              sel_bk, sel_bg, sel_bj;

    always_comb begin
        sel_bk = 0;
        sel_bg = 0;
        sel_bj = 0;

        for (int k = 0; k < CMD_QUEUE_DEPTH; k++) begin
            candidate_score[k] = 32'd0;
            candidate_valid[k] = 1'b0;

            if (cmd_queue[k].valid) begin
                sel_bk = get_bank_addr(cmd_queue[k].addr);
                sel_bg = get_bg_from_bank(get_bank_addr(cmd_queue[k].addr));

                // Score: age + row-hit bonus + optional direction bonus + QoS
                candidate_score[k] = {16'd0, cmd_queue[k].age};
                if (cand_cmd[k] == cmd_queue[k].cmd_type)
                    candidate_score[k] = candidate_score[k] + 32'd1000;
                if (sched_policy[0] &&
                    ((cand_cmd[k] == CMD_READ) || (cand_cmd[k] == CMD_WRITE)) &&
                    ((cand_cmd[k] == CMD_WRITE) == last_col_wr))
                    candidate_score[k] = candidate_score[k] + 32'(DIR_BONUS);
                if (qos_en != 2'b00)
                    candidate_score[k] = candidate_score[k] + {2'b00, cmd_queue[k].qos, 28'd0};
                // [R4] starvation promotion beats every bonus above (max 0x3001_0xxx)
                if (cmd_queue[k].age >= 16'(STARVE_AGE))
                    candidate_score[k] = candidate_score[k] + 32'h4000_0000;

                // Full timing legality of the NEXT command
                case (cand_cmd[k])
                    CMD_ACTIVATE:
                        candidate_valid[k] = !blk_row && bk_act_ok[sel_bk] &&
                                             bg_rrd_ok[sel_bg] && faw_ok;
                    CMD_PRECHARGE:
                        candidate_valid[k] = !blk_row && bk_pre_ok[sel_bk];
                    CMD_READ:
                        candidate_valid[k] = !blk_col && bk_col_ok[sel_bk] && bg_rd_ok[sel_bg] &&
                                             !(starved_pre[sel_bk] && !(cmd_queue[k].age >= 16'(STARVE_AGE)));
                    CMD_WRITE:
                        candidate_valid[k] = !blk_col && bk_col_ok[sel_bk] && bg_wr_ok[sel_bg] &&
                                             !(starved_pre[sel_bk] && !(cmd_queue[k].age >= 16'(STARVE_AGE)));
                    default:
                        candidate_valid[k] = 1'b0;
                endcase

                // Do not close a row another queued request still hits.
                // A starved PRE only yields to hits that are themselves starved
                // (they are never held off, so the wait is finite); a
                // non-starved PRE yields to every hit.
                if (cand_cmd[k] == CMD_PRECHARGE) begin
                    for (int j = 0; j < CMD_QUEUE_DEPTH; j++) begin
                        sel_bj = get_bank_addr(cmd_queue[j].addr);
                        if (cmd_queue[j].valid && (sel_bj == sel_bk) &&
                            (get_row_addr(cmd_queue[j].addr) == bank_state[CH][sel_bk].open_row) &&
                            ((cmd_queue[k].age < 16'(STARVE_AGE)) ||
                             (cmd_queue[j].age >= 16'(STARVE_AGE))))
                            candidate_valid[k] = 1'b0;
                    end
                end
            end
        end
    end

    //========================================================================
    // [R5] Best-candidate selection: balanced compare tree
    //      Ties go to the lower queue index (a-side wins on >=).
    //========================================================================
    localparam int POW2 = 1 << QIDX_W;

    logic              lv_valid [0:QIDX_W][0:POW2-1];
    logic [31:0]       lv_score [0:QIDX_W][0:POW2-1];
    logic [QIDX_W-1:0] lv_idx   [0:QIDX_W][0:POW2-1];
    logic [3:0]        lv_cmd   [0:QIDX_W][0:POW2-1];

    logic [QIDX_W-1:0] best_candidate_idx;
    cmd_queue_entry_t  best_candidate;
    logic              found;

    always_comb begin
        for (int l = 0; l <= QIDX_W; l++) begin
            for (int i = 0; i < POW2; i++) begin
                lv_valid[l][i] = 1'b0;
                lv_score[l][i] = 32'd0;
                lv_idx[l][i]   = '0;
                lv_cmd[l][i]   = CMD_NOP;
            end
        end

        for (int i = 0; i < CMD_QUEUE_DEPTH; i++) begin
            lv_valid[0][i] = candidate_valid[i];
            lv_score[0][i] = candidate_score[i];
            lv_idx[0][i]   = i[QIDX_W-1:0];
            lv_cmd[0][i]   = cand_cmd[i];
        end

        for (int l = 0; l < QIDX_W; l++) begin
            for (int i = 0; i < (POW2 >> (l + 1)); i++) begin
                if (lv_valid[l][2*i] &&
                    (!lv_valid[l][2*i+1] || (lv_score[l][2*i] >= lv_score[l][2*i+1]))) begin
                    lv_valid[l+1][i] = lv_valid[l][2*i];
                    lv_score[l+1][i] = lv_score[l][2*i];
                    lv_idx[l+1][i]   = lv_idx[l][2*i];
                    lv_cmd[l+1][i]   = lv_cmd[l][2*i];
                end else begin
                    lv_valid[l+1][i] = lv_valid[l][2*i+1];
                    lv_score[l+1][i] = lv_score[l][2*i+1];
                    lv_idx[l+1][i]   = lv_idx[l][2*i+1];
                    lv_cmd[l+1][i]   = lv_cmd[l][2*i+1];
                end
            end
        end

        found              = lv_valid[QIDX_W][0];
        best_candidate_idx = lv_idx[QIDX_W][0];
        best_candidate     = found ? cmd_queue[lv_idx[QIDX_W][0]] : '0;
    end

    //========================================================================
    // Issue decode
    //========================================================================
    wire [3:0]            iss_cmd   = lv_cmd[QIDX_W][0];
    wire [BA_WIDTH-1:0]   iss_bank  = get_bank_addr(best_candidate.addr);
    wire [BG_WIDTH-1:0]   iss_bg    = get_bg_from_bank(iss_bank);
    wire [ROW_WIDTH-1:0]  iss_row   = get_row_addr(best_candidate.addr);

    // Refresh-sequence commands have priority over scheduled commands
    wire issue_normal = found && !ref_prea && !ref_ref;
    wire pop          = issue_normal && ((iss_cmd == CMD_READ) || (iss_cmd == CMD_WRITE));

    // Only RD / WR are queued; other types are accepted and dropped
    wire accept = cmd_valid && cmd_ready;
    wire push   = accept && ((cmd_type == CMD_READ) || (cmd_type == CMD_WRITE));

    // [R6] Capacity for the NEXT cycle, computed from next occupancy
    wire [QCNT_W-1:0] entries_next = cmd_queue_entries + QCNT_W'(push) - QCNT_W'(pop);

    //========================================================================
    // Sequential logic
    //========================================================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < CMD_QUEUE_DEPTH; i++) cmd_queue[i] <= '0;
            for (int c = 0; c < NUM_CHANNELS; c++)
                for (int b = 0; b < NUM_BANKS; b++)
                    bank_state[c][b] <= '0;
            for (int g = 0; g < NUM_BANK_GROUPS; g++) begin
                ccd_cnt[g] <= '0;
                rrd_cnt[g] <= '0;
                wtr_cnt[g] <= '0;
            end
            for (int i = 0; i < 4; i++) faw_cnt[i] <= '0;
            rtw_cnt     <= '0;
            rfc_cnt     <= '0;
            ref_active  <= 1'b0;
            refresh_ack <= 1'b0;
            last_col_wr <= 1'b0;
            ready_q     <= 1'b1;

            dfi_cs_n <= {NUM_RANKS{1'b1}};
            dfi_cke  <= '0;
            dfi_ca   <= CA_NOP;
            dfi_rw   <= 1'b0;
            dfi_addr <= '0;
        end else begin
            // Defaults: NOP on the bus, ack is a one-cycle pulse
            refresh_ack <= 1'b0;
            dfi_cs_n    <= {NUM_RANKS{1'b1}};
            dfi_cke     <= {NUM_CHANNELS{1'b1}};
            dfi_ca      <= CA_NOP;
            dfi_rw      <= 1'b0;

            ready_q <= (entries_next < QCNT_W'(CMD_QUEUE_DEPTH));

            //----------------------------------------------------------------
            // Queue push
            //----------------------------------------------------------------
            if (push) begin
                cmd_queue[free_idx].addr     <= cmd_addr;
                cmd_queue[free_idx].cmd_type <= cmd_type;
                cmd_queue[free_idx].cmd_id   <= cmd_id;
                cmd_queue[free_idx].age      <= 16'd0;
                cmd_queue[free_idx].qos      <= cmd_addr[1:0];   // placeholder QoS
                cmd_queue[free_idx].valid    <= 1'b1;
            end

            // Saturating age
            for (int i = 0; i < CMD_QUEUE_DEPTH; i++) begin
                if (cmd_queue[i].valid && cmd_queue[i].age != 16'hFFFF)
                    cmd_queue[i].age <= cmd_queue[i].age + 16'd1;
            end

            //----------------------------------------------------------------
            // Timing counters: decrement (issue below may override)
            //----------------------------------------------------------------
            for (int c = 0; c < NUM_CHANNELS; c++) begin
                for (int b = 0; b < NUM_BANKS; b++) begin
                    bank_state[c][b].ras_counter <= dec_c(bank_state[c][b].ras_counter);
                    bank_state[c][b].rp_counter  <= dec_c(bank_state[c][b].rp_counter);
                    bank_state[c][b].rcd_counter <= dec_c(bank_state[c][b].rcd_counter);
                    bank_state[c][b].rc_counter  <= dec_c(bank_state[c][b].rc_counter);
                    bank_state[c][b].pre_counter <= dec_c(bank_state[c][b].pre_counter);
                end
            end
            for (int g = 0; g < NUM_BANK_GROUPS; g++) begin
                ccd_cnt[g] <= dec_c(ccd_cnt[g]);
                rrd_cnt[g] <= dec_c(rrd_cnt[g]);
                wtr_cnt[g] <= dec_c(wtr_cnt[g]);
            end
            for (int i = 0; i < 4; i++) faw_cnt[i] <= dec_c(faw_cnt[i]);
            rtw_cnt <= dec_c(rtw_cnt);
            if (rfc_cnt != '0) rfc_cnt <= rfc_cnt - RFC_W'(1);

            //----------------------------------------------------------------
            // Refresh sequence start
            //----------------------------------------------------------------
            if (ref_start) ref_active <= 1'b1;

            //----------------------------------------------------------------
            // Command issue
            //----------------------------------------------------------------
            if (ref_prea) begin
                // Precharge all: every active bank met tRAS, tRTP, tWR
                dfi_cs_n <= {NUM_RANKS{1'b0}};
                dfi_ca   <= CA_PREA;
                dfi_addr <= '0;
                for (int b = 0; b < NUM_BANKS; b++) begin
                    if (bank_state[CH][b].active) begin
                        bank_state[CH][b].active     <= 1'b0;
                        bank_state[CH][b].rp_counter <= tRP;
                    end
                end

            end else if (ref_ref) begin
                // All banks closed and tRP elapsed
                dfi_cs_n    <= {NUM_RANKS{1'b0}};
                dfi_ca      <= CA_REF;
                dfi_addr    <= '0;
                refresh_ack <= 1'b1;
                ref_active  <= 1'b0;
                rfc_cnt     <= RFC_W'(T_RFC);

            end else if (found) begin
                dfi_cs_n <= {NUM_RANKS{1'b0}};
                dfi_addr <= best_candidate.addr;

                case (iss_cmd)
                    CMD_ACTIVATE: begin
                        dfi_ca <= CA_ACT;
                        bank_state[CH][iss_bank].active      <= 1'b1;
                        bank_state[CH][iss_bank].open_row    <= iss_row;
                        bank_state[CH][iss_bank].ras_counter <= tRAS;
                        bank_state[CH][iss_bank].rcd_counter <= tRCD;
                        bank_state[CH][iss_bank].rc_counter  <= tRC_eff;
                        for (int g = 0; g < NUM_BANK_GROUPS; g++) begin
                            if (g == int'(iss_bg))
                                rrd_cnt[g] <= max_c(dec_c(rrd_cnt[g]), tRRD_L);
                            else
                                rrd_cnt[g] <= max_c(dec_c(rrd_cnt[g]), tRRD_S);
                        end
                        faw_cnt[faw_idx] <= tFAW;
                    end

                    CMD_READ: begin
                        dfi_ca <= CA_RD;
                        dfi_rw <= 1'b0;
                        last_col_wr <= 1'b0;
                        bank_state[CH][iss_bank].pre_counter <=
                            max_c(dec_c(bank_state[CH][iss_bank].pre_counter), tRTP);
                        for (int g = 0; g < NUM_BANK_GROUPS; g++) begin
                            if (g == int'(iss_bg))
                                ccd_cnt[g] <= max_c(dec_c(ccd_cnt[g]), tCCD_L);
                            else
                                ccd_cnt[g] <= max_c(dec_c(ccd_cnt[g]), tCCD_S);
                        end
                        rtw_cnt <= max_c(dec_c(rtw_cnt), tRTW);
                    end

                    CMD_WRITE: begin
                        dfi_ca <= CA_WR;
                        dfi_rw <= 1'b1;
                        last_col_wr <= 1'b1;
                        bank_state[CH][iss_bank].pre_counter <=
                            max_c(dec_c(bank_state[CH][iss_bank].pre_counter), tWR_PRE);
                        for (int g = 0; g < NUM_BANK_GROUPS; g++) begin
                            if (g == int'(iss_bg)) begin
                                ccd_cnt[g] <= max_c(dec_c(ccd_cnt[g]), tCCD_L);
                                wtr_cnt[g] <= max_c(dec_c(wtr_cnt[g]), tWTR_LL);
                            end else begin
                                ccd_cnt[g] <= max_c(dec_c(ccd_cnt[g]), tCCD_S);
                                wtr_cnt[g] <= max_c(dec_c(wtr_cnt[g]), tWTR_SS);
                            end
                        end
                    end

                    CMD_PRECHARGE: begin
                        dfi_ca <= CA_PRE;
                        bank_state[CH][iss_bank].active     <= 1'b0;
                        bank_state[CH][iss_bank].rp_counter <= tRP;
                    end

                    default: begin
                        dfi_ca   <= CA_NOP;
                        dfi_cs_n <= {NUM_RANKS{1'b1}};
                    end
                endcase

                // Only a column command retires the request
                if (pop)
                    cmd_queue[best_candidate_idx].valid <= 1'b0;
            end
        end
    end

    //========================================================================
    // Outputs
    //========================================================================
    // [R6] registered capacity AND refresh gating (short path)
    assign cmd_ready = ready_q && !ref_pending;

    wire cmd_queue_empty = (cmd_queue_entries == '0);

    assign cmd_activity = issue_normal || ref_prea || ref_ref;
    assign rd_activity  = issue_normal && (iss_cmd == CMD_READ);
    assign wr_activity  = issue_normal && (iss_cmd == CMD_WRITE);

    assign lp_idle = cmd_queue_empty && !cmd_activity && !ref_pending &&
                     !rfc_busy && !refresh_req;

    always_comb begin
        for (int c = 0; c < NUM_CHANNELS; c++) begin
            row_open[c] = 1'b0;
            open_row[c] = '0;
            for (int b = 0; b < NUM_BANKS; b++) begin
                bank_active[b][c] = bank_state[c][b].active;
                if (bank_state[c][b].active) begin
                    row_open[c] = 1'b1;
                    open_row[c] = bank_state[c][b].open_row;   // highest-index active bank
                end
            end
        end
    end

endmodule
