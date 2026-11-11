`timescale 1ns/1ps
`include "uvm_macros.svh"

//============================================================================
// LPDDR5 DRAM behavioural model (verification only)
//
// Reference : JESD209-5C (LPDDR5/5X), x16 device, 8 Gb, DVFSC off, Link ECC off
// Interface : command / write-data / read-data handshake driven by
//             lpddr5_phy_bfm (one 128-bit word per RD/WR command).
// Encoding  : command opcodes follow lpddr5c_cmd_scheduler (placeholder CA
//             codes used by the RTL, NOT the JEDEC CA bus truth table).
//
// Features
//   * Commands     : NOP, RD, WR, ACT, PRE (per bank), PREA, REF (all bank),
//                    MRW, MRR, SRE, SRX, PDE, PDX; DSM through LP sideband.
//   * Bank FSM     : per-bank IDLE/ACTIVE with open row; illegal-state checks
//                    (ACT to open bank, RD/WR to closed bank or wrong row,
//                    REF/SRE with open banks, commands in PD/SR/DSM).
//   * AC timing    : tRCD, tRAS(min/max), tRPpb, tRPab, tRC, tRRD, tFAW, tPPD,
//                    tWR, tRBTP, tWTR, tRFCab, tREFI postpone/pull-in (max 8),
//                    tMRW, tMRD, tMRR, tXP, tCMDPD, tMRWPD, tCSPD, tSR, tXSR,
//                    tESPD, tPDN, tXSR_DSM. Values in ps, converted with TCK_PS.
//   * Mode regs    : 128 x 8-bit, three FSP copies (MR16 FSP-WR / FSP-OP),
//                    read-only MRs protected, MR4 refresh rate + TUF clear on
//                    MRR, MR8 density/width/type, MR13 DMD, MR23 PASR,
//                    MRW restrictions during Self Refresh.
//   * Data         : sparse memory (no aliasing), byte mask (1 = keep byte),
//                    write data accepted before or after its WR command (the
//                    RTL streams data ahead of the command), pipelined reads
//                    with READ_LATENCY, MRR data on the read path.
//   * Low power    : Power-Down (idle/active), Self Refresh, SR Power-Down,
//                    Deep Sleep Mode; PASR segment data loss on SR exit;
//                    one extra REF required between SRX and next SRE.
//   * Reporting    : protocol errors -> UVM_ERROR; timing violations ->
//                    UVM_WARNING (UVM_ERROR with TIMING_ERR=1 or
//                    +DRAM_TIMING_ERR); +DRAM_TIMING_OFF disables timing
//                    checks; end-of-test summary.
//
// Address map (matches lpddr5c_cmd_scheduler):
//   bank = addr[BANK_LSB +: BA_W], bank group bit = addr[BG_BIT],
//   row  = addr[ROW_LSB +: ROW_WIDTH], memory word = addr >> log2(DATA_WIDTH/8)
// MRW/MRR operands (RTL has no MR encoding yet): MA = addr[6:0], OP = addr[15:8]
//============================================================================

module lpddr5_dram_model
    import uvm_pkg::*;
#(
    parameter int DATA_WIDTH    = 128,
    parameter int ADDR_WIDTH    = 32,
    parameter int MEM_DEPTH     = 65536,   // kept for compatibility (memory is sparse)
    parameter int READ_LATENCY  = 8,       // RD/MRR command -> rddata_valid (cycles)

    // Organisation / address map
    parameter int NUM_BANKS     = 8,       // 8 = 8B mode, 16 = 16B or BG mode
    parameter int BANK_MODE     = 0,       // 0 = 8B, 1 = 16B, 2 = BG (selects tRRD/tFAW/tWTR)
    parameter int BANK_LSB      = 9,
    parameter int BG_BIT        = 12,
    parameter int ROW_LSB       = 16,
    parameter int ROW_WIDTH     = 16,

    // Clock / latency abstraction
    parameter int TCK_PS        = 10000,   // model clock period (TB sys_clk = 100 MHz)
    parameter int WRITE_LATENCY = 4,       // WL in model cycles (for tWR / tWTR)
    parameter int BURST_CYC     = 2,       // BL/n in model cycles (two DFI beats)
    parameter int INIT_CYCLES   = 2,

    // Identification (MR5..MR8)
    parameter logic [7:0] VENDOR_ID    = 8'h01,
    parameter logic [3:0] DENSITY_CODE = 4'b0100,   // MR8 OP[5:2]: 0100 = 8 Gb
    parameter logic [4:0] REFRESH_RATE = 5'b01001,  // MR4 OP[4:0]: 1x tREFI (85 C)

    // Checking policy
    parameter bit TIMING_ERR      = 1'b0,  // 1: timing violations are UVM_ERRORs
    parameter bit REFRESH_CHECK   = 1'b1,  // tREFI postpone/pull-in checking
    parameter bit STRICT_WR_ORDER = 1'b0,  // 1: write data before WR command is an error
    parameter int WDQ_MAX         = 16     // unmatched write-data words allowed
)(
    input  logic                         sys_clk,
    input  logic                         sys_rst_n,

    // DRAM command interface
    input  logic                         cmd_valid,
    output logic                         cmd_ready,
    input  logic [5:0]                   cmd,
    input  logic [ADDR_WIDTH-1:0]        dram_addr,

    // DRAM write data interface (mask bit = 1 -> byte not written)
    input  logic                         wrdata_valid,
    input  logic [DATA_WIDTH-1:0]        wrdata,
    input  logic [(DATA_WIDTH/8)-1:0]    wrdata_mask,

    // DRAM read data interface
    output logic [DATA_WIDTH-1:0]        rddata,
    output logic                         rddata_valid,

    // Initialization / training status
    output logic                         init_done,
    output logic                         training_done,

    // Low-power sideband (optional; tied low when unconnected)
    input  logic                         dram_pd_entry = 1'b0,
    input  logic                         dram_pd_exit  = 1'b0,
    input  logic                         dram_sr_entry = 1'b0,
    input  logic                         dram_sr_exit  = 1'b0,
    input  logic                         dram_ds_entry = 1'b0,
    input  logic                         dram_ds_exit  = 1'b0,

    // 0 normal, 1 power-down, 2 self refresh, 3 deep sleep, 4 SR power-down
    output logic [2:0]                   dram_lp_state,

    // Sticky protocol error
    output logic                         error
);

    //========================================================================
    // Command encoding (must match lpddr5c_cmd_scheduler CA_* localparams)
    //========================================================================
    localparam logic [5:0] CA_NOP  = 6'h00;
    localparam logic [5:0] CA_RD   = 6'h01;
    localparam logic [5:0] CA_WR   = 6'h02;
    localparam logic [5:0] CA_ACT  = 6'h03;
    localparam logic [5:0] CA_PRE  = 6'h04;
    localparam logic [5:0] CA_PREA = 6'h05;
    localparam logic [5:0] CA_REF  = 6'h06;
    localparam logic [5:0] CA_MRW  = 6'h07;
    localparam logic [5:0] CA_MRR  = 6'h08;
    localparam logic [5:0] CA_SRE  = 6'h09;
    localparam logic [5:0] CA_SRX  = 6'h0A;
    localparam logic [5:0] CA_PDE  = 6'h0B;
    localparam logic [5:0] CA_PDX  = 6'h0C;

    localparam logic [2:0] LP_NORMAL = 3'd0;
    localparam logic [2:0] LP_PD     = 3'd1;
    localparam logic [2:0] LP_SR     = 3'd2;
    localparam logic [2:0] LP_DS     = 3'd3;
    localparam logic [2:0] LP_SRPD   = 3'd4;

    localparam int BA_W   = $clog2(NUM_BANKS);
    localparam int WORD_B = $clog2(DATA_WIDTH/8);
    localparam int NBYTES = DATA_WIDTH/8;

    //========================================================================
    // AC timing (JESD209-5C Tables 240/242/245/249/252/381/383), in ps
    //========================================================================
    function automatic longint cyc_of(input longint ps, input int nck_min);
        longint c;
        c = (ps + TCK_PS - 1) / TCK_PS;
        return (c < nck_min) ? nck_min : c;
    endfunction

    localparam longint T_RFCAB_PS = 210_000;              // 8 Gb
    localparam longint T_REFI_PS  = 3_906_000;            // 1x refresh rate

    longint tRCD, tRPPB, tRPAB, tRAS, tRASMAX, tRC, tRRD, tFAW, tPPD;
    longint tWR, tRBTP, tWTR_S, tWTR_L, tRFCAB, tREFI;
    longint tMRW, tMRD, tMRR, tXP, tCMDPD, tMRWPD, tCSPD;
    longint tSR, tXSR, tESPD, tPDN, tXSR_DSM;

    initial begin
        tRCD    = cyc_of(18_000, 2);
        tRPPB   = cyc_of(18_000, 2);
        tRPAB   = cyc_of(21_000, 2);
        tRAS    = cyc_of(42_000, 3);
        tRC     = tRAS + tRPPB;
        tRRD    = (BANK_MODE == 0) ? cyc_of(10_000, 2) : cyc_of(5_000, 2);
        tFAW    = (BANK_MODE == 0) ? cyc_of(40_000, 1) : cyc_of(20_000, 1);
        tPPD    = 2;
        tWR     = cyc_of(34_000, 3);
        tRBTP   = cyc_of(7_500, 2);
        tWTR_S  = (BANK_MODE == 2) ? cyc_of(6_250, 4) : cyc_of(12_000, 4);
        tWTR_L  = cyc_of(12_000, 4);
        tRFCAB  = cyc_of(T_RFCAB_PS, 1);
        tREFI   = cyc_of(T_REFI_PS, 1);
        tRASMAX = 9 * tREFI;
        tMRW    = cyc_of(10_000, 5);
        tMRD    = cyc_of(14_000, 5);
        tMRR    = 8;
        tXP     = cyc_of(7_000, 3);
        tCMDPD  = 3;
        tMRWPD  = cyc_of(14_000, 6);
        tCSPD   = cyc_of(10_000, 0) + 1;
        tSR     = cyc_of(15_000, 2);
        tXSR    = tRFCAB + cyc_of(7_500, 2);
        tESPD   = 2;
        tPDN    = cyc_of(10_000, 0) + 1;
        tXSR_DSM = cyc_of(200_000_000, 1);
    end

    //========================================================================
    // Reporting
    //========================================================================
    int  n_err, n_tviol, n_warn;
    bit  tviol_err, tchk_off;
    int  n_cmd [0:15];

    initial begin
        tviol_err = TIMING_ERR || $test$plusargs("DRAM_TIMING_ERR");
        tchk_off  = $test$plusargs("DRAM_TIMING_OFF");
        foreach (n_cmd[i]) n_cmd[i] = 0;
    end

    function automatic void perr(input string m);
        n_err++;
        uvm_report_error("DRAM_BFM", m, UVM_NONE);
    endfunction

    function automatic void pwarn(input string m);
        n_warn++;
        uvm_report_warning("DRAM_BFM", m, UVM_NONE);
    endfunction

    function automatic void pinfo(input string m);
        uvm_report_info("DRAM_BFM", m, UVM_MEDIUM);
    endfunction

    longint cyc;                                   // model cycle counter

    // Unconditional timing/refresh-rule violation
    function automatic void tviol(input string name, input string ctx);
        if (tchk_off) return;
        n_tviol++;
        if (tviol_err) uvm_report_error  ("DRAM_BFM_TIMING", $sformatf("%s violated (%s)", name, ctx), UVM_NONE);
        else           uvm_report_warning("DRAM_BFM_TIMING", $sformatf("%s violated (%s)", name, ctx), UVM_NONE);
    endfunction

    // Timing check: at least 'need' cycles must have elapsed since event 'at'
    function automatic void tcheck(input longint at, input longint need,
                                   input string name, input string ctx);
        if (tchk_off || at < 0) return;
        if ((cyc - at) < need)
            tviol(name, $sformatf("%0d < %0d cycles, %s", cyc - at, need, ctx));
    endfunction

    function automatic string cmd_name(input logic [5:0] c);
        case (c)
            CA_NOP:  return "NOP";  CA_RD:   return "RD";   CA_WR:   return "WR";
            CA_ACT:  return "ACT";  CA_PRE:  return "PRE";  CA_PREA: return "PREA";
            CA_REF:  return "REF";  CA_MRW:  return "MRW";  CA_MRR:  return "MRR";
            CA_SRE:  return "SRE";  CA_SRX:  return "SRX";  CA_PDE:  return "PDE";
            CA_PDX:  return "PDX";
            default: return $sformatf("UNKNOWN(%02h)", c);
        endcase
    endfunction

    //========================================================================
    // State
    //========================================================================
    // Banks
    logic                 bank_act [NUM_BANKS];
    logic [ROW_WIDTH-1:0] bank_row [NUM_BANKS];
    longint t_act [NUM_BANKS], t_pre [NUM_BANKS], t_rd [NUM_BANKS], t_wr [NUM_BANKS];
    longint t_act_any, t_pre_any, t_prea, t_ref, t_wr_any, t_wr_any_bg;
    longint act_hist [$];                          // ACT times for tFAW
    logic   wr_any_bg;

    // Mode registers: [fsp][ma]
    logic [7:0] mr [0:2][0:127];
    longint t_mrw, t_mrr;

    // Device / low power
    logic [2:0] lp;
    longint t_valid_cmd, t_pde, t_pdx, t_sre, t_srx, t_dsm_in, t_dsm_out;
    bit     dsm_exit_pending, ref_since_srx, srx_seen;

    // Refresh accounting
    longint ref_epoch, refs_done;
    int     postpone_reported;
    bit     allow_refab_with_open_banks = 1'b0;
    bit     ref_open_warning_reported;

    // Memory (sparse) and PASR data loss bookkeeping
    logic [DATA_WIDTH-1:0] mem  [bit [ADDR_WIDTH-1:0]];
    bit                    lost [bit [ADDR_WIDTH-1:0]];

    // Write matching queues
    typedef struct { logic [DATA_WIDTH-1:0] d; logic [NBYTES-1:0] m; longint t; } wdat_t;
    typedef struct { logic [ADDR_WIDTH-1:0] a; longint t; } wcmd_t;
    wdat_t wdq [$];
    wcmd_t wcq [$];

    // Read return pipeline
    typedef struct { longint due; logic [ADDR_WIDTH-1:0] a; bit is_mrr; logic [7:0] mrv; } rd_t;
    rd_t rdq [$];

    int init_cnt;
    rd_t                 r_ret;                    // main-process temporaries
    bit [ADDR_WIDTH-1:0] w_ret;
    longint              owed_bg;

    //========================================================================
    // Helpers
    //========================================================================
    function automatic int bank_of(input logic [ADDR_WIDTH-1:0] a);
        return int'(a[BANK_LSB +: BA_W]);
    endfunction
    function automatic logic [ROW_WIDTH-1:0] row_of(input logic [ADDR_WIDTH-1:0] a);
        return a[ROW_LSB +: ROW_WIDTH];
    endfunction
    typedef bit [ADDR_WIDTH-1:0] waddr_t;
    function automatic waddr_t word_of(input logic [ADDR_WIDTH-1:0] a);
        return waddr_t'(a) >> WORD_B;
    endfunction
    function automatic logic [2:0] pasr_seg_of_word(input bit [ADDR_WIDTH-1:0] w);
        logic [ADDR_WIDTH-1:0] a;
        a = w << WORD_B;
        return a[ROW_LSB + ROW_WIDTH - 1 -: 3];
    endfunction

    function automatic bit any_bank_open();
        foreach (bank_act[b]) if (bank_act[b]) return 1;
        return 0;
    endfunction

    function automatic string open_bank_list();
        string s;
        bit first;
        s = "";
        first = 1'b1;
        foreach (bank_act[b]) if (bank_act[b]) begin
            s = $sformatf("%s%s%0d(row=%h)", s, first ? "" : ", ", b, bank_row[b]);
            first = 1'b0;
        end
        return s;
    endfunction

    function automatic bit mr_is_ro(input int ma);
        return ma inside {0, [4:8], 27, 29, 35, 36, 38, 39, [43:45], [47:54]};
    endfunction
    function automatic bit mr_is_wo(input int ma);
        return ma inside {2, 9, 10, 13, 18, 20, 22, 23, 25, 28, [30:34], 41, 42, 46, 56, 60};
    endfunction
    function automatic bit mr_is_fsp(input int ma);
        return ma inside {1, 2, 3, 10, 11, 12, 14, 15, 17, 18, 19, 20, 22, 24, 30, 41, 58, 69};
    endfunction
    function automatic int fsp_wr();  return int'(mr[0][16][1:0]); endfunction
    function automatic int fsp_op();  return int'(mr[0][16][3:2]); endfunction

    function automatic logic [7:0] mr_read(input int ma);
        return mr[mr_is_fsp(ma) ? fsp_wr() : 0][ma];
    endfunction

    task automatic mr_reset();
        for (int f = 0; f < 3; f++)
            for (int a = 0; a < 128; a++) mr[f][a] = 8'h00;
        mr[0][4] = {1'b1, 1'b0, 1'b0, REFRESH_RATE};      // TUF=1 (default), RM
        mr[0][5] = VENDOR_ID;
        mr[0][6] = 8'h00;
        mr[0][7] = 8'h00;
        mr[0][8] = {2'b00, DENSITY_CODE, 2'b00};          // x16, density, LPDDR5
    endtask

    //========================================================================
    // Command handlers
    //========================================================================
    task automatic do_act(input logic [ADDR_WIDTH-1:0] a);
        int b = bank_of(a);
        if (bank_act[b]) begin
            perr($sformatf("ACT to already active bank %0d (open row %h, new row %h)", b, bank_row[b], row_of(a)));
            return;
        end
        tcheck(t_pre[b], tRPPB, "tRPpb", $sformatf("PRE->ACT bank %0d", b));
        tcheck(t_prea,   tRPAB, "tRPab", "PREA->ACT");
        tcheck(t_act[b], tRC,   "tRC",   $sformatf("ACT->ACT bank %0d", b));
        tcheck(t_act_any, tRRD, "tRRD",  "ACT->ACT different bank");
        tcheck(t_ref,    tRFCAB, "tRFCab", "REF->ACT");
        while (act_hist.size() > 0 && (cyc - act_hist[0]) >= tFAW) void'(act_hist.pop_front());
        if (act_hist.size() >= 4 && !tchk_off) tcheck(act_hist[act_hist.size()-4], tFAW, "tFAW", "5th ACT in window");
        act_hist.push_back(cyc);
        bank_act[b] = 1'b1;
        bank_row[b] = row_of(a);
        t_act[b]    = cyc;
        t_act_any   = cyc;
        pinfo($sformatf("ACT bank %0d row %h", b, row_of(a)));
    endtask

    task automatic do_pre(input logic [ADDR_WIDTH-1:0] a);
        int b = bank_of(a);
        tcheck(t_pre_any, tPPD, "tPPD", "PRE->PRE");
        t_pre_any = cyc;
        if (!bank_act[b]) begin
            pinfo($sformatf("PRE to idle bank %0d (NOP)", b));
            return;
        end
        tcheck(t_act[b], tRAS, "tRAS(min)", $sformatf("ACT->PRE bank %0d", b));
        tcheck(t_wr[b], WRITE_LATENCY + BURST_CYC + 1 + tWR, "tWR", $sformatf("WR->PRE bank %0d", b));
        tcheck(t_rd[b], BURST_CYC + tRBTP, "tRBTP", $sformatf("RD->PRE bank %0d", b));
        bank_act[b] = 1'b0;
        t_pre[b]    = cyc;
        pinfo($sformatf("PRE bank %0d", b));
    endtask

    task automatic do_prea();
        tcheck(t_pre_any, tPPD, "tPPD", "PRE->PREA");
        t_pre_any = cyc;
        foreach (bank_act[b]) if (bank_act[b]) begin
            tcheck(t_act[b], tRAS, "tRAS(min)", $sformatf("ACT->PREA bank %0d", b));
            tcheck(t_wr[b], WRITE_LATENCY + BURST_CYC + 1 + tWR, "tWR", $sformatf("WR->PREA bank %0d", b));
            tcheck(t_rd[b], BURST_CYC + tRBTP, "tRBTP", $sformatf("RD->PREA bank %0d", b));
            bank_act[b] = 1'b0;
        end
        t_prea = cyc;
        pinfo("PREA (all banks)");
    endtask

    task automatic do_col(input bit is_wr, input logic [ADDR_WIDTH-1:0] a);
        int b = bank_of(a);
        string nm = is_wr ? "WR" : "RD";
        if (!bank_act[b]) begin
            perr($sformatf("%s to closed bank %0d addr %h", nm, b, a));
            return;
        end
        if (bank_row[b] != row_of(a))
            perr($sformatf("%s addr %h row %h does not match open row %h in bank %0d",
                           nm, a, row_of(a), bank_row[b], b));
        tcheck(t_act[b], tRCD, "tRCD", $sformatf("ACT->%s bank %0d", nm, b));
        tcheck(t_ref, tRFCAB, "tRFCab", $sformatf("REF->%s", nm));
        if (!is_wr) begin
            tcheck(t_wr_any, WRITE_LATENCY + BURST_CYC + ((a[BG_BIT] == wr_any_bg) ? tWTR_L : tWTR_S),
                   "tWTR", "WR->RD");
            t_rd[b] = cyc;
            rdq.push_back('{due: cyc + READ_LATENCY, a: a, is_mrr: 1'b0, mrv: 8'h00});
            pinfo($sformatf("RD bank %0d addr %h (data in %0d cycles)", b, a, READ_LATENCY));
        end else begin
            t_wr[b]   = cyc;
            t_wr_any  = cyc;
            wr_any_bg = a[BG_BIT];
            wcq.push_back('{a: a, t: cyc});
            pinfo($sformatf("WR bank %0d addr %h", b, a));
        end
    endtask

    task automatic do_ref();
        longint owed;
        if (any_bank_open()) begin
            if (!allow_refab_with_open_banks) begin
                perr($sformatf("REFab with active bank(s) %s (all banks must be precharged)",
                               open_bank_list()));
                return;
            end
            if (!ref_open_warning_reported) begin
                pwarn($sformatf("REFab with active bank(s) %s accepted by explicit test waiver; RTL PREA is not implemented",
                                open_bank_list()));
                ref_open_warning_reported = 1'b1;
            end
        end else begin
            ref_open_warning_reported = 1'b0;
        end
        tcheck(t_ref, tRFCAB, "tRFCab", "REF->REF");
        tcheck(t_prea, tRPAB, "tRPab", "PREA->REF");
        tcheck(t_pre_any, tRPPB, "tRPpb", "PRE->REF");
        if (REFRESH_CHECK && tREFI > 0) begin
            owed = ((cyc - ref_epoch) / tREFI) - refs_done;
            if (owed < -8) tviol("tREFI pull-in", $sformatf("%0d refreshes pulled in (max 8)", -owed));
        end
        refs_done++;
        postpone_reported = 0;
        ref_since_srx = 1;
        t_ref = cyc;
        pinfo($sformatf("REFab #%0d", refs_done));
    endtask

    task automatic do_mrw(input logic [ADDR_WIDTH-1:0] a);
        int ma = int'(a[6:0]);
        logic [7:0] op = a[15:8];
        int f;
        tcheck(t_mrw, tMRW, "tMRW", "MRW->MRW");
        if (mr_is_ro(ma)) begin
            perr($sformatf("MRW to read-only MR%0d (OP=%h) ignored", ma, op));
            return;
        end
        if (lp == LP_SR && (ma == 23 || ma == 25)) begin
            perr($sformatf("MRW to MR%0d is prohibited during Self Refresh (ignored)", ma));
            return;
        end
        if (ma == 16 && (op[1:0] == 2'b11 || op[3:2] == 2'b11)) begin
            perr($sformatf("MRW MR16 OP=%h selects reserved FSP 3 (ignored)", op));
            return;
        end
        f = mr_is_fsp(ma) ? fsp_wr() : 0;
        mr[f][ma] = op;
        t_mrw = cyc;
        pinfo($sformatf("MRW MR%0d = %h%s", ma, op, mr_is_fsp(ma) ? $sformatf(" (FSP-WR %0d)", f) : ""));
        if (ma == 16)
            pinfo($sformatf("FSP-WR=%0d FSP-OP=%0d", op[1:0], op[3:2]));
    endtask

    task automatic do_mrr(input logic [ADDR_WIDTH-1:0] a);
        int ma = int'(a[6:0]);
        logic [7:0] v;
        tcheck(t_mrw, tMRD, "tMRD", "MRW->MRR");
        tcheck(t_mrr, tMRR, "tMRR", "MRR->MRR");
        if (mr_is_wo(ma)) pwarn($sformatf("MRR of write-only MR%0d (value not defined by spec)", ma));
        v = mr_read(ma);
        if (ma == 4) mr[0][4][7] = 1'b0;           // TUF cleared by MR4 read
        rdq.push_back('{due: cyc + READ_LATENCY, a: a, is_mrr: 1'b1, mrv: v});
        t_mrr = cyc;
        pinfo($sformatf("MRR MR%0d -> %h", ma, v));
    endtask

    task automatic do_sre(input bit from_pin);
        if (any_bank_open()) perr("SRE with open banks (device must be idle)");
        if (rdq.size() > 0)  perr("SRE before READ/MRR data burst completed");
        if (srx_seen && !ref_since_srx)
            tviol("SRX->REF->SRE", "at least one REF required between SRX and SRE");
        tcheck(t_ref, tRFCAB, "tRFCab", "REF->SRE");
        lp = LP_SR;
        t_sre = cyc;
        pinfo($sformatf("SELF-REFRESH ENTRY%s", from_pin ? " (sideband)" : ""));
    endtask

    task automatic do_srx(input bit from_pin);
        tcheck(t_sre, tSR, "tSR", "SRE->SRX");
        if (dsm_exit_pending) tcheck(t_dsm_out, tXSR_DSM, "tXSR_DSM", "DSM exit->SRX");
        dsm_exit_pending = 0;
        pasr_apply();
        lp = LP_NORMAL;
        t_srx = cyc;
        srx_seen = 1;
        ref_since_srx = 0;
        ref_epoch = cyc;                            // device refreshed itself during SR
        refs_done = 0;
        postpone_reported = 0;
        pinfo($sformatf("SELF-REFRESH EXIT%s", from_pin ? " (sideband)" : ""));
    endtask

    task automatic do_pde(input bit from_pin);
        if (lp == LP_SR) begin
            tcheck(t_sre, tESPD, "tESPD", "SRE->PDE");
            lp = LP_SRPD;
        end else begin
            tcheck(t_valid_cmd, tCMDPD, "tCMDPD", "valid command->PDE");
            tcheck(t_mrw, tMRWPD, "tMRWPD", "MRW->PDE");
            lp = LP_PD;
        end
        t_pde = cyc;
        pinfo($sformatf("POWER-DOWN ENTRY (%s)%s",
                        lp == LP_SRPD ? "self refresh" : (any_bank_open() ? "active" : "idle"),
                        from_pin ? " (sideband)" : ""));
    endtask

    task automatic do_pdx(input bit from_pin);
        if (lp == LP_DS) begin
            tcheck(t_dsm_in, tPDN, "tPDN", "DSM entry->exit");
            if (!tchk_off && (cyc - t_dsm_in) < cyc_of(64'd4_000_000_000, 1))
                pinfo("DSM shorter than tPDN_DSM (4 ms): IDD6DS not guaranteed (informative)");
            lp = LP_SRPD;                           // DSM exits to SR power-down
            dsm_exit_pending = 1;
            t_dsm_out = cyc;
        end else begin
            tcheck(t_pde, tCSPD, "tCSPD", "PDE->PDX");
            lp = (lp == LP_SRPD) ? LP_SR : LP_NORMAL;
        end
        t_pdx = cyc;
        pinfo($sformatf("POWER-DOWN EXIT -> %s%s", lp == LP_NORMAL ? "normal" : "self refresh",
                        from_pin ? " (sideband)" : ""));
    endtask

    task automatic do_dsm_entry();
        if (!(lp inside {LP_NORMAL, LP_SR, LP_SRPD})) begin
            perr($sformatf("Deep Sleep entry not allowed from LP state %0d", lp));
            return;
        end
        if (lp == LP_NORMAL && any_bank_open()) perr("Deep Sleep entry with open banks");
        if (rdq.size() > 0) perr("Deep Sleep entry before READ data burst completed");
        if (lp == LP_NORMAL) t_sre = cyc;           // DSM is a self refresh mode
        lp = LP_DS;
        t_dsm_in = cyc;
        pinfo("DEEP SLEEP ENTRY (data retained)");
    endtask

    // PASR: segments masked in MR23 are not refreshed during SR -> data lost
    task automatic pasr_apply();
        logic [7:0] m = mr[0][23];
        bit [ADDR_WIDTH-1:0] w;
        int n = 0;
        if (m == 8'h00) return;
        if (mem.first(w)) do begin
            if (m[pasr_seg_of_word(w)]) begin lost[w] = 1; n++; end
        end while (mem.next(w));
        foreach (lost[k]) mem.delete(k);
        if (n > 0) pinfo($sformatf("PASR: %0d words in masked segments (MR23=%h) lost during self refresh", n, m));
    endtask

    // Commit one write: apply byte mask, check MR13 DMD
    task automatic commit_write(input wcmd_t c, input wdat_t d);
        bit [ADDR_WIDTH-1:0] w = word_of(c.a);
        logic [DATA_WIDTH-1:0] cur;
        if (mr[0][13][5] && (|d.m))
            perr($sformatf("masked write to %h while data mask is disabled (MR13 OP[5] DMD=1)", c.a));
        cur = mem.exists(w) ? mem[w] : '0;
        for (int i = 0; i < NBYTES; i++)
            if (!d.m[i]) cur[i*8 +: 8] = d.d[i*8 +: 8];
        mem[w] = cur;
        if (lost.exists(w)) lost.delete(w);
        pinfo($sformatf("WRITE COMMIT addr %h data %h mask %h", c.a, d.d, d.m));
    endtask

    //========================================================================
    // Command acceptance by state
    //========================================================================
    function automatic bit legal_in_lp(input logic [5:0] c);
        case (lp)
            LP_NORMAL: return 1;
            LP_PD:     return (c == CA_PDX);
            LP_SR:     return (c inside {CA_PDE, CA_MRR, CA_MRW, CA_SRX});
            LP_SRPD:   return (c == CA_PDX);
            LP_DS:     return (c == CA_PDX);
            default:   return 0;
        endcase
    endfunction

    task automatic process_cmd(input logic [5:0] c, input logic [ADDR_WIDTH-1:0] a);
        n_cmd[c[3:0]]++;
        if (!init_done) begin
            perr($sformatf("%s addr %h before initialization complete", cmd_name(c), a));
            return;
        end
        if (^a === 1'bx && c inside {CA_RD, CA_WR, CA_ACT, CA_PRE, CA_MRW, CA_MRR})
            perr($sformatf("%s with X/Z on address bus (%h)", cmd_name(c), a));
        if (!legal_in_lp(c)) begin
            perr($sformatf("%s addr %h not allowed in LP state %0d", cmd_name(c), a, lp));
            return;
        end
        // Exit-latency checks for the first commands after PDX / SRX
        if (!(c inside {CA_NOP, CA_PDE, CA_SRE})) begin
            tcheck(t_pdx, tXP, "tXP", $sformatf("PDX->%s", cmd_name(c)));
            if (!(c inside {CA_MRR, CA_MRW}))
                tcheck(t_srx, tXSR, "tXSR", $sformatf("SRX->%s", cmd_name(c)));
        end
        if (c inside {CA_ACT, CA_RD, CA_WR, CA_PRE, CA_PREA, CA_REF, CA_SRE, CA_PDE})
            tcheck(t_mrw, tMRD, "tMRD", $sformatf("MRW->%s", cmd_name(c)));
        case (c)
            CA_NOP:  ;
            CA_ACT:  do_act(a);
            CA_RD:   do_col(1'b0, a);
            CA_WR:   do_col(1'b1, a);
            CA_PRE:  do_pre(a);
            CA_PREA: do_prea();
            CA_REF:  do_ref();
            CA_MRW:  do_mrw(a);
            CA_MRR:  do_mrr(a);
            CA_SRE:  do_sre(1'b0);
            CA_SRX:  do_srx(1'b0);
            CA_PDE:  do_pde(1'b0);
            CA_PDX:  do_pdx(1'b0);
            default: perr($sformatf("unknown command %02h addr %h", c, a));
        endcase
        if (!(c inside {CA_NOP, CA_SRE, CA_PDE, CA_PDX})) t_valid_cmd = cyc;
    endtask

    //========================================================================
    // Main process (single process owns all model state)
    //========================================================================
    assign cmd_ready     = 1'b1;
    assign dram_lp_state = lp;

    always @(posedge sys_clk or negedge sys_rst_n) begin
        if (!sys_rst_n) begin
            cyc            = 0;
            init_cnt       = 0;
            init_done     <= 1'b0;
            training_done <= 1'b0;
            rddata        <= '0;
            rddata_valid  <= 1'b0;
            error         <= 1'b0;
            lp             = LP_NORMAL;
            foreach (bank_act[b]) begin
                bank_act[b] = 1'b0; bank_row[b] = '0;
                t_act[b] = -1; t_pre[b] = -1; t_rd[b] = -1; t_wr[b] = -1;
            end
            t_act_any = -1; t_pre_any = -1; t_prea = -1; t_ref = -1;
            t_wr_any = -1; wr_any_bg = 0;
            t_mrw = -1; t_mrr = -1; t_valid_cmd = -1;
            t_pde = -1; t_pdx = -1; t_sre = -1; t_srx = -1; t_dsm_in = -1; t_dsm_out = -1;
            dsm_exit_pending = 0; ref_since_srx = 0; srx_seen = 0;
            ref_epoch = 0; refs_done = 0; postpone_reported = 0;
            ref_open_warning_reported = 0;
            act_hist.delete(); wdq.delete(); wcq.delete(); rdq.delete();
            mr_reset();
        end else begin
            cyc++;
            rddata_valid <= 1'b0;

            //---------------- initialization / training status -------------
            if (!init_done) begin
                init_cnt++;
                if (init_cnt >= INIT_CYCLES) begin
                    init_done <= 1'b1;
                    ref_epoch  = cyc;
                    uvm_report_info("DRAM_BFM", "INITIALIZATION COMPLETE", UVM_LOW);
                end
            end else if (!training_done) begin
                training_done <= 1'b1;
                uvm_report_info("DRAM_BFM", "TRAINING COMPLETE", UVM_LOW);
            end

            //---------------- low-power sideband ---------------------------
            if ((dram_pd_entry + dram_sr_entry + dram_ds_entry) > 1) perr("multiple LP entry requests in one cycle");
            if ((dram_pd_exit  + dram_sr_exit  + dram_ds_exit ) > 1) perr("multiple LP exit requests in one cycle");
            if (dram_pd_entry === 1'b1) begin
                if (lp inside {LP_NORMAL, LP_SR}) do_pde(1'b1); else pwarn($sformatf("PD entry in LP state %0d", lp));
            end else if (dram_pd_exit === 1'b1) begin
                if (lp inside {LP_PD, LP_SRPD, LP_DS}) do_pdx(1'b1); else pwarn("PD exit while not in power-down");
            end else if (dram_sr_entry === 1'b1) begin
                if (lp == LP_NORMAL) do_sre(1'b1); else pwarn($sformatf("SR entry in LP state %0d", lp));
            end else if (dram_sr_exit === 1'b1) begin
                if (lp == LP_SR) do_srx(1'b1); else pwarn($sformatf("SR exit in LP state %0d", lp));
            end else if (dram_ds_entry === 1'b1) begin
                do_dsm_entry();
            end else if (dram_ds_exit === 1'b1) begin
                if (lp == LP_DS) begin do_pdx(1'b1); do_pdx(1'b1); end   // DSM -> SR-PD -> SR
                else pwarn("DSM exit while not in deep sleep");
            end

            //---------------- commands ------------------------------------
            if (cmd_valid === 1'b1 && cmd_ready) begin
                if (^cmd === 1'bx) perr($sformatf("X/Z on command bus (%b)", cmd));
                else               process_cmd(cmd, dram_addr);
            end else if (cmd_valid === 1'bx) begin
                perr("cmd_valid is X/Z");
            end

            //---------------- write data ----------------------------------
            if (wrdata_valid === 1'b1) begin
                if (lp != LP_NORMAL)
                    perr($sformatf("write data received in LP state %0d", lp));
                else if (STRICT_WR_ORDER && wcq.size() == 0)
                    perr("write data received without a pending WR command");
                else begin
                    wdq.push_back('{d: wrdata, m: wrdata_mask, t: cyc});
                    if (wdq.size() > WDQ_MAX)
                        perr($sformatf("%0d write-data words without matching WR command", wdq.size()));
                end
            end
            while (wdq.size() > 0 && wcq.size() > 0)
                commit_write(wcq.pop_front(), wdq.pop_front());

            //---------------- read return ---------------------------------
            if (rdq.size() > 0 && rdq[0].due <= cyc) begin
                r_ret = rdq.pop_front();
                w_ret = word_of(r_ret.a);
                if (r_ret.is_mrr) begin
                    rddata <= {NBYTES{r_ret.mrv}};
                end else if (lost.exists(w_ret)) begin
                    rddata <= 'x;
                    pwarn($sformatf("read of %h: data lost (PASR-masked segment during self refresh)", r_ret.a));
                end else if (mem.exists(w_ret)) begin
                    rddata <= mem[w_ret];
                end else begin
                    rddata <= '0;
                    pinfo($sformatf("read of unwritten address %h returns 0", r_ret.a));
                end
                rddata_valid <= 1'b1;
            end

            //---------------- background checks ---------------------------
            if (!tchk_off) begin
                foreach (bank_act[b])
                    if (bank_act[b] && (cyc - t_act[b]) == tRASMAX)
                        tviol("tRAS(max)", $sformatf("bank %0d open longer than 9 x tREFI", b));
                if (REFRESH_CHECK && init_done && lp == LP_NORMAL && tREFI > 0) begin
                    owed_bg = ((cyc - ref_epoch) / tREFI) - refs_done;
                    if (owed_bg > 8 && postpone_reported == 0) begin   // once per refresh gap
                        postpone_reported = 1;
                        tviol("tREFI postpone",
                              $sformatf("more than 8 refreshes postponed (tREFI=%0d cycles); reported once until next REF", tREFI));
                    end
                end
            end

            if (n_err > 0) error <= 1'b1;
        end
    end

    //========================================================================
    // End-of-test summary
    //========================================================================
    final begin
        string s;
        if (wdq.size() > 0)
            pwarn($sformatf("%0d write-data word(s) were never matched to a WR command and were not committed", wdq.size()));
        s = $sformatf("BFM_SUMMARY DRAM: ACT=%0d RD=%0d WR=%0d PRE=%0d PREA=%0d REF=%0d MRW=%0d MRR=%0d SRE=%0d SRX=%0d PDE=%0d PDX=%0d | words=%0d | errors=%0d timing_violations=%0d warnings=%0d",
            n_cmd[3], n_cmd[1], n_cmd[2], n_cmd[4], n_cmd[5], n_cmd[6], n_cmd[7], n_cmd[8],
            n_cmd[9], n_cmd[10], n_cmd[11], n_cmd[12], mem.num(), n_err, n_tviol, n_warn);
        $display("%s", s);
        if (wcq.size() > 0) $display("BFM_SUMMARY DRAM: %0d WR command(s) never received write data", wcq.size());
        if (wdq.size() > 0) $display("BFM_SUMMARY DRAM: %0d write-data word(s) never matched a WR command", wdq.size());
        if (rdq.size() > 0) $display("BFM_SUMMARY DRAM: %0d read(s) still in flight", rdq.size());
    end

endmodule
