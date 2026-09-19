

// -----------------------------------------------------------------------------
// axi4_slave.sv
//
// Generic, synthesizable AXI4 slave with an internal byte-addressable memory.
//
// Implements all 5 AXI4 channels (AW/W/B/AR/R) with full AWID/ARID,
// AWLEN/ARLEN, AWSIZE/ARSIZE, AWBURST/ARBURST support, including correct
// FIXED / INCR / WRAP address generation. WRAP address math is done purely
// with shifts and masks (never a runtime divide or multiply), which keeps it
// both correct and synthesizable.
//
// Design choices (deliberate, for correctness over max throughput):
//   - One outstanding write burst and one outstanding read burst in flight
//     at a time (no overlapping bursts, no out-of-order responses,
//     no exclusive access, no AxUSER/WUSER/RUSER/BUSER signals).
//   - AWREADY is asserted whenever idle, independent of WVALID; WREADY is
//     only asserted after a matching AW has been captured. This is legal
//     AXI4 behavior and cannot deadlock a compliant master (a master must
//     keep WVALID asserted until accepted, and must issue both AW and W for
//     every write it starts).
//   - Every *VALID/*READY output is generated only from internal FSM state
//     and registers - never combinationally from the opposite channel's
//     ready in a way that could form a wait-on-ready loop.
//   - Out-of-range addresses return DECERR instead of writing/reading
//     undefined memory or locking up.
// -----------------------------------------------------------------------------
module axi4_slave #(
    parameter int ADDR_WIDTH     = 32,
    parameter int DATA_WIDTH     = 32,
    parameter int ID_WIDTH       = 4,
    parameter int MEM_ADDR_WIDTH = 12   // internal memory = 2**MEM_ADDR_WIDTH words
) (
    input  logic                    aclk,
    input  logic                    aresetn,        // active-low, synchronous to aclk

    // ------------------------------------------------------------------
    // AXI4 slave ports
    // ------------------------------------------------------------------
    input  logic [ID_WIDTH-1:0]     s_axi_awid,
    input  logic [ADDR_WIDTH-1:0]   s_axi_awaddr,
    input  logic [7:0]              s_axi_awlen,
    input  logic [2:0]              s_axi_awsize,
    input  logic [1:0]              s_axi_awburst,
    input  logic                    s_axi_awlock,
    input  logic [3:0]              s_axi_awcache,
    input  logic [2:0]              s_axi_awprot,
    input  logic [3:0]              s_axi_awqos,
    input  logic                    s_axi_awvalid,
    output logic                    s_axi_awready,

    input  logic [DATA_WIDTH-1:0]   s_axi_wdata,
    input  logic [DATA_WIDTH/8-1:0] s_axi_wstrb,
    input  logic                    s_axi_wlast,
    input  logic                    s_axi_wvalid,
    output logic                    s_axi_wready,

    output logic [ID_WIDTH-1:0]     s_axi_bid,
    output logic [1:0]              s_axi_bresp,
    output logic                    s_axi_bvalid,
    input  logic                    s_axi_bready,

    input  logic [ID_WIDTH-1:0]     s_axi_arid,
    input  logic [ADDR_WIDTH-1:0]   s_axi_araddr,
    input  logic [7:0]              s_axi_arlen,
    input  logic [2:0]              s_axi_arsize,
    input  logic [1:0]              s_axi_arburst,
    input  logic                    s_axi_arlock,
    input  logic [3:0]              s_axi_arcache,
    input  logic [2:0]              s_axi_arprot,
    input  logic [3:0]              s_axi_arqos,
    input  logic                    s_axi_arvalid,
    output logic                    s_axi_arready,

    output logic [ID_WIDTH-1:0]     s_axi_rid,
    output logic [DATA_WIDTH-1:0]   s_axi_rdata,
    output logic [1:0]              s_axi_rresp,
    output logic                    s_axi_rlast,
    output logic                    s_axi_rvalid,
    input  logic                    s_axi_rready
);

  localparam int BYTE_OFF  = $clog2(DATA_WIDTH/8);
  localparam logic [1:0] RESP_OKAY   = 2'b00;
  localparam logic [1:0] RESP_DECERR = 2'b11;

  // Internal memory: 2**MEM_ADDR_WIDTH words of DATA_WIDTH bits each.
  logic [DATA_WIDTH-1:0] mem [0:(1<<MEM_ADDR_WIDTH)-1];

  function automatic logic addr_in_range(input logic [ADDR_WIDTH-1:0] a);
    if (ADDR_WIDTH > (MEM_ADDR_WIDTH + BYTE_OFF))
      addr_in_range = (a[ADDR_WIDTH-1:MEM_ADDR_WIDTH+BYTE_OFF] == '0);
    else
      addr_in_range = 1'b1;
  endfunction

  function automatic logic [MEM_ADDR_WIDTH-1:0] word_idx(input logic [ADDR_WIDTH-1:0] a);
    word_idx = a[MEM_ADDR_WIDTH+BYTE_OFF-1:BYTE_OFF];
  endfunction

  // Next AXI address generator for FIXED / INCR / WRAP bursts.
  // WRAP math uses only shifts and masks (num_bytes and beat count are both
  // powers of two for compliant WRAP bursts), so no runtime divider/multiplier
  // is inferred.
  function automatic logic [ADDR_WIDTH-1:0] next_axi_addr(
      input logic [ADDR_WIDTH-1:0] addr,
      input logic [7:0]            len,
      input logic [2:0]            size,
      input logic [1:0]            burst
  );
    logic [ADDR_WIDTH-1:0] num_bytes;
    logic [3:0]            wrap_shift;
    logic [ADDR_WIDTH-1:0] wrap_mask;
    logic [ADDR_WIDTH-1:0] base;
    logic [ADDR_WIDTH-1:0] lin_next;
    begin
      num_bytes = {{(ADDR_WIDTH-1){1'b0}}, 1'b1} << size;
      case (burst)
        2'b00: next_axi_addr = addr; // FIXED
        2'b10: begin                 // WRAP
          case (len)
            8'd1:    wrap_shift = 4'd1;  // 2 beats
            8'd3:    wrap_shift = 4'd2;  // 4 beats
            8'd7:    wrap_shift = 4'd3;  // 8 beats
            8'd15:   wrap_shift = 4'd4;  // 16 beats
            default: wrap_shift = 4'd0;  // non-compliant length: no wrap
          endcase
          wrap_mask     = (num_bytes << wrap_shift) - {{(ADDR_WIDTH-1){1'b0}}, 1'b1};
          base          = addr & ~wrap_mask;
          lin_next      = addr + num_bytes;
          next_axi_addr = ((lin_next & ~wrap_mask) != base) ? base : lin_next;
        end
        default: next_axi_addr = addr + num_bytes; // INCR (2'b01) and reserved (2'b11)
      endcase
    end
  endfunction

  // ---------------------------------------------------------------------
  // Write side FSM: AW -> W(beats) -> B
  // ---------------------------------------------------------------------
  typedef enum logic [1:0] {SW_IDLE, SW_DATA, SW_RESP} sw_state_t;
  sw_state_t sw_state;

  logic [ADDR_WIDTH-1:0] aw_addr_q;
  logic [7:0]            aw_len_q;
  logic [2:0]            aw_size_q;
  logic [1:0]            aw_burst_q;
  logic [ID_WIDTH-1:0]   aw_id_q;
  logic                  aw_err_q;
  logic [1:0]            bresp_q;

  assign s_axi_awready = (sw_state == SW_IDLE);
  assign s_axi_wready  = (sw_state == SW_DATA);
  assign s_axi_bvalid  = (sw_state == SW_RESP);
  assign s_axi_bid     = aw_id_q;
  assign s_axi_bresp   = bresp_q;

  always_ff @(posedge aclk or negedge aresetn) begin
    if (!aresetn) begin
      sw_state   <= SW_IDLE;
      aw_addr_q  <= '0;
      aw_len_q   <= '0;
      aw_size_q  <= '0;
      aw_burst_q <= '0;
      aw_id_q    <= '0;
      aw_err_q   <= 1'b0;
      bresp_q    <= RESP_OKAY;
    end else begin
      case (sw_state)
        SW_IDLE: begin
          if (s_axi_awvalid && s_axi_awready) begin
            aw_addr_q  <= s_axi_awaddr;
            aw_len_q   <= s_axi_awlen;
            aw_size_q  <= s_axi_awsize;
            aw_burst_q <= s_axi_awburst;
            aw_id_q    <= s_axi_awid;
            aw_err_q   <= !addr_in_range(s_axi_awaddr);
            sw_state   <= SW_DATA;
          end
        end

        SW_DATA: begin
          if (s_axi_wvalid && s_axi_wready) begin
            if (addr_in_range(aw_addr_q)) begin
              for (int b = 0; b < DATA_WIDTH/8; b++)
                if (s_axi_wstrb[b])
                  mem[word_idx(aw_addr_q)][b*8 +: 8] <= s_axi_wdata[b*8 +: 8];
            end else begin
              aw_err_q <= 1'b1;
            end

            if (s_axi_wlast) begin
              bresp_q  <= (aw_err_q || !addr_in_range(aw_addr_q)) ? RESP_DECERR : RESP_OKAY;
              sw_state <= SW_RESP;
            end else begin
              aw_addr_q <= next_axi_addr(aw_addr_q, aw_len_q, aw_size_q, aw_burst_q);
            end
          end
        end

        SW_RESP: begin
          if (s_axi_bvalid && s_axi_bready)
            sw_state <= SW_IDLE;
        end

        default: sw_state <= SW_IDLE;
      endcase
    end
  end

  // ---------------------------------------------------------------------
  // Read side FSM: AR -> R(beats)
  // ---------------------------------------------------------------------
  typedef enum logic [1:0] {SR_IDLE, SR_DATA} sr_state_t;
  sr_state_t sr_state;

  logic [ADDR_WIDTH-1:0] ar_addr_q;
  logic [7:0]            ar_len_q;
  logic [2:0]            ar_size_q;
  logic [1:0]            ar_burst_q;
  logic [ID_WIDTH-1:0]   ar_id_q;
  logic [7:0]            rbeat_cnt;

  assign s_axi_arready = (sr_state == SR_IDLE);
  assign s_axi_rvalid  = (sr_state == SR_DATA);
  assign s_axi_rid     = ar_id_q;
  assign s_axi_rlast   = (sr_state == SR_DATA) && (rbeat_cnt == ar_len_q);
  assign s_axi_rresp   = addr_in_range(ar_addr_q) ? RESP_OKAY : RESP_DECERR;
  assign s_axi_rdata   = addr_in_range(ar_addr_q) ? mem[word_idx(ar_addr_q)] : '0;

  always_ff @(posedge aclk or negedge aresetn) begin
    if (!aresetn) begin
      sr_state   <= SR_IDLE;
      ar_addr_q  <= '0;
      ar_len_q   <= '0;
      ar_size_q  <= '0;
      ar_burst_q <= '0;
      ar_id_q    <= '0;
      rbeat_cnt  <= '0;
    end else begin
      case (sr_state)
        SR_IDLE: begin
          if (s_axi_arvalid && s_axi_arready) begin
            ar_addr_q  <= s_axi_araddr;
            ar_len_q   <= s_axi_arlen;
            ar_size_q  <= s_axi_arsize;
            ar_burst_q <= s_axi_arburst;
            ar_id_q    <= s_axi_arid;
            rbeat_cnt  <= '0;
            sr_state   <= SR_DATA;
          end
        end

        SR_DATA: begin
          if (s_axi_rvalid && s_axi_rready) begin
            if (s_axi_rlast) begin
              sr_state <= SR_IDLE;
            end else begin
              ar_addr_q <= next_axi_addr(ar_addr_q, ar_len_q, ar_size_q, ar_burst_q);
              rbeat_cnt <= rbeat_cnt + 8'd1;
            end
          end
        end

        default: sr_state <= SR_IDLE;
      endcase
    end
  end

endmodule
