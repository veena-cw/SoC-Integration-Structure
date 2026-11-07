//============================================================================
// Module: lpddr5c_top
// Description: LPDDR5 Controller Top Level
// Features:
//   - Dual Channel LPDDR5 Support (up to 6400 Mbps)
//   - DFI 5.0 Compliant Interface
//   - Command Scheduling with QoS
//   - Low Power Management (PD/SR/DS)
//   - ECC and Parity Support
//   - Training Support (CA/Read/Write)
//
// [REF] marks every line changed for the new refresh controller.
//============================================================================
 
`timescale 1ns/1ps
 
module lpddr5c_top #(
    parameter ADDR_WIDTH        = 32,
    parameter DATA_WIDTH        = 128,
    parameter ID_WIDTH          = 4,
    parameter DFI_DATA_WIDTH    = 64,
    parameter NUM_CHANNELS      = 1,
    parameter NUM_RANKS         = 1,
    parameter NUM_BANKS         = 8,
    parameter NUM_BANK_GROUPS   = 2,
    parameter ROW_WIDTH         = 16,
    parameter COL_WIDTH         = 10,
    parameter DQ_WIDTH          = 16,
    parameter DQS_WIDTH         = 2,
    parameter CA_WIDTH          = 6,
    parameter CS_WIDTH          = 1,
    parameter CKE_WIDTH         = 1,
    parameter CK_WIDTH          = 1,
    parameter TIMING_TCK        = 10,
    parameter REFRESH_INTERVAL  = 3900,
    parameter ECC_ENABLE        = 0,
    parameter PARITY_ENABLE     = 1
) (
    //========================================================================
    // System Interface
    //========================================================================
    input wire sys_clk,
    input wire sys_rst_n,
 
    //========================================================================
    // AXI4 Slave Interface - SoC / NoC
    //========================================================================
 
    //------------------------------------------------------------------------
    // AXI4 Write Address Channel
    //------------------------------------------------------------------------
    input  wire [ID_WIDTH-1:0]          s_axi_awid,
    input  wire [ADDR_WIDTH-1:0]        s_axi_awaddr,
    input  wire [7:0]                   s_axi_awlen,
    input  wire [2:0]                   s_axi_awsize,
    input  wire [1:0]                   s_axi_awburst,
    input  wire                         s_axi_awlock,
    input  wire [3:0]                   s_axi_awcache,
    input  wire [2:0]                   s_axi_awprot,
    input  wire [3:0]                   s_axi_awqos,
    input  wire                         s_axi_awvalid,
    output wire                         s_axi_awready,
 
    //------------------------------------------------------------------------
    // AXI4 Write Data Channel
    //------------------------------------------------------------------------
    input  wire [DATA_WIDTH-1:0]        s_axi_wdata,
    input  wire [DATA_WIDTH/8-1:0]      s_axi_wstrb,
    input  wire                         s_axi_wlast,
    input  wire                         s_axi_wvalid,
    output wire                         s_axi_wready,
 
    //------------------------------------------------------------------------
    // AXI4 Write Response Channel
    //------------------------------------------------------------------------
    output wire [ID_WIDTH-1:0]          s_axi_bid,
    output wire [1:0]                   s_axi_bresp,
    output wire                         s_axi_bvalid,
    input  wire                         s_axi_bready,
 
    //------------------------------------------------------------------------
    // AXI4 Read Address Channel
    //------------------------------------------------------------------------
    input  wire [ID_WIDTH-1:0]          s_axi_arid,
    input  wire [ADDR_WIDTH-1:0]        s_axi_araddr,
    input  wire [7:0]                   s_axi_arlen,
    input  wire [2:0]                   s_axi_arsize,
    input  wire [1:0]                   s_axi_arburst,
    input  wire                         s_axi_arlock,
    input  wire [3:0]                   s_axi_arcache,
    input  wire [2:0]                   s_axi_arprot,
    input  wire [3:0]                   s_axi_arqos,
    input  wire                         s_axi_arvalid,
    output wire                         s_axi_arready,
 
    //------------------------------------------------------------------------
    // AXI4 Read Data Channel
    //------------------------------------------------------------------------
    output wire [ID_WIDTH-1:0]          s_axi_rid,
    output wire [DATA_WIDTH-1:0]        s_axi_rdata,
    output wire [1:0]                   s_axi_rresp,
    output wire                         s_axi_rlast,
    output wire                         s_axi_rvalid,
    input  wire                         s_axi_rready,
    //========================================================================
    // DFI 5.0 Interface to PHY
    //========================================================================
     //    output wire                         dfi_clk,
    //    output wire                         dfi_rst_n,
      input wire                         dfi_clk,
      input wire                         dfi_rst_n,

    // Command Interface
    output wire [CS_WIDTH*NUM_CHANNELS-1:0]    dfi_cs_n,
    output wire [CKE_WIDTH*NUM_CHANNELS-1:0]   dfi_cke,
    output wire [CA_WIDTH*NUM_CHANNELS-1:0]    dfi_ca,
    output wire                                  dfi_rw,
    output wire [ADDR_WIDTH-1:0]        dfi_addr,
    // Data Interface
    input  wire [DFI_DATA_WIDTH*NUM_CHANNELS-1:0]   dfi_rddata,
    input  wire                                     dfi_rddata_valid,
    output wire [DFI_DATA_WIDTH*NUM_CHANNELS-1:0]   dfi_wrdata,
    output wire [DFI_DATA_WIDTH/8*NUM_CHANNELS-1:0] dfi_wrdata_mask,
    output wire                                     dfi_wrdata_en,
    // Training Interface
    input  wire                         dfi_phymstr_req,
    output wire                         dfi_phymstr_ack,
    output wire                         dfi_phymstr_cs,
    input  wire                         dfi_rdlvl_req,
    output wire                         dfi_rdlvl_en,
    input  wire                         dfi_wrlvl_req,
    output wire                         dfi_wrlvl_en,
    //========================================================================
    // Register Configuration Interface (APB)
    //========================================================================
    input  wire                         pclk,
    input  wire                         preset_n,
    input  wire                         psel,
    input  wire                         penable,
    input  wire                         pwrite,
    input  wire [15:0]                  paddr,
    input  wire [31:0]                    pwdata,
    output wire [31:0]                    prdata,
    output wire                         pready,
    output wire                         pslverr,
    //========================================================================
    // Interrupts
    //========================================================================
    output wire                         intr_init_done,
    output wire                         intr_refresh_err,
    output wire                         intr_ecc_err,
    output wire                         intr_training_err,
    output wire                         intr_parity_err,
    //========================================================================
    // Debug
    //========================================================================
    output wire [31:0]                  debug_bus,
    //========================================================================
    // LOW POWER SIDEBAND SIGNALS
    //========================================================================	
    input  wire                         lp_req_pd,
    input  wire                         wakeup_req,
    output logic lp_ack,
    output logic wakeup_ack
);
 
    //========================================================================
    // Internal Signals
    //========================================================================
    // Clock domains
    wire                                clk;
    wire                                rst_n;
    wire                                phy_clk;
    //============================================================
    // SYS_CLK domain: AXI command generation
    //============================================================
    logic [ADDR_WIDTH-1:0] cmd_addr;
    logic [3:0]            cmd_type;
    logic                  cmd_valid;
    wire                   cmd_ready;
    logic [7:0]            cmd_id;

    //============================================================
    // Command CDC FIFO: SYS_CLK -> DFI_CLK
    //============================================================
    localparam CMD_FIFO_WIDTH = ADDR_WIDTH + 4 + 8;

    wire [CMD_FIFO_WIDTH-1:0] cmd_fifo_wr_data;
    wire [CMD_FIFO_WIDTH-1:0] cmd_fifo_rd_data;
    wire                      cmd_fifo_wr_en;
    wire                      cmd_fifo_rd_en;
    wire                      cmd_fifo_full;
    wire                      cmd_fifo_empty;

    wire [ADDR_WIDTH-1:0] sched_cmd_addr;
    wire [3:0]            sched_cmd_type;
    wire [7:0]            sched_cmd_id;
    wire                  sched_cmd_valid;
    wire                  sched_cmd_ready;

    // Scheduler status returned to SYS_CLK domain
    wire cmd_activity_dfi;
    wire rd_activity_dfi;
    wire wr_activity_dfi;
    wire lp_idle_dfi;

    logic cmd_activity_meta, cmd_activity_sys;
    logic rd_activity_meta,  rd_activity_sys;
    logic wr_activity_meta,  wr_activity_sys;
    logic lp_idle_meta,      lp_idle_sys;

    wire cmd_activity = cmd_activity_sys;
    wire rd_activity  = rd_activity_sys;
    wire wr_activity  = wr_activity_sys;
    wire lp_idle      = lp_idle_sys;
 
 
// AXI4 command capture
logic                  aw_pending;
logic [ADDR_WIDTH-1:0] awaddr_q;
logic [ID_WIDTH-1:0]   awid_q;
 
logic                  ar_pending;
logic [ADDR_WIDTH-1:0] araddr_q;
logic [ID_WIDTH-1:0]   arid_q;
 
 
logic [ID_WIDTH-1:0]   bid_q;
logic [1:0]            bresp_q;
logic                  bvalid_q;
 
//========================================================================
// AXI4 Write Response FSM
//========================================================================
typedef enum logic [1:0] {
    WR_IDLE      = 2'b00,
    WR_WAIT_WDATA= 2'b01,
    WR_WRITE_CMD = 2'b10,
    WR_BRESP     = 2'b11
} wr_state_t;
 
wr_state_t wr_state;
 
logic [7:0] awlen_q;

//========================================================================
// [ADDR] Address map: LPDDR controller window (Non-Secure)
//   Base 0x1080_0000, size 0x0100_0000 (16 MB), limit 0x117F_FFFF
// Out-of-range accesses never reach the scheduler: writes get BRESP=DECERR,
// reads get RRESP=DECERR (arlen+1 beats, rlast on the last).
//========================================================================
localparam logic [ADDR_WIDTH-1:0] LPDDR_BASE_ADDR  = 32'h1080_0000;
localparam logic [ADDR_WIDTH-1:0] LPDDR_ADDR_SIZE  = 32'h0100_0000;
localparam logic [ADDR_WIDTH-1:0] LPDDR_LIMIT_ADDR = LPDDR_BASE_ADDR + LPDDR_ADDR_SIZE - 1;  // 0x117F_FFFF

// Valid after the AW / AR address has been captured (awaddr_q / araddr_q)
wire aw_addr_in_range = (awaddr_q >= LPDDR_BASE_ADDR) && (awaddr_q <= LPDDR_LIMIT_ADDR);
wire ar_addr_in_range = (araddr_q >= LPDDR_BASE_ADDR) && (araddr_q <= LPDDR_LIMIT_ADDR);

logic [7:0] arlen_q;
logic       wr_addr_err_q, rd_addr_err_q;                 // sticky until reset (TODO: W1C bit in reg_cfg)
wire        addr_err = wr_addr_err_q | rd_addr_err_q;

// ---- Write data steering: W beats are accepted only after AW is captured.
//      In range  -> forwarded to data_path.
//      Out of range -> swallowed here so they never enter the write FIFO.
wire wr_data_phase = (wr_state == WR_WAIT_WDATA);
wire wready_dp;
wire wvalid_dp = s_axi_wvalid && wr_data_phase && aw_addr_in_range;
assign s_axi_wready = wr_data_phase && (aw_addr_in_range ? wready_dp : 1'b1);

// ---- Read channel: data_path or the DECERR generator below
logic       rd_err_active;
logic [7:0] rd_err_beats_left;
logic [7:0] rd_outstanding;            // in-range reads issued, not yet finished (rlast seen)
wire        rvalid_dp, rlast_dp;
wire [DATA_WIDTH-1:0] rdata_dp;
wire [1:0]  rresp_dp;
wire        rready_dp = s_axi_rready && !rd_err_active;

// start the DECERR response only when no earlier read data can be in flight
wire rd_err_start = ar_pending && !ar_addr_in_range && !rd_err_active && (rd_outstanding == 8'd0);
wire rd_err_done  = rd_err_active && s_axi_rready && (rd_err_beats_left == 8'd0);

assign s_axi_rvalid = rd_err_active ? 1'b1                     : rvalid_dp;
assign s_axi_rdata  = rd_err_active ? '0                       : rdata_dp;
assign s_axi_rresp  = rd_err_active ? 2'b11                    : rresp_dp;   // DECERR
assign s_axi_rlast  = rd_err_active ? (rd_err_beats_left == 8'd0) : rlast_dp;
// NOTE: rid was previously undriven. Best effort: last captured ARID
// (exact only with one read outstanding).
assign s_axi_rid    = arid_q;
 
    
    // Bank state tracking
    wire [NUM_CHANNELS-1:0]             bank_active [0:NUM_BANKS-1];
    wire [NUM_CHANNELS-1:0]             row_open;
    wire [ROW_WIDTH-1:0]                open_row [0:NUM_CHANNELS-1];
    // Timing tracking
    wire [15:0]                         timing_counter [0:15];
    wire                                timing_met [0:15];
    // Data path signals
    wire [DATA_WIDTH-1:0]               rd_data_fifo [0:7];
    wire [DATA_WIDTH-1:0]               wr_data_fifo [0:7];
    wire [2:0]                          rd_fifo_wptr, rd_fifo_rptr;
    wire [2:0]                          wr_fifo_wptr, wr_fifo_rptr;
    wire                                rd_fifo_empty, rd_fifo_full;
    wire                                wr_fifo_empty, wr_fifo_full;
    // ECC signals
    wire [DATA_WIDTH+7:0]               ecc_encoded_data;
    wire [DATA_WIDTH-1:0]               ecc_decoded_data;
    wire [7:0]                            ecc_syndrome;
     wire [7:0]                            err_count;
    wire                                  ecc_err_detected;
    wire                                  ecc_err_corrected;
    // Training signals
    wire [7:0]                            ca_training_result [0:NUM_CHANNELS-1];
    wire [7:0]                            rd_gate_training_result [0:NUM_CHANNELS-1];
    wire [7:0]                            rd_dq_training_result [0:NUM_CHANNELS-1][0:15];
    wire [7:0]                            wr_dq_training_result [0:NUM_CHANNELS-1][0:15];
    wire                                  training_done;
    wire                                  training_error;
    // Low power signals
   // wire                                  lp_req_pd;
    wire                                  lp_req_sr;
    wire                                  lp_req_ds;
//   wire                                  lp_ack;
    wire [3:0]                                lp_state ;

    //------------------------------------------------------------------------
    // [REF] Refresh signals. The controller now lives in the DFI (phy_clk)
    // domain next to the scheduler, so req/ack/urgent need no CDC.
    //------------------------------------------------------------------------
    wire        refresh_req_dfi;
    wire        refresh_urgent_dfi;
    wire        refresh_ack_dfi;
    wire [3:0]  refresh_debt_dfi;
    wire        ref_err_overdue_dfi;
    wire        ref_err_timeout_dfi;

    // Configuration registers
    wire [31:0]                           reg_ctrl0;
    wire [31:0]                           reg_ctrl1;
    wire [31:0]                           reg_ctrl2;
    wire [31:0]                           reg_ctrl3;
    wire [31:0]                           reg_timing0;
    wire [31:0]                           reg_timing1;
    wire [31:0]                           reg_timing4;   // [REF] [15:0] tREFI, [31:16] tRFC
    wire [31:0]                           reg_ref_cfg;   // [REF] refresh control
    wire [31:0]                           reg_status;
    wire [31:0]                           reg_ecc_cfg;
    wire [31:0]                           reg_lp_cfg;

    //============================================================
    // Quasi-static configuration crossing: APB -> DFI
    // Software must update these registers only while the scheduler
    // is quiescent; these 2-stage bus synchronizers do not provide
    // an atomic multi-bit configuration handshake.
    // [REF] Refresh config (tREFI, tRFC, rate, thresholds) must be
    // programmed while refresh_en (reg_ctrl0[8]) = 0.
    //============================================================
    logic [31:0] reg_timing0_meta, reg_timing0_dfi;
    logic [3:0]  sched_policy_meta, sched_policy_dfi;
    logic [1:0]  qos_meta, qos_dfi;

    // [REF] Refresh configuration crossing: APB/SYS -> DFI
    logic [31:0] reg_timing4_meta, reg_timing4_dfi;
    logic [1:0]  ref_rate_meta,    ref_rate_dfi;
    logic [3:0]  ref_thr_meta,     ref_thr_dfi;
    logic [3:0]  ref_max_meta,     ref_max_dfi;
    logic        ref_en_meta,      ref_en_dfi;
    logic        train_done_meta,  train_done_dfi;   // assumes training_done is a LEVEL
    logic        ref_clr_meta,     ref_clr_dfi, ref_clr_d;
    // rising edge of reg_ref_cfg[12] = 1-cycle clear pulse
    wire         ref_err_clear_dfi = ref_clr_dfi & ~ref_clr_d;
    // scheduler tRFC input is 10 bits; saturate if software programs more
    wire  [9:0]  trfc_cfg_dfi = (|reg_timing4_dfi[31:26]) ? 10'h3FF : reg_timing4_dfi[25:16];

    // [REF] Refresh status crossing: DFI -> SYS (interrupt + debug)
    logic        ref_req_meta,     ref_req_sys;
    logic        ref_err_ovd_meta, ref_err_ovd_sys;
    logic        ref_err_tmo_meta, ref_err_tmo_sys;
    logic [3:0]  ref_debt_meta,    ref_debt_sys;     // debug only: multi-bit, not atomic

    // Interrupt aggregation
    wire                                  intr_status [0:7];
    wire                                  intr_mask [0:7];
    wire                                  intr_raw;
    wire                                  intr_final;
    // Debug signals
    wire [31:0]                           debug_cmd_cnt;
    wire [31:0]                           debug_rd_cnt;
    wire [31:0]                           debug_wr_cnt;
    wire [31:0]                           debug_err_cnt;
    //========================================================================
    // Clock and Reset Generation
    //========================================================================
    assign clk = sys_clk;
    assign rst_n = sys_rst_n;
    assign phy_clk = dfi_clk;

/*
assign s_axi_awlen   = 8'b00000000; 
assign s_axi_awsize  = 3'b000;
assign s_axi_awburst = 2'b00;
assign s_axi_arlen   = 8'b00000000; 
assign s_axi_arsize  = 3'b000; 
assign s_axi_arburst = 2'b00;
//assign s_axi_awid    = '0;
assign s_axi_awlock  = 1'b0;
assign s_axi_awcache = 4'b0000;
assign s_axi_awprot  = 3'b000;
assign s_axi_awqos   = 4'b0000;
 
//assign s_axi_arid    = '0;
assign s_axi_arlock  = 1'b0;
assign s_axi_arcache = 4'b0000;
assign s_axi_arprot  = 3'b000;
assign s_axi_arqos   = 4'b0000;
*/
wire rd_cmd_accept = ar_pending && ar_addr_in_range && (wr_state != WR_WRITE_CMD) && cmd_ready;

//========================================================================
// AXI4 -> Command Scheduler Interface
//========================================================================
 
//// Accept one AXI command at a time.
//// Give WRITE address channel priority over READ address channel.
//assign s_axi_awready = !aw_pending && !ar_pending;
//assign s_axi_arready = !aw_pending && !ar_pending && !s_axi_awvalid;
 
assign s_axi_awready = (wr_state == WR_IDLE) &&
                       !ar_pending &&
                       !bvalid_q &&
                       (lp_state != 4'b0010);
 
assign s_axi_arready = (wr_state == WR_IDLE) &&
                       !aw_pending &&
                       !bvalid_q &&
                       !s_axi_awvalid &&
                       !ar_pending;
 
 
//========================================================================
// AXI4 Write Transaction FSM
//========================================================================
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        wr_state   <= WR_IDLE;
 
        aw_pending <= 1'b0;
        awaddr_q   <= '0;
        awid_q     <= '0;
 
        ar_pending <= 1'b0;
        araddr_q   <= '0;
        arid_q     <= '0;
 
        arlen_q       <= '0;
        wr_addr_err_q <= 1'b0;
        bid_q      <= '0;
        bresp_q    <= 2'b00;
        bvalid_q   <= 1'b0;
    end
    else begin
 
        case (wr_state)
 
            //============================================================
            // IDLE
            //============================================================
            WR_IDLE: begin
 
                if (s_axi_awvalid && s_axi_awready) begin
                    aw_pending <= 1'b1;
                    awaddr_q   <= s_axi_awaddr;
                    awid_q     <= s_axi_awid;
 
                    wr_state   <= WR_WAIT_WDATA;
 
                    $display("[%0t] TOP: AW CAPTURED addr=%h id=%h",
                             $time, s_axi_awaddr, s_axi_awid);
                end
 
                else if (s_axi_arvalid && s_axi_arready) begin
                    ar_pending <= 1'b1;
                    araddr_q   <= s_axi_araddr;
                    arid_q     <= s_axi_arid;
                    arlen_q    <= s_axi_arlen;
                end
            end
 
 
            //============================================================
            // WAIT FOR COMPLETE WRITE DATA
            //============================================================
            WR_WAIT_WDATA: begin
 
                if (s_axi_wvalid && s_axi_wready && s_axi_wlast) begin
 
                    $display("[%0t] TOP: WDATA COMPLETE",
                             $time);
 
                    if (aw_addr_in_range) begin
                        wr_state <= WR_WRITE_CMD;
                    end else begin
                        // [ADDR] out of range: no command, respond DECERR
                        aw_pending    <= 1'b0;
                        bid_q         <= awid_q;
                        bresp_q       <= 2'b11;
                        bvalid_q      <= 1'b1;
                        wr_addr_err_q <= 1'b1;
                        wr_state      <= WR_BRESP;
                        $display("[%0t] TOP: WRITE ADDR OUT OF RANGE addr=%h", $time, awaddr_q);
                    end
                end
            end
 
 
            //============================================================
            // ISSUE LPDDR WRITE COMMAND
            //============================================================
            WR_WRITE_CMD: begin
 
                if (cmd_valid && cmd_ready) begin
 
                    aw_pending <= 1'b0;
 
                    $display("[%0t] TOP: LPDDR WRITE CMD ACCEPTED",
                             $time);
 
                    bid_q      <= awid_q;
                    bresp_q    <= 2'b00;       // OKAY
                    bvalid_q   <= 1'b1;
 
                    wr_state   <= WR_BRESP;
                end
            end
 
 
            //============================================================
            // AXI WRITE RESPONSE
            //============================================================
            WR_BRESP: begin
 
                if (bvalid_q && s_axi_bready) begin
 
                    bvalid_q <= 1'b0;
                    wr_state <= WR_IDLE;
 
                    $display("[%0t] TOP: AXI B RESPONSE ACCEPTED BID=%h BRESP=%h",
                             $time, bid_q, bresp_q);
                end
            end
 
 
            default: begin
                wr_state <= WR_IDLE;
            end
 
        endcase
if (rd_cmd_accept || rd_err_done) ar_pending <= 1'b0;
    end
end
 
 
//========================================================================
// [ADDR] Out-of-range read: DECERR response generator
//========================================================================
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        rd_err_active     <= 1'b0;
        rd_err_beats_left <= '0;
        rd_outstanding    <= '0;
        rd_addr_err_q     <= 1'b0;
    end else begin
        if (rd_err_start) begin
            rd_err_active     <= 1'b1;
            rd_err_beats_left <= arlen_q;          // arlen + 1 beats in total
            rd_addr_err_q     <= 1'b1;
            $display("[%0t] TOP: READ ADDR OUT OF RANGE addr=%h", $time, araddr_q);
        end else if (rd_err_active && s_axi_rready) begin
            if (rd_err_beats_left == 8'd0) rd_err_active     <= 1'b0;
            else                           rd_err_beats_left <= rd_err_beats_left - 8'd1;
        end

        // Assumes data_path returns exactly one rlast per accepted read command
        case ({rd_cmd_accept, (rvalid_dp && rready_dp && rlast_dp)})
            2'b10:   rd_outstanding <= rd_outstanding + 8'd1;
            2'b01:   if (rd_outstanding != 8'd0) rd_outstanding <= rd_outstanding - 8'd1;
            default: ;
        endcase
    end
end

// AXI Write Response outputs
assign s_axi_bid    = bid_q;
assign s_axi_bresp  = bresp_q;
assign s_axi_bvalid = bvalid_q;
 
 
//========================================================================
// Generate command for command scheduler
//========================================================================
always_comb begin
 
    // Defaults
    cmd_addr  = '0;
    cmd_type  = 4'b0000;
    cmd_valid = 1'b0;
    cmd_id    = 8'h00;
 
    //============================================================
    // WRITE command
    // Only issue after complete WDATA burst is received
    //============================================================
    if (wr_state == WR_WRITE_CMD) begin
 
        cmd_addr  = awaddr_q;
        cmd_type  = 4'b0010;
        cmd_valid = 1'b1;
 
        // AXI ID = 4 bits
        // Scheduler ID = 8 bits
        cmd_id    = {{(8-ID_WIDTH){1'b0}}, awid_q};
    end
 
    //============================================================
    // READ command
    //============================================================
    else if (ar_pending && ar_addr_in_range) begin
 
        cmd_addr  = araddr_q;
        cmd_type  = 4'b0001;
        cmd_valid = 1'b1;
 
        cmd_id    = {{(8-ID_WIDTH){1'b0}}, arid_q};
    end
 
end
 
    
    //============================================================
    // Command CDC FIFO: SYS_CLK -> DFI_CLK
    //============================================================
    assign cmd_fifo_wr_data = {cmd_id, cmd_type, cmd_addr};

    // AXI command is accepted when the CDC FIFO has space.
    assign cmd_ready       = !cmd_fifo_full;
    assign cmd_fifo_wr_en  = cmd_valid && cmd_ready;

    lpddr5c_cdc_fifo #(
        .DATA_WIDTH (CMD_FIFO_WIDTH),
        .FIFO_DEPTH (8)
    ) u_cmd_cdc_fifo (
        .wr_clk   (clk),
        .wr_rst_n (rst_n),
        .wr_en    (cmd_fifo_wr_en),
        .wr_data  (cmd_fifo_wr_data),
        .wr_full  (cmd_fifo_full),

        .rd_clk   (phy_clk),
        .rd_rst_n (dfi_rst_n),
        .rd_en    (cmd_fifo_rd_en),
        .rd_data  (cmd_fifo_rd_data),
        .rd_empty (cmd_fifo_empty)
    );

    assign {sched_cmd_id, sched_cmd_type, sched_cmd_addr} = cmd_fifo_rd_data;
    assign sched_cmd_valid = !cmd_fifo_empty;
    assign cmd_fifo_rd_en  = sched_cmd_valid && sched_cmd_ready;

    //============================================================
    // APB configuration -> DFI domain
    // [REF] The old refresh_pending/urgent/row SYS->DFI synchronizers are
    //       gone: the controller now runs in phy_clk. Refresh config and
    //       enable are synchronized here instead.
    //============================================================
    always_ff @(posedge phy_clk or negedge dfi_rst_n) begin
        if (!dfi_rst_n) begin
            reg_timing0_meta       <= '0;
            reg_timing0_dfi        <= '0;
            sched_policy_meta      <= '0;
            sched_policy_dfi       <= '0;
            qos_meta               <= '0;
            qos_dfi                <= '0;

            // [REF]
            reg_timing4_meta       <= '0;
            reg_timing4_dfi        <= '0;
            ref_rate_meta          <= '0;
            ref_rate_dfi           <= '0;
            ref_thr_meta           <= '0;
            ref_thr_dfi            <= '0;
            ref_max_meta           <= '0;
            ref_max_dfi            <= '0;
            ref_en_meta            <= 1'b0;
            ref_en_dfi             <= 1'b0;
            train_done_meta        <= 1'b0;
            train_done_dfi         <= 1'b0;
            ref_clr_meta           <= 1'b0;
            ref_clr_dfi            <= 1'b0;
            ref_clr_d              <= 1'b0;
        end else begin
            reg_timing0_meta       <= reg_timing0;
            reg_timing0_dfi        <= reg_timing0_meta;
            sched_policy_meta      <= reg_ctrl0[3:0];
            sched_policy_dfi       <= sched_policy_meta;
            qos_meta               <= reg_ctrl1[1:0];
            qos_dfi                <= qos_meta;

            // [REF]
            reg_timing4_meta       <= reg_timing4;
            reg_timing4_dfi        <= reg_timing4_meta;
            ref_rate_meta          <= reg_ref_cfg[1:0];
            ref_rate_dfi           <= ref_rate_meta;
            ref_thr_meta           <= reg_ref_cfg[7:4];
            ref_thr_dfi            <= ref_thr_meta;
            ref_max_meta           <= reg_ref_cfg[11:8];
            ref_max_dfi            <= ref_max_meta;
            // ref_en and training_done come from different domains: sync each
            // separately and AND them in the DFI domain (never AND first)
            ref_en_meta            <= reg_ctrl0[8];
            ref_en_dfi             <= ref_en_meta;
            train_done_meta        <= training_done;
            train_done_dfi         <= train_done_meta;
            ref_clr_meta           <= reg_ref_cfg[12];
            ref_clr_dfi            <= ref_clr_meta;
            ref_clr_d              <= ref_clr_dfi;
        end
    end

    //============================================================
    // Scheduler / refresh status: DFI -> SYS domain
    //============================================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cmd_activity_meta <= 1'b0;
            cmd_activity_sys  <= 1'b0;
            rd_activity_meta  <= 1'b0;
            rd_activity_sys   <= 1'b0;
            wr_activity_meta  <= 1'b0;
            wr_activity_sys   <= 1'b0;
            lp_idle_meta      <= 1'b1;
            lp_idle_sys       <= 1'b1;

            // [REF]
            ref_req_meta      <= 1'b0;
            ref_req_sys       <= 1'b0;
            ref_err_ovd_meta  <= 1'b0;
            ref_err_ovd_sys   <= 1'b0;
            ref_err_tmo_meta  <= 1'b0;
            ref_err_tmo_sys   <= 1'b0;
            ref_debt_meta     <= '0;
            ref_debt_sys      <= '0;
        end else begin
            cmd_activity_meta <= cmd_activity_dfi;
            cmd_activity_sys  <= cmd_activity_meta;
            rd_activity_meta  <= rd_activity_dfi;
            rd_activity_sys   <= rd_activity_meta;
            wr_activity_meta  <= wr_activity_dfi;
            wr_activity_sys   <= wr_activity_meta;
            lp_idle_meta      <= lp_idle_dfi;
            lp_idle_sys       <= lp_idle_meta;

            // [REF] error flags are sticky levels: 2-FF sync is safe
            ref_req_meta      <= refresh_req_dfi;
            ref_req_sys       <= ref_req_meta;
            ref_err_ovd_meta  <= ref_err_overdue_dfi;
            ref_err_ovd_sys   <= ref_err_ovd_meta;
            ref_err_tmo_meta  <= ref_err_timeout_dfi;
            ref_err_tmo_sys   <= ref_err_tmo_meta;
            ref_debt_meta     <= refresh_debt_dfi;
            ref_debt_sys      <= ref_debt_meta;
        end
    end

    //========================================================================
    // Register Configuration Block (APB Interface)
    //========================================================================
    lpddr5c_reg_cfg u_reg_cfg (
        .pclk           (pclk),
        .preset_n       (preset_n),
        .psel           (psel),
        .penable        (penable),
        .pwrite         (pwrite),
        .paddr          (paddr),
        .pwdata         (pwdata),
        .prdata         (prdata),
        .pready         (pready),
        .pslverr        (pslverr),
        // Register outputs
        .reg_ctrl0      (reg_ctrl0),
        .reg_ctrl1      (reg_ctrl1),
        .reg_ctrl2      (reg_ctrl2),
        .reg_ctrl3      (reg_ctrl3),
        .reg_timing0    (reg_timing0),
        .reg_timing1    (reg_timing1),
        .reg_timing4    (reg_timing4),        // [REF]
        .reg_ref_cfg    (reg_ref_cfg),        // [REF]
        .reg_ecc_cfg    (reg_ecc_cfg),
        .reg_lp_cfg     (reg_lp_cfg),
        .ecc_err_count  (err_count),
        // Status inputs
        .reg_status     (reg_status),
        .training_done  (training_done),
        .training_error (training_error),
        .lp_state       (lp_state[0]),
        // [REF] DFI-domain refresh status; reg_cfg synchronizes into pclk
        .refresh_pending(refresh_req_dfi),
        .ref_err_overdue(ref_err_overdue_dfi),
        .ref_err_timeout(ref_err_timeout_dfi),
        .ref_debt       (refresh_debt_dfi)
    );
    //========================================================================
    // Command Scheduler
    //========================================================================
    lpddr5c_cmd_scheduler #(
        .ADDR_WIDTH      (ADDR_WIDTH),
        .NUM_CHANNELS    (NUM_CHANNELS),
        .NUM_BANKS       (NUM_BANKS),
        .NUM_BANK_GROUPS (NUM_BANK_GROUPS),
        .ROW_WIDTH       (ROW_WIDTH),
        .COL_WIDTH       (COL_WIDTH)
        // [REF] set .T_RPAB_ADD (tRPab - tRPpb) from the datasheet if it differs
    ) u_cmd_scheduler (
        // Scheduler runs entirely in DFI_CLK domain
        .clk             (phy_clk),
        .rst_n           (dfi_rst_n),

        // Synchronized configuration
        .timing_params   (reg_timing0_dfi),
        .sched_policy    (sched_policy_dfi),
        .qos_en          (qos_dfi),

        // Command from asynchronous command FIFO
        .cmd_addr        (sched_cmd_addr),
        .cmd_type        (sched_cmd_type),
        .cmd_valid       (sched_cmd_valid),
        .cmd_ready       (sched_cmd_ready),
        .cmd_id          (sched_cmd_id),

        // [REF] Refresh control: same clock domain as the controller
        .refresh_req     (refresh_req_dfi),
        .refresh_ack     (refresh_ack_dfi),      // was open: the loop never closed
        .refresh_urgent  (refresh_urgent_dfi),
        .trfc_cfg        (trfc_cfg_dfi),         // replaces refresh_row

        // Bank state (DFI domain)
        .bank_active     (bank_active),
        .row_open        (row_open),
        .open_row        (open_row),

        // DFI command outputs
        .dfi_cs_n        (dfi_cs_n),
        .dfi_cke         (dfi_cke),
        .dfi_ca          (dfi_ca),
        .dfi_rw          (dfi_rw),
        .dfi_addr        (dfi_addr),

        // DFI-domain status, synchronized back to SYS_CLK above
        .cmd_activity    (cmd_activity_dfi),
        .rd_activity     (rd_activity_dfi),
        .wr_activity     (wr_activity_dfi),
        .lp_idle         (lp_idle_dfi)
    );
    //========================================================================
    // Read/Write Data Path
    //========================================================================
    lpddr5c_data_path #(
    .DATA_WIDTH      (DATA_WIDTH),
    .DFI_DATA_WIDTH  (DFI_DATA_WIDTH),
    .NUM_CHANNELS    (NUM_CHANNELS),
    .FIFO_DEPTH      (8),
    .ECC_ENABLE      (ECC_ENABLE)
) u_data_path (
    .sys_clk          (clk),
    .sys_rst_n        (rst_n),
    .phy_clk          (phy_clk),
    .phy_rst_n        (dfi_rst_n),
 
    //====================================================================
    // AXI Read interface
    // Existing internal port names remain axi_*
    // Top-level interface is s_axi_*
    //====================================================================
    .axi_rvalid       (rvalid_dp),
    .axi_rready       (rready_dp),
    .axi_rdata        (rdata_dp),
    .axi_rresp        (rresp_dp),
    .axi_rlast        (rlast_dp),
 
    //====================================================================
    // AXI Write interface
    //====================================================================
    .axi_wvalid       (wvalid_dp),
    .axi_wready       (wready_dp),
    .axi_wdata        (s_axi_wdata),
    .axi_wstrb        (s_axi_wstrb),
    .axi_wlast        (s_axi_wlast),
 
    //====================================================================
    // DFI interface
    //====================================================================
    .dfi_rddata       (dfi_rddata),
    .dfi_rddata_valid (dfi_rddata_valid),
    .dfi_wrdata       (dfi_wrdata),
    .dfi_wrdata_mask  (dfi_wrdata_mask),
    .dfi_wrdata_en    (dfi_wrdata_en),
    .dfi_rw (dfi_rw),
 
    //====================================================================
    // ECC signals -- unchanged
    //====================================================================
    .ecc_cfg          (reg_ecc_cfg),
    .ecc_err_detected (ecc_err_detected),
    .ecc_err_corrected(ecc_err_corrected),
    .err_count(err_count),
 
    //====================================================================
    // FIFO status -- unchanged
    //====================================================================
    .rd_fifo_empty    (rd_fifo_empty),
    .rd_fifo_full     (),
    .wr_fifo_empty    (wr_fifo_empty),
    .wr_fifo_full     ()
);
    //========================================================================
    // Training Control
    //========================================================================
    lpddr5c_training_ctrl #(
        .NUM_CHANNELS   (NUM_CHANNELS),
        .DQ_WIDTH       (DQ_WIDTH),
        .CA_WIDTH       (CA_WIDTH)
    ) u_training_ctrl (
        .clk            (clk),
        .rst_n          (rst_n),
        // Control
        .train_start    (reg_ctrl0[4]),
        .train_mode     (reg_ctrl0[7:5]),
        .train_done     (training_done),
        .train_error    (training_error),
        // DFI training interface
        .dfi_phymstr_req(dfi_phymstr_req),
        .dfi_phymstr_ack(dfi_phymstr_ack),
        .dfi_phymstr_cs (dfi_phymstr_cs),
        .dfi_rdlvl_req  (dfi_rdlvl_req),
        .dfi_rdlvl_en   (dfi_rdlvl_en),
        .dfi_wrlvl_req  (dfi_wrlvl_req),
        .dfi_wrlvl_en   (dfi_wrlvl_en),
        // Training results
        .ca_training_result(ca_training_result),
        .rd_gate_training_result(rd_gate_training_result),
        .rd_dq_training_result(rd_dq_training_result),
        .wr_dq_training_result(wr_dq_training_result)
    );
    //========================================================================
    // Low Power Management
    //========================================================================
    lpddr5c_lp_mgmt #(
        .NUM_CHANNELS   (NUM_CHANNELS)
    ) u_lp_mgmt (
        .clk            (clk),
        .rst_n          (rst_n),
            .cmd_activity(cmd_activity),
            .rd_activity(rd_activity),
            .wr_activity(wr_activity),
        // Configuration
        //.lp_cfg         (reg_lp_cfg),
        // Control
        .lp_req_pd      (lp_req_pd),
        .lp_req_sr      (lp_req_sr),
        .lp_req_ds      (lp_req_ds),
        .lp_ack         (lp_ack),
        .lp_state       (lp_state),
        .wakeup_req     (wakeup_req),
        .lp_idle(lp_idle),
        .wakeup_ack(wakeup_ack),
                 .rd_fifo_empty    (rd_fifo_empty),
    .wr_fifo_empty    (wr_fifo_empty),
        // Status
        .idle_count     (),
        .sr_entry_count (),
        .pd_entry_count ()
    );
    //========================================================================
    // [REF] Refresh Control (DFI / phy_clk domain)
    //========================================================================
    lpddr5c_refresh_ctrl u_refresh_ctrl (
        .clk              (phy_clk),
        .rst_n            (dfi_rst_n),
        // Configuration (synchronized into the DFI domain above)
        .refresh_en       (ref_en_dfi & train_done_dfi),
        .refresh_hold     (1'b0),                 // TODO: wire to self-refresh state (lp_req_sr is not driven today)
        .trefi            (reg_timing4_dfi[15:0]),
        .refresh_rate     (ref_rate_dfi),
        .debt_urgent_thr  (ref_thr_dfi),
        .debt_max         (ref_max_dfi),
        // Scheduler handshake
        .refresh_ack      (refresh_ack_dfi),
        .refresh_req      (refresh_req_dfi),
        .refresh_urgent   (refresh_urgent_dfi),
        // Status / errors
        .refresh_debt     (refresh_debt_dfi),
        .err_overdue      (ref_err_overdue_dfi),
        .err_timeout      (ref_err_timeout_dfi),
        .err_clear        (ref_err_clear_dfi)
    );
    //========================================================================
    // ECC & Parity Generation/Check
    //========================================================================
    generate
        if (ECC_ENABLE) begin : gen_ecc
            lpddr5c_ecc u_ecc (
                .clk            (clk),
                .rst_n          (rst_n),
                .ecc_en         (reg_ecc_cfg[0]),
                .data_in        (),
                .data_out       (),
                .ecc_in         (),
                .ecc_out        (),
                .err_detected   (ecc_err_detected),
                .err_corrected  (ecc_err_corrected),
                .err_location   ()
            );
        end
    endgenerate
    //========================================================================
    // Interrupt Aggregation
    //========================================================================
    assign intr_status[0] = training_done;
    assign intr_status[1] = training_error;
    assign intr_status[2] = ref_err_ovd_sys | ref_err_tmo_sys;   // [REF] was refresh_urgent (not an error)
    assign intr_status[3] = ecc_err_detected;
    assign intr_status[4] = |pslverr;  // APB error
    assign intr_status[5] = addr_err;  // [ADDR] out-of-range access seen (sticky)
    assign intr_status[6] = 1'b0;  // Reserved
    assign intr_status[7] = 1'b0;  // Reserved
    assign intr_init_done   = training_done;
    assign intr_refresh_err = ref_err_ovd_sys | ref_err_tmo_sys; // [REF]
    assign intr_ecc_err     = ecc_err_detected;
    assign intr_training_err= training_error;
    assign intr_parity_err  = 1'b0;  // TODO: Connect parity error
    //========================================================================
    // Debug Bus
    //========================================================================
    assign debug_bus = {
        16'b0,                                           // explicit upper half (was implicit)
        training_done,
        training_error,
        ref_req_sys,                                     // [REF] was refresh_pending
        ecc_err_detected,
        lp_state[0],
        {2'b0, addr_err},   // [ADDR]
        ref_err_tmo_sys, ref_err_ovd_sys, 2'b0, ref_debt_sys   // [REF] was refresh_counter[7:0]
    };
 
endmodule // lpddr5c_top










































// //============================================================================
// // Module: lpddr5c_top
// // Description: LPDDR5 Controller Top Level
// // Features:
// //   - Dual Channel LPDDR5 Support (up to 6400 Mbps)
// //   - DFI 5.0 Compliant Interface
// //   - Command Scheduling with QoS
// //   - Low Power Management (PD/SR/DS)
// //   - ECC and Parity Support
// //   - Training Support (CA/Read/Write)
// //============================================================================
 
// `timescale 1ns/1ps
 
// module lpddr5c_top #(
//     parameter ADDR_WIDTH        = 32,
//     parameter DATA_WIDTH        = 128,
//     parameter ID_WIDTH          = 4,
//     parameter DFI_DATA_WIDTH    = 64,
//     parameter NUM_CHANNELS      = 1,
//     parameter NUM_RANKS         = 1,
//     parameter NUM_BANKS         = 8,
//     parameter NUM_BANK_GROUPS   = 2,
//     parameter ROW_WIDTH         = 16,
//     parameter COL_WIDTH         = 10,
//     parameter DQ_WIDTH          = 16,
//     parameter DQS_WIDTH         = 2,
//     parameter CA_WIDTH          = 6,
//     parameter CS_WIDTH          = 1,
//     parameter CKE_WIDTH         = 1,
//     parameter CK_WIDTH          = 1,
//     parameter TIMING_TCK        = 10,
//     parameter REFRESH_INTERVAL  = 3900,
//     parameter ECC_ENABLE        = 0,
//     parameter PARITY_ENABLE     = 1
// ) (
//     //========================================================================
//     // System Interface
//     //========================================================================
//     input wire sys_clk,
//     input wire sys_rst_n,
 
//     //========================================================================
//     // AXI4 Slave Interface - SoC / NoC
//     //========================================================================
 
//     //------------------------------------------------------------------------
//     // AXI4 Write Address Channel
//     //------------------------------------------------------------------------
//     input  wire [ID_WIDTH-1:0]          s_axi_awid,
//     input  wire [ADDR_WIDTH-1:0]        s_axi_awaddr,
//     input  wire [7:0]                   s_axi_awlen,
//     input  wire [2:0]                   s_axi_awsize,
//     input  wire [1:0]                   s_axi_awburst,
//     input  wire                         s_axi_awlock,
//     input  wire [3:0]                   s_axi_awcache,
//     input  wire [2:0]                   s_axi_awprot,
//     input  wire [3:0]                   s_axi_awqos,
//     input  wire                         s_axi_awvalid,
//     output wire                         s_axi_awready,
 
//     //------------------------------------------------------------------------
//     // AXI4 Write Data Channel
//     //------------------------------------------------------------------------
//     input  wire [DATA_WIDTH-1:0]        s_axi_wdata,
//     input  wire [DATA_WIDTH/8-1:0]      s_axi_wstrb,
//     input  wire                         s_axi_wlast,
//     input  wire                         s_axi_wvalid,
//     output wire                         s_axi_wready,
 
//     //------------------------------------------------------------------------
//     // AXI4 Write Response Channel
//     //------------------------------------------------------------------------
//     output wire [ID_WIDTH-1:0]          s_axi_bid,
//     output wire [1:0]                   s_axi_bresp,
//     output wire                         s_axi_bvalid,
//     input  wire                         s_axi_bready,
 
//     //------------------------------------------------------------------------
//     // AXI4 Read Address Channel
//     //------------------------------------------------------------------------
//     input  wire [ID_WIDTH-1:0]          s_axi_arid,
//     input  wire [ADDR_WIDTH-1:0]        s_axi_araddr,
//     input  wire [7:0]                   s_axi_arlen,
//     input  wire [2:0]                   s_axi_arsize,
//     input  wire [1:0]                   s_axi_arburst,
//     input  wire                         s_axi_arlock,
//     input  wire [3:0]                   s_axi_arcache,
//     input  wire [2:0]                   s_axi_arprot,
//     input  wire [3:0]                   s_axi_arqos,
//     input  wire                         s_axi_arvalid,
//     output wire                         s_axi_arready,
 
//     //------------------------------------------------------------------------
//     // AXI4 Read Data Channel
//     //------------------------------------------------------------------------
//     output wire [ID_WIDTH-1:0]          s_axi_rid,
//     output wire [DATA_WIDTH-1:0]        s_axi_rdata,
//     output wire [1:0]                   s_axi_rresp,
//     output wire                         s_axi_rlast,
//     output wire                         s_axi_rvalid,
//     input  wire                         s_axi_rready,
//     //========================================================================
//     // DFI 5.0 Interface to PHY
//     //========================================================================
//      //    output wire                         dfi_clk,
//     //    output wire                         dfi_rst_n,
//       input wire                         dfi_clk,
//       input wire                         dfi_rst_n,

//     // Command Interface
//     output wire [CS_WIDTH*NUM_CHANNELS-1:0]    dfi_cs_n,
//     output wire [CKE_WIDTH*NUM_CHANNELS-1:0]   dfi_cke,
//     output wire [CA_WIDTH*NUM_CHANNELS-1:0]    dfi_ca,
//     output wire                                  dfi_rw,
//     output wire [ADDR_WIDTH-1:0]        dfi_addr,
//     // Data Interface
//     input  wire [DFI_DATA_WIDTH*NUM_CHANNELS-1:0]   dfi_rddata,
//     input  wire                                     dfi_rddata_valid,
//     output wire [DFI_DATA_WIDTH*NUM_CHANNELS-1:0]   dfi_wrdata,
//     output wire [DFI_DATA_WIDTH/8*NUM_CHANNELS-1:0] dfi_wrdata_mask,
//     output wire                                     dfi_wrdata_en,
//     // Training Interface
//     input  wire                         dfi_phymstr_req,
//     output wire                         dfi_phymstr_ack,
//     output wire                         dfi_phymstr_cs,
//     input  wire                         dfi_rdlvl_req,
//     output wire                         dfi_rdlvl_en,
//     input  wire                         dfi_wrlvl_req,
//     output wire                         dfi_wrlvl_en,
//     //========================================================================
//     // Register Configuration Interface (APB)
//     //========================================================================
//     input  wire                         pclk,
//     input  wire                         preset_n,
//     input  wire                         psel,
//     input  wire                         penable,
//     input  wire                         pwrite,
//     input  wire [15:0]                  paddr,
//     input  wire [31:0]                    pwdata,
//     output wire [31:0]                    prdata,
//     output wire                         pready,
//     output wire                         pslverr,
//     //========================================================================
//     // Interrupts
//     //========================================================================
//     output wire                         intr_init_done,
//     output wire                         intr_refresh_err,
//     output wire                         intr_ecc_err,
//     output wire                         intr_training_err,
//     output wire                         intr_parity_err,
//     //========================================================================
//     // Debug
//     //========================================================================
//     output wire [31:0]                  debug_bus,
//     //========================================================================
//     // LOW POWER SIDEBAND SIGNALS
//     //========================================================================	
//     input  wire                         lp_req_pd,
//     input  wire                         wakeup_req,
//     output logic lp_ack,
//     output logic wakeup_ack
// );
 
//     //========================================================================
//     // Internal Signals
//     //========================================================================
//     // Clock domains
//     wire                                clk;
//     wire                                rst_n;
//     wire                                phy_clk;
//     //============================================================
//     // SYS_CLK domain: AXI command generation
//     //============================================================
//     logic [ADDR_WIDTH-1:0] cmd_addr;
//     logic [3:0]            cmd_type;
//     logic                  cmd_valid;
//     wire                   cmd_ready;
//     logic [7:0]            cmd_id;

//     //============================================================
//     // Command CDC FIFO: SYS_CLK -> DFI_CLK
//     //============================================================
//     localparam CMD_FIFO_WIDTH = ADDR_WIDTH + 4 + 8;

//     wire [CMD_FIFO_WIDTH-1:0] cmd_fifo_wr_data;
//     wire [CMD_FIFO_WIDTH-1:0] cmd_fifo_rd_data;
//     wire                      cmd_fifo_wr_en;
//     wire                      cmd_fifo_rd_en;
//     wire                      cmd_fifo_full;
//     wire                      cmd_fifo_empty;

//     wire [ADDR_WIDTH-1:0] sched_cmd_addr;
//     wire [3:0]            sched_cmd_type;
//     wire [7:0]            sched_cmd_id;
//     wire                  sched_cmd_valid;
//     wire                  sched_cmd_ready;

//     // Scheduler status returned to SYS_CLK domain
//     wire cmd_activity_dfi;
//     wire rd_activity_dfi;
//     wire wr_activity_dfi;
//     wire lp_idle_dfi;

//     logic cmd_activity_meta, cmd_activity_sys;
//     logic rd_activity_meta,  rd_activity_sys;
//     logic wr_activity_meta,  wr_activity_sys;
//     logic lp_idle_meta,      lp_idle_sys;

//     wire cmd_activity = cmd_activity_sys;
//     wire rd_activity  = rd_activity_sys;
//     wire wr_activity  = wr_activity_sys;
//     wire lp_idle      = lp_idle_sys;
 
 
// // AXI4 command capture
// logic                  aw_pending;
// logic [ADDR_WIDTH-1:0] awaddr_q;
// logic [ID_WIDTH-1:0]   awid_q;
 
// logic                  ar_pending;
// logic [ADDR_WIDTH-1:0] araddr_q;
// logic [ID_WIDTH-1:0]   arid_q;
 
 
// logic [ID_WIDTH-1:0]   bid_q;
// logic [1:0]            bresp_q;
// logic                  bvalid_q;
 
// //========================================================================
// // AXI4 Write Response FSM
// //========================================================================
// typedef enum logic [1:0] {
//     WR_IDLE      = 2'b00,
//     WR_WAIT_WDATA= 2'b01,
//     WR_WRITE_CMD = 2'b10,
//     WR_BRESP     = 2'b11
// } wr_state_t;
 
// wr_state_t wr_state;
 
// logic [7:0] awlen_q;
 
    
//     // Bank state tracking
//     wire [NUM_CHANNELS-1:0]             bank_active [0:NUM_BANKS-1];
//     wire [NUM_CHANNELS-1:0]             row_open;
//     wire [ROW_WIDTH-1:0]                open_row [0:NUM_CHANNELS-1];
//     // Timing tracking
//     wire [15:0]                         timing_counter [0:15];
//     wire                                timing_met [0:15];
//     // Data path signals
//     wire [DATA_WIDTH-1:0]               rd_data_fifo [0:7];
//     wire [DATA_WIDTH-1:0]               wr_data_fifo [0:7];
//     wire [2:0]                          rd_fifo_wptr, rd_fifo_rptr;
//     wire [2:0]                          wr_fifo_wptr, wr_fifo_rptr;
//     wire                                rd_fifo_empty, rd_fifo_full;
//     wire                                wr_fifo_empty, wr_fifo_full;
//     // ECC signals
//     wire [DATA_WIDTH+7:0]               ecc_encoded_data;
//     wire [DATA_WIDTH-1:0]               ecc_decoded_data;
//     wire [7:0]                            ecc_syndrome;
//      wire [7:0]                            err_count;
//     wire                                  ecc_err_detected;
//     wire                                  ecc_err_corrected;
//     // Training signals
//     wire [7:0]                            ca_training_result [0:NUM_CHANNELS-1];
//     wire [7:0]                            rd_gate_training_result [0:NUM_CHANNELS-1];
//     wire [7:0]                            rd_dq_training_result [0:NUM_CHANNELS-1][0:15];
//     wire [7:0]                            wr_dq_training_result [0:NUM_CHANNELS-1][0:15];
//     wire                                  training_done;
//     wire                                  training_error;
//     // Low power signals
//    // wire                                  lp_req_pd;
//     wire                                  lp_req_sr;
//     wire                                  lp_req_ds;
// //   wire                                  lp_ack;
//     wire [3:0]                                lp_state ;
//     // Refresh signals
//     wire [15:0]                           refresh_counter;
//     wire                                  refresh_pending;
//     wire                                  refresh_urgent;
//     wire [7:0]                            refresh_row_addr;
//     // Configuration registers
//     wire [31:0]                           reg_ctrl0;
//     wire [31:0]                           reg_ctrl1;
//     wire [31:0]                           reg_ctrl2;
//     wire [31:0]                           reg_ctrl3;
//     wire [31:0]                           reg_timing0;
//     wire [31:0]                           reg_timing1;
//     wire [31:0]                           reg_status;
//     wire [31:0]                           reg_ecc_cfg;
//     wire [31:0]                           reg_lp_cfg;

//     //============================================================
//     // Quasi-static configuration crossing: APB -> DFI
//     // Software must update these registers only while the scheduler
//     // is quiescent; these 2-stage bus synchronizers do not provide
//     // an atomic multi-bit configuration handshake.
//     //============================================================
//     logic [31:0] reg_timing0_meta, reg_timing0_dfi;
//     logic [3:0]  sched_policy_meta, sched_policy_dfi;
//     logic [1:0]  qos_meta, qos_dfi;

//     // Refresh control crossing: SYS -> DFI
//     logic refresh_pending_meta, refresh_pending_dfi;
//     logic refresh_urgent_meta,  refresh_urgent_dfi;
//     logic [7:0] refresh_row_meta, refresh_row_dfi;
//     // Interrupt aggregation
//     wire                                  intr_status [0:7];
//     wire                                  intr_mask [0:7];
//     wire                                  intr_raw;
//     wire                                  intr_final;
//     // Debug signals
//     wire [31:0]                           debug_cmd_cnt;
//     wire [31:0]                           debug_rd_cnt;
//     wire [31:0]                           debug_wr_cnt;
//     wire [31:0]                           debug_err_cnt;
//     //========================================================================
//     // Clock and Reset Generation
//     //========================================================================
//     assign clk = sys_clk;
//     assign rst_n = sys_rst_n;
//     assign phy_clk = dfi_clk;

// /*
// assign s_axi_awlen   = 8'b00000000; 
// assign s_axi_awsize  = 3'b000;
// assign s_axi_awburst = 2'b00;
// assign s_axi_arlen   = 8'b00000000; 
// assign s_axi_arsize  = 3'b000; 
// assign s_axi_arburst = 2'b00;
// //assign s_axi_awid    = '0;
// assign s_axi_awlock  = 1'b0;
// assign s_axi_awcache = 4'b0000;
// assign s_axi_awprot  = 3'b000;
// assign s_axi_awqos   = 4'b0000;
 
// //assign s_axi_arid    = '0;
// assign s_axi_arlock  = 1'b0;
// assign s_axi_arcache = 4'b0000;
// assign s_axi_arprot  = 3'b000;
// assign s_axi_arqos   = 4'b0000;
// */
// wire rd_cmd_accept = ar_pending && (wr_state != WR_WRITE_CMD) && cmd_ready;

// //========================================================================
// // AXI4 -> Command Scheduler Interface
// //========================================================================
 
// //// Accept one AXI command at a time.
// //// Give WRITE address channel priority over READ address channel.
// //assign s_axi_awready = !aw_pending && !ar_pending;
// //assign s_axi_arready = !aw_pending && !ar_pending && !s_axi_awvalid;
 
// assign s_axi_awready = (wr_state == WR_IDLE) &&
//                        !ar_pending &&
//                        !bvalid_q &&
//                        (lp_state != 4'b0010);
 
// assign s_axi_arready = (wr_state == WR_IDLE) &&
//                        !aw_pending &&
//                        !bvalid_q &&
//                        !s_axi_awvalid &&
//                        !ar_pending;
 
 
// //========================================================================
// // AXI4 Write Transaction FSM
// //========================================================================
// always_ff @(posedge clk or negedge rst_n) begin
//     if (!rst_n) begin
//         wr_state   <= WR_IDLE;
 
//         aw_pending <= 1'b0;
//         awaddr_q   <= '0;
//         awid_q     <= '0;
 
//         ar_pending <= 1'b0;
//         araddr_q   <= '0;
//         arid_q     <= '0;
 
//         bid_q      <= '0;
//         bresp_q    <= 2'b00;
//         bvalid_q   <= 1'b0;
//     end
//     else begin
 
//         case (wr_state)
 
//             //============================================================
//             // IDLE
//             //============================================================
//             WR_IDLE: begin
 
//                 if (s_axi_awvalid && s_axi_awready) begin
//                     aw_pending <= 1'b1;
//                     awaddr_q   <= s_axi_awaddr;
//                     awid_q     <= s_axi_awid;
 
//                     wr_state   <= WR_WAIT_WDATA;
 
//                     $display("[%0t] TOP: AW CAPTURED addr=%h id=%h",
//                              $time, s_axi_awaddr, s_axi_awid);
//                 end
 
//                 else if (s_axi_arvalid && s_axi_arready) begin
//                     ar_pending <= 1'b1;
//                     araddr_q   <= s_axi_araddr;
//                     arid_q     <= s_axi_arid;
//                 end
//             end
 
 
//             //============================================================
//             // WAIT FOR COMPLETE WRITE DATA
//             //============================================================
//             WR_WAIT_WDATA: begin
 
//                 if (s_axi_wvalid && s_axi_wready && s_axi_wlast) begin
 
//                     $display("[%0t] TOP: WDATA COMPLETE",
//                              $time);
 
//                     wr_state <= WR_WRITE_CMD;
//                 end
//             end
 
 
//             //============================================================
//             // ISSUE LPDDR WRITE COMMAND
//             //============================================================
//             WR_WRITE_CMD: begin
 
//                 if (cmd_valid && cmd_ready) begin
 
//                     aw_pending <= 1'b0;
 
//                     $display("[%0t] TOP: LPDDR WRITE CMD ACCEPTED",
//                              $time);
 
//                     bid_q      <= awid_q;
//                     bresp_q    <= 2'b00;       // OKAY
//                     bvalid_q   <= 1'b1;
 
//                     wr_state   <= WR_BRESP;
//                 end
//             end
 
 
//             //============================================================
//             // AXI WRITE RESPONSE
//             //============================================================
//             WR_BRESP: begin
 
//                 if (bvalid_q && s_axi_bready) begin
 
//                     bvalid_q <= 1'b0;
//                     wr_state <= WR_IDLE;
 
//                     $display("[%0t] TOP: AXI B RESPONSE ACCEPTED BID=%h BRESP=%h",
//                              $time, bid_q, bresp_q);
//                 end
//             end
 
 
//             default: begin
//                 wr_state <= WR_IDLE;
//             end
 
//         endcase
// if(rd_cmd_accept) ar_pending <= 1'b0;
//     end
// end
 
 
// // AXI Write Response outputs
// assign s_axi_bid    = bid_q;
// assign s_axi_bresp  = bresp_q;
// assign s_axi_bvalid = bvalid_q;
 
 
// //========================================================================
// // Generate command for command scheduler
// //========================================================================
// always_comb begin
 
//     // Defaults
//     cmd_addr  = '0;
//     cmd_type  = 4'b0000;
//     cmd_valid = 1'b0;
//     cmd_id    = 8'h00;
 
//     //============================================================
//     // WRITE command
//     // Only issue after complete WDATA burst is received
//     //============================================================
//     if (wr_state == WR_WRITE_CMD) begin
 
//         cmd_addr  = awaddr_q;
//         cmd_type  = 4'b0010;
//         cmd_valid = 1'b1;
 
//         // AXI ID = 4 bits
//         // Scheduler ID = 8 bits
//         cmd_id    = {{(8-ID_WIDTH){1'b0}}, awid_q};
//     end
 
//     //============================================================
//     // READ command
//     //============================================================
//     else if (ar_pending) begin
 
//         cmd_addr  = araddr_q;
//         cmd_type  = 4'b0001;
//         cmd_valid = 1'b1;
 
//         cmd_id    = {{(8-ID_WIDTH){1'b0}}, arid_q};
//     end
 
// end
 
    
//     //============================================================
//     // Command CDC FIFO: SYS_CLK -> DFI_CLK
//     //============================================================
//     assign cmd_fifo_wr_data = {cmd_id, cmd_type, cmd_addr};

//     // AXI command is accepted when the CDC FIFO has space.
//     assign cmd_ready       = !cmd_fifo_full;
//     assign cmd_fifo_wr_en  = cmd_valid && cmd_ready;

//     lpddr5c_cdc_fifo #(
//         .DATA_WIDTH (CMD_FIFO_WIDTH),
//         .FIFO_DEPTH (8)
//     ) u_cmd_cdc_fifo (
//         .wr_clk   (clk),
//         .wr_rst_n (rst_n),
//         .wr_en    (cmd_fifo_wr_en),
//         .wr_data  (cmd_fifo_wr_data),
//         .wr_full  (cmd_fifo_full),

//         .rd_clk   (phy_clk),
//         .rd_rst_n (dfi_rst_n),
//         .rd_en    (cmd_fifo_rd_en),
//         .rd_data  (cmd_fifo_rd_data),
//         .rd_empty (cmd_fifo_empty)
//     );

//     assign {sched_cmd_id, sched_cmd_type, sched_cmd_addr} = cmd_fifo_rd_data;
//     assign sched_cmd_valid = !cmd_fifo_empty;
//     assign cmd_fifo_rd_en  = sched_cmd_valid && sched_cmd_ready;

//     //============================================================
//     // APB configuration and SYS refresh signals -> DFI domain
//     //============================================================
//     always_ff @(posedge phy_clk or negedge dfi_rst_n) begin
//         if (!dfi_rst_n) begin
//             reg_timing0_meta       <= '0;
//             reg_timing0_dfi        <= '0;
//             sched_policy_meta      <= '0;
//             sched_policy_dfi       <= '0;
//             qos_meta               <= '0;
//             qos_dfi                <= '0;
//             refresh_pending_meta   <= 1'b0;
//             refresh_pending_dfi    <= 1'b0;
//             refresh_urgent_meta    <= 1'b0;
//             refresh_urgent_dfi     <= 1'b0;
//             refresh_row_meta       <= '0;
//             refresh_row_dfi        <= '0;
//         end else begin
//             reg_timing0_meta       <= reg_timing0;
//             reg_timing0_dfi        <= reg_timing0_meta;
//             sched_policy_meta      <= reg_ctrl0[3:0];
//             sched_policy_dfi       <= sched_policy_meta;
//             qos_meta               <= reg_ctrl1[1:0];
//             qos_dfi                <= qos_meta;

//             refresh_pending_meta   <= refresh_pending;
//             refresh_pending_dfi    <= refresh_pending_meta;
//             refresh_urgent_meta    <= refresh_urgent;
//             refresh_urgent_dfi    <= refresh_urgent_meta;
//             refresh_row_meta       <= refresh_row_addr;
//             refresh_row_dfi        <= refresh_row_meta;
//         end
//     end

//     //============================================================
//     // Scheduler status: DFI -> SYS domain
//     //============================================================
//     always_ff @(posedge clk or negedge rst_n) begin
//         if (!rst_n) begin
//             cmd_activity_meta <= 1'b0;
//             cmd_activity_sys  <= 1'b0;
//             rd_activity_meta  <= 1'b0;
//             rd_activity_sys   <= 1'b0;
//             wr_activity_meta  <= 1'b0;
//             wr_activity_sys   <= 1'b0;
//             lp_idle_meta      <= 1'b1;
//             lp_idle_sys       <= 1'b1;
//         end else begin
//             cmd_activity_meta <= cmd_activity_dfi;
//             cmd_activity_sys  <= cmd_activity_meta;
//             rd_activity_meta  <= rd_activity_dfi;
//             rd_activity_sys   <= rd_activity_meta;
//             wr_activity_meta  <= wr_activity_dfi;
//             wr_activity_sys   <= wr_activity_meta;
//             lp_idle_meta      <= lp_idle_dfi;
//             lp_idle_sys       <= lp_idle_meta;
//         end
//     end

//     //========================================================================
//     // Register Configuration Block (APB Interface)
//     //========================================================================
//     lpddr5c_reg_cfg u_reg_cfg (
//         .pclk           (pclk),
//         .preset_n       (preset_n),
//         .psel           (psel),
//         .penable        (penable),
//         .pwrite         (pwrite),
//         .paddr          (paddr),
//         .pwdata         (pwdata),
//         .prdata         (prdata),
//         .pready         (pready),
//         .pslverr        (pslverr),
//         // Register outputs
//         .reg_ctrl0      (reg_ctrl0),
//         .reg_ctrl1      (reg_ctrl1),
//         .reg_ctrl2      (reg_ctrl2),
//         .reg_ctrl3      (reg_ctrl3),
//         .reg_timing0    (reg_timing0),
//         .reg_timing1    (reg_timing1),
//         .reg_ecc_cfg    (reg_ecc_cfg),
//         .reg_lp_cfg     (reg_lp_cfg),
//         .ecc_err_count  (err_count),
//         // Status inputs
//         .reg_status     (reg_status),
//         .training_done  (training_done),
//         .training_error (training_error),
//         .lp_state       (lp_state[0]),
//         .refresh_pending(refresh_pending),
//         .refresh_counter(refresh_counter)
 
//     );
//     //========================================================================
//     // Command Scheduler
//     //========================================================================
//     lpddr5c_cmd_scheduler #(
//         .ADDR_WIDTH      (ADDR_WIDTH),
//         .NUM_CHANNELS    (NUM_CHANNELS),
//         .NUM_BANKS       (NUM_BANKS),
//         .NUM_BANK_GROUPS (NUM_BANK_GROUPS),
//         .ROW_WIDTH       (ROW_WIDTH),
//         .COL_WIDTH       (COL_WIDTH)
//     ) u_cmd_scheduler (
//         // Scheduler runs entirely in DFI_CLK domain
//         .clk             (phy_clk),
//         .rst_n           (dfi_rst_n),

//         // Synchronized configuration
//         .timing_params   (reg_timing0_dfi),
//         .sched_policy    (sched_policy_dfi),
//         .qos_en          (qos_dfi),

//         // Command from asynchronous command FIFO
//         .cmd_addr        (sched_cmd_addr),
//         .cmd_type        (sched_cmd_type),
//         .cmd_valid       (sched_cmd_valid),
//         .cmd_ready       (sched_cmd_ready),
//         .cmd_id          (sched_cmd_id),

//         // Synchronized refresh control
//         .refresh_req     (refresh_pending_dfi),
//         .refresh_ack     (),
//         .refresh_urgent  (refresh_urgent_dfi),
//         .refresh_row     (refresh_row_dfi),

//         // Bank state (DFI domain)
//         .bank_active     (bank_active),
//         .row_open        (row_open),
//         .open_row        (open_row),

//         // DFI command outputs
//         .dfi_cs_n        (dfi_cs_n),
//         .dfi_cke         (dfi_cke),
//         .dfi_ca          (dfi_ca),
//         .dfi_rw          (dfi_rw),
//         .dfi_addr        (dfi_addr),

//         // DFI-domain status, synchronized back to SYS_CLK above
//         .cmd_activity    (cmd_activity_dfi),
//         .rd_activity     (rd_activity_dfi),
//         .wr_activity     (wr_activity_dfi),
//         .lp_idle         (lp_idle_dfi)
//     );
//     //========================================================================
//     // Read/Write Data Path
//     //========================================================================
//     lpddr5c_data_path #(
//     .DATA_WIDTH      (DATA_WIDTH),
//     .DFI_DATA_WIDTH  (DFI_DATA_WIDTH),
//     .NUM_CHANNELS    (NUM_CHANNELS),
//     .FIFO_DEPTH      (8),
//     .ECC_ENABLE      (ECC_ENABLE)
// ) u_data_path (
//     .sys_clk          (clk),
//     .sys_rst_n        (rst_n),
//     .phy_clk          (phy_clk),
//     .phy_rst_n        (dfi_rst_n),
 
//     //====================================================================
//     // AXI Read interface
//     // Existing internal port names remain axi_*
//     // Top-level interface is s_axi_*
//     //====================================================================
//     .axi_rvalid       (s_axi_rvalid),
//     .axi_rready       (s_axi_rready),
//     .axi_rdata        (s_axi_rdata),
//     .axi_rresp        (s_axi_rresp),
//     .axi_rlast        (s_axi_rlast),
 
//     //====================================================================
//     // AXI Write interface
//     //====================================================================
//     .axi_wvalid       (s_axi_wvalid),
//     .axi_wready       (s_axi_wready),
//     .axi_wdata        (s_axi_wdata),
//     .axi_wstrb        (s_axi_wstrb),
//     .axi_wlast        (s_axi_wlast),
 
//     //====================================================================
//     // DFI interface
//     //====================================================================
//     .dfi_rddata       (dfi_rddata),
//     .dfi_rddata_valid (dfi_rddata_valid),
//     .dfi_wrdata       (dfi_wrdata),
//     .dfi_wrdata_mask  (dfi_wrdata_mask),
//     .dfi_wrdata_en    (dfi_wrdata_en),
//     .dfi_rw (dfi_rw),
 
//     //====================================================================
//     // ECC signals -- unchanged
//     //====================================================================
//     .ecc_cfg          (reg_ecc_cfg),
//     .ecc_err_detected (ecc_err_detected),
//     .ecc_err_corrected(ecc_err_corrected),
//     .err_count(err_count),
 
//     //====================================================================
//     // FIFO status -- unchanged
//     //====================================================================
//     .rd_fifo_empty    (rd_fifo_empty),
//     .rd_fifo_full     (),
//     .wr_fifo_empty    (wr_fifo_empty),
//     .wr_fifo_full     ()
// );
//     //========================================================================
//     // Training Control
//     //========================================================================
//     lpddr5c_training_ctrl #(
//         .NUM_CHANNELS   (NUM_CHANNELS),
//         .DQ_WIDTH       (DQ_WIDTH),
//         .CA_WIDTH       (CA_WIDTH)
//     ) u_training_ctrl (
//         .clk            (clk),
//         .rst_n          (rst_n),
//         // Control
//         .train_start    (reg_ctrl0[4]),
//         .train_mode     (reg_ctrl0[7:5]),
//         .train_done     (training_done),
//         .train_error    (training_error),
//         // DFI training interface
//         .dfi_phymstr_req(dfi_phymstr_req),
//         .dfi_phymstr_ack(dfi_phymstr_ack),
//         .dfi_phymstr_cs (dfi_phymstr_cs),
//         .dfi_rdlvl_req  (dfi_rdlvl_req),
//         .dfi_rdlvl_en   (dfi_rdlvl_en),
//         .dfi_wrlvl_req  (dfi_wrlvl_req),
//         .dfi_wrlvl_en   (dfi_wrlvl_en),
//         // Training results
//         .ca_training_result(ca_training_result),
//         .rd_gate_training_result(rd_gate_training_result),
//         .rd_dq_training_result(rd_dq_training_result),
//         .wr_dq_training_result(wr_dq_training_result)
//     );
//     //========================================================================
//     // Low Power Management
//     //========================================================================
//     lpddr5c_lp_mgmt #(
//         .NUM_CHANNELS   (NUM_CHANNELS)
//     ) u_lp_mgmt (
//         .clk            (clk),
//         .rst_n          (rst_n),
//             .cmd_activity(cmd_activity),
//             .rd_activity(rd_activity),
//             .wr_activity(wr_activity),
//         // Configuration
//         //.lp_cfg         (reg_lp_cfg),
//         // Control
//         .lp_req_pd      (lp_req_pd),
//         .lp_req_sr      (lp_req_sr),
//         .lp_req_ds      (lp_req_ds),
//         .lp_ack         (lp_ack),
//         .lp_state       (lp_state),
//         .wakeup_req     (wakeup_req),
//         .lp_idle(lp_idle),
//         .wakeup_ack(wakeup_ack),
//                  .rd_fifo_empty    (rd_fifo_empty),
//     .wr_fifo_empty    (wr_fifo_empty),
//         // Status
//         .idle_count     (),
//         .sr_entry_count (),
//         .pd_entry_count ()
//     );
//     //========================================================================
//     // Refresh Control
//     //========================================================================
//     lpddr5c_refresh_ctrl u_refresh_ctrl (
//         .clk            (clk),
//         .rst_n          (rst_n),
//         // Configuration
//         .trefi          (reg_timing0[15:0]),
//         .trfc           (reg_timing0[31:16]),
//         // Control
//         .refresh_en     (reg_ctrl0[8]),
//         .refresh_pending(refresh_pending),
//         .refresh_urgent (refresh_urgent),
//         // Status
//         .refresh_counter(refresh_counter),
//         .refresh_row_addr(refresh_row_addr)
//     );
//     //========================================================================
//     // ECC & Parity Generation/Check
//     //========================================================================
//     generate
//         if (ECC_ENABLE) begin : gen_ecc
//             lpddr5c_ecc u_ecc (
//                 .clk            (clk),
//                 .rst_n          (rst_n),
//                 .ecc_en         (reg_ecc_cfg[0]),
//                 .data_in        (),
//                 .data_out       (),
//                 .ecc_in         (),
//                 .ecc_out        (),
//                 .err_detected   (ecc_err_detected),
//                 .err_corrected  (ecc_err_corrected),
//                 .err_location   ()
//             );
//         end
//     endgenerate
//     //========================================================================
//     // Interrupt Aggregation
//     //========================================================================
//     assign intr_status[0] = training_done;
//     assign intr_status[1] = training_error;
//     assign intr_status[2] = refresh_urgent;
//     assign intr_status[3] = ecc_err_detected;
//     assign intr_status[4] = |pslverr;  // APB error
//     assign intr_status[5] = 1'b0;  // Reserved
//     assign intr_status[6] = 1'b0;  // Reserved
//     assign intr_status[7] = 1'b0;  // Reserved
//     assign intr_init_done   = training_done;
//     assign intr_refresh_err = refresh_urgent;
//     assign intr_ecc_err     = ecc_err_detected;
//     assign intr_training_err= training_error;
//     assign intr_parity_err  = 1'b0;  // TODO: Connect parity error
//     //========================================================================
//     // Debug Bus
//     //========================================================================
//     assign debug_bus = {
//         training_done,
//         training_error,
//         refresh_pending,
//         ecc_err_detected,
//         lp_state[0],
//         3'b0,
//         refresh_counter[7:0]
//     };
 
// endmodule // lpddr5c_top

