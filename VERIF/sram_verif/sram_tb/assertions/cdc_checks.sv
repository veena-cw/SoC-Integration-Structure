// ------------------------------------------------------------
// cdc_checks.sv -- CDC checks for the two asynchronous FIFOs in
// axi_sram_cdc (u_req_fifo: aclk -> sram_clk, u_resp_fifo:
// sram_clk -> aclk). Nothing in the RTL is modified.
//
// cdc_fifo_checker (bound into every asynchronous_fifo by tb_top),
// test plan CDC_005:
//   CDC_GRAY      g_wptr / g_rptr change by at most one bit per clock
//                 of their own domain
//   CDC_GRAY_ENC  g_wptr == gray(b_wptr), g_rptr == gray(b_rptr)
//   CDC_SYNC      the synchronized pointer (g_wptr_sync in the read
//                 domain, g_rptr_sync in the write domain) only moves
//                 forward, by 0..DEPTH entries per destination clock --
//                 never backwards, never by more than the FIFO holds.
//                 (A step of more than one entry -- several bits at
//                 once -- is legal when the source clock is faster than
//                 the destination clock: every sampled value is still a
//                 valid pointer. Such steps are only counted, see the
//                 cover points.)
//   Cross-domain checks are disabled while either domain is in reset.
//
// cdc_meta_ctrl: switches the metastability injection that tb_top
// applies to the four 2-flop synchronizers (test plan CDC_006) and
// counts the injections per synchronizer.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

// Metastability-injection control, shared by tb_top and the tests.
class cdc_meta_ctrl;
    // Probability (0..100 %) that a changing synchronizer input is
    // captured late by one destination clock. 0 = injection off.
    static int unsigned pct = 0;
    // Injections per synchronizer instance path.
    static int unsigned count[string];

    // Turn injection on (pct) or off (0); also settable with +CDC_META=<pct>.
    static function void set_pct(int unsigned p);
        pct = (p > 100) ? 100 : p;
    endfunction

    // Record one injection on the synchronizer at 'path'.
    static function void hit(string path);
        if (count.exists(path)) count[path]++;
        else                    count[path] = 1;
    endfunction
endclass

module cdc_fifo_checker #(parameter int PTR_WIDTH = 3, parameter int DEPTH = 8) (
    input logic                 wclk, wrst_n,
    input logic                 rclk, rrst_n,
    input logic [PTR_WIDTH:0]   b_wptr, g_wptr, g_wptr_sync,
    input logic [PTR_WIDTH:0]   b_rptr, g_rptr, g_rptr_sync
);

    localparam int unsigned MOD = 1 << (PTR_WIDTH + 1);

    // Binary -> Gray and Gray -> binary, PTR_WIDTH+1 bits.
    function automatic logic [PTR_WIDTH:0] gray(logic [PTR_WIDTH:0] b);
        return b ^ (b >> 1);
    endfunction

    function automatic logic [PTR_WIDTH:0] bin(logic [PTR_WIDTH:0] g);
        logic [PTR_WIDTH:0] b;
        b[PTR_WIDTH] = g[PTR_WIDTH];
        for (int i = PTR_WIDTH - 1; i >= 0; i--)
            b[i] = b[i + 1] ^ g[i];
        return b;
    endfunction

    // Entries a synchronized pointer advanced by (mod 2^(PTR_WIDTH+1)).
    function automatic int unsigned step(logic [PTR_WIDTH:0] now, logic [PTR_WIDTH:0] prev);
        return (int'(bin(now)) - int'(bin(prev)) + MOD) % MOD;
    endfunction

    // ---- source pointers: one bit per clock ----------------------
    a_gray_wptr: assert property (@(posedge wclk) disable iff (!wrst_n)
                                  $countones(g_wptr ^ $past(g_wptr)) <= 1)
        else `uvm_error("CDC_GRAY", $sformatf("%m: g_wptr %b -> %b changes %0d bits in one wclk",
                                              $past(g_wptr), g_wptr, $countones(g_wptr ^ $past(g_wptr))))
    a_gray_rptr: assert property (@(posedge rclk) disable iff (!rrst_n)
                                  $countones(g_rptr ^ $past(g_rptr)) <= 1)
        else `uvm_error("CDC_GRAY", $sformatf("%m: g_rptr %b -> %b changes %0d bits in one rclk",
                                              $past(g_rptr), g_rptr, $countones(g_rptr ^ $past(g_rptr))))

    a_enc_wptr: assert property (@(posedge wclk) disable iff (!wrst_n) g_wptr == gray(b_wptr))
        else `uvm_error("CDC_GRAY_ENC", $sformatf("%m: g_wptr=%b is not gray(b_wptr=%b)", g_wptr, b_wptr))
    a_enc_rptr: assert property (@(posedge rclk) disable iff (!rrst_n) g_rptr == gray(b_rptr))
        else `uvm_error("CDC_GRAY_ENC", $sformatf("%m: g_rptr=%b is not gray(b_rptr=%b)", g_rptr, b_rptr))

    // ---- synchronized pointers: forward only, at most DEPTH ------
    a_sync_wptr: assert property (@(posedge rclk) disable iff (!rrst_n || !wrst_n)
                                  step(g_wptr_sync, $past(g_wptr_sync)) <= DEPTH)
        else `uvm_error("CDC_SYNC", $sformatf("%m: g_wptr_sync %b -> %b (moved %0d entries: backwards or > DEPTH)",
                                              $past(g_wptr_sync), g_wptr_sync, step(g_wptr_sync, $past(g_wptr_sync))))
    a_sync_rptr: assert property (@(posedge wclk) disable iff (!rrst_n || !wrst_n)
                                  step(g_rptr_sync, $past(g_rptr_sync)) <= DEPTH)
        else `uvm_error("CDC_SYNC", $sformatf("%m: g_rptr_sync %b -> %b (moved %0d entries: backwards or > DEPTH)",
                                              $past(g_rptr_sync), g_rptr_sync, step(g_rptr_sync, $past(g_rptr_sync))))

    // ---- cover: pointer wrap-around and multi-entry sync steps ----
    c_wptr_wrap: cover property (@(posedge wclk) disable iff (!wrst_n)
                                 g_wptr[PTR_WIDTH] != $past(g_wptr[PTR_WIDTH]));
    c_rptr_wrap: cover property (@(posedge rclk) disable iff (!rrst_n)
                                 g_rptr[PTR_WIDTH] != $past(g_rptr[PTR_WIDTH]));

    int unsigned        n_multi_wsync, n_multi_rsync;   // sync steps of > 1 entry (legal, informational)
    logic [PTR_WIDTH:0] prev_wsync, prev_rsync;
    always @(posedge rclk) begin
        if (rrst_n && wrst_n && step(g_wptr_sync, prev_wsync) > 1) n_multi_wsync <= n_multi_wsync + 1;
        prev_wsync <= g_wptr_sync;
    end
    always @(posedge wclk) begin
        if (rrst_n && wrst_n && step(g_rptr_sync, prev_rsync) > 1) n_multi_rsync <= n_multi_rsync + 1;
        prev_rsync <= g_rptr_sync;
    end

    final if (n_multi_wsync || n_multi_rsync)
        $display("CDC_SYNC info %m: multi-entry synchronized steps (legal): wptr_sync %0d, rptr_sync %0d",
                 n_multi_wsync, n_multi_rsync);

endmodule
