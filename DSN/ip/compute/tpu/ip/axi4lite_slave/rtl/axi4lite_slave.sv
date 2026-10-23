// SPDX-License-Identifier: GPL-3.0-or-later OR Commercial
//
// AXI4-Lite slave protocol engine (ARM IHI 0022, AXI4 §B.1).
//
// Self-contained: register file (RW / RO / RC / W1C attributes, WSTRB,
// range + alignment check) is inlined. No dependency on axi4lite_regfile.
//
// Five independent channels:
//   * AW (write address)   AWADDR / AWVALID / AWREADY / AWPROT
//   * W  (write data)      WDATA  / WSTRB  / WVALID  / WREADY
//   * B  (write response)  BVALID / BREADY / BRESP
//   * AR (read address)    ARADDR / ARVALID / ARREADY / ARPROT
//   * R  (read data)       RDATA  / RVALID  / RREADY  / RRESP
//
// The slave accepts AW and W in either order or together (full-handshake
// freedom required by §A3.2.1) and only emits B once BOTH have been
// captured. On the read side it accepts an AR, presents R in the next
// cycle, and waits for RREADY before accepting the next AR. RVALID is
// kept high until RREADY (no de-asserting after assertion, §A3.1.2).
//
// Response codes (§A3.4.4):
//   2'b00 OKAY     normal completion
//   2'b01 EXOKAY   N/A on AXI4-Lite (exclusive accesses are AXI-only)
//   2'b10 SLVERR   slave-side error (the integrator marks this through
//                  the optional slv_err_i hint)
//   2'b11 DECERR   address decode error (misaligned or out-of-range
//                  register index).
//
// Per-register attributes (REG_ATTR, 2 bits per register, reg 0 in LSBs):
//   2'b00  RW   read returns stored value; write replaces masked bytes
//   2'b01  RO   read returns rd_payload_i; write ignored (BRESP OKAY)
//   2'b10  RC   read returns stored value AND clears it on read
//   2'b11  W1C  write of '1' clears that bit; '0' is a no-op
//
// Reset: synchronous, active-low (s_axi_aresetn).

module axi4lite_slave #(
  parameter int unsigned ADDR_WIDTH = 8,
  parameter int unsigned DATA_WIDTH = 32,
  parameter int unsigned NUM_REGS   = 16,
  parameter logic [2*NUM_REGS-1:0] REG_ATTR = {2*NUM_REGS{1'b0}},
  parameter logic [NUM_REGS*DATA_WIDTH-1:0] REG_RESET = {NUM_REGS*DATA_WIDTH{1'b0}}
) (
  input  logic                    s_axi_aclk,
  input  logic                    s_axi_aresetn,

  // AW channel
  input  logic [ADDR_WIDTH-1:0]   s_axi_awaddr,
  input  logic [2:0]              s_axi_awprot,
  input  logic                    s_axi_awvalid,
  output logic                    s_axi_awready,

  // W channel
  input  logic [DATA_WIDTH-1:0]   s_axi_wdata,
  input  logic [DATA_WIDTH/8-1:0] s_axi_wstrb,
  input  logic                    s_axi_wvalid,
  output logic                    s_axi_wready,

  // B channel
  output logic [1:0]              s_axi_bresp,
  output logic                    s_axi_bvalid,
  input  logic                    s_axi_bready,

  // AR channel
  input  logic [ADDR_WIDTH-1:0]   s_axi_araddr,
  input  logic [2:0]              s_axi_arprot,
  input  logic                    s_axi_arvalid,
  output logic                    s_axi_arready,

  // R channel
  output logic [DATA_WIDTH-1:0]   s_axi_rdata,
  output logic [1:0]              s_axi_rresp,
  output logic                    s_axi_rvalid,
  input  logic                    s_axi_rready,

  // User-side hooks
  input  logic [NUM_REGS*DATA_WIDTH-1:0] rd_payload_i,
  input  logic                    slv_err_i,
  output logic [NUM_REGS*DATA_WIDTH-1:0] reg_storage_o,
  output logic                    wr_event_o,
  output logic [ADDR_WIDTH-1:0]   wr_event_addr_o,
  output logic                    rd_event_o,
  output logic [ADDR_WIDTH-1:0]   rd_event_addr_o
);

  localparam logic [1:0] RESP_OKAY   = 2'b00;
  localparam logic [1:0] RESP_SLVERR = 2'b10;
  localparam logic [1:0] RESP_DECERR = 2'b11;

  // ------------------------------------------------------------------
  // Write channel buffering.
  // ------------------------------------------------------------------
  logic                    aw_captured_q;
  logic [ADDR_WIDTH-1:0]   aw_addr_q;
  logic                    w_captured_q;
  logic [DATA_WIDTH-1:0]   w_data_q;
  logic [DATA_WIDTH/8-1:0] w_strb_q;
  logic                    bvalid_q;
  logic [1:0]              bresp_q;

  logic write_fire;
  assign write_fire = aw_captured_q && w_captured_q && !bvalid_q;

  assign s_axi_awready = !aw_captured_q;
  assign s_axi_wready  = !w_captured_q;

  assign s_axi_bvalid  = bvalid_q;
  assign s_axi_bresp   = bresp_q;

  // Write port to the inlined register file (one-cycle pulse).
  logic                    rf_wr_en;
  logic [ADDR_WIDTH-1:0]   rf_wr_addr;
  logic [DATA_WIDTH-1:0]   rf_wr_data;
  logic [DATA_WIDTH/8-1:0] rf_wr_strb;
  logic                    rf_wr_out_of_range;

  assign rf_wr_en   = write_fire;
  assign rf_wr_addr = aw_addr_q;
  assign rf_wr_data = w_data_q;
  assign rf_wr_strb = w_strb_q;

  always_ff @(posedge s_axi_aclk) begin
    if (!s_axi_aresetn) begin
      aw_captured_q <= 1'b0;
      aw_addr_q     <= '0;
      w_captured_q  <= 1'b0;
      w_data_q      <= '0;
      w_strb_q      <= '0;
      bvalid_q      <= 1'b0;
      bresp_q       <= RESP_OKAY;
    end else begin
      if (s_axi_awvalid && s_axi_awready) begin
        aw_captured_q <= 1'b1;
        aw_addr_q     <= s_axi_awaddr;
      end
      if (s_axi_wvalid && s_axi_wready) begin
        w_captured_q <= 1'b1;
        w_data_q     <= s_axi_wdata;
        w_strb_q     <= s_axi_wstrb;
      end

      if (write_fire) begin
        bvalid_q <= 1'b1;
        if (rf_wr_out_of_range)      bresp_q <= RESP_DECERR;
        else if (slv_err_i)          bresp_q <= RESP_SLVERR;
        else                         bresp_q <= RESP_OKAY;
      end

      if (bvalid_q && s_axi_bready) begin
        bvalid_q      <= 1'b0;
        aw_captured_q <= 1'b0;
        w_captured_q  <= 1'b0;
        bresp_q       <= RESP_OKAY;
      end
    end
  end

  // ------------------------------------------------------------------
  // Read channel.
  // ------------------------------------------------------------------
  logic                    rd_in_flight_q;
  logic [ADDR_WIDTH-1:0]   ar_addr_q;
  logic [DATA_WIDTH-1:0]   rdata_q;
  logic [1:0]              rresp_q;
  logic                    rvalid_q;

  assign s_axi_arready = !rd_in_flight_q && !rvalid_q;
  assign s_axi_rdata   = rdata_q;
  assign s_axi_rresp   = rresp_q;
  assign s_axi_rvalid  = rvalid_q;

  logic                  rf_rd_en;
  logic [ADDR_WIDTH-1:0] rf_rd_addr;
  logic [DATA_WIDTH-1:0] rf_rd_data;
  logic                  rf_rd_out_of_range;

  assign rf_rd_en   = s_axi_arvalid && s_axi_arready;
  assign rf_rd_addr = s_axi_araddr;

  always_ff @(posedge s_axi_aclk) begin
    if (!s_axi_aresetn) begin
      rd_in_flight_q <= 1'b0;
      ar_addr_q      <= '0;
      rdata_q        <= '0;
      rresp_q        <= RESP_OKAY;
      rvalid_q       <= 1'b0;
    end else begin
      if (s_axi_arvalid && s_axi_arready) begin
        rd_in_flight_q <= 1'b1;
        ar_addr_q      <= s_axi_araddr;
        rdata_q        <= rf_rd_data;
        if (rf_rd_out_of_range)      rresp_q <= RESP_DECERR;
        else if (slv_err_i)          rresp_q <= RESP_SLVERR;
        else                         rresp_q <= RESP_OKAY;
        rvalid_q       <= 1'b1;
      end

      if (rvalid_q && s_axi_rready) begin
        rvalid_q       <= 1'b0;
        rd_in_flight_q <= 1'b0;
        rresp_q        <= RESP_OKAY;
      end
    end
  end

  // ------------------------------------------------------------------
  // Inlined register file (formerly axi4lite_regfile).
  // ------------------------------------------------------------------
  localparam int unsigned BYTES = DATA_WIDTH / 8;
  localparam int unsigned ALIGN = (BYTES <= 1) ? 0 : $clog2(BYTES);
  localparam int unsigned IDX_W = (NUM_REGS <= 1) ? 1 : $clog2(NUM_REGS);

  // Address decode: register index, alignment + range check.
  logic [ADDR_WIDTH-1:0] align_mask;
  assign align_mask = (BYTES > 1) ? (ADDR_WIDTH'(BYTES) - ADDR_WIDTH'(1))
                                  : ADDR_WIDTH'(0);

  logic [ADDR_WIDTH-1:0] wr_idx_full;
  logic [ADDR_WIDTH-1:0] rd_idx_full;
  assign wr_idx_full = rf_wr_addr >> ALIGN;
  assign rd_idx_full = rf_rd_addr >> ALIGN;

  logic wr_align_err, rd_align_err, wr_range_err, rd_range_err;
  assign wr_align_err = (rf_wr_addr & align_mask) != '0;
  assign rd_align_err = (rf_rd_addr & align_mask) != '0;
  assign wr_range_err = wr_idx_full >= ADDR_WIDTH'(NUM_REGS);
  assign rd_range_err = rd_idx_full >= ADDR_WIDTH'(NUM_REGS);

  assign rf_wr_out_of_range = wr_align_err || wr_range_err;
  assign rf_rd_out_of_range = rd_align_err || rd_range_err;

  logic [IDX_W-1:0] wr_idx;
  logic [IDX_W-1:0] rd_idx;
  assign wr_idx = wr_idx_full[IDX_W-1:0];
  assign rd_idx = rd_idx_full[IDX_W-1:0];

  // Storage array.
  logic [DATA_WIDTH-1:0] regs_q [NUM_REGS];

  function automatic logic [DATA_WIDTH-1:0] reg_reset_slice(input integer i);
    reg_reset_slice = REG_RESET[i*DATA_WIDTH +: DATA_WIDTH];
  endfunction

  function automatic logic [DATA_WIDTH-1:0] apply_strb(
      input logic [DATA_WIDTH-1:0]   old_v,
      input logic [DATA_WIDTH-1:0]   new_v,
      input logic [DATA_WIDTH/8-1:0] strb);
    logic [DATA_WIDTH-1:0] r;
    integer b;
    r = old_v;
    for (b = 0; b < BYTES; b = b + 1) begin
      if (strb[b]) r[b*8 +: 8] = new_v[b*8 +: 8];
    end
    apply_strb = r;
  endfunction

  // Per-cycle attribute lookup.
  logic [1:0]  rd_attr_seq;
  logic [1:0]  wr_attr_seq;
  logic [31:0] rd_idx32;
  logic [31:0] wr_idx32;
  assign rd_idx32    = {{(32-IDX_W){1'b0}}, rd_idx};
  assign wr_idx32    = {{(32-IDX_W){1'b0}}, wr_idx};
  assign rd_attr_seq = REG_ATTR[2*rd_idx32 +: 2];
  assign wr_attr_seq = REG_ATTR[2*wr_idx32 +: 2];

  integer i;
  always_ff @(posedge s_axi_aclk) begin
    if (!s_axi_aresetn) begin
      for (i = 0; i < NUM_REGS; i = i + 1)
        regs_q[i] <= reg_reset_slice(i);
    end else begin
      // Read-clear (RC): rd_data below presents the OLD value.
      if (rf_rd_en && !rf_rd_out_of_range && rd_attr_seq == 2'b10) begin
        regs_q[rd_idx] <= '0;
      end

      // Write port. RC clear wins over same-cycle RW write to same reg.
      if (rf_wr_en && !rf_wr_out_of_range) begin
        if (wr_attr_seq == 2'b00) begin
          // RW
          if (!(rf_rd_en && !rf_rd_out_of_range &&
                rd_idx == wr_idx && rd_attr_seq == 2'b10))
            regs_q[wr_idx] <= apply_strb(regs_q[wr_idx], rf_wr_data, rf_wr_strb);
        end else if (wr_attr_seq == 2'b11) begin
          // W1C, byte-strobed
          for (i = 0; i < BYTES; i = i + 1) begin
            if (rf_wr_strb[i])
              regs_q[wr_idx][i*8 +: 8] <=
                  regs_q[wr_idx][i*8 +: 8] & ~rf_wr_data[i*8 +: 8];
          end
        end
        // RO (2'b01) and RC (2'b10) silently ignore writes.
      end
    end
  end

  // Combinational read mux.
  logic [DATA_WIDTH-1:0] rd_payload_word;
  assign rd_payload_word = rd_payload_i[rd_idx32 * DATA_WIDTH +: DATA_WIDTH];

  always_comb begin
    rf_rd_data = '0;
    if (rf_rd_en && !rf_rd_out_of_range) begin
      if (rd_attr_seq == 2'b01) rf_rd_data = rd_payload_word;
      else                      rf_rd_data = regs_q[rd_idx];
    end
  end

  // Pack storage out for user logic.
  genvar gi;
  generate
    for (gi = 0; gi < NUM_REGS; gi = gi + 1) begin : g_pack
      assign reg_storage_o[gi*DATA_WIDTH +: DATA_WIDTH] = regs_q[gi];
    end
  endgenerate

  // ------------------------------------------------------------------
  // Side-band events.
  // ------------------------------------------------------------------
  assign wr_event_o      = rf_wr_en && !rf_wr_out_of_range;
  assign wr_event_addr_o = rf_wr_addr;
  assign rd_event_o      = rf_rd_en && !rf_rd_out_of_range;
  assign rd_event_addr_o = rf_rd_addr;

endmodule
