`timescale 1ps/1fs
// ---------------------------------------------------------------
// Checker (measured once at START_PS) for one skewed output:
//   skew   : rising-edge delay vs the un-skewed PLL clock (ns)
//   period : must equal 1/f
//   duty   : must equal EXP_DUTY
// ---------------------------------------------------------------
module clk_chk #(
    parameter NAME = "clk",
    parameter real FREQ_MHZ = 100.0,
    parameter real EXP_DUTY = 50.0,
    parameter real START_PS = 100000.0
)(input wire base, input wire clk, input real exp_skew_ns);
    realtime t_base, t_r1, t_f, t_r2, skew, per, duty;
    always @(posedge base) t_base = $realtime;
    initial begin
        #(START_PS);
        @(posedge clk); t_r1 = $realtime; skew = (t_r1 - t_base)/1000.0;   // ns
        @(negedge clk); t_f  = $realtime;
        @(posedge clk); t_r2 = $realtime;
        per  = t_r2 - t_r1;
        duty = 100.0*(t_f - t_r1)/per;
        if (skew - exp_skew_ns > 0.00001 || exp_skew_ns - skew > 0.00001 ||
            per - 1.0e6/FREQ_MHZ > 0.05 || 1.0e6/FREQ_MHZ - per > 0.05 ||
            duty - EXP_DUTY > 0.1 || EXP_DUTY - duty > 0.1) begin
            $display("FAIL %-12s skew=%7.4f ns (exp %7.4f)  period=%9.3f ps  duty=%6.2f (exp %0.0f)",
                     NAME, skew, exp_skew_ns, per, duty, EXP_DUTY);
            tb_soc_clocks_skew.errors = tb_soc_clocks_skew.errors + 1;
        end else
            $display("PASS %-12s skew=%7.4f ns  period=%9.3f ps  duty=%6.2f %%",
                     NAME, skew, per, duty);
    end
endmodule

// ---------------------------------------------------------------
// Jitter statistics checker: over [START_PS, END_PS] of the skewed
// clock `clk`, vs its un-skewed base clock `base`:
//   mean delay   = skew            std of delay  = SIGMA_PS
//   mean period  = 1/f             std of period = SIGMA_PS*sqrt(2)
//   max |delay - skew| <= 3 sigma
// ---------------------------------------------------------------
module jit_chk #(
    parameter NAME = "clk",
    parameter real FREQ_MHZ = 100.0,
    parameter real SIGMA_PS = 5.0,
    parameter real START_PS = 1000000.0,
    parameter real END_PS   = 4600000.0
)(input wire base, input wire clk, input real exp_skew_ns);
    realtime t_base, t_prev;
    integer  n = 0, np = 0;
    bit      have_prev = 0;
    real     d, p, dev, max_dev = 0.0;
    real     sum_d = 0, sq_d = 0, sum_p = 0, sq_p = 0;
    real     mean_d, std_d, mean_p, std_p, exp_d, exp_p;
    bit      bad;

    always @(posedge base) t_base = $realtime;

    always @(posedge clk) begin
        if ($realtime >= START_PS && $realtime < END_PS) begin
            d = $realtime - t_base;                 // edge delay, ps
            n = n + 1;  sum_d = sum_d + d;  sq_d = sq_d + d*d;
            dev = d - exp_skew_ns*1000.0;
            if (dev < 0) dev = -dev;
            if (dev > max_dev) max_dev = dev;
            if (have_prev) begin
                p = $realtime - t_prev;             // period, ps
                np = np + 1;  sum_p = sum_p + p;  sq_p = sq_p + p*p;
            end
            have_prev = 1;
            t_prev = $realtime;
        end
    end

    initial begin
        #(END_PS);
        mean_d = sum_d/n;   std_d = $sqrt(sq_d/n - mean_d*mean_d);
        mean_p = sum_p/np;  std_p = $sqrt(sq_p/np - mean_p*mean_p);
        exp_d  = exp_skew_ns*1000.0;
        exp_p  = 1.0e6/FREQ_MHZ;
        bad = 0;
        if (mean_d - exp_d > 4*SIGMA_PS/$sqrt(n) + 0.5 || exp_d - mean_d > 4*SIGMA_PS/$sqrt(n) + 0.5) bad = 1;
        if (std_d  > 1.35*SIGMA_PS || std_d  < 0.65*SIGMA_PS) bad = 1;
        if (mean_p - exp_p > 4*1.414*SIGMA_PS/$sqrt(np) + 0.5 || exp_p - mean_p > 4*1.414*SIGMA_PS/$sqrt(np) + 0.5) bad = 1;
        if (std_p  > 1.35*1.414*SIGMA_PS || std_p < 0.65*1.414*SIGMA_PS) bad = 1;
        if (max_dev > 3.0*SIGMA_PS + 0.1) bad = 1;
        if (bad) begin
            tb_soc_clocks_skew.errors = tb_soc_clocks_skew.errors + 1;
            $display("FAIL %-9s n=%0d  edge std=%6.2f ps (exp %0.1f)  period std=%6.2f ps (exp %0.2f)  max=%6.2f ps",
                     NAME, n, std_d, SIGMA_PS, std_p, 1.414*SIGMA_PS, max_dev);
        end else
            $display("PASS %-9s n=%5d  mean skew=%8.2f ps  edge jitter=%5.2f ps rms  period jitter=%5.2f ps rms  max=%5.2f ps",
                     NAME, n, mean_d, std_d, std_p, max_dev);
    end
endmodule

// ---------------------------------------------------------------
// Reference-clock jitter checker (25 MHz): period statistics
//   mean period = 40000 ps     std of period = SIGMA_PS*sqrt(2)
// ---------------------------------------------------------------
module ref_jit_chk #(
    parameter real SIGMA_PS = 20.0,
    parameter real START_PS = 5000000.0,
    parameter real END_PS   = 9000000.0
)(input wire clk);
    realtime t_prev;
    integer  np = 0;
    bit      have_prev = 0, bad;
    real     p, sum_p = 0, sq_p = 0, mean_p, std_p;
    always @(posedge clk) begin
        if ($realtime >= START_PS && $realtime < END_PS) begin
            if (have_prev) begin
                p = $realtime - t_prev;  np = np + 1;
                sum_p = sum_p + p;  sq_p = sq_p + p*p;
            end
            have_prev = 1;  t_prev = $realtime;
        end
    end
    initial begin
        #(END_PS);
        mean_p = sum_p/np;  std_p = $sqrt(sq_p/np - mean_p*mean_p);
        bad = 0;
        if (mean_p - 40000.0 > 4*1.414*SIGMA_PS/$sqrt(np) + 0.5 || 40000.0 - mean_p > 4*1.414*SIGMA_PS/$sqrt(np) + 0.5) bad = 1;
        if (std_p > 1.35*1.414*SIGMA_PS || std_p < 0.65*1.414*SIGMA_PS) bad = 1;
        if (bad) begin
            tb_soc_clocks_skew.errors = tb_soc_clocks_skew.errors + 1;
            $display("FAIL 25mhz ref  n=%0d  mean period=%9.3f ps  period jitter=%6.2f ps (exp %0.2f)", np, mean_p, std_p, 1.414*SIGMA_PS);
        end else
            $display("PASS 25mhz ref  n=%5d  mean period=%9.3f ps  period jitter=%5.2f ps rms (edge jitter %0.1f ps set)", np, mean_p, std_p, SIGMA_PS);
    end
endmodule

// ---------------------------------------------------------------
// Frequency checker: a jittery reference must not change the
// average output frequency (edge count over the window)
// ---------------------------------------------------------------
module freq_chk #(
    parameter NAME = "clk",
    parameter real FREQ_MHZ = 100.0,
    parameter real START_PS = 5000000.0,
    parameter real END_PS   = 9000000.0
)(input wire clk);
    integer cnt = 0;
    real    exp_cnt;
    always @(posedge clk)
        if ($realtime >= START_PS && $realtime < END_PS) cnt = cnt + 1;
    initial begin
        #(END_PS);
        exp_cnt = FREQ_MHZ * (END_PS - START_PS) / 1.0e6;
        if (cnt - exp_cnt > 2 || exp_cnt - cnt > 2) begin
            tb_soc_clocks_skew.errors = tb_soc_clocks_skew.errors + 1;
            $display("FAIL %-9s edges=%0d (exp %0.0f)", NAME, cnt, exp_cnt);
        end else
            $display("PASS %-9s edges=%5d (exp %0.0f)  average frequency OK with jittery ref", NAME, cnt, exp_cnt);
    end
endmodule

// ---------------------------------------------------------------
// Testbench
//   Phase 1 (100-300 ns): duty 50 %, skew values below
//   Phase 2 (400-700 ns): duties changed, skew_100mhz changed 0.1 -> 0.8 ns
//   Phase 3 (from 700 ns): JITTER switched on (ps RMS per clock); the
//     jit_chk monitors measure edge/period jitter statistics 1.0-4.6 us
//   Phase 4 (from 4.7 us): jitter on the 25 MHz REFERENCE too (all 9
//     frequencies now jittery); ref period jitter and the average
//     frequency of every output are checked over 5.0-9.0 us
// ---------------------------------------------------------------
module tb_soc_clocks_skew;
    integer errors = 0;
    reg en = 1'b1;
    real jitter_ref = 0.0;                 // ps RMS on the 25 MHz reference
    reg [7:0] duty_ref = 8'd50;
    reg [7:0] duty_1500mhz = 8'd50,
              duty_800mhz = 8'd50,
              duty_400mhz = 8'd50,
              duty_250mhz = 8'd50,
              duty_200mhz = 8'd50,
              duty_125mhz = 8'd50,
              duty_100mhz = 8'd50,
              duty_50mhz = 8'd50;
    real      skew_1500mhz = 0.015,
              skew_800mhz = 0.025,
              skew_400mhz = 0.04,
              skew_250mhz = 0.05,
              skew_200mhz = 0.07,
              skew_125mhz = 0.08,
              skew_100mhz = 20,
              skew_50mhz = 30;   // ns
    real      jitter_1500mhz = 0.0,
              jitter_800mhz = 0.0,
              jitter_400mhz = 0.0,
              jitter_250mhz = 0.0,
              jitter_200mhz = 0.0,
              jitter_125mhz = 0.0,
              jitter_100mhz = 0.0,
              jitter_50mhz = 20;   // ps RMS (off in phases 1-2)

    wire clk_25mhz;
    wire clk_1500mhz, clk_800mhz, clk_400mhz, clk_250mhz, clk_200mhz, clk_125mhz, clk_100mhz, clk_50mhz;

    clk_gen #(.FREQ_MHZ(25.0)) u_ref (.enable(en), .duty_pct(duty_ref), .jitter_ps(jitter_ref), .clk(clk_25mhz));

    soc_clocks_skew dut (
        .clk_25mhz(clk_25mhz),
        .duty_1500mhz(duty_1500mhz),
        .duty_800mhz(duty_800mhz),
        .duty_400mhz(duty_400mhz),
        .duty_250mhz(duty_250mhz),
        .duty_200mhz(duty_200mhz),
        .duty_125mhz(duty_125mhz),
        .duty_100mhz(duty_100mhz),
        .duty_50mhz(duty_50mhz),
        .skew_1500mhz(skew_1500mhz),
        .skew_800mhz(skew_800mhz),
        .skew_400mhz(skew_400mhz),
        .skew_250mhz(skew_250mhz),
        .skew_200mhz(skew_200mhz),
        .skew_125mhz(skew_125mhz),
        .skew_100mhz(skew_100mhz),
        .skew_50mhz(skew_50mhz),
        .jitter_1500mhz(jitter_1500mhz),
        .jitter_800mhz(jitter_800mhz),
        .jitter_400mhz(jitter_400mhz),
        .jitter_250mhz(jitter_250mhz),
        .jitter_200mhz(jitter_200mhz),
        .jitter_125mhz(jitter_125mhz),
        .jitter_100mhz(jitter_100mhz),
        .jitter_50mhz(jitter_50mhz),
        .clk_1500mhz(clk_1500mhz),
        .clk_800mhz(clk_800mhz),
        .clk_400mhz(clk_400mhz),
        .clk_250mhz(clk_250mhz),
        .clk_200mhz(clk_200mhz),
        .clk_125mhz(clk_125mhz),
        .clk_100mhz(clk_100mhz),
        .clk_50mhz(clk_50mhz));

    // phase 1 checks
    clk_chk #("1500mhz p1", 1500.0, 50.0, 100000.0) c1_1500 (dut.base_1500mhz, clk_1500mhz, 0.015);
    clk_chk #("800mhz p1", 800.0, 50.0, 100000.0) c1_800 (dut.base_800mhz, clk_800mhz, 0.025);
    clk_chk #("400mhz p1", 400.0, 50.0, 100000.0) c1_400 (dut.base_400mhz, clk_400mhz, 0.04);
    clk_chk #("250mhz p1", 250.0, 50.0, 100000.0) c1_250 (dut.base_250mhz, clk_250mhz, 0.05);
    clk_chk #("200mhz p1", 200.0, 50.0, 100000.0) c1_200 (dut.base_200mhz, clk_200mhz, 0.07);
    clk_chk #("125mhz p1", 125.0, 50.0, 100000.0) c1_125 (dut.base_125mhz, clk_125mhz, 0.08);
    clk_chk #("100mhz p1", 100.0, 50.0, 100000.0) c1_100 (dut.base_100mhz, clk_100mhz, 0.1);
    clk_chk #("50mhz p1", 50.0, 50.0, 100000.0) c1_50 (dut.base_50mhz, clk_50mhz, 0.16);

    // phase 2 checks (duty changed; skew_100mhz = 0.8 ns)
    clk_chk #("1500mhz p2", 1500.0, 30.0, 400000.0) c2_1500 (dut.base_1500mhz, clk_1500mhz, 0.015);
    clk_chk #("800mhz p2", 800.0, 40.0, 400000.0) c2_800 (dut.base_800mhz, clk_800mhz, 0.025);
    clk_chk #("400mhz p2", 400.0, 25.0, 400000.0) c2_400 (dut.base_400mhz, clk_400mhz, 0.04);
    clk_chk #("250mhz p2", 250.0, 60.0, 400000.0) c2_250 (dut.base_250mhz, clk_250mhz, 0.05);
    clk_chk #("200mhz p2", 200.0, 75.0, 400000.0) c2_200 (dut.base_200mhz, clk_200mhz, 0.07);
    clk_chk #("125mhz p2", 125.0, 10.0, 400000.0) c2_125 (dut.base_125mhz, clk_125mhz, 0.08);
    clk_chk #("100mhz p2", 100.0, 90.0, 400000.0) c2_100 (dut.base_100mhz, clk_100mhz, 0.8);
    clk_chk #("50mhz p2", 50.0, 20.0, 400000.0) c2_50 (dut.base_50mhz, clk_50mhz, 0.16);

    // phase 3: jitter statistics
    jit_chk #("1500mhz", 1500.0, 3.0) j_1500 (dut.base_1500mhz, clk_1500mhz, skew_1500mhz);
    jit_chk #("800mhz", 800.0, 4.0) j_800 (dut.base_800mhz, clk_800mhz, skew_800mhz);
    jit_chk #("400mhz", 400.0, 5.0) j_400 (dut.base_400mhz, clk_400mhz, skew_400mhz);
    jit_chk #("250mhz", 250.0, 6.0) j_250 (dut.base_250mhz, clk_250mhz, skew_250mhz);
    jit_chk #("200mhz", 200.0, 7.0) j_200 (dut.base_200mhz, clk_200mhz, skew_200mhz);
    jit_chk #("125mhz", 125.0, 8.0) j_125 (dut.base_125mhz, clk_125mhz, skew_125mhz);
    jit_chk #("100mhz", 100.0, 10.0) j_100 (dut.base_100mhz, clk_100mhz, skew_100mhz);
    jit_chk #("50mhz", 50.0, 10.0) j_50 (dut.base_50mhz, clk_50mhz, skew_50mhz);

    // phase 4: reference jitter + average frequency of every output
    ref_jit_chk #(20.0) j_ref (clk_25mhz);
    freq_chk #("1500mhz", 1500.0) f_1500 (clk_1500mhz);
    freq_chk #("800mhz", 800.0) f_800 (clk_800mhz);
    freq_chk #("400mhz", 400.0) f_400 (clk_400mhz);
    freq_chk #("250mhz", 250.0) f_250 (clk_250mhz);
    freq_chk #("200mhz", 200.0) f_200 (clk_200mhz);
    freq_chk #("125mhz", 125.0) f_125 (clk_125mhz);
    freq_chk #("100mhz", 100.0) f_100 (clk_100mhz);
    freq_chk #("50mhz", 50.0) f_50 (clk_50mhz);

    initial begin
        $dumpfile("soc_clocks_skew.vcd");
        $dumpvars(0, tb_soc_clocks_skew);
        #300000;                                // 300 ns: change at run time
        duty_1500mhz = 8'd30;  duty_800mhz = 8'd40;  duty_400mhz = 8'd25;  duty_250mhz = 8'd60;
        duty_200mhz = 8'd75;  duty_125mhz = 8'd10;  duty_100mhz = 8'd90;  duty_50mhz = 8'd20;
        skew_100mhz = 0.8;
        #400000;                                // 700 ns: switch jitter on (ps RMS)
        jitter_1500mhz = 3.0;  jitter_800mhz = 4.0;  jitter_400mhz = 5.0;  jitter_250mhz = 6.0;
        jitter_200mhz = 7.0;  jitter_125mhz = 8.0;  jitter_100mhz = 10.0;  jitter_50mhz = 10.0;
        #4000000;                               // 4.7 us: phase 3 done
        jitter_ref = 20.0;                      // phase 4: jitter on the 25 MHz reference
        #4500000;                               // run to 9.2 us
        if (errors == 0) $display("---- ALL PASS ----");
        else             $display("---- DONE: %0d errors ----", errors);
        $finish;
    end
endmodule
