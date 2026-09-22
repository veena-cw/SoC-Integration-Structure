//=============================================================================
// axi4_to_apb_bridge_cdc.sv
//
// AXI4 (subordinate/slave port, ACLK domain) to APB4 (single completer,
// PCLK domain) protocol bridge with clock-domain-crossing via async FIFOs,
// AND data-width conversion between a wide AXI bus and a narrower APB bus.
//
// Intended use: ACLK @ 400 MHz / AXI_DATA_WIDTH = 128,
//               PCLK @ 100 MHz / APB_DATA_WIDTH = 32
// (any clock ratio works, sync or asynchronous, since crossing is done
// with gray-coded pointer FIFOs; any data-width ratio works as long as
// AXI_DATA_WIDTH is an integer multiple of APB_DATA_WIDTH).
//
// This module ONLY instantiates `asynchronous_fifo` - it assumes you
// already have asynchronous_fifo / fifo_mem / wptr_handler / rptr_handler /
// synchronizer elsewhere in your project and does not redefine them here.
//
// -----------------------------------------------------------------------
// *** UPDATE: apb_slave_decoder integrated ***
// This version drops a single shared PSEL output and instead instantiates
// apb_slave_decoder on the APB (PCLK) side. The decoder is purely
// combinational on PADDR; its outputs are gated by the bridge's own
// SETUP/ACCESS state so a slave's *_psel only pulses while the bridge is
// actually driving the APB bus (see "psel_active" below).
// -----------------------------------------------------------------------
//
// -----------------------------------------------------------------------
// Architecture
// -----------------------------------------------------------------------
//   AXI-side FSM (ACLK/ARESETn):
//     - Accepts one AXI4 burst at a time (single outstanding transaction,
//       same as before - APB has no pipelining).
//     - For every AXI beat (AXI_DATA_WIDTH wide), the beat is split into
//       RATIO = AXI_DATA_WIDTH / APB_DATA_WIDTH sub-transfers, each
//       APB_DATA_WIDTH wide. Each sub-transfer is packed into a "command"
//       word {write, PPROT, sub_addr, sub_wstrb, sub_wdata} and pushed
//       into CMD_FIFO one at a time.
//     - Waits for the matching "response" word ({PSLVERR, sub_PRDATA})
//       to come back out of RESP_FIFO before issuing the next sub-transfer
//       command. Only one command is ever in flight through the FIFOs.
//     - Read sub-responses are reassembled (by byte-lane position) into
//       the full AXI_DATA_WIDTH RDATA word; PSLVERR from any sub-transfer
//       in the beat sets RRESP = SLVERR for that beat.
//     - Write sub-transfer errors are OR-accumulated across the whole
//       burst (all beats, all sub-transfers) into the single BRESP.
//
//   APB-side FSM (PCLK/PRESETn):
//     - Pops one (already APB_DATA_WIDTH-wide) command at a time from
//       CMD_FIFO, drives the standard APB4 SETUP -> ACCESS sequence, then
//       pushes the completer's PSLVERR/PRDATA into RESP_FIFO. This FSM is
//       unaware of AXI beats/bursts at all - it only ever sees
//       APB_DATA_WIDTH-wide transfers.
//     - apb_slave_decoder decodes PADDR[31:16] into one-hot *_psel lines
//       for the 8 low-speed peripherals; the bridge gates each line with
//       its own SETUP/ACCESS activity before driving it out.
//
//   CMD_FIFO  : write side = ACLK, read side = PCLK  (fast -> slow)
//   RESP_FIFO : write side = PCLK, read side = ACLK  (slow -> fast)
//
// -----------------------------------------------------------------------
// Design choices / assumptions (read before integrating)
// -----------------------------------------------------------------------
//   1. Single outstanding AXI transaction at a time; within a burst,
//      single outstanding AXI beat at a time; within a beat, single
//      outstanding APB sub-transfer at a time (strict round-trip through
//      the FIFOs before the next command is pushed).
//   2. Every AXI burst beat becomes RATIO = AXI_DATA_WIDTH/APB_DATA_WIDTH
//      back-to-back APB SETUP+ACCESS sub-transfers.
//   3. AXI_DATA_WIDTH must be an integer multiple of APB_DATA_WIDTH
//      (checked with an elaboration-time $fatal). AXI_DATA_WIDTH ==
//      APB_DATA_WIDTH (RATIO = 1) still works and degenerates to the
//      original 1:1 behaviour.
//   4. Byte lane i (0-based) of the AXI data bus is assumed to map to
//      address (beat_base_addr + i), where beat_base_addr is cur_addr_r
//      aligned down to an AXI_DATA_WIDTH/8 boundary - i.e. standard AXI
//      "data bus lane <-> address" convention. Sub-transfer k therefore
//      targets address beat_base_addr + k*APB_STRB_WIDTH and carries
//      AXI WSTRB/WDATA bits [k*APB_DATA_WIDTH +: APB_DATA_WIDTH].
//      This is correct for full-width AND narrow (WSTRB-masked) AXI
//      writes, since WSTRB is passed through per-lane unchanged.
//   5. Targets APB4 and drives PSTRB directly from the relevant AXI WSTRB
//      slice. Against an APB2/APB3 completer (no PSTRB), byte-granular
//      AXI writes cannot be honoured correctly by this bridge as-is.
//   6. Exclusive access (AWLOCK/ARLOCK) is not supported and is ignored.
//   7. ACLK/ARESETn and PCLK/PRESETn are two genuinely independent clock
//      domains (any frequency ratio, sync or plesiochronous). Each reset
//      is assumed to already be a proper reset for its own domain - this
//      bridge does not generate or re-synchronize reset.
//   8. In AXI-side IDLE, AW has priority over AR when both are valid in
//      the same cycle (can starve reads under sustained back-to-back
//      writes - flag if round-robin arbitration is required instead).
//   9. Slave selection is now done INSIDE the bridge via apb_slave_decoder,
//      decoding PADDR[31:16] into one-hot spi/i2c/uart/gpio/mipi/hdmi/
//      timer/debug_psel lines, matching the Memory_Mapping.xlsx low-speed
//      peripheral block (0x3000_0000 base, 64KB per peripheral). The
//      other P* signals (PADDR/PENABLE/PWRITE/PWDATA/PSTRB/PPROT) still
//      fan out to all completers unchanged; only *_psel is per-slave.
//  10. PSLVERR (single-bit OKAY/ERROR) is reported to AXI as SLVERR
//      (2'b10). AXI DECERR is never generated by this bridge. For a
//      read beat, RRESP = SLVERR if ANY of its RATIO sub-transfers
//      errored; for a write burst, BRESP = SLVERR if ANY sub-transfer
//      in ANY beat of the burst errored. If the decoder matches no
//      slave at all, PREADY will never come back from a completer -
//      integrate a timeout or an explicit "no match" error path at the
//      top level if that protection is required.
//  11. Latency cost of the crossing: each APB_DATA_WIDTH sub-transfer
//      pays two CMD_FIFO pointer-sync stages (2 PCLK cycles) plus two
//      RESP_FIFO pointer-sync stages (2 ACLK cycles), on top of the APB
//      SETUP+ACCESS cycles themselves. A single AXI beat therefore now
//      costs RATIO times that latency (e.g. RATIO=4 for 128b AXI / 32b
//      APB) - this is the unavoidable cost of narrowing the data path.
//  12. CMD_FIFO / RESP_FIFO depth only needs to be 2 given the single-
//      command-in-flight rule; CDC_FIFO_DEPTH defaults to 4 for a little
//      slack and must be a power of two (required by the gray-code
//      pointer scheme used inside your asynchronous_fifo).
//=============================================================================

`default_nettype none



module axi4_to_apb_bridge_cdc #(
    parameter int AXI_ADDR_WIDTH  = 32,
    parameter int AXI_DATA_WIDTH  = 128,   // wide AXI data bus
    parameter int APB_DATA_WIDTH  = 32,    // narrower APB completer data bus
    parameter int AXI_ID_WIDTH    = 4,
    parameter int CDC_FIFO_DEPTH  = 4      // power of two; 2 is the functional minimum
) (
    //-------------------------------------------------------------------
    // AXI4 clock/reset domain (fast, e.g. 400 MHz)
    //-------------------------------------------------------------------
    input  wire                        ACLK,
    input  wire                        ARESETn,

    // Write address channel
    input  wire  [AXI_ID_WIDTH-1:0]    AWID,
    input  wire  [AXI_ADDR_WIDTH-1:0]  AWADDR,
    input  wire  [7:0]                 AWLEN,
    input  wire  [2:0]                 AWSIZE,
    input  wire  [1:0]                 AWBURST,
    input  wire                        AWLOCK,
    input  wire  [3:0]                 AWCACHE,
    input  wire  [2:0]                 AWPROT,
    input  wire                        AWVALID,
    output logic                       AWREADY,

    // Write data channel
    input  wire  [AXI_DATA_WIDTH-1:0]  WDATA,
    input  wire  [(AXI_DATA_WIDTH/8)-1:0] WSTRB,
    input  wire                        WLAST,
    input  wire                        WVALID,
    output logic                       WREADY,

    // Write response channel
    output logic [AXI_ID_WIDTH-1:0]    BID,
    output logic [1:0]                 BRESP,
    output logic                       BVALID,
    input  wire                        BREADY,

    // Read address channel
    input  wire  [AXI_ID_WIDTH-1:0]    ARID,
    input  wire  [AXI_ADDR_WIDTH-1:0]  ARADDR,
    input  wire  [7:0]                 ARLEN,
    input  wire  [2:0]                 ARSIZE,
    input  wire  [1:0]                 ARBURST,
    input  wire                        ARLOCK,
    input  wire  [3:0]                 ARCACHE,
    input  wire  [2:0]                 ARPROT,
    input  wire                        ARVALID,
    output logic                       ARREADY,

    // Read data channel
    output logic [AXI_ID_WIDTH-1:0]    RID,
    output logic [AXI_DATA_WIDTH-1:0]  RDATA,
    output logic [1:0]                 RRESP,
    output logic                       RLAST,
    output logic                       RVALID,
    input  wire                        RREADY,

    //-------------------------------------------------------------------
    // APB4 clock/reset domain (slow, e.g. 100 MHz), narrower data bus
    // than the AXI side. PSEL is no longer a single shared output -
    // apb_slave_decoder generates one *_psel per low-speed peripheral.
    //-------------------------------------------------------------------
    input  wire                        PCLK,
    input  wire                        PRESETn,

    output logic [AXI_ADDR_WIDTH-1:0]  PADDR,
    output logic                       PENABLE,
    output logic                       PWRITE,
    output logic [2:0]                 PPROT,
    output logic [(APB_DATA_WIDTH/8)-1:0] PSTRB,
    output logic [APB_DATA_WIDTH-1:0]  PWDATA,
    input  wire  [APB_DATA_WIDTH-1:0]  PRDATA,
    input  wire                        PREADY,
    input  wire                        PSLVERR,

    // Decoded, per-slave chip-selects (replace the old single PSEL)
    output logic                       spi_psel,
    output logic                       i2c_psel,
    output logic                       uart_psel,
    output logic                       gpio_psel,
    output logic                       mipi_psel,
    output logic                       hdmi_psel,
    output logic                       timer_psel,
    output logic                       debug_psel
);

    //-------------------------------------------------------------------
    // Local parameters
    //-------------------------------------------------------------------
    localparam int AXI_STRB_WIDTH = AXI_DATA_WIDTH / 8;
    localparam int APB_STRB_WIDTH = APB_DATA_WIDTH / 8;

    // Number of APB sub-transfers needed to cover one AXI beat.
    localparam int RATIO          = AXI_DATA_WIDTH / APB_DATA_WIDTH;
    localparam int SUB_CNT_WIDTH  = (RATIO <= 1) ? 1 : $clog2(RATIO);

    // CMD word  : {write, pprot[2:0], sub_addr, sub_wstrb, sub_wdata}  (APB-width payload)
    localparam int CMD_WIDTH   = 1 + 3 + AXI_ADDR_WIDTH + APB_STRB_WIDTH + APB_DATA_WIDTH;
    // RESP word : {slverr, sub_rdata}                                  (APB-width payload)
    localparam int RESP_WIDTH  = 1 + APB_DATA_WIDTH;

    localparam logic [1:0] AXBURST_FIXED = 2'b00;
    localparam logic [1:0] AXBURST_WRAP  = 2'b10;

    localparam logic [1:0] XRESP_OKAY   = 2'b00;
    localparam logic [1:0] XRESP_SLVERR = 2'b10;

    // Elaboration-time sanity check on the width ratio.
    initial begin
        if (APB_DATA_WIDTH > AXI_DATA_WIDTH || (AXI_DATA_WIDTH % APB_DATA_WIDTH) != 0) begin
            $fatal(1, "axi4_to_apb_bridge_cdc: AXI_DATA_WIDTH (%0d) must be an integer multiple of APB_DATA_WIDTH (%0d)",
                   AXI_DATA_WIDTH, APB_DATA_WIDTH);
        end
    end

    //-------------------------------------------------------------------
    // CMD_FIFO (ACLK write -> PCLK read) and RESP_FIFO (PCLK write -> ACLK read)
    // Instances of your existing asynchronous_fifo - not redefined here.
    // NOTE: both FIFOs now carry APB_DATA_WIDTH-wide payloads, not
    // AXI_DATA_WIDTH-wide ones - the AXI-side FSM does the width
    // splitting/reassembly before pushing/after popping.
    //-------------------------------------------------------------------
    logic                   cmd_wr_en, cmd_rd_en, cmd_full, cmd_empty;
    logic [CMD_WIDTH-1:0]   cmd_data_in, cmd_data_out;

    logic                   resp_wr_en, resp_rd_en, resp_full, resp_empty;
    logic [RESP_WIDTH-1:0]  resp_data_in, resp_data_out;

    asynchronous_fifo #(.DEPTH(CDC_FIFO_DEPTH), .DATA_WIDTH(CMD_WIDTH)) cmd_fifo (
        .wclk    (ACLK),
        .wrst_n  (ARESETn),
        .rclk    (PCLK),
        .rrst_n  (PRESETn),
        .w_en    (cmd_wr_en),
        .r_en    (cmd_rd_en),
        .data_in (cmd_data_in),
        .data_out(cmd_data_out),
        .full    (cmd_full),
        .empty   (cmd_empty)
    );

    asynchronous_fifo #(.DEPTH(CDC_FIFO_DEPTH), .DATA_WIDTH(RESP_WIDTH)) resp_fifo (
        .wclk    (PCLK),
        .wrst_n  (PRESETn),
        .rclk    (ACLK),
        .rrst_n  (ARESETn),
        .w_en    (resp_wr_en),
        .r_en    (resp_rd_en),
        .data_in (resp_data_in),
        .data_out(resp_data_out),
        .full    (resp_full),
        .empty   (resp_empty)
    );

    //-------------------------------------------------------------------
    // AXI4-next-address helper (shared function, pure combinational)
    //-------------------------------------------------------------------
    function automatic logic [AXI_ADDR_WIDTH-1:0] axi_next_addr(
        input logic [AXI_ADDR_WIDTH-1:0] addr,
        input logic [1:0]                burst,
        input logic [2:0]                size,
        input logic [7:0]                len
    );
        logic [AXI_ADDR_WIDTH-1:0] num_bytes;
        logic [AXI_ADDR_WIDTH-1:0] addr_mask;
        logic [AXI_ADDR_WIDTH-1:0] wrap_size;
        logic [AXI_ADDR_WIDTH-1:0] wrap_boundary;
        logic [AXI_ADDR_WIDTH-1:0] wrap_last;
        begin
            num_bytes = AXI_ADDR_WIDTH'(1) << size;
            addr_mask = num_bytes - AXI_ADDR_WIDTH'(1);
            unique case (burst)
                AXBURST_FIXED: axi_next_addr = addr;
                AXBURST_WRAP: begin
                    wrap_size     = num_bytes * (AXI_ADDR_WIDTH'(len) + AXI_ADDR_WIDTH'(1));
                    wrap_boundary = addr & ~(wrap_size - AXI_ADDR_WIDTH'(1));
                    wrap_last     = wrap_boundary + wrap_size - num_bytes;
                    if (addr == wrap_last)
                        axi_next_addr = wrap_boundary;
                    else
                        axi_next_addr = (addr & ~addr_mask) + num_bytes;
                end
                default: // INCR and reserved encodings
                    axi_next_addr = (addr & ~addr_mask) + num_bytes;
            endcase
        end
    endfunction

    //=====================================================================
    // AXI-side FSM (ACLK / ARESETn domain)
    //=====================================================================
    typedef enum logic [3:0] {
        A_IDLE,
        A_WR_DATA_WAIT,
        A_WR_PUSH_CMD,
        A_WR_WAIT_RESP,
        A_WR_RESP,
        A_RD_PUSH_CMD,
        A_RD_WAIT_RESP,
        A_RD_RESP
    } axi_state_t;

    axi_state_t axi_state;

    logic [AXI_ID_WIDTH-1:0]   id_r;
    logic [AXI_ADDR_WIDTH-1:0] cur_addr_r;
    logic [7:0]                len_r;
    logic [2:0]                size_r;
    logic [1:0]                burst_r;
    logic [2:0]                prot_r;
    logic [7:0]                beat_cnt_r;

    // Sub-transfer counter: which of the RATIO APB-width chunks of the
    // current AXI beat is currently in flight.
    logic [SUB_CNT_WIDTH-1:0]  sub_cnt_r;

    logic [AXI_DATA_WIDTH-1:0] wdata_reg;      // full AXI beat, captured once
    logic [AXI_STRB_WIDTH-1:0] wstrb_reg;      // full AXI beat, captured once
    logic                      wresp_err_r;    // OR-accumulated over whole burst

    logic [AXI_ID_WIDTH-1:0]   bid_r;
    logic [1:0]                bresp_r;
    logic                      bvalid_r;

    logic [AXI_ID_WIDTH-1:0]   rid_r;
    logic [AXI_DATA_WIDTH-1:0] rdata_r;
    logic [1:0]                rresp_r;
    logic                      rlast_r;
    logic                      rvalid_r;

    // Read reassembly accumulator + per-beat error OR, built up across
    // the RATIO sub-transfers of the beat currently being read.
    logic [AXI_DATA_WIDTH-1:0] rdata_acc_r;
    logic                      rresp_err_acc_r;

    // Beat base address, aligned down to an AXI_DATA_WIDTH/8 boundary -
    // this is byte lane 0 of the AXI data bus for the current beat.
    logic [AXI_ADDR_WIDTH-1:0] beat_base_addr;
    always_comb begin
        beat_base_addr = cur_addr_r & ~(AXI_ADDR_WIDTH'(AXI_STRB_WIDTH - 1));
    end

    // Address, WDATA slice and WSTRB slice for the sub-transfer currently
    // pointed to by sub_cnt_r.
    logic [AXI_ADDR_WIDTH-1:0] sub_addr;
    logic [APB_DATA_WIDTH-1:0] sub_wdata;
    logic [APB_STRB_WIDTH-1:0] sub_wstrb;
    always_comb begin
        sub_addr  = beat_base_addr + AXI_ADDR_WIDTH'(sub_cnt_r) * AXI_ADDR_WIDTH'(APB_STRB_WIDTH);
        sub_wdata = wdata_reg[sub_cnt_r*APB_DATA_WIDTH +: APB_DATA_WIDTH];
        sub_wstrb = wstrb_reg[sub_cnt_r*APB_STRB_WIDTH +: APB_STRB_WIDTH];
    end

    // Next-value of the read reassembly accumulator / error OR, formed
    // combinationally from the just-arrived RESP_FIFO word so it can be
    // used both to update the accumulator AND (on the final sub-transfer)
    // to drive rdata_r/rresp_r in the very same cycle.
    logic [AXI_DATA_WIDTH-1:0] rdata_acc_next;
    logic                      rresp_err_next;
    always_comb begin
        rdata_acc_next = rdata_acc_r;
        rdata_acc_next[sub_cnt_r*APB_DATA_WIDTH +: APB_DATA_WIDTH] = resp_data_out[APB_DATA_WIDTH-1:0];
        rresp_err_next = rresp_err_acc_r | resp_data_out[RESP_WIDTH-1];
    end

    always_ff @(posedge ACLK or negedge ARESETn) begin
        if (!ARESETn) begin
            axi_state       <= A_IDLE;
            id_r            <= '0;
            cur_addr_r      <= '0;
            len_r           <= '0;
            size_r          <= '0;
            burst_r         <= '0;
            prot_r          <= '0;
            beat_cnt_r      <= '0;
            sub_cnt_r       <= '0;
            wdata_reg       <= '0;
            wstrb_reg       <= '0;
            wresp_err_r     <= 1'b0;
            bid_r           <= '0;
            bresp_r         <= XRESP_OKAY;
            bvalid_r        <= 1'b0;
            rid_r           <= '0;
            rdata_r         <= '0;
            rresp_r         <= XRESP_OKAY;
            rlast_r         <= 1'b0;
            rvalid_r        <= 1'b0;
            rdata_acc_r     <= '0;
            rresp_err_acc_r <= 1'b0;
        end else begin
            unique case (axi_state)

                A_IDLE: begin
                    if (AWVALID) begin // write has priority over read
                        id_r        <= AWID;
                        cur_addr_r  <= AWADDR;
                        len_r       <= AWLEN;
                        size_r      <= AWSIZE;
                        burst_r     <= AWBURST;
                        prot_r      <= AWPROT;
                        beat_cnt_r  <= '0;
                        sub_cnt_r   <= '0;
                        wresp_err_r <= 1'b0;
                        axi_state   <= A_WR_DATA_WAIT;
                    end else if (ARVALID) begin
                        id_r            <= ARID;
                        cur_addr_r      <= ARADDR;
                        len_r           <= ARLEN;
                        size_r          <= ARSIZE;
                        burst_r         <= ARBURST;
                        prot_r          <= ARPROT;
                        beat_cnt_r      <= '0;
                        sub_cnt_r       <= '0;
                        rresp_err_acc_r <= 1'b0;
                        axi_state       <= A_RD_PUSH_CMD;
                    end
                end

                A_WR_DATA_WAIT: begin
                    if (WVALID) begin
                        wdata_reg <= WDATA;
                        wstrb_reg <= WSTRB;
                        axi_state <= A_WR_PUSH_CMD;
                    end
                end

                A_WR_PUSH_CMD: begin
                    // cmd_wr_en (comb, below) is high whenever we're here and
                    // !cmd_full, so the push happens on this same edge.
                    if (!cmd_full) axi_state <= A_WR_WAIT_RESP;
                end

                A_WR_WAIT_RESP: begin
                    if (!resp_empty) begin
                        wresp_err_r <= wresp_err_r | resp_data_out[RESP_WIDTH-1];

                        if (sub_cnt_r == SUB_CNT_WIDTH'(RATIO - 1)) begin
                            // Last sub-transfer of this AXI beat done.
                            sub_cnt_r <= '0;
                            if (beat_cnt_r == len_r) begin
                                bid_r     <= id_r;
                                bresp_r   <= (wresp_err_r | resp_data_out[RESP_WIDTH-1]) ? XRESP_SLVERR : XRESP_OKAY;
                                bvalid_r  <= 1'b1;
                                axi_state <= A_WR_RESP;
                            end else begin
                                cur_addr_r <= axi_next_addr(cur_addr_r, burst_r, size_r, len_r);
                                beat_cnt_r <= beat_cnt_r + 8'd1;
                                axi_state  <= A_WR_DATA_WAIT;
                            end
                        end else begin
                            // More sub-transfers remain within this beat.
                            sub_cnt_r <= sub_cnt_r + SUB_CNT_WIDTH'(1);
                            axi_state <= A_WR_PUSH_CMD;
                        end
                    end
                end

                A_WR_RESP: begin
                    if (BREADY) begin
                        bvalid_r  <= 1'b0;
                        axi_state <= A_IDLE;
                    end
                end

                A_RD_PUSH_CMD: begin
                    if (!cmd_full) axi_state <= A_RD_WAIT_RESP;
                end

                A_RD_WAIT_RESP: begin
                    if (!resp_empty) begin
                        rdata_acc_r     <= rdata_acc_next;
                        rresp_err_acc_r <= rresp_err_next;

                        if (sub_cnt_r == SUB_CNT_WIDTH'(RATIO - 1)) begin
                            // Last sub-transfer of this AXI beat done - the
                            // full AXI_DATA_WIDTH word is now assembled in
                            // rdata_acc_next; issue the beat to the AXI side.
                            sub_cnt_r <= '0;
                            rid_r     <= id_r;
                            rdata_r   <= rdata_acc_next;
                            rresp_r   <= rresp_err_next ? XRESP_SLVERR : XRESP_OKAY;
                            rlast_r   <= (beat_cnt_r == len_r);
                            rvalid_r  <= 1'b1;
                            axi_state <= A_RD_RESP;
                        end else begin
                            // More sub-transfers remain within this beat.
                            sub_cnt_r <= sub_cnt_r + SUB_CNT_WIDTH'(1);
                            axi_state <= A_RD_PUSH_CMD;
                        end
                    end
                end

                A_RD_RESP: begin
                    if (RREADY) begin
                        rvalid_r <= 1'b0;
                        if (rlast_r) begin
                            axi_state <= A_IDLE;
                        end else begin
                            cur_addr_r      <= axi_next_addr(cur_addr_r, burst_r, size_r, len_r);
                            beat_cnt_r      <= beat_cnt_r + 8'd1;
                            rresp_err_acc_r <= 1'b0; // fresh accumulator for next beat
                            axi_state       <= A_RD_PUSH_CMD;
                        end
                    end
                end

                default: axi_state <= A_IDLE;

            endcase
        end
    end

    // AXI-side combinational outputs / FIFO handshake
    /*always_comb begin
        AWREADY = (axi_state == A_IDLE) && AWVALID;
        ARREADY = (axi_state == A_IDLE) && !AWVALID && ARVALID;
        WREADY  = (axi_state == A_WR_DATA_WAIT);

        BID    = bid_r;
        BRESP  = bresp_r;
        BVALID = bvalid_r;

        RID    = rid_r;
        RDATA  = rdata_r;
        RRESP  = rresp_r;
        RLAST  = rlast_r;
        RVALID = rvalid_r;

        cmd_wr_en = ((axi_state == A_WR_PUSH_CMD) || (axi_state == A_RD_PUSH_CMD)) && !cmd_full;

        if (axi_state == A_WR_PUSH_CMD)
            cmd_data_in = {1'b1, prot_r, sub_addr, sub_wstrb, sub_wdata};
        else
            cmd_data_in = {1'b0, prot_r, sub_addr, {APB_STRB_WIDTH{1'b0}}, {APB_DATA_WIDTH{1'b0}}};

        resp_rd_en = ((axi_state == A_WR_WAIT_RESP) || (axi_state == A_RD_WAIT_RESP)) && !resp_empty;
    end */
always_comb begin
 
	    // AXI handshake signals
	    AWREADY = (axi_state == A_IDLE);
	    ARREADY = (axi_state == A_IDLE) && !AWVALID;
	    WREADY  = (axi_state == A_WR_DATA_WAIT);
 
	    BID    = bid_r;
	    BRESP  = bresp_r;
	    BVALID = bvalid_r;
 
	    RID    = rid_r;
	    RDATA  = rdata_r;
	    RRESP  = rresp_r;
	    RLAST  = rlast_r;
	    RVALID = rvalid_r;
 
	    cmd_wr_en = ((axi_state == A_WR_PUSH_CMD) ||
		         (axi_state == A_RD_PUSH_CMD)) &&
		         !cmd_full;
 
	    if (axi_state == A_WR_PUSH_CMD)
		cmd_data_in = {1'b1, prot_r, sub_addr,
		               sub_wstrb, sub_wdata};
	    else
		cmd_data_in = {1'b0, prot_r, sub_addr,
		               {APB_STRB_WIDTH{1'b0}},
		               {APB_DATA_WIDTH{1'b0}}};
 
	    resp_rd_en = ((axi_state == A_WR_WAIT_RESP) ||
		          (axi_state == A_RD_WAIT_RESP)) &&
		          !resp_empty;
	end
    //=====================================================================
    // APB-side FSM (PCLK / PRESETn domain)
    //
    // Structurally unchanged from the 1:1 bridge - it only ever deals in
    // APB_DATA_WIDTH-wide command/response words. The one addition is
    // apb_slave_decoder + the psel_active gating below, which replace
    // the old single shared PSEL output with per-slave chip-selects.
    //=====================================================================
    typedef enum logic [1:0] {
        P_IDLE,
        P_SETUP,
        P_ACCESS,
        P_PUSH_RESP
    } apb_state_t;

    apb_state_t apb_state;

    logic                       p_write_r;
    logic [2:0]                 p_prot_r;
    logic [AXI_ADDR_WIDTH-1:0]  p_addr_r;
    logic [APB_STRB_WIDTH-1:0]  p_wstrb_r;
    logic [APB_DATA_WIDTH-1:0]  p_wdata_r;
    logic                       p_err_r;
    logic [APB_DATA_WIDTH-1:0]  p_rdata_r;

    always_ff @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            apb_state <= P_IDLE;
            p_write_r <= 1'b0;
            p_prot_r  <= '0;
            p_addr_r  <= '0;
            p_wstrb_r <= '0;
            p_wdata_r <= '0;
            p_err_r   <= 1'b0;
            p_rdata_r <= '0;
        end else begin
            unique case (apb_state)

                P_IDLE: begin
                    if (!cmd_empty) begin
                        {p_write_r, p_prot_r, p_addr_r, p_wstrb_r, p_wdata_r} <= cmd_data_out;
                        apb_state <= P_SETUP;
                    end
                end

                P_SETUP: begin
                    // one-cycle APB SETUP phase, always moves on
                    apb_state <= P_ACCESS;
                end

                P_ACCESS: begin
                    if (PREADY) begin
                        p_err_r   <= PSLVERR;
                        p_rdata_r <= PRDATA;
                        apb_state <= P_PUSH_RESP;
                    end
                end

                P_PUSH_RESP: begin
                    // resp_wr_en (comb, below) is high whenever we're here and
                    // !resp_full, so the push happens on this same edge.
                    if (!resp_full) apb_state <= P_IDLE;
                end

                default: apb_state <= P_IDLE;

            endcase
        end
    end

    //-------------------------------------------------------------------
    // Slave-select decode, integrated into the bridge.
    // apb_slave_decoder itself is pure address decode with no notion of
    // timing; psel_active gates it so a slave only ever sees its select
    // line pulse while the bridge is actually in SETUP/ACCESS driving
    // the shared PADDR/PWDATA/PWRITE bus at it.
    //-------------------------------------------------------------------
    logic psel_active;
    assign psel_active = (apb_state == P_SETUP) || (apb_state == P_ACCESS);

    logic spi_psel_dec, i2c_psel_dec, uart_psel_dec, gpio_psel_dec,
          mipi_psel_dec, hdmi_psel_dec, timer_psel_dec, debug_psel_dec;

    apb_slave_decoder u_apb_slave_decoder (
        .addr       (p_addr_r),
        .spi_psel   (spi_psel_dec),
        .i2c_psel   (i2c_psel_dec),
        .uart_psel  (uart_psel_dec),
        .gpio_psel  (gpio_psel_dec),
        .mipi_psel  (mipi_psel_dec),
        .hdmi_psel  (hdmi_psel_dec),
        .timer_psel (timer_psel_dec),
        .debug_psel (debug_psel_dec)
    );

    // APB-side combinational outputs / FIFO handshake
    always_comb begin
        PADDR   = p_addr_r;
        PWRITE  = p_write_r;
        PPROT   = p_prot_r;
        PWDATA  = p_wdata_r;
        PSTRB   = p_wstrb_r;

        PENABLE = (apb_state == P_ACCESS);

        // Gate the decoder's one-hot outputs with bridge activity so a
        // slave's *_psel is only ever asserted during SETUP/ACCESS.
        spi_psel   = psel_active & spi_psel_dec;
        i2c_psel   = psel_active & i2c_psel_dec;
        uart_psel  = psel_active & uart_psel_dec;
        gpio_psel  = psel_active & gpio_psel_dec;
        mipi_psel  = psel_active & mipi_psel_dec;
        hdmi_psel  = psel_active & hdmi_psel_dec;
        timer_psel = psel_active & timer_psel_dec;
        debug_psel = psel_active & debug_psel_dec;

        cmd_rd_en    = (apb_state == P_IDLE) && !cmd_empty;
        resp_wr_en   = (apb_state == P_PUSH_RESP) && !resp_full;
        resp_data_in = {p_err_r, p_rdata_r};
    end

    //-------------------------------------------------------------------
    // Simulation-only protocol checks (no synthesis impact)
    //-------------------------------------------------------------------
`ifndef SYNTHESIS
    // The connected AXI manager must present WLAST exactly on the beat
    // that this bridge's own beat counter considers the final beat.
    always_ff @(posedge ACLK) begin
        if (ARESETn && WVALID && WREADY) begin
            assert (WLAST == (beat_cnt_r == len_r))
                else $error("axi4_to_apb_bridge_cdc: WLAST mismatch with AWLEN-derived beat count");
        end
    end

    // Exactly one *_psel line (or none, if the address matched no known
    // slave) may be asserted at a time, and only during SETUP/ACCESS.
    always_ff @(posedge PCLK) begin
        if (PRESETn && psel_active) begin
            assert ($onehot0({spi_psel, i2c_psel, uart_psel, gpio_psel,
                               mipi_psel, hdmi_psel, timer_psel, debug_psel}))
                else $error("axi4_to_apb_bridge_cdc: more than one slave PSEL asserted simultaneously");
        end
    end
`endif

endmodule

`default_nettype wire

