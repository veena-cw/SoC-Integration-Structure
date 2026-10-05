//=====================================================================
// Module: lpddr5c_cmd_scheduler
// Description: LPDDR5 Command Scheduler
// Features:
//   - Age-based priority scheduling
//   - Bank state tracking
//   - Timing constraint checking (tRCD, tRP, tRAS, tRC, etc.)
//   - Refresh priority handling
//   - Read/Write command optimization
//   - QoS support (optional)
//
// Change markers used in this file:
//   // <<< CHANGED  : line modified from your original
//   // <<< NEW      : line/block added
//   // <<< DELETED  : original line removed (kept as a comment for reference)
//============================================================================

`timescale 1ns/1ps

module lpddr5c_cmd_scheduler #(
    parameter ADDR_WIDTH        = 32,
    parameter DATA_WIDTH        = 128,
    parameter NUM_CHANNELS      = 1,
    parameter NUM_RANKS         = 1,
    parameter NUM_BANKS         = 8,
    parameter NUM_BANK_GROUPS   = 2,
    parameter ROW_WIDTH         = 16,
    parameter COL_WIDTH         = 10,
    parameter BA_WIDTH          = 3,        // Bank address width
    parameter BG_WIDTH          = 1,        // Bank group width
    parameter CMD_QUEUE_DEPTH   = 16,
    parameter CMD_ID_WIDTH      = 8
) (
    //========================================================================
    // Clock & Reset
    //========================================================================
    input  logic                         clk,
    input  logic                         rst_n,

    //========================================================================
    // Configuration
    //========================================================================
    input  logic [31:0]                  timing_params,
    input  logic [3:0]                   sched_policy,
    input  logic [1:0]                   qos_en,

    //========================================================================
    // Command Input Interface
    //========================================================================
    input  logic [ADDR_WIDTH-1:0]        cmd_addr,
    input  logic [3:0]                   cmd_type,
    input  logic                         cmd_valid,
    output logic                         cmd_ready,
    input  logic [CMD_ID_WIDTH-1:0]      cmd_id,

    //========================================================================
    // Refresh Interface
    //========================================================================
    input  logic                         refresh_req,
    output logic                         refresh_ack,
    input  logic                         refresh_urgent,
    input  logic [7:0]                   refresh_row,

    //========================================================================
    // Bank State Tracking
    //========================================================================
    output logic [NUM_CHANNELS-1:0]      bank_active [0:NUM_BANKS-1],
    output logic [NUM_CHANNELS-1:0]      row_open,
    output logic [ROW_WIDTH-1:0]         open_row [0:NUM_CHANNELS-1],

    //========================================================================
    // DFI Command Output
    //========================================================================
    output logic [NUM_RANKS-1:0]          dfi_cs_n,
    output logic [NUM_CHANNELS-1:0]       dfi_cke,
    output logic [5:0]                    dfi_ca,
    output logic                         dfi_rw,
    output logic [ADDR_WIDTH-1:0]        dfi_addr
);

    //========================================================================
    // Local Parameters
    //========================================================================

    // Command Types
    localparam CMD_NOP          = 4'b0000;
    localparam CMD_READ         = 4'b0001;
    localparam CMD_WRITE        = 4'b0010;
    localparam CMD_ACTIVATE     = 4'b0011;
    localparam CMD_PRECHARGE    = 4'b0100;
    localparam CMD_REFRESH      = 4'b0101;
    localparam CMD_MRW          = 4'b0110;  // Mode Register Write
    localparam CMD_MRR          = 4'b0111;  // Mode Register Read
    localparam CMD_PDOWN_ENTRY  = 4'b1000;
    localparam CMD_PDOWN_EXIT   = 4'b1001;
    localparam CMD_SR_ENTRY     = 4'b1010;  // Self-Refresh Entry
    localparam CMD_SR_EXIT      = 4'b1011;  // Self-Refresh Exit

    // LPDDR5 CA Commands (placeholder opcodes, NOT real LPDDR5 CA encoding)
    localparam CA_NOP           = 6'b000000;
    localparam CA_RD            = 6'b000001;
    localparam CA_WR            = 6'b000010;
    localparam CA_ACT           = 6'b000011;
    localparam CA_PRE           = 6'b000100;
    localparam CA_PREA          = 6'b000101;  // Precharge All
    localparam CA_REF           = 6'b000110;
    localparam CA_MRW           = 6'b000111;
    localparam CA_MRR           = 6'b001000;
    localparam CA_SRE           = 6'b001001;  // Self-Refresh Entry
    localparam CA_SRX           = 6'b001010;  // Self-Refresh Exit
    localparam CA_PDE           = 6'b001011;  // Power-Down Entry
    localparam CA_PDX           = 6'b001100;  // Power-Down Exit

    // Timing Parameters (from timing_params register)
    logic [7:0]                     tRCD;        // [7:0]    <<< CHANGED (comment fixed)
    logic [7:0]                     tRP;         // [15:8]   <<< CHANGED (comment fixed)
    logic [7:0]                     tRAS;        // [23:16]  <<< CHANGED (comment fixed)
    logic [7:0]                     tRC;         // [31:24]  <<< CHANGED (comment fixed)
    logic [7:0]                     tRRD_L;      // Row-to-Row delay (same BG)
    logic [7:0]                     tRRD_S;      // Row-to-Row delay (different BG)
    logic [7:0]                     tCCD_L;      // Column-to-Column delay (same BG)
    logic [7:0]                     tCCD_S;      // Column-to-Column delay (different BG)
    logic [7:0]                     tWTR_L;      // Write-to-Read (same BG)
    logic [7:0]                     tWTR_S;      // Write-to-Read (different BG)
    logic [7:0]                     tRTRS;       // Read-to-Read (different rank)
    logic [7:0]                     tFAW;        // Four Activate Window
    logic [7:0]                     tRTP;        // Read to Precharge
    logic [7:0]                     tWR;         // Write Recovery
    logic [7:0]                     tWRS;        // Write Recovery (same bank)
    logic [7:0]                     tXSR;        // Self-Refresh Exit
    logic [7:0]                     tXP;         // Power-Down Exit

    assign tRCD  = timing_params[7:0];
    assign tRP   = timing_params[15:8];
    assign tRAS  = timing_params[23:16];
    assign tRC   = timing_params[31:24];
    assign tRRD_L = 8'd4;   // Default: 4 cycles
    assign tRRD_S = 8'd2;   // Default: 2 cycles
    assign tCCD_L = 8'd4;   // Default: 4 cycles
    assign tCCD_S = 8'd2;   // Default: 2 cycles
    assign tWTR_L = 8'd10;  // Default: 10 cycles
    assign tWTR_S = 8'd4;   // Default: 4 cycles
    assign tRTP  = 8'd8;    // Default: 8 cycles
    assign tWR   = 8'd16;   // Default: 16 cycles
    assign tXSR  = 8'd100;  // Default: 100 cycles
    assign tXP   = 8'd8;    // Default: 8 cycles
    assign tFAW  = 8'd20;   // <<< NEW (was undriven -> X into faw_counter)
    assign tRTRS = 8'd2;    // <<< NEW
    assign tWRS  = 8'd16;   // <<< NEW

    // <<< DELETED: // assign dfi_addr  = cmd_addr;   (dfi_addr is now registered at issue time)

    //========================================================================
    // Command Queue
    //========================================================================

    typedef struct packed {
        logic [ADDR_WIDTH-1:0]     addr;
        logic [3:0]                cmd_type;
        logic [CMD_ID_WIDTH-1:0]   cmd_id;
        logic [15:0]               age;
        logic [1:0]                qos;
        logic                       valid;
    } cmd_queue_entry_t;

    cmd_queue_entry_t cmd_queue [0:CMD_QUEUE_DEPTH-1];

    // <<< DELETED: cmd_queue_wptr, cmd_queue_rptr, cmd_queue_full, cmd_queue_empty
    // <<< DELETED: old 4-bit cmd_queue_entries (could never reach 16)

    localparam QIDX_W = $clog2(CMD_QUEUE_DEPTH);     // <<< NEW
    localparam QCNT_W = $clog2(CMD_QUEUE_DEPTH+1);   // <<< NEW

    logic [QCNT_W-1:0]  cmd_queue_entries;           // <<< CHANGED (wider)
    logic               free_found;                  // <<< NEW
    logic [QIDX_W-1:0]  free_idx;                    // <<< NEW

    // First free slot allocator                      // <<< NEW (whole block)
    always_comb begin
        free_found = 1'b0;
        free_idx   = '0;
        for (int k = 0; k < CMD_QUEUE_DEPTH; k++) begin
            if (!cmd_queue[k].valid && !free_found) begin
                free_found = 1'b1;
                free_idx   = k[QIDX_W-1:0];
            end
        end
    end

    //========================================================================
    // Address Decoding
    //========================================================================

    function automatic [BA_WIDTH-1:0] get_bank_addr;
        input [ADDR_WIDTH-1:0] addr;
        begin
            // Example mapping: addr[11:9] for 8 banks
            get_bank_addr = addr[11:9];
        end
    endfunction

    function automatic [BG_WIDTH-1:0] get_bankgroup_addr;
        input [ADDR_WIDTH-1:0] addr;
        begin
            // Example mapping: addr[12] for 2 bank groups
            get_bankgroup_addr = addr[12];
        end
    endfunction

    function automatic [ROW_WIDTH-1:0] get_row_addr;
        input [ADDR_WIDTH-1:0] addr;
        begin
            // Example mapping: addr[31:16] for 16-bit row
            get_row_addr = addr[31:16];
        end
    endfunction

    function automatic [COL_WIDTH-1:0] get_col_addr;
        input [ADDR_WIDTH-1:0] addr;
        begin
            // Example mapping: addr[15:8] for 8-bit column (adjust)
            // NOTE: overlaps bank[11:9] and BG[12]; define a real address map later
            get_col_addr = addr[15:8];
        end
    endfunction

    //========================================================================
    // Bank State Tracking
    //========================================================================

    typedef struct packed {
        logic                       active;
        logic [ROW_WIDTH-1:0]       open_row;
        logic [15:0]                ras_counter;  // tRAS countdown
        logic [15:0]                rp_counter;   // tRP countdown
        logic [15:0]                rcd_counter;  // tRCD countdown
        logic                       timing_met;
    } bank_state_t;

    bank_state_t bank_state [0:NUM_CHANNELS-1][0:NUM_BANKS-1];

    // Per-channel activation tracking for tFAW
    logic [3:0]                      activate_tracker [0:NUM_CHANNELS-1];
    logic [15:0]                     faw_counter [0:NUM_CHANNELS-1];

    //========================================================================
    // Timing Constraint Check
    //========================================================================

    function automatic logic check_bank_timing;
        input integer channel;
        input integer bank;
        input [3:0] cmd_type;
        begin
            automatic bank_state_t state = bank_state[channel][bank];
            automatic logic timing_ok = 1'b1;

            case (cmd_type)
                CMD_ACTIVATE: begin
                    // Check tRP (precharge to activate)
                    if (!state.active && state.rp_counter > 0)
                        timing_ok = 1'b0;
                    // Check if bank is already active
                    if (state.active)
                        timing_ok = 1'b0;
                end

                CMD_READ, CMD_WRITE: begin
                    // Check tRCD (activate to column)
                    if (state.rcd_counter > 0)
                        timing_ok = 1'b0;
                    // Bank must be active
                    if (!state.active)
                        timing_ok = 1'b0;
                end

                CMD_PRECHARGE: begin
                    // Check tRAS (activate to precharge)
                    if (state.ras_counter > 0)
                        timing_ok = 1'b0;
                    // Bank must be active
                    if (!state.active)
                        timing_ok = 1'b0;
                end

                default: begin
                    timing_ok = 1'b1;
                end
            endcase

            check_bank_timing = timing_ok;
        end
    endfunction

    function automatic logic check_faw_timing;
        input integer channel;
        begin
            // Check if 4 activates in tFAW window
            check_faw_timing = (activate_tracker[channel] < 4);
        end
    endfunction

    // What DRAM command does this request need next?          // <<< NEW (whole function)
    function automatic logic [3:0] next_cmd;
        input integer              channel;
        input integer              bank;
        input [ROW_WIDTH-1:0]      row;
        input [3:0]                req;
        begin
            if (!bank_state[channel][bank].active)
                next_cmd = CMD_ACTIVATE;       // bank closed  -> ACT
            else if (bank_state[channel][bank].open_row != row)
                next_cmd = CMD_PRECHARGE;      // row miss     -> PRE
            else
                next_cmd = req;                // row hit      -> RD/WR
        end
    endfunction

    //========================================================================
    // Scheduler Selection Logic
    //========================================================================

    logic [QIDX_W-1:0]   best_candidate_idx;                   // <<< CHANGED (QIDX_W)
    cmd_queue_entry_t    best_candidate;
    logic                found;                                // <<< NEW
    logic [31:0]         candidate_score [0:CMD_QUEUE_DEPTH-1];
    logic                candidate_valid [0:CMD_QUEUE_DEPTH-1];
    logic [3:0]          cand_cmd        [0:CMD_QUEUE_DEPTH-1];// <<< NEW
    integer              sel_bk;                               // <<< NEW (replaces loose 'bank')
    integer              sel_bj;                               // <<< NEW

    // <<< DELETED: integer i; integer bank; integer channel;

    always_comb begin                                          // <<< CHANGED (whole block rewritten)
        found              = 1'b0;
        best_candidate_idx = '0;
        best_candidate     = '0;
        sel_bk             = 0;
        sel_bj             = 0;

        for (int k = 0; k < CMD_QUEUE_DEPTH; k++) begin
            candidate_score[k] = 32'd0;
            candidate_valid[k] = 1'b0;
            cand_cmd[k]        = CMD_NOP;

            if (cmd_queue[k].valid) begin
                sel_bk      = get_bank_addr(cmd_queue[k].addr);
                // Decide ACT / PRE / RD / WR for this request
                cand_cmd[k] = next_cmd(0, sel_bk, get_row_addr(cmd_queue[k].addr),
                                       cmd_queue[k].cmd_type);

                candidate_score[k] = {16'd0, cmd_queue[k].age};

                // Row-hit bonus
                if (cand_cmd[k] == cmd_queue[k].cmd_type)
                    candidate_score[k] = candidate_score[k] + 32'd1000;

                // QoS bonus (was a 30-bit concat before; now 32 bits)
                if (qos_en != 2'b00)
                    candidate_score[k] = candidate_score[k] + {2'b00, cmd_queue[k].qos, 28'd0};

                // Per-bank timing check on the NEXT command, not the raw request
                candidate_valid[k] = check_bank_timing(0, sel_bk, cand_cmd[k]);

                // tFAW gate for ACT
                if (cand_cmd[k] == CMD_ACTIVATE && !check_faw_timing(0))
                    candidate_valid[k] = 1'b0;

                // Do not close a row that another queued request still hits
                if (cand_cmd[k] == CMD_PRECHARGE) begin
                    for (int j = 0; j < CMD_QUEUE_DEPTH; j++) begin
                        sel_bj = get_bank_addr(cmd_queue[j].addr);
                        if (cmd_queue[j].valid && (sel_bj == sel_bk) &&
                            (get_row_addr(cmd_queue[j].addr) == bank_state[0][sel_bk].open_row))
                            candidate_valid[k] = 1'b0;
                    end
                end
            end

            // Pick best (explicit 'found' flag fixes the index-0 bug)
            if (candidate_valid[k] &&
                (!found || candidate_score[k] > candidate_score[best_candidate_idx])) begin
                found              = 1'b1;
                best_candidate_idx = k[QIDX_W-1:0];
                best_candidate     = cmd_queue[k];
            end
        end
    end

    //========================================================================
    // Refresh Priority Handling
    //========================================================================

    logic refresh_in_progress;
    logic refresh_state;

    // Push / pop strobes for the queue counter                // <<< NEW (whole block)
    wire push = cmd_valid && cmd_ready;
    wire pop  = found && !(refresh_req && !refresh_in_progress) &&
                ((cand_cmd[best_candidate_idx] == CMD_READ) ||
                 (cand_cmd[best_candidate_idx] == CMD_WRITE));

    // Bank of the command being issued (replaces 'automatic integer bank')  // <<< NEW
    wire [BA_WIDTH-1:0] iss_bank = get_bank_addr(best_candidate.addr);
    localparam          ISS_CH   = 0;

    //========================================================================
    // Main Sequential Logic
    //========================================================================

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // Reset
            // <<< DELETED: cmd_queue_wptr, cmd_queue_rptr, cmd_queue_full, cmd_queue_empty resets
            cmd_queue_entries <= '0;

            // Clear command queue
            for (int i = 0; i < CMD_QUEUE_DEPTH; i++) begin
                cmd_queue[i] <= '0;
            end

            // Reset bank states
            for (int c = 0; c < NUM_CHANNELS; c++) begin
                for (int b = 0; b < NUM_BANKS; b++) begin
                    bank_state[c][b] <= '0;
                    // <<< DELETED: bank_active[b][c] <= 1'b0;  (driven by always_comb only)
                end
                // <<< DELETED: row_open[c] <= 1'b0;  open_row[c] <= '0;  (driven by always_comb only)
                activate_tracker[c] <= '0;
                faw_counter[c] <= '0;
            end

            // DFI outputs
            dfi_cs_n <= {NUM_RANKS{1'b1}};
            dfi_cke <= '0;
            dfi_ca <= CA_NOP;
            dfi_rw <= 1'b0;
            dfi_addr <= '0;               // <<< NEW

            refresh_ack <= 1'b0;          // <<< NEW
            refresh_in_progress <= 1'b0;
            refresh_state <= 1'b0;

        end else begin
            //================================================================
            // Command Queue Push
            //================================================================
            if (push) begin                                           // <<< CHANGED
                cmd_queue[free_idx].addr     <= cmd_addr;             // <<< CHANGED (free_idx)
                cmd_queue[free_idx].cmd_type <= cmd_type;             // <<< CHANGED
                cmd_queue[free_idx].cmd_id   <= cmd_id;               // <<< CHANGED
                cmd_queue[free_idx].age      <= 16'd0;                // <<< CHANGED
                cmd_queue[free_idx].qos      <= cmd_addr[1:0];        // placeholder QoS
                cmd_queue[free_idx].valid    <= 1'b1;                 // <<< CHANGED
            end

            // Single, combined update of the entry counter           // <<< NEW
            cmd_queue_entries <= cmd_queue_entries + push - pop;

            //================================================================
            // Age Increment for all queue entries (saturating)
            //================================================================
            for (int i = 0; i < CMD_QUEUE_DEPTH; i++) begin
                if (cmd_queue[i].valid && cmd_queue[i].age != 16'hFFFF) begin   // <<< CHANGED
                    cmd_queue[i].age <= cmd_queue[i].age + 1'b1;
                end
            end

            //================================================================
            // Bank Timing Counters
            //================================================================
            for (int c = 0; c < NUM_CHANNELS; c++) begin
                for (int b = 0; b < NUM_BANKS; b++) begin
                    if (bank_state[c][b].ras_counter > 0)
                        bank_state[c][b].ras_counter <= bank_state[c][b].ras_counter - 1'b1;
                    if (bank_state[c][b].rp_counter > 0)
                        bank_state[c][b].rp_counter <= bank_state[c][b].rp_counter - 1'b1;
                    if (bank_state[c][b].rcd_counter > 0)
                        bank_state[c][b].rcd_counter <= bank_state[c][b].rcd_counter - 1'b1;
                end

                // tFAW counter
                if (faw_counter[c] > 0)
                    faw_counter[c] <= faw_counter[c] - 1'b1;
                if (faw_counter[c] == 1)
                    activate_tracker[c] <= '0;
            end

            //================================================================
            // Command Issue / Refresh Handling
            //================================================================
            if (refresh_req && !refresh_in_progress) begin
                // High priority: Issue Refresh command
                // NOTE: still no PREA / tRFC lockout - to be added with a refresh FSM
                dfi_cs_n <= {NUM_RANKS{1'b0}};
                dfi_ca   <= CA_REF;
                dfi_rw   <= 1'b0;
                refresh_ack <= 1'b1;
                refresh_in_progress <= 1'b1;

            end else if (found) begin                                  // <<< CHANGED (was best_candidate.valid && candidate_valid[...])
                // <<< DELETED: automatic integer bank / channel (now iss_bank / ISS_CH)

                case (cand_cmd[best_candidate_idx])                    // <<< CHANGED (was best_candidate.cmd_type)
                    CMD_ACTIVATE: begin
                        dfi_ca <= CA_ACT;
                        bank_state[ISS_CH][iss_bank].active      <= 1'b1;
                        bank_state[ISS_CH][iss_bank].open_row    <= get_row_addr(best_candidate.addr);
                        bank_state[ISS_CH][iss_bank].ras_counter <= tRAS;
                        bank_state[ISS_CH][iss_bank].rcd_counter <= tRCD;
                        // tFAW tracking
                        activate_tracker[ISS_CH] <= activate_tracker[ISS_CH] + 1'b1;
                        if (activate_tracker[ISS_CH] == 0)
                            faw_counter[ISS_CH] <= tFAW;
                    end

                    CMD_READ: begin
                        dfi_ca <= CA_RD;
                        dfi_rw <= 1'b0;
                        // Set tRTP counter if needed
                    end

                    CMD_WRITE: begin
                        dfi_ca <= CA_WR;
                        dfi_rw <= 1'b1;
                        // Set tWR counter if needed
                    end

                    CMD_PRECHARGE: begin
                        dfi_ca <= CA_PRE;
                        bank_state[ISS_CH][iss_bank].active     <= 1'b0;
                        bank_state[ISS_CH][iss_bank].rp_counter <= tRP;
                    end

                    default: begin
                        dfi_ca <= CA_NOP;
                    end
                endcase

                dfi_addr <= best_candidate.addr;      // <<< NEW (address of the command actually issued)
                dfi_cs_n <= {NUM_RANKS{1'b0}};
                dfi_cke  <= {NUM_CHANNELS{1'b1}};

                // Only the column command (RD/WR) retires the request;   // <<< CHANGED
                // ACT / PRE leave it in the queue for the next step
                if (pop)
                    cmd_queue[best_candidate_idx].valid <= 1'b0;
                // <<< DELETED: cmd_queue_entries <= cmd_queue_entries - 1'b1;  (handled once above)

            end else begin
                // No command to issue: NOP
                dfi_cs_n <= {NUM_RANKS{1'b1}};
                dfi_ca <= CA_NOP;
                dfi_rw <= 1'b0;
            end

            //================================================================
            // Refresh ACK deassert
            //================================================================
            if (refresh_ack) begin
                refresh_ack <= 1'b0;
                refresh_in_progress <= 1'b0;
            end
        end
    end

    //========================================================================
    // Output Assignments
    //========================================================================

    assign cmd_ready = free_found;     // <<< CHANGED (was !cmd_queue_full && entries < DEPTH)

    always_comb begin
        integer c;
        integer b;

        for (c = 0; c < NUM_CHANNELS; c = c + 1) begin

            row_open[c] = 1'b0;
            open_row[c] = '0;

            for (b = 0; b < NUM_BANKS; b = b + 1) begin

                bank_active[b][c] = bank_state[c][b].active;

                if (bank_state[c][b].active) begin
                    row_open[c] = 1'b1;
                    open_row[c] = bank_state[c][b].open_row;
                end

            end
        end
    end

endmodule

