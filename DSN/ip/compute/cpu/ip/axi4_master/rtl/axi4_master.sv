

// -----------------------------------------------------------------------------
// axi4_master.sv
//
// Generic, synthesizable AXI4 master bridge.
//
// Presents a simple command/streaming interface to user logic and drives a
// fully-compliant AXI4 master interface (AW/W/B/AR/R channels, full width
// AWID/ARID, AWLEN/ARLEN, AWSIZE/ARSIZE, AWBURST/ARBURST).
//
// Design choices (deliberate, for correctness over max throughput):
//   - One outstanding write transaction and one outstanding read transaction
//     at a time. No AW/W pipelining across bursts, no exclusive access,
//     no AxUSER/WUSER/RUSER/BUSER signals (optional in the AXI4 spec).
//   - Every *VALID output is generated only from internal FSM state and/or
//     registered data - never combinationally from the corresponding
//     *READY input of the same channel, nor from the peer's ready signals.
//     This satisfies the AXI4 deadlock-avoidance rule ("VALID must not
//     wait for READY").
//   - Write data (W channel) and read data (R channel) are forwarded to the
//     user interface combinationally (valid/ready pass-through) so bursts
//     run back-to-back with no bubble cycles, as long as the user side and
//     the slave side can both keep up.
// -----------------------------------------------------------------------------
module axi4_master #(
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 128,
    parameter int ID_WIDTH   = 4
) (
    input  logic                    aclk,
    input  logic                    aresetn,        // active-low, synchronous to aclk

    // ------------------------------------------------------------------
    // Simple write-command interface (user side)
    // ------------------------------------------------------------------
    input  logic                    wr_req,
    output logic                    wr_req_ack,      // command accepted this cycle
    input  logic [ADDR_WIDTH-1:0]   wr_addr,
    input  logic [7:0]              wr_len,          // AXI AWLEN encoding: beats-1
    input  logic [2:0]              wr_size,         // AXI AWSIZE encoding: bytes = 1<<size
    input  logic [1:0]              wr_burst,        // 00=FIXED 01=INCR 10=WRAP
    input  logic [ID_WIDTH-1:0]     wr_id,

    input  logic                    wdata_valid,
    output logic                    wdata_ready,
    input  logic [DATA_WIDTH-1:0]   wdata,
    input  logic [DATA_WIDTH/8-1:0] wstrb,

    output logic                    wr_resp_valid,
    input  logic                    wr_resp_ready,
    output logic [1:0]              wr_resp,         // BRESP
    output logic [ID_WIDTH-1:0]     wr_resp_id,

    // ------------------------------------------------------------------
    // Simple read-command interface (user side)
    // ------------------------------------------------------------------
    input  logic                    rd_req,
    output logic                    rd_req_ack,
    input  logic [ADDR_WIDTH-1:0]   rd_addr,
    input  logic [7:0]              rd_len,
    input  logic [2:0]              rd_size,
    input  logic [1:0]              rd_burst,
    input  logic [ID_WIDTH-1:0]     rd_id,

    output logic                    rdata_valid,
    input  logic                    rdata_ready,
    output logic [DATA_WIDTH-1:0]   rdata,
    output logic                    rlast,
    output logic [1:0]              rresp,
    output logic [ID_WIDTH-1:0]     rid_out,

    // ------------------------------------------------------------------
    // AXI4 master ports
    // ------------------------------------------------------------------
    output logic [ID_WIDTH-1:0]     m_axi_awid,
    output logic [ADDR_WIDTH-1:0]   m_axi_awaddr,
    output logic [7:0]              m_axi_awlen,
    output logic [2:0]              m_axi_awsize,
    output logic [1:0]              m_axi_awburst,
    output logic                    m_axi_awlock,
    output logic [3:0]              m_axi_awcache,
    output logic [2:0]              m_axi_awprot,
    output logic [3:0]              m_axi_awqos,
    output logic                    m_axi_awvalid,
    input  logic                    m_axi_awready,

    output logic [DATA_WIDTH-1:0]   m_axi_wdata,
    output logic [DATA_WIDTH/8-1:0] m_axi_wstrb,
    output logic                    m_axi_wlast,
    output logic                    m_axi_wvalid,
    input  logic                    m_axi_wready,

    input  logic [ID_WIDTH-1:0]     m_axi_bid,
    input  logic [1:0]              m_axi_bresp,
    input  logic                    m_axi_bvalid,
    output logic                    m_axi_bready,

    output logic [ID_WIDTH-1:0]     m_axi_arid,
    output logic [ADDR_WIDTH-1:0]   m_axi_araddr,
    output logic [7:0]              m_axi_arlen,
    output logic [2:0]              m_axi_arsize,
    output logic [1:0]              m_axi_arburst,
    output logic                    m_axi_arlock,
    output logic [3:0]              m_axi_arcache,
    output logic [2:0]              m_axi_arprot,
    output logic [3:0]              m_axi_arqos,
    output logic                    m_axi_arvalid,
    input  logic                    m_axi_arready,

    input  logic [ID_WIDTH-1:0]     m_axi_rid,
    input  logic [DATA_WIDTH-1:0]   m_axi_rdata,
    input  logic [1:0]              m_axi_rresp,
    input  logic                    m_axi_rlast,
    input  logic                    m_axi_rvalid,
    output logic                    m_axi_rready
);

  // Fixed / unused attribute outputs (no exclusive access, normal non-cacheable
  // bufferable, unprivileged/secure/data access, no QoS differentiation).
  assign m_axi_awlock  = 1'b0;
  assign m_axi_awcache = 4'b0011;
  assign m_axi_awprot  = 3'b000;
  assign m_axi_awqos   = 4'b0000;
  assign m_axi_arlock  = 1'b0;
  assign m_axi_arcache = 4'b0011;
  assign m_axi_arprot  = 3'b000;
  assign m_axi_arqos   = 4'b0000;

  // ---------------------------------------------------------------------
  // Write channel FSM: AW -> W(beats) -> B
  // ---------------------------------------------------------------------
  typedef enum logic [1:0] {WR_IDLE, WR_AW, WR_DATA, WR_BRESP} wr_state_t;
  wr_state_t wr_state;

  logic [ADDR_WIDTH-1:0] aw_addr_q;
  logic [7:0]            aw_len_q;
  logic [2:0]            aw_size_q;
  logic [1:0]            aw_burst_q;
  logic [ID_WIDTH-1:0]   aw_id_q;
  logic [7:0]            wbeat_cnt;

  assign wr_req_ack = (wr_state == WR_IDLE);

  assign m_axi_awvalid = (wr_state == WR_AW);
  assign m_axi_awaddr  = aw_addr_q;
  assign m_axi_awlen   = aw_len_q;
  assign m_axi_awsize  = aw_size_q;
  assign m_axi_awburst = aw_burst_q;
  assign m_axi_awid    = aw_id_q;

  assign m_axi_wvalid = (wr_state == WR_DATA) && wdata_valid;
  assign m_axi_wdata  = wdata;
  assign m_axi_wstrb  = wstrb;
  assign m_axi_wlast  = (wbeat_cnt == aw_len_q);
  assign wdata_ready  = (wr_state == WR_DATA) && m_axi_wready;

  assign m_axi_bready  = (wr_state == WR_BRESP) && wr_resp_ready;
  assign wr_resp_valid = (wr_state == WR_BRESP) && m_axi_bvalid;
  assign wr_resp       = m_axi_bresp;
  assign wr_resp_id    = m_axi_bid;

  always_ff @(posedge aclk or negedge aresetn) begin
    if (!aresetn) begin
      wr_state   <= WR_IDLE;
      aw_addr_q  <= '0;
      aw_len_q   <= '0;
      aw_size_q  <= '0;
      aw_burst_q <= '0;
      aw_id_q    <= '0;
      wbeat_cnt  <= '0;
    end else begin
      case (wr_state)
        WR_IDLE: begin
          if (wr_req) begin
            aw_addr_q  <= wr_addr;
            aw_len_q   <= wr_len;
            aw_size_q  <= wr_size;
            aw_burst_q <= wr_burst;
            aw_id_q    <= wr_id;
            wbeat_cnt  <= '0;
            wr_state   <= WR_AW;
          end
        end

        WR_AW: begin
          if (m_axi_awvalid && m_axi_awready)
            wr_state <= WR_DATA;
        end

        WR_DATA: begin
          if (m_axi_wvalid && m_axi_wready) begin
            if (m_axi_wlast)
              wr_state  <= WR_BRESP;
            else
              wbeat_cnt <= wbeat_cnt + 8'd1;
          end
        end

        WR_BRESP: begin
          if (m_axi_bready && m_axi_bvalid)
            wr_state <= WR_IDLE;
        end

        default: wr_state <= WR_IDLE;
      endcase
    end
  end

  // ---------------------------------------------------------------------
  // Read channel FSM: AR -> R(beats)
  // ---------------------------------------------------------------------
  typedef enum logic [1:0] {RD_IDLE, RD_AR, RD_DATA} rd_state_t;
  rd_state_t rd_state;

  logic [ADDR_WIDTH-1:0] ar_addr_q;
  logic [7:0]            ar_len_q;
  logic [2:0]            ar_size_q;
  logic [1:0]            ar_burst_q;
  logic [ID_WIDTH-1:0]   ar_id_q;

  assign rd_req_ack = (rd_state == RD_IDLE);

  assign m_axi_arvalid = (rd_state == RD_AR);
  assign m_axi_araddr  = ar_addr_q;
  assign m_axi_arlen   = ar_len_q;
  assign m_axi_arsize  = ar_size_q;
  assign m_axi_arburst = ar_burst_q;
  assign m_axi_arid    = ar_id_q;

  assign m_axi_rready = (rd_state == RD_DATA) && rdata_ready;
  assign rdata_valid  = (rd_state == RD_DATA) && m_axi_rvalid;
  assign rdata        = m_axi_rdata;
  assign rlast        = m_axi_rlast;
  assign rresp        = m_axi_rresp;
  assign rid_out       = m_axi_rid;

  always_ff @(posedge aclk or negedge aresetn) begin
    if (!aresetn) begin
      rd_state   <= RD_IDLE;
      ar_addr_q  <= '0;
      ar_len_q   <= '0;
      ar_size_q  <= '0;
      ar_burst_q <= '0;
      ar_id_q    <= '0;
    end
    else begin

      /*$display("[%0t] AXI MASTER READ: rd_state=%0d rd_req=%b rd_req_ack=%b ARVALID=%b ARREADY=%b",
               $time,
               rd_state,
               rd_req,
               rd_req_ack,
               m_axi_arvalid,
               m_axi_arready);
*/
      case (rd_state)

        RD_IDLE: begin
          if (rd_req) begin
            ar_addr_q  <= rd_addr;
            ar_len_q   <= rd_len;
            ar_size_q  <= rd_size;
            ar_burst_q <= rd_burst;
            ar_id_q    <= rd_id;
            rd_state   <= RD_AR;
          end
        end

        RD_AR: begin
          if (m_axi_arvalid && m_axi_arready)
            rd_state <= RD_DATA;
        end

        RD_DATA: begin
          if (m_axi_rvalid && m_axi_rready && m_axi_rlast)
            rd_state <= RD_IDLE;
        end

        default: rd_state <= RD_IDLE;

      endcase
    end
  end

endmodule
