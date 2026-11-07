//============================================================================
// Module: lpddr5c_refresh_ctrl
// Description: LPDDR5 all-bank refresh controller (tick + debt)
//
// Clock domain : DFI/PHY clock (same as lpddr5c_cmd_scheduler)
// Scope        : all-bank refresh only. tRFC and the PREA/REF sequence are
//                owned by the scheduler. This block decides WHEN a refresh
//                is owed and HOW urgent it is.
//
// Handshake with scheduler:
//   refresh_req     : registered, high while debt != 0, held until ack
//   refresh_ack     : 1-cycle pulse from scheduler when REF is issued
//   refresh_urgent  : registered, high when debt >= urgent threshold
//
// Architecture:
//   tick  : free-running counter, period trefi_eff, NOT cleared by ack
//   debt  : +1 on every tick wrap, -1 on every ack  (average rate = tREFI)
//   Debt is limited to debt_max (JEDEC postpone limit, check JESD209-5).
//
// Program trefi / refresh_rate / debt_* while refresh_en = 0.
//============================================================================

`timescale 1ns/1ps

module lpddr5c_refresh_ctrl #(
    parameter int DEBT_W    = 4,     // supports debt_max up to 15
    parameter int MIN_TREFI = 64     // clamp: a zero/small register can never
                                     // cause a refresh request every cycle
) (
    input  logic                 clk,
    input  logic                 rst_n,

    // Configuration (quasi-static, already synchronized to clk)
    input  logic                 refresh_en,        // global enable (init/training done)
    input  logic                 refresh_hold,      // freeze tick (self-refresh), tie 0 for now
    input  logic [15:0]          trefi,             // base interval in clk cycles
    input  logic [1:0]           refresh_rate,      // 0: 1x, 1: 2x, 2/3: 4x
    input  logic [DEBT_W-1:0]    debt_urgent_thr,   // urgent when debt >= thr
    input  logic [DEBT_W-1:0]    debt_max,          // max postponed refreshes

    // Scheduler interface
    input  logic                 refresh_ack,
    output logic                 refresh_req,
    output logic                 refresh_urgent,

    // Status / errors
    output logic [DEBT_W-1:0]    refresh_debt,
    output logic                 err_overdue,       // sticky
    output logic                 err_timeout,       // sticky
    input  logic                 err_clear          // 1-cycle pulse
);

    //========================================================================
    // Effective configuration
    //========================================================================
    logic [15:0]       trefi_shifted;
    logic [15:0]       trefi_eff;
    logic [DEBT_W-1:0] dmax_eff;
    logic [DEBT_W-1:0] thr_eff;

    always_comb begin
        trefi_shifted = trefi >> ((refresh_rate == 2'd0) ? 2'd0 :
                                  (refresh_rate == 2'd1) ? 2'd1 : 2'd2);
        trefi_eff     = (trefi_shifted < 16'(MIN_TREFI)) ? 16'(MIN_TREFI)
                                                         : trefi_shifted;

        dmax_eff = (debt_max == '0) ? DEBT_W'(1) : debt_max;

        thr_eff  = (debt_urgent_thr == '0)    ? DEBT_W'(1) :
                   (debt_urgent_thr > dmax_eff) ? dmax_eff   : debt_urgent_thr;
    end

    //========================================================================
    // Tick counter
    //========================================================================
    logic [15:0] tick;
    logic [16:0] tick_p1;
    logic        tick_wrap;

    assign tick_p1   = {1'b0, tick} + 17'd1;
    // >= (not ==) so a changed trefi can never leave the counter running past
    assign tick_wrap = refresh_en && !refresh_hold && (tick_p1 >= {1'b0, trefi_eff});

    //========================================================================
    // Debt update
    //========================================================================
    logic [DEBT_W-1:0] debt, debt_n;
    logic              ack_ok;      // ack that matches an owed refresh
    logic              ovd_set;

    // Ignore a stray ack (debt == 0) or an ack after disable: no underflow
    assign ack_ok = refresh_ack && refresh_en && (debt != '0);

    always_comb begin
        debt_n  = debt;
        ovd_set = 1'b0;
        if (tick_wrap && !ack_ok) begin
            if (debt < dmax_eff) debt_n = debt + DEBT_W'(1);
            else                 ovd_set = 1'b1;     // would exceed postpone limit
        end else if (!tick_wrap && ack_ok) begin
            debt_n = debt - DEBT_W'(1);
        end
        // tick_wrap && ack_ok : +1 -1 = unchanged
    end

    //========================================================================
    // Watchdog: request outstanding with no ack for too long
    //========================================================================
    logic [16:0] wd_cnt;
    logic [16:0] wd_limit;
    logic        tmo_set;

    assign wd_limit = {trefi_eff, 1'b0};                       // 2 x tREFI
    assign tmo_set  = refresh_req && !refresh_hold && (wd_cnt >= wd_limit);

    //========================================================================
    // Sequential logic
    //========================================================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            tick           <= '0;
            debt           <= '0;
            wd_cnt         <= '0;
            refresh_req    <= 1'b0;
            refresh_urgent <= 1'b0;
            err_overdue    <= 1'b0;
            err_timeout    <= 1'b0;
        end else begin
            // Clear first, set below: a new error in the same cycle is not lost
            if (err_clear) begin
                err_overdue <= 1'b0;
                err_timeout <= 1'b0;
            end

            if (!refresh_en) begin
                tick           <= '0;
                debt           <= '0;
                wd_cnt         <= '0;
                refresh_req    <= 1'b0;
                refresh_urgent <= 1'b0;
            end else begin
                // tick: free-running, never cleared by ack
                if (!refresh_hold)
                    tick <= tick_wrap ? 16'd0 : tick[15:0] + 16'd1;

                debt           <= debt_n;
                refresh_req    <= (debt_n != '0);
                refresh_urgent <= (debt_n >= thr_eff);

                // watchdog
                if (refresh_req && !ack_ok && !refresh_hold) begin
                    if (wd_cnt < wd_limit) wd_cnt <= wd_cnt + 17'd1;
                end else begin
                    wd_cnt <= '0;
                end

                if (ovd_set) err_overdue <= 1'b1;
                if (tmo_set) err_timeout <= 1'b1;
            end
        end
    end

    assign refresh_debt = debt;
endmodule // lpddr5c_refresh_ctrl
