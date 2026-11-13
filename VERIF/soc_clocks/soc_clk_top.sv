`timescale 1ps/1fs

`include "clk_gen.sv"
`include "pll.sv"
`include "skew.sv"

// ===============================================================
// RTL TOP - soc_clocks_skew : SoC clocks from ONE 25 MHz reference, with a
// SKEW, JITTER and DUTY inputs on every output clock.
//
//   clk_25mhz --> pll_model (x N) --> skew_module --> clk_<freq>mhz
//                      ^                   ^
//                 duty_<freq>mhz      skew_<freq>mhz (ns), jitter_<freq>mhz (ps RMS)
//
//   clk_1500mhz = 25 MHz x 60   CPU
//   clk_800mhz  = 25 MHz x 32   TPU core
//   clk_400mhz  = 25 MHz x 16   AXI (TPU, USB, others)
//   clk_250mhz  = 25 MHz x 10   USB core
//   clk_200mhz  = 25 MHz x  8   AHB (PLIC)
//   clk_125mhz  = 25 MHz x  5   Ethernet
//   clk_100mhz  = 25 MHz x  4   APB, AXI-Lite, SPI, UART
//   clk_50mhz   = 25 MHz x  2   I2C, GPIO, SD_CLK
//
// skew_<freq>mhz : delay of that output in ns (real, e.g. 0.8, 0.82),
//                  changeable at run time. 0.0 = no skew.
// jitter_<freq>mhz: RMS edge jitter in ps (real, e.g. 5.0), run-time
//                  changeable. 0.0 = jitter-free. See skew_module.sv.
// duty_<freq>mhz : high time in % (1..99), changeable at run time.
// Skew is measured against the ideal (un-skewed) PLL edge; frequency
// and duty cycle are not changed by the skew.
// Behavioral model, simulation only.
// ===============================================================

// The three modules are pulled in with `include (quotes are required).
// clk_gen.sv is included here so the testbench can use it as the
// 25 MHz reference.

// ---------------------------------------------------------------
// Top
// ---------------------------------------------------------------
module soc_clocks_skew (
    input  wire       clk_25mhz,       // reference
    input  wire [7:0] duty_1500mhz,
    input  wire [7:0] duty_800mhz,
    input  wire [7:0] duty_400mhz,
    input  wire [7:0] duty_250mhz,
    input  wire [7:0] duty_200mhz,
    input  wire [7:0] duty_125mhz,
    input  wire [7:0] duty_100mhz,
    input  wire [7:0] duty_50mhz,

    input  real       skew_1500mhz,        // ns
    input  real       skew_800mhz,        // ns
    input  real       skew_400mhz,        // ns
    input  real       skew_250mhz,        // ns
    input  real       skew_200mhz,        // ns
    input  real       skew_125mhz,        // ns
    input  real       skew_100mhz,        // ns
    input  real       skew_50mhz,        // ns

    input  real       jitter_1500mhz,      // ps RMS
    input  real       jitter_800mhz,      // ps RMS
    input  real       jitter_400mhz,      // ps RMS
    input  real       jitter_250mhz,      // ps RMS
    input  real       jitter_200mhz,      // ps RMS
    input  real       jitter_125mhz,      // ps RMS
    input  real       jitter_100mhz,      // ps RMS
    input  real       jitter_50mhz,      // ps RMS

    output wire       clk_1500mhz,
    output wire       clk_800mhz,
    output wire       clk_400mhz,
    output wire       clk_250mhz,
    output wire       clk_200mhz,
    output wire       clk_125mhz,
    output wire       clk_100mhz,
    output wire       clk_50mhz
);
    // un-skewed PLL outputs
    wire base_1500mhz, base_800mhz, base_400mhz, base_250mhz, base_200mhz, base_125mhz, base_100mhz, base_50mhz;

    pll_model #(.MULT(60)) u_pll_1500 (.ref_clk(clk_25mhz), .duty_pct(duty_1500mhz), .clk_out(base_1500mhz));
    pll_model #(.MULT(32)) u_pll_800  (.ref_clk(clk_25mhz), .duty_pct(duty_800mhz), .clk_out(base_800mhz));
    pll_model #(.MULT(16)) u_pll_400  (.ref_clk(clk_25mhz), .duty_pct(duty_400mhz), .clk_out(base_400mhz));
    pll_model #(.MULT(10)) u_pll_250  (.ref_clk(clk_25mhz), .duty_pct(duty_250mhz), .clk_out(base_250mhz));
    pll_model #(.MULT( 8)) u_pll_200  (.ref_clk(clk_25mhz), .duty_pct(duty_200mhz), .clk_out(base_200mhz));
    pll_model #(.MULT( 5)) u_pll_125  (.ref_clk(clk_25mhz), .duty_pct(duty_125mhz), .clk_out(base_125mhz));
    pll_model #(.MULT( 4)) u_pll_100  (.ref_clk(clk_25mhz), .duty_pct(duty_100mhz), .clk_out(base_100mhz));
    pll_model #(.MULT( 2)) u_pll_50   (.ref_clk(clk_25mhz), .duty_pct(duty_50mhz), .clk_out(base_50mhz));

    skew_module #(.SEED(1001)) u_skew_1500 (.clk_in(base_1500mhz), .skew_ns(skew_1500mhz), .jitter_ps(jitter_1500mhz), .skew_out(clk_1500mhz));
    skew_module #(.SEED(1002)) u_skew_800 (.clk_in(base_800mhz), .skew_ns(skew_800mhz), .jitter_ps(jitter_800mhz), .skew_out(clk_800mhz));
    skew_module #(.SEED(1003)) u_skew_400 (.clk_in(base_400mhz), .skew_ns(skew_400mhz), .jitter_ps(jitter_400mhz), .skew_out(clk_400mhz));
    skew_module #(.SEED(1004)) u_skew_250 (.clk_in(base_250mhz), .skew_ns(skew_250mhz), .jitter_ps(jitter_250mhz), .skew_out(clk_250mhz));
    skew_module #(.SEED(1005)) u_skew_200 (.clk_in(base_200mhz), .skew_ns(skew_200mhz), .jitter_ps(jitter_200mhz), .skew_out(clk_200mhz));
    skew_module #(.SEED(1006)) u_skew_125 (.clk_in(base_125mhz), .skew_ns(skew_125mhz), .jitter_ps(jitter_125mhz), .skew_out(clk_125mhz));
    skew_module #(.SEED(1007)) u_skew_100 (.clk_in(base_100mhz), .skew_ns(skew_100mhz), .jitter_ps(jitter_100mhz), .skew_out(clk_100mhz));
    skew_module #(.SEED(1008)) u_skew_50 (.clk_in(base_50mhz), .skew_ns(skew_50mhz), .jitter_ps(jitter_50mhz), .skew_out(clk_50mhz));
endmodule
