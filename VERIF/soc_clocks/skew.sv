
`timescale 1ps/1fs
// Module 3 of 3 : skew (delay) module WITH JITTER
// ---------------------------------------------------------------
// skew_out = clk_in delayed by skew_ns (fixed, ns) plus a random
// per-edge offset (jitter):
//
//     delay(edge) = skew_ns*1000 + N(0, jitter_ps)      [ps]
//
//   skew_ns   : fixed delay in ns (real), run-time changeable
//   jitter_ps : RMS edge jitter in ps (real), run-time changeable,
//               0.0 = no jitter. Gaussian, truncated at +/-3 sigma.
//   SEED      : random seed (same seed = same sequence every run)
//
// Rules of use:
//   * Use skew_ns*1000 >= 3*jitter_ps, otherwise the negative
//     jitter would need a negative delay and is cut off (the mean
//     delay then drifts above skew_ns).
//   * Keep 6*jitter_ps well below the shortest high/low time so
//     edges can never cross.
//   * Period jitter = sqrt(2) x edge jitter (a period is the
//     difference of two independent edge offsets).
// Behavioral model, simulation only.
// ---------------------------------------------------------------
module skew_module #(
    parameter integer SEED = 1
)(
    input  wire clk_in,
    input  real skew_ns,       // fixed skew, ns
    input  real jitter_ps,     // RMS jitter, ps
    output reg  skew_out
);
    integer seed;
    integer sig_fs, j_fs;
    real    j_ps, jmax, d_ps;

    initial begin
        seed     = SEED;
        skew_out = 1'b0;
    end

    always @(clk_in) begin
        sig_fs = $rtoi(jitter_ps * 1000.0);            // ps -> fs (integer)
        if (sig_fs > 0) begin
            j_fs = $dist_normal(seed, 0, sig_fs);      // N(0, sigma) in fs
            j_ps = j_fs / 1000.0;
            jmax = 3.0 * jitter_ps;                    // truncate at 3 sigma
            if      (j_ps >  jmax) j_ps =  jmax;
            else if (j_ps < -jmax) j_ps = -jmax;
        end else
            j_ps = 0.0;

        d_ps = skew_ns * 1000.0 + j_ps;                // ns -> ps, add jitter
        if (d_ps < 0.0) d_ps = 0.0;                    // delay can't be negative
        skew_out <= #(d_ps) clk_in;                    // transport delay
    end
endmodule

