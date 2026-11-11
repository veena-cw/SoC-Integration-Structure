`timescale 1ns/1ps
`include "uvm_macros.svh"

//============================================================================
// LPDDR5C PHY BFM (verification only)
//
//   Controller --DFI--> PHY BFM --cmd/addr/wrdata--> lpddr5_dram_model
//   Controller <--DFI-- PHY BFM <------rddata------- lpddr5_dram_model
//
// DFI behaviour matches lpddr5c_top / lpddr5c_cmd_scheduler / lpddr5c_data_path:
//   * Command valid when dfi_cs_n == 0 (scheduler drives cs_n=1 for NOP).
//     dfi_ca carries the scheduler opcode, dfi_addr the system address.
//   * Write data: DATA_WIDTH/DFI_DATA_WIDTH consecutive dfi_wrdata_en beats
//     (low half first) form one DRAM word; dfi_wrdata_mask = 1 masks a byte.
//     The RTL streams write data ahead of the WR command; the DRAM model
//     pairs data with commands in order.
//   * Read data: each DRAM word is returned as DATA_WIDTH/DFI_DATA_WIDTH
//     consecutive dfi_rddata_valid beats, low half first.
//
// Features (DFI 5.0 subset used by the RTL)
//   * dfi_init_complete after PHY_INIT_CYCLES; commands before it -> error.
//   * PHY-master handshake: dfi_phymstr_req held until dfi_phymstr_ack, then
//     for PHYMSTR_TRAIN_CYCLES (PHY owns the DRAM bus: controller commands in
//     this window are errors). Optional periodic requests (PHYMSTR_PERIOD)
//     and ack timeout (PHYMSTR_ACK_TIMEOUT).
//   * Read/write leveling responders: dfi_rdlvl_req follows dfi_rdlvl_en,
//     dfi_wrlvl_req answers dfi_wrlvl_en after WRLVL_RESP_DELAY.
//   * Command FIFO toward the DRAM (no command lost on dram_cmd_ready = 0).
//   * Checks: X/Z on cs_n/ca/addr/write data, dfi_rw vs RD/WR, incomplete
//     write bursts, FIFO overflow, ack without request.
//   * Optional extra PHY read latency (T_PHY_RDLAT) and end-of-test summary.
//============================================================================

module lpddr5_phy_bfm
    import uvm_pkg::*;
#(
    parameter int DATA_WIDTH           = 128,  // DRAM word (one RD/WR command)
    parameter int ADDR_WIDTH           = 32,
    parameter int CA_WIDTH             = 6,
    parameter int DFI_DATA_WIDTH       = 64,   // lpddr5c_top DFI_DATA_WIDTH * NUM_CHANNELS
    parameter int PHY_INIT_CYCLES      = 20,
    parameter int T_PHY_RDLAT          = 0,    // extra DRAM->DFI read delay (cycles)
    parameter int PHYMSTR_START_DELAY  = 1,
    parameter int PHYMSTR_TRAIN_CYCLES = 16,
    parameter int PHYMSTR_PERIOD       = 0,    // 0 = one request after init
    parameter int PHYMSTR_ACK_TIMEOUT  = 0,    // 0 = wait for ack forever
    parameter int RDLVL_RESP_DELAY     = 2,
    parameter int WRLVL_RESP_DELAY     = 4,
    parameter int CMD_FIFO_MAX         = 16
)(
    // Clock / reset
    input  logic                       dfi_clk,
    input  logic                       dfi_rst_n,

    // Controller -> PHY : command
    input  logic                       dfi_cs_n,
    input  logic                       dfi_cke,
    input  logic [CA_WIDTH-1:0]        dfi_ca,
    input  logic [ADDR_WIDTH-1:0]      dfi_addr,
    input  logic                       dfi_rw = 1'bz,      // optional RD/WR direction check

    // Controller -> PHY : write data
    input  logic [DFI_DATA_WIDTH-1:0]  dfi_wrdata,
    input  logic [DFI_DATA_WIDTH/8-1:0] dfi_wrdata_mask,
    input  logic                       dfi_wrdata_en,

    // PHY -> Controller : read data
    output logic [DFI_DATA_WIDTH-1:0]  dfi_rddata,
    output logic                       dfi_rddata_valid,

    // PHY status / PHY-master / training
    output logic                       dfi_init_complete,
    output logic                       dfi_phymstr_req,
    input  logic                       dfi_phymstr_ack,
    input  logic                       dfi_rdlvl_en = 1'b0,
    output logic                       dfi_rdlvl_req,
    input  logic                       dfi_wrlvl_en = 1'b0,
    output logic                       dfi_wrlvl_req,

    // PHY -> DRAM
    output logic                       dram_cmd_valid,
    input  logic                       dram_cmd_ready,
    output logic [CA_WIDTH-1:0]        dram_cmd,
    output logic [ADDR_WIDTH-1:0]      dram_addr,
    output logic                       dram_wrdata_valid,
    output logic [DATA_WIDTH-1:0]      dram_wrdata,
    output logic [DATA_WIDTH/8-1:0]    dram_wrdata_mask,

    // DRAM -> PHY
    input  logic [DATA_WIDTH-1:0]      dram_rddata,
    input  logic                       dram_rddata_valid
);

    // Opcodes (must match lpddr5c_cmd_scheduler)
    localparam logic [CA_WIDTH-1:0] CA_NOP = 6'h00;
    localparam logic [CA_WIDTH-1:0] CA_RD  = 6'h01;
    localparam logic [CA_WIDTH-1:0] CA_WR  = 6'h02;

    localparam int BEATS   = DATA_WIDTH / DFI_DATA_WIDTH;
    localparam int DFI_B   = DFI_DATA_WIDTH / 8;
    localparam int BEAT_W  = (BEATS > 1) ? $clog2(BEATS) : 1;

    initial begin
        if (BEATS * DFI_DATA_WIDTH != DATA_WIDTH)
            $fatal(1, "lpddr5_phy_bfm: DATA_WIDTH (%0d) must be a multiple of DFI_DATA_WIDTH (%0d)",
                   DATA_WIDTH, DFI_DATA_WIDTH);
    end

    //========================================================================
    // Reporting
    //========================================================================
    int n_err, n_cmd, n_wr_words, n_rd_words, n_cke_low_cmd;

    function automatic void perr(input string m);
        n_err++;
        uvm_report_error("PHY_BFM", m, UVM_NONE);
    endfunction
    function automatic void pinfo(input string m, input uvm_verbosity v = UVM_MEDIUM);
        uvm_report_info("PHY_BFM", m, v);
    endfunction

    //========================================================================
    // State
    //========================================================================
    typedef enum logic [2:0] { PM_WAIT, PM_REQ, PM_TRAIN, PM_DONE } pm_state_t;

    longint    cyc;
    int        init_cnt;
    pm_state_t pm_state;
    int        pm_cnt;
    bit        pm_window;                         // PHY owns the DRAM bus

    typedef struct { logic [CA_WIDTH-1:0] c; logic [ADDR_WIDTH-1:0] a; } cmd_t;
    cmd_t      cmdq [$];

    logic [DATA_WIDTH-1:0]   wr_acc;
    logic [DATA_WIDTH/8-1:0] wr_msk;
    int                      wr_beat;

    typedef struct { logic [DATA_WIDTH-1:0] d; longint due; } rdw_t;
    rdw_t                    rdq [$];
    logic [DATA_WIDTH-1:0]   rd_cur;
    int                      rd_beat;              // beats left in current word

    int        rdlvl_dly, wrlvl_cnt;
    cmd_t      c_out;                             // main-process temporaries
    rdw_t      r_out;

    //========================================================================
    // Single process: command path, write assembly, read serialisation,
    // init, PHY-master and leveling responders.
    //========================================================================
    always @(posedge dfi_clk or negedge dfi_rst_n) begin
        if (!dfi_rst_n) begin
            cyc       = 0;
            init_cnt  = 0;
            pm_state  = PM_WAIT;
            pm_cnt    = 0;
            pm_window = 0;
            cmdq.delete();
            rdq.delete();
            wr_beat   = 0;
            wr_acc    = '0;
            wr_msk    = '0;
            rd_beat   = 0;
            rdlvl_dly = 0;
            wrlvl_cnt = 0;

            dfi_init_complete <= 1'b0;
            dfi_phymstr_req   <= 1'b0;
            dfi_rdlvl_req     <= 1'b0;
            dfi_wrlvl_req     <= 1'b0;
            dfi_rddata        <= '0;
            dfi_rddata_valid  <= 1'b0;
            dram_cmd_valid    <= 1'b0;
            dram_cmd          <= CA_NOP;
            dram_addr         <= '0;
            dram_wrdata_valid <= 1'b0;
            dram_wrdata       <= '0;
            dram_wrdata_mask  <= '0;
        end else begin
            cyc++;
            dram_cmd_valid    <= 1'b0;
            dram_wrdata_valid <= 1'b0;
            dfi_rddata_valid  <= 1'b0;

            //---------------- PHY initialization --------------------------
            if (!dfi_init_complete) begin
                init_cnt++;
                if (init_cnt > PHY_INIT_CYCLES) begin
                    dfi_init_complete <= 1'b1;
                    pinfo($sformatf("Initialization complete (dfi_init_complete=1) after %0d cycles", init_cnt), UVM_LOW);
                end
            end

            //---------------- DFI command capture -------------------------
            if (dfi_cs_n === 1'b0) begin
                if (^{dfi_ca, dfi_addr} === 1'bx)
                    perr($sformatf("X/Z on dfi_ca/dfi_addr with dfi_cs_n=0 (ca=%h addr=%h)", dfi_ca, dfi_addr));
                else if (!dfi_init_complete)
                    perr($sformatf("command CA=%02h before dfi_init_complete", dfi_ca));
                else if (pm_window)
                    perr($sformatf("controller command CA=%02h ADDR=%h during PHY-master window", dfi_ca, dfi_addr));
                else begin
                    if (dfi_ca == CA_RD && dfi_rw === 1'b1) perr($sformatf("RD with dfi_rw=1 (addr %h)", dfi_addr));
                    if (dfi_ca == CA_WR && dfi_rw === 1'b0) perr($sformatf("WR with dfi_rw=0 (addr %h)", dfi_addr));
                    if (dfi_cke !== 1'b1) begin
                        if (n_cke_low_cmd == 0)
                            pinfo($sformatf("command CA=%02h with dfi_cke=%b (LPDDR5 has no CKE pin; ignored)", dfi_ca, dfi_cke), UVM_LOW);
                        n_cke_low_cmd++;
                    end
                    cmdq.push_back('{c: dfi_ca, a: dfi_addr});
                    n_cmd++;
                    pinfo($sformatf("CMD CA=%02h ADDR=%08h", dfi_ca, dfi_addr), UVM_HIGH);
                    if (cmdq.size() > CMD_FIFO_MAX)
                        perr($sformatf("command FIFO overflow (%0d entries, DRAM not ready)", cmdq.size()));
                end
            end else if (dfi_cs_n !== 1'b1 && dfi_init_complete) begin
                perr($sformatf("dfi_cs_n is X/Z (%b)", dfi_cs_n));
            end

            if (cmdq.size() > 0 && dram_cmd_ready === 1'b1) begin
                c_out = cmdq.pop_front();
                dram_cmd_valid <= 1'b1;
                dram_cmd       <= c_out.c;
                dram_addr      <= c_out.a;
            end

            //---------------- write data assembly --------------------------
            if (dfi_wrdata_en === 1'b1) begin
                if (^{dfi_wrdata, dfi_wrdata_mask} === 1'bx)
                    perr($sformatf("X/Z on dfi_wrdata/mask in beat %0d", wr_beat));
                wr_acc[wr_beat*DFI_DATA_WIDTH +: DFI_DATA_WIDTH] = dfi_wrdata;
                wr_msk[wr_beat*DFI_B          +: DFI_B]          = dfi_wrdata_mask;
                if (wr_beat == BEATS-1) begin
                    dram_wrdata_valid <= 1'b1;
                    dram_wrdata       <= wr_acc;
                    dram_wrdata_mask  <= wr_msk;
                    n_wr_words++;
                    pinfo($sformatf("WRDATA word %h mask %h", wr_acc, wr_msk), UVM_HIGH);
                    wr_beat = 0;
                end else begin
                    wr_beat++;
                end
            end else if (wr_beat != 0) begin
                perr($sformatf("incomplete write burst: %0d of %0d beats, remaining bytes masked", wr_beat, BEATS));
                for (int b = wr_beat * DFI_B; b < DATA_WIDTH/8; b++) wr_msk[b] = 1'b1;
                dram_wrdata_valid <= 1'b1;
                dram_wrdata       <= wr_acc;
                dram_wrdata_mask  <= wr_msk;
                wr_beat = 0;
            end

            //---------------- read data: DRAM word -> DFI beats -----------
            if (dram_rddata_valid === 1'b1) begin
                rdq.push_back('{d: dram_rddata, due: cyc + T_PHY_RDLAT});
                n_rd_words++;
            end
            if (rd_beat == 0 && rdq.size() > 0 && rdq[0].due <= cyc) begin
                r_out   = rdq.pop_front();
                rd_cur  = r_out.d;
                rd_beat = BEATS;
            end
            if (rd_beat > 0) begin
                dfi_rddata       <= rd_cur[(BEATS-rd_beat)*DFI_DATA_WIDTH +: DFI_DATA_WIDTH];
                dfi_rddata_valid <= 1'b1;
                rd_beat--;
            end

            //---------------- PHY-master handshake ------------------------
            if (dfi_phymstr_ack === 1'b1 && pm_state != PM_REQ && pm_state != PM_TRAIN)
                perr("dfi_phymstr_ack without dfi_phymstr_req");
            case (pm_state)
                PM_WAIT: if (dfi_init_complete) begin
                    if (pm_cnt >= PHYMSTR_START_DELAY) begin
                        dfi_phymstr_req <= 1'b1;
                        pm_state = PM_REQ;
                        pm_cnt   = 0;
                        pinfo("PHY-master request (dfi_phymstr_req=1)", UVM_LOW);
                    end else pm_cnt++;
                end
                PM_REQ: begin
                    pm_cnt++;
                    if (dfi_phymstr_ack === 1'b1) begin
                        pinfo($sformatf("PHY-master ack after %0d cycles; PHY owns DRAM bus for %0d cycles",
                                        pm_cnt, PHYMSTR_TRAIN_CYCLES), UVM_LOW);
                        pm_state  = PM_TRAIN;
                        pm_window = (PHYMSTR_TRAIN_CYCLES > 0);
                        pm_cnt    = 0;
                    end else if (PHYMSTR_ACK_TIMEOUT > 0 && pm_cnt >= PHYMSTR_ACK_TIMEOUT) begin
                        uvm_report_warning("PHY_BFM", $sformatf("no dfi_phymstr_ack within %0d cycles; request withdrawn",
                                           PHYMSTR_ACK_TIMEOUT), UVM_NONE);
                        dfi_phymstr_req <= 1'b0;
                        pm_state = PM_DONE;
                        pm_cnt   = 0;
                    end
                end
                PM_TRAIN: begin
                    if (pm_cnt >= PHYMSTR_TRAIN_CYCLES) begin
                        dfi_phymstr_req <= 1'b0;
                        pm_window = 0;
                        pm_state  = PM_DONE;
                        pm_cnt    = 0;
                        pinfo("PHY-master training done (dfi_phymstr_req=0)", UVM_LOW);
                    end else pm_cnt++;
                end
                PM_DONE: if (PHYMSTR_PERIOD > 0) begin
                    if (pm_cnt >= PHYMSTR_PERIOD) begin
                        dfi_phymstr_req <= 1'b1;
                        pm_state = PM_REQ;
                        pm_cnt   = 0;
                        pinfo("periodic PHY-master request", UVM_LOW);
                    end else pm_cnt++;
                end
            endcase

            //---------------- read / write leveling responders ------------
            if (dfi_rdlvl_en === 1'b1) begin
                if (rdlvl_dly < RDLVL_RESP_DELAY) rdlvl_dly++;
                else if (!dfi_rdlvl_req) begin
                    dfi_rdlvl_req <= 1'b1;
                    pinfo("read leveling: dfi_rdlvl_req=1", UVM_LOW);
                end
            end else begin
                rdlvl_dly = 0;
                dfi_rdlvl_req <= 1'b0;
            end
            if (dfi_wrlvl_en === 1'b1) begin
                if (wrlvl_cnt < WRLVL_RESP_DELAY) wrlvl_cnt++;
                else if (!dfi_wrlvl_req) begin
                    dfi_wrlvl_req <= 1'b1;
                    pinfo("write leveling: dfi_wrlvl_req=1", UVM_LOW);
                end
            end else begin
                wrlvl_cnt = 0;
                dfi_wrlvl_req <= 1'b0;
            end
        end
    end

    final begin
        $display("BFM_SUMMARY PHY: commands=%0d wr_words=%0d rd_words=%0d cmd_with_cke_low=%0d errors=%0d%s",
                 n_cmd, n_wr_words, n_rd_words, n_cke_low_cmd, n_err,
                 (cmdq.size() || rdq.size() || rd_beat) ? " (traffic still queued at end of test)" : "");
    end

endmodule
