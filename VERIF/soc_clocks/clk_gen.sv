`timescale 1ps/1fs
// Module 1 of 3 : reference clock ("crystal") generator WITH JITTER
// ---------------------------------------------------------------
//   duty_pct  : high time in % (1..99), sampled every cycle
//   jitter_ps : RMS edge jitter in ps (real, run-time), 0.0 = none.
//               Gaussian, truncated at +/-3 sigma.
//   SEED      : random seed (same seed = same sequence every run)
// Edges are placed on a fixed ideal grid + random offset, so jitter
// does NOT accumulate (no drift): the average frequency is exact.
// Behavioral model, simulation only.
// ---------------------------------------------------------------
module clk_gen #(
    parameter real    FREQ_MHZ = 25.0,
    parameter integer SEED     = 7
)(
    input  wire       enable,
    input  wire [7:0] duty_pct,          // 1..99 (%)
    input  real       jitter_ps,         // RMS, ps
    output wire       clk
);
    real    period_ps, t_high, tn, e, delta, j_ps, jmax;
    integer d, seed, sig_fs, j_fs;
    reg     clk_int;

    task get_jitter;                      // j_ps = N(0, jitter_ps), cut at 3 sigma
        begin
            sig_fs = $rtoi(jitter_ps * 1000.0);
            if (sig_fs > 0) begin
                j_fs = $dist_normal(seed, 0, sig_fs);
                j_ps = j_fs / 1000.0;
                jmax = 3.0 * jitter_ps;
                if      (j_ps >  jmax) j_ps =  jmax;
                else if (j_ps < -jmax) j_ps = -jmax;
            end else
                j_ps = 0.0;
        end
    endtask

    initial begin
        clk_int   = 1'b0;
        seed      = SEED;
        period_ps = 1.0e6 / FREQ_MHZ;
        tn        = 0.0;                          // ideal edge grid
        forever begin
            d      = (duty_pct < 1) ? 1 : (duty_pct > 99) ? 99 : duty_pct;
            t_high = period_ps * d / 100.0;

            get_jitter;                           // rising edge
            e = tn + j_ps;  delta = e - $realtime;  if (delta < 0.0) delta = 0.0;
            #(delta);  clk_int = 1'b1;

            get_jitter;                           // falling edge
            e = tn + t_high + j_ps;  delta = e - $realtime;  if (delta < 0.0) delta = 0.0;
            #(delta);  clk_int = 1'b0;

            tn = tn + period_ps;
        end
    end
    assign clk = clk_int & enable;
endmodule

