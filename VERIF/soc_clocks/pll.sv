
`timescale 1ps/1fs
// Module 2 of 3 : PLL model (frequency multiply + variable duty)
// ---------------------------------------------------------------
// Behavioral integer-N PLL model with variable duty
//   f_out = MULT x f_ref, rising edge aligned with every ref rising edge
// ---------------------------------------------------------------
module pll_model #(
    parameter integer MULT    = 2,
    parameter real    REF_MHZ = 25.0     // nominal reference frequency
)(
    input  wire       ref_clk,
    input  wire [7:0] duty_pct,          // 1..99 (%), sampled every cycle
    output reg        clk_out
);
    real    t0, t_ref, t_out;
    integer i, d;
    reg     ref_seen = 1'b0;

    always @(posedge ref_clk) ref_seen = 1'b1;   // remember every ref edge

    initial begin
        clk_out = 1'b0;
        t_ref   = 1.0e6 / REF_MHZ;               // nominal period (jitter-proof)
        t_out   = t_ref / MULT;
        forever begin
            wait (ref_seen);                     // re-lock on each ref edge
            ref_seen = 1'b0;
            t0 = $realtime;
            for (i = 0; i < MULT; i = i + 1) begin
                d = (duty_pct < 1) ? 1 : (duty_pct > 99) ? 99 : duty_pct;
                clk_out = 1'b1;
                #(i*t_out + t_out*d/100.0 - ($realtime - t0));
                clk_out = 1'b0;
                if (i < MULT-1)
                    #((i+1)*t_out - ($realtime - t0));
            end
        end
    end
endmodule

