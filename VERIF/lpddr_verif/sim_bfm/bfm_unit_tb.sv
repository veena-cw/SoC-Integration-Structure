`timescale 1ns/1ps
`include "uvm_macros.svh"

// Directed self-checking test of lpddr5_phy_bfm + lpddr5_dram_model.
// DFI is driven the way lpddr5c_top drives it (scheduler opcodes, cs_n=0 per
// command, write data in two 64-bit beats, mask = 1 -> byte not written).
// Expected protocol errors / timing violations are counted and compared with
// the BFM counters at the end. Run: ./run_unit.sh
module bfm_unit_tb;
    import uvm_pkg::*;

    localparam int DW = 128, DFW = 64, AW = 32;

    logic clk = 0, rst_n = 0;
    always #5 clk = ~clk;

    logic           cs_n = 1, cke = 1, rw = 0;
    logic [5:0]     ca = 0;
    logic [AW-1:0]  addr = 0;
    logic [DFW-1:0] wd = 0;
    logic [7:0]     wm = 0;
    logic           we = 0;
    logic [DFW-1:0] rd;
    logic           rdv, init_c, pm_req, rdlvl_req, wrlvl_req;
    logic           pm_ack = 0, rdlvl_en = 0, wrlvl_en = 0;
    logic           ds_entry = 0, ds_exit = 0;

    logic           c_v, c_r, w_v, r_v;
    logic [5:0]     c_c;
    logic [AW-1:0]  c_a;
    logic [DW-1:0]  w_d, r_d;
    logic [15:0]    w_m;
    logic           dinit, dtrain, derr;
    logic [2:0]     lpst;

    lpddr5_phy_bfm #(.DATA_WIDTH(DW), .DFI_DATA_WIDTH(DFW), .PHYMSTR_START_DELAY(40)) phy (
        .dfi_clk(clk), .dfi_rst_n(rst_n), .dfi_cs_n(cs_n), .dfi_cke(cke), .dfi_ca(ca), .dfi_addr(addr),
        .dfi_rw(rw), .dfi_wrdata(wd), .dfi_wrdata_mask(wm), .dfi_wrdata_en(we),
        .dfi_rddata(rd), .dfi_rddata_valid(rdv), .dfi_init_complete(init_c),
        .dfi_phymstr_req(pm_req), .dfi_phymstr_ack(pm_ack),
        .dfi_rdlvl_en(rdlvl_en), .dfi_rdlvl_req(rdlvl_req), .dfi_wrlvl_en(wrlvl_en), .dfi_wrlvl_req(wrlvl_req),
        .dram_cmd_valid(c_v), .dram_cmd_ready(c_r), .dram_cmd(c_c), .dram_addr(c_a),
        .dram_wrdata_valid(w_v), .dram_wrdata(w_d), .dram_wrdata_mask(w_m),
        .dram_rddata(r_d), .dram_rddata_valid(r_v));

    lpddr5_dram_model #(.DATA_WIDTH(DW), .ADDR_WIDTH(AW), .READ_LATENCY(8)) dram (
        .sys_clk(clk), .sys_rst_n(rst_n), .cmd_valid(c_v), .cmd_ready(c_r), .cmd(c_c), .dram_addr(c_a),
        .wrdata_valid(w_v), .wrdata(w_d), .wrdata_mask(w_m), .rddata(r_d), .rddata_valid(r_v),
        .init_done(dinit), .training_done(dtrain),
        .dram_ds_entry(ds_entry), .dram_ds_exit(ds_exit),
        .dram_lp_state(lpst), .error(derr));

    // Scheduler opcodes
    localparam logic [5:0] RD=1, WR=2, ACT=3, PRE=4, PREA=5, REF=6, MRW=7, MRR=8, SRE=9, SRX=10, PDE=11, PDX=12;

    int exp_derr, exp_dtv, exp_perr, fails;
    logic [DFW-1:0] beats [$];

    always @(posedge clk) if (rdv === 1'b1) beats.push_back(rd);

    task automatic tick(int n = 1); repeat (n) @(posedge clk); endtask

    task automatic cmd(logic [5:0] c, logic [AW-1:0] a);
        @(posedge clk); cs_n <= 0; ca <= c; addr <= a; rw <= (c == WR);
        @(posedge clk); cs_n <= 1; ca <= 0;
    endtask

    // two commands in consecutive cycles
    task automatic cmd2(logic [5:0] c0, logic [AW-1:0] a0, logic [5:0] c1, logic [AW-1:0] a1);
        @(posedge clk); cs_n <= 0; ca <= c0; addr <= a0; rw <= (c0 == WR);
        @(posedge clk); cs_n <= 0; ca <= c1; addr <= a1; rw <= (c1 == WR);
        @(posedge clk); cs_n <= 1; ca <= 0;
    endtask

    task automatic wdata(logic [DW-1:0] d, logic [15:0] m);
        @(posedge clk); we <= 1; wd <= d[63:0];   wm <= m[7:0];
        @(posedge clk); we <= 1; wd <= d[127:64]; wm <= m[15:8];
        @(posedge clk); we <= 0;
    endtask

    function automatic logic [AW-1:0] A(int bank, logic [15:0] row, int col = 0);
        return {row, 4'h0, bank[2:0], col[4:0], 4'h0};
    endfunction

    function automatic logic [AW-1:0] MR(int ma, logic [7:0] op = 0);
        return {16'h0, op, 1'b0, ma[6:0]};
    endfunction

    task automatic expect_read(string tag, logic [DW-1:0] exp);
        int t0 = 0;
        while (beats.size() < 2 && t0 < 40) begin tick(); t0++; end
        if (beats.size() < 2) begin
            fails++; $display("FAIL %s: read data not returned", tag);
        end else begin
            logic [DW-1:0] got = {beats[1], beats[0]};
            void'(beats.pop_front()); void'(beats.pop_front());
            if (got !== exp) begin fails++; $display("FAIL %s: got %h exp %h", tag, got, exp); end
            else $display("PASS %s: %h", tag, got);
        end
    endtask

    task automatic check_counts(string tag);
        if (dram.n_err != exp_derr || dram.n_tviol != exp_dtv || phy.n_err != exp_perr) begin
            fails++;
            $display("FAIL %s: dram_err=%0d(exp %0d) dram_tviol=%0d(exp %0d) phy_err=%0d(exp %0d)", tag,
                     dram.n_err, exp_derr, dram.n_tviol, exp_dtv, phy.n_err, exp_perr);
            exp_derr = dram.n_err; exp_dtv = dram.n_tviol; exp_perr = phy.n_err;   // resync
        end else
            $display("PASS %s (dram_err=%0d tviol=%0d phy_err=%0d)", tag, exp_derr, exp_dtv, exp_perr);
    endtask

    initial begin
        logic [DW-1:0] d0 = 128'h1122334455667788_99AABBCCDDEEFF00;
        logic [DW-1:0] d1 = 128'hCAFEBABE_DEADBEEF_01234567_89ABCDEF;
        tick(3); rst_n = 1;

        // 1. command before PHY init complete -> PHY error
        tick(2); cmd(ACT, A(0, 16'h1));            exp_perr++;
        wait (init_c === 1'b1); tick(5);
        check_counts("init gating");

        // 2. write data BEFORE the WR command (RTL ordering), masked byte 0
        cmd(ACT, A(0, 16'h0010)); tick(5);
        wdata(d0, 16'h0000);
        tick(4); cmd(WR, A(0, 16'h0010, 1));
        wdata(d1, 16'h0001);                       // data for next WR, byte 0 masked
        tick(4); cmd(WR, A(0, 16'h0010, 2));
        // 3. WR command BEFORE its data
        tick(4); cmd(WR, A(0, 16'h0010, 3)); tick(3); wdata(~d0, 16'h0000);
        tick(15);
        check_counts("write ordering");

        // 4. pipelined reads, two DFI beats per word (low half first)
        cmd(RD, A(0, 16'h0010, 1)); cmd(RD, A(0, 16'h0010, 2)); cmd(RD, A(0, 16'h0010, 3));
        expect_read("RD data-before-cmd", d0);
        expect_read("RD masked byte",     {d1[127:8], 8'h00});
        expect_read("RD cmd-before-data", ~d0);
        check_counts("read path");

        // 5. tRCD violation (RD right after ACT to another bank) and RD to wrong row
        cmd2(ACT, A(1, 16'h0020), RD, A(1, 16'h0020)); exp_dtv++;      // tRCD
        tick(20); void'(beats.pop_front()); void'(beats.pop_front());
        cmd(RD, A(1, 16'h0021));                   exp_derr++;          // row mismatch
        tick(20); beats.delete();
        check_counts("tRCD / row check");

        // 6. REF with open banks -> error; PREA + REF ok; ACT inside tRFCab -> violation
        cmd(REF, 0);                               exp_derr++;
        tick(15); cmd(PREA, 0); tick(5); cmd(REF, 0); tick(3); cmd(ACT, A(2, 16'h3)); exp_dtv++;
        tick(30); cmd(PRE, A(2, 16'h3)); tick(10);
        check_counts("refresh rules");

        // 7. mode registers: FSP, read-only protection, MR4 TUF, MR8 identity
        cmd(MRW, MR(16, 8'h01)); tick(10);         // FSP-WR = 1
        cmd(MRW, MR(2, 8'h55));  tick(10);         // MR2 into FSP1
        cmd(MRR, MR(2));         expect_read("MRR MR2 @FSP-WR1", {16{8'h55}});
        cmd(MRW, MR(16, 8'h00)); tick(10);         // FSP-WR = 0
        cmd(MRR, MR(2));         expect_read("MRR MR2 @FSP-WR0", {16{8'h00}});
        exp_dtv += 0;
        cmd(MRR, MR(8));         expect_read("MRR MR8 (8Gb x16)", {16{8'h10}});
        cmd(MRR, MR(4));         expect_read("MRR MR4 TUF=1", {16{8'h89}});
        tick(10); cmd(MRR, MR(4)); expect_read("MRR MR4 TUF cleared", {16{8'h09}});
        tick(10); cmd(MRW, MR(8, 8'hFF)); exp_derr++;                    // RO
        tick(10); cmd(MRR, MR(8)); expect_read("MR8 unchanged", {16{8'h10}});
        cmd(MRW, MR(16, 8'h0F)); exp_derr++;       // reserved FSP 3
        tick(10); cmd(MRW, MR(16, 8'h00)); tick(10);
        check_counts("mode registers");

        // 8. MR13 DMD: masked write while data mask disabled -> error
        cmd(MRW, MR(13, 8'h20)); tick(10);
        cmd(ACT, A(3, 16'h0040)); tick(5); cmd(WR, A(3, 16'h0040)); wdata(d0, 16'h00F0); exp_derr++;
        tick(15); cmd(MRW, MR(13, 8'h00)); tick(15);
        cmd(PRE, A(3, 16'h0040)); tick(10);
        check_counts("MR13 DMD");

        // 9. Self Refresh: SRE with open bank -> error; RD in SR -> error; tXSR violation
        cmd(ACT, A(0, 16'h0010)); tick(10);
        cmd(SRE, 0);                               exp_derr++;          // bank 0 open
        tick(10); cmd(SRX, 0); tick(30);           // (SRE above was still taken: exit it)
        cmd(REF, 0); exp_derr++;                   // bank 0 open -> REF illegal
        tick(10); cmd(PREA, 0); tick(5); cmd(REF, 0); tick(30);
        cmd(SRE, 0); tick(5); cmd(RD, A(0, 16'h10)); exp_derr++;         // RD in SR
        tick(10); cmd(SRX, 0); tick(2); cmd(ACT, A(0, 16'h10)); exp_dtv++; // tXSR
        tick(40); cmd(PRE, A(0, 16'h10)); tick(10);
        check_counts("self refresh");

        // 10. PASR: mask segment 7 (row[15:13]=7), data lost across SR; segment 0 kept
        cmd(MRW, MR(23, 8'h80)); tick(10);
        cmd(ACT, A(4, 16'hE000)); tick(5); cmd(WR, A(4, 16'hE000)); wdata(d1, 16'h0); tick(15);
        cmd(PRE, A(4, 16'hE000)); tick(10);
        cmd(REF, 0); tick(30); cmd(SRE, 0); tick(5);
        cmd(MRW, MR(23, 8'h00)); exp_derr++;       // MR23 write prohibited in SR
        tick(10); cmd(SRX, 0); tick(40);
        cmd(ACT, A(4, 16'hE000)); tick(5); cmd(RD, A(4, 16'hE000));
        expect_read("PASR masked segment -> X", 'x);
        cmd(PRE, A(4, 16'hE000)); tick(10);
        cmd(ACT, A(0, 16'h0010)); tick(5); cmd(RD, A(0, 16'h0010, 1));
        expect_read("unmasked segment retained", d0);
        cmd(PRE, A(0, 16'h0010)); tick(10);
        check_counts("PASR");

        // 11. Power-Down: command in PD -> error; tXP violation after PDX
        cmd(PDE, 0); tick(5); cmd(ACT, A(5, 16'h5)); exp_derr++;
        tick(5); cmd(PDX, 0); cmd(ACT, A(5, 16'h5)); exp_dtv++;          // tXP
        tick(20); cmd(PRE, A(5, 16'h5)); tick(10);
        check_counts("power-down");

        // 12. Deep Sleep (sideband) entered from idle; data retained; tXSR_DSM before SRX
        cmd(REF, 0); tick(30);
        @(posedge clk) ds_entry <= 1; @(posedge clk) ds_entry <= 0;
        tick(10); @(posedge clk) ds_exit <= 1; @(posedge clk) ds_exit <= 0;
        tick(5); cmd(SRX, 0); exp_dtv++;           // tXSR_DSM (200 us) not met
        tick(40); cmd(ACT, A(0, 16'h0010)); tick(5); cmd(RD, A(0, 16'h0010, 3));
        expect_read("DSM data retained", ~d0);
        cmd(PRE, A(0, 16'h0010)); tick(10);
        check_counts("deep sleep");

        // 13. unknown opcode -> error; incomplete write burst -> PHY error
        cmd(6'h3F, 0); exp_derr++;
        @(posedge clk) we <= 1; @(posedge clk) we <= 0; exp_perr++; exp_derr += 0;
        tick(10);
        // the partial word is delivered to the DRAM with no WR command; it stays queued (no error)
        check_counts("illegal opcode / partial burst");

        // 14. PHY-master window: ack, then a command inside the window -> PHY error
        wait (pm_req === 1'b1); tick(2);
        @(posedge clk) pm_ack <= 1; @(posedge clk) pm_ack <= 0;
        tick(2); cmd(ACT, A(6, 16'h6)); exp_perr++;
        wait (pm_req === 1'b0); tick(5);
        check_counts("PHY-master window");

        // 15. read / write leveling responders
        @(posedge clk) rdlvl_en <= 1; tick(6);
        if (rdlvl_req !== 1'b1) begin fails++; $display("FAIL rdlvl_req not asserted"); end
        else $display("PASS rdlvl_req follows rdlvl_en");
        @(posedge clk) rdlvl_en <= 0; @(posedge clk) wrlvl_en <= 1; tick(8);
        if (wrlvl_req !== 1'b1) begin fails++; $display("FAIL wrlvl_req not asserted"); end
        else $display("PASS wrlvl_req answers wrlvl_en");
        @(posedge clk) wrlvl_en <= 0; tick(4);
        if (wrlvl_req !== 1'b0 || rdlvl_req !== 1'b0) begin fails++; $display("FAIL leveling req not released"); end

        tick(20);
        $display("BFM_UNIT_RESULT %s: %0d check failure(s); dram_err=%0d tviol=%0d phy_err=%0d",
                 fails ? "FAIL" : "PASS", fails, dram.n_err, dram.n_tviol, phy.n_err);
        $finish;
    end
endmodule
