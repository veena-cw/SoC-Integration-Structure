
// SPDX-License-Identifier: MIT
//
// AXI4-Lite DMA register bank with a coherent DMA descriptor/configuration
// request channel.
//
// Design note:
//   The supplied register map has no dedicated START/COMMIT register.  This
//   implementation therefore treats a successful write to DMA_CTRL as the
//   software commit point for the DMA-side descriptor/configuration bundle.
//   The bundle is captured into shadow registers and is held stable while
//   dma_cfg_valid_o is asserted until dma_cfg_ready_i is sampled high.
//
//   The TX/RX base registers in the supplied specification are descriptor-ring
//   base addresses.  Consequently:
//       req_src_addr = TX_BASE_ADDR
//       req_dst_addr = RX_BASE_ADDR
//   No transfer-byte-count register exists in the supplied map, so the wrapper
//   sets the descriptor interface req_len to zero and all optional descriptor
//   metadata fields to zero.  A real payload DMA request needs a documented
//   length (or equivalent) before req_len can be meaningfully driven.

module axi4lite_dma_regbank_desc #(
    parameter logic [31:0] BASE_ADDR = 32'h0000_0000
) (
    input  logic                     s_axi_aclk,
    input  logic                     s_axi_aresetn,

    // AXI4-Lite write address channel
    input  logic [31:0]              s_axi_awaddr,
    input  logic [2:0]               s_axi_awprot,
    input  logic                     s_axi_awvalid,
    output logic                     s_axi_awready,

    // AXI4-Lite write data channel
    input  logic [31:0]              s_axi_wdata,
    input  logic [3:0]               s_axi_wstrb,
    input  logic                     s_axi_wvalid,
    output logic                     s_axi_wready,

    // AXI4-Lite write response channel
    output logic [1:0]               s_axi_bresp,
    output logic                     s_axi_bvalid,
    input  logic                     s_axi_bready,

    // AXI4-Lite read address channel
    input  logic [31:0]              s_axi_araddr,
    input  logic [2:0]               s_axi_arprot,
    input  logic                     s_axi_arvalid,
    output logic                     s_axi_arready,

    // AXI4-Lite read data channel
    output logic [31:0]              s_axi_rdata,
    output logic [1:0]               s_axi_rresp,
    output logic                     s_axi_rvalid,
    input  logic                     s_axi_rready,

    // ------------------------------------------------------------------------
    // DMA-side committed configuration bundle.
    // These signals are a single coherent data bundle.  dma_cfg_valid_o and
    // dma_cfg_ready_i apply to the entire bundle; there is intentionally no
    // separate valid/ready per field.
    // ------------------------------------------------------------------------
    output logic [2:0]               dma_ctrl_o,
    output logic [2:0]               int_enable_o,
    output logic [63:0]              tx_base_addr_o,
    output logic [31:0]              tx_ring_len_o,
    output logic [63:0]              rx_base_addr_o,
    output logic [31:0]              rx_ring_len_o,
    output logic                     dma_cfg_valid_o,
    input  logic                     dma_cfg_ready_i,

    // Integration-side status inputs, synchronous to s_axi_aclk in this block.
    input  logic [3:0]               dma_status_i,

    // One-cycle event inputs used to set INT_STATUS sticky bits.
    input  logic                     tx_compl_evt_i,
    input  logic                     rx_compl_evt_i,
    input  logic                     err_evt_i,

    // Derived interrupt indication: INT_STATUS & INT_ENABLE.
    output logic                     irq_o
);

    localparam logic [1:0] AXI_OKAY   = 2'b00;
    localparam logic [1:0] AXI_SLVERR = 2'b10;

    // Byte-addressed register offsets from BASE_ADDR.
    localparam logic [31:0] ADDR_DMA_CTRL       = BASE_ADDR + 32'h0000_0000;
    localparam logic [31:0] ADDR_DMA_STATUS     = BASE_ADDR + 32'h0000_0004;
    localparam logic [31:0] ADDR_INT_ENABLE     = BASE_ADDR + 32'h0000_0008;
    localparam logic [31:0] ADDR_INT_STATUS     = BASE_ADDR + 32'h0000_000C;
    localparam logic [31:0] ADDR_TX_BASE_ADDR_L = BASE_ADDR + 32'h0000_0010;
    localparam logic [31:0] ADDR_TX_BASE_ADDR_H = BASE_ADDR + 32'h0000_0014;
    localparam logic [31:0] ADDR_TX_RING_LEN    = BASE_ADDR + 32'h0000_0018;
    localparam logic [31:0] ADDR_RX_BASE_ADDR_L = BASE_ADDR + 32'h0000_001C;
    localparam logic [31:0] ADDR_RX_BASE_ADDR_H = BASE_ADDR + 32'h0000_0020;
    localparam logic [31:0] ADDR_RX_RING_LEN    = BASE_ADDR + 32'h0000_0024;

    logic                         aw_hold_q;
    logic [31:0]                  awaddr_q;
    logic                         w_hold_q;
    logic [31:0]                  wdata_q;
    logic [3:0]                   wstrb_q;

    // CPU-visible register state.
    logic [2:0]                   dma_ctrl_q;
    logic [2:0]                   int_enable_q;
    logic [63:0]                  tx_base_addr_q;
    logic [31:0]                  tx_ring_len_q;
    logic [63:0]                  rx_base_addr_q;
    logic [31:0]                  rx_ring_len_q;
    logic [2:0]                   int_status_q;

    // DMA-side committed shadow state.  It changes only at the DMA_CTRL commit
    // point and is held stable while dma_cfg_valid_o is asserted.
    logic [2:0]                   dma_ctrl_dma_q;
    logic [2:0]                   int_enable_dma_q;
    logic [63:0]                  tx_base_addr_dma_q;
    logic [31:0]                  tx_ring_len_dma_q;
    logic [63:0]                  rx_base_addr_dma_q;
    logic [31:0]                  rx_ring_len_dma_q;
    logic                         dma_cfg_valid_q;

    logic                         aw_fire;
    logic                         w_fire;
    logic                         write_commit;
    logic                         write_is_cfg;
    logic                         write_is_w1c;
    logic                         write_is_ro;
    logic                         write_is_valid;
    logic                         dma_ctrl_write_commit;
    logic                         dma_cfg_fire;

    logic [2:0]                   dma_ctrl_wr_data;
    logic [2:0]                   int_enable_wr_data;
    logic [31:0]                  tx_base_addr_l_wr_data;
    logic [31:0]                  tx_base_addr_h_wr_data;
    logic [31:0]                  tx_ring_len_wr_data;
    logic [31:0]                  rx_base_addr_l_wr_data;
    logic [31:0]                  rx_base_addr_h_wr_data;
    logic [31:0]                  rx_ring_len_wr_data;
    logic [31:0]                  wr_word_tmp;
    logic [2:0]                   int_status_set_bits;
    logic [2:0]                   int_status_clear_bits;
    logic [31:0]                  int_status_clear_mask;

    function automatic logic [31:0] apply_wstrb32 (
        input logic [31:0] old_data,
        input logic [31:0] new_data,
        input logic [3:0]  strb
    );
        logic [31:0] tmp;
        integer i;
        begin
            tmp = old_data;
            for (i = 0; i < 4; i = i + 1) begin
                if (strb[i]) begin
                    tmp[(8*i) +: 8] = new_data[(8*i) +: 8];
                end
            end
            apply_wstrb32 = tmp;
        end
    endfunction

    function automatic logic is_cfg_address(input logic [31:0] addr);
        begin
            case (addr)
                ADDR_DMA_CTRL,
                ADDR_INT_ENABLE,
                ADDR_TX_BASE_ADDR_L,
                ADDR_TX_BASE_ADDR_H,
                ADDR_TX_RING_LEN,
                ADDR_RX_BASE_ADDR_L,
                ADDR_RX_BASE_ADDR_H,
                ADDR_RX_RING_LEN: is_cfg_address = 1'b1;
                default:          is_cfg_address = 1'b0;
            endcase
        end
    endfunction

    function automatic logic is_valid_address(input logic [31:0] addr);
        begin
            case (addr)
                ADDR_DMA_CTRL,
                ADDR_DMA_STATUS,
                ADDR_INT_ENABLE,
                ADDR_INT_STATUS,
                ADDR_TX_BASE_ADDR_L,
                ADDR_TX_BASE_ADDR_H,
                ADDR_TX_RING_LEN,
                ADDR_RX_BASE_ADDR_L,
                ADDR_RX_BASE_ADDR_H,
                ADDR_RX_RING_LEN: is_valid_address = 1'b1;
                default:          is_valid_address = 1'b0;
            endcase
        end
    endfunction

    function automatic logic is_ro_address(input logic [31:0] addr);
        begin
            is_ro_address = (addr == ADDR_DMA_STATUS);
        end
    endfunction

    function automatic logic is_w1c_address(input logic [31:0] addr);
        begin
            is_w1c_address = (addr == ADDR_INT_STATUS);
        end
    endfunction

    // A pending DMA descriptor/configuration occupies the same one-entry
    // resource used for the software commit.  Blocking additional AXI writes
    // while it is pending prevents a second commit from being accepted before
    // the DMA side has consumed the first coherent bundle.
    always_comb begin
        s_axi_awready = !aw_hold_q && !s_axi_bvalid && !dma_cfg_valid_q;
        s_axi_wready  = !w_hold_q  && !s_axi_bvalid && !dma_cfg_valid_q;
        s_axi_arready = !s_axi_rvalid;
    end

    assign aw_fire = s_axi_awvalid && s_axi_awready;
    assign w_fire  = s_axi_wvalid  && s_axi_wready;

    // A complete AW+W pair is committed on the cycle after both halves have
    // been captured.  A descriptor request is generated specifically by a
    // successful DMA_CTRL write, which acts as the configuration commit point.
    assign write_commit         = aw_hold_q && w_hold_q && !s_axi_bvalid;
    assign write_is_cfg   = is_cfg_address(awaddr_q);
    assign write_is_w1c   = is_w1c_address(awaddr_q);
    assign write_is_ro    = is_ro_address(awaddr_q);
    assign write_is_valid = is_valid_address(awaddr_q) && (awaddr_q[1:0] == 2'b00);
    assign dma_ctrl_write_commit = write_commit &&
                                   write_is_valid &&
                                   !write_is_ro &&
                                   !write_is_w1c &&
                                   (awaddr_q == ADDR_DMA_CTRL);
    assign dma_cfg_fire = dma_cfg_valid_q && dma_cfg_ready_i;

    // Candidate register values after WSTRB application.
    always_comb begin
        dma_ctrl_wr_data       = dma_ctrl_q;
        int_enable_wr_data     = int_enable_q;
        tx_base_addr_l_wr_data = tx_base_addr_q[31:0];
        tx_base_addr_h_wr_data = tx_base_addr_q[63:32];
        tx_ring_len_wr_data    = tx_ring_len_q;
        rx_base_addr_l_wr_data = rx_base_addr_q[31:0];
        rx_base_addr_h_wr_data = rx_base_addr_q[63:32];
        rx_ring_len_wr_data    = rx_ring_len_q;
        wr_word_tmp            = 32'h0000_0000;

        case (awaddr_q)
            ADDR_DMA_CTRL: begin
                wr_word_tmp      = apply_wstrb32({29'b0, dma_ctrl_q}, wdata_q, wstrb_q);
                dma_ctrl_wr_data = wr_word_tmp[2:0];
            end
            ADDR_INT_ENABLE: begin
                wr_word_tmp        = apply_wstrb32({29'b0, int_enable_q}, wdata_q, wstrb_q);
                int_enable_wr_data = wr_word_tmp[2:0];
            end
            ADDR_TX_BASE_ADDR_L: begin
                tx_base_addr_l_wr_data = apply_wstrb32(tx_base_addr_q[31:0], wdata_q, wstrb_q);
            end
            ADDR_TX_BASE_ADDR_H: begin
                tx_base_addr_h_wr_data = apply_wstrb32(tx_base_addr_q[63:32], wdata_q, wstrb_q);
            end
            ADDR_TX_RING_LEN: begin
                tx_ring_len_wr_data = apply_wstrb32(tx_ring_len_q, wdata_q, wstrb_q);
            end
            ADDR_RX_BASE_ADDR_L: begin
                rx_base_addr_l_wr_data = apply_wstrb32(rx_base_addr_q[31:0], wdata_q, wstrb_q);
            end
            ADDR_RX_BASE_ADDR_H: begin
                rx_base_addr_h_wr_data = apply_wstrb32(rx_base_addr_q[63:32], wdata_q, wstrb_q);
            end
            ADDR_RX_RING_LEN: begin
                rx_ring_len_wr_data = apply_wstrb32(rx_ring_len_q, wdata_q, wstrb_q);
            end
            default: begin
            end
        endcase
    end

    always_comb begin
        int_status_clear_mask = 32'b0;
        if (write_commit && write_is_w1c) begin
            int_status_clear_mask[2:0] = wdata_q[2:0] & {3{wstrb_q[0]}};
        end
    end

    assign int_status_set_bits   = {err_evt_i, rx_compl_evt_i, tx_compl_evt_i};
    assign int_status_clear_bits = int_status_clear_mask[2:0];

    // Read mux reads CPU-visible register state, not the DMA shadow state.
    logic [31:0] read_mux_data;
    logic [1:0]  read_mux_resp;

    always_comb begin
        read_mux_data = 32'h0000_0000;
        read_mux_resp = AXI_OKAY;

        case (s_axi_araddr)
            ADDR_DMA_CTRL: begin
                read_mux_data[2:0] = dma_ctrl_q;
            end
            ADDR_DMA_STATUS: begin
                read_mux_data[3:0] = dma_status_i;
            end
            ADDR_INT_ENABLE: begin
                read_mux_data[2:0] = int_enable_q;
            end
            ADDR_INT_STATUS: begin
                read_mux_data[2:0] = int_status_q;
            end
            ADDR_TX_BASE_ADDR_L: begin
                read_mux_data = tx_base_addr_q[31:0];
            end
            ADDR_TX_BASE_ADDR_H: begin
                read_mux_data = tx_base_addr_q[63:32];
            end
            ADDR_TX_RING_LEN: begin
                read_mux_data = tx_ring_len_q;
            end
            ADDR_RX_BASE_ADDR_L: begin
                read_mux_data = rx_base_addr_q[31:0];
            end
            ADDR_RX_BASE_ADDR_H: begin
                read_mux_data = rx_base_addr_q[63:32];
            end
            ADDR_RX_RING_LEN: begin
                read_mux_data = rx_ring_len_q;
            end
            default: begin
                read_mux_data = 32'h0000_0000;
                read_mux_resp = AXI_SLVERR;
            end
        endcase

        if (s_axi_araddr[1:0] != 2'b00) begin
            read_mux_data = 32'h0000_0000;
            read_mux_resp = AXI_SLVERR;
        end
    end

    // DMA-facing outputs are the committed shadow bundle.  This is the key
    // distinction from ordinary register outputs: all fields are coherent and
    // remain stable for the complete VALID/READY transaction.
    always_comb begin
        dma_ctrl_o      = dma_ctrl_dma_q;
        int_enable_o    = int_enable_dma_q;
        tx_base_addr_o  = tx_base_addr_dma_q;
        tx_ring_len_o   = tx_ring_len_dma_q;
        rx_base_addr_o  = rx_base_addr_dma_q;
        rx_ring_len_o   = rx_ring_len_dma_q;
        dma_cfg_valid_o = dma_cfg_valid_q;
        irq_o           = |(int_status_q & int_enable_q);
    end

    always_ff @(posedge s_axi_aclk) begin
        if (!s_axi_aresetn) begin
            aw_hold_q        <= 1'b0;
            awaddr_q         <= '0;
            w_hold_q         <= 1'b0;
            wdata_q          <= 32'h0000_0000;
            wstrb_q          <= 4'b0000;

            s_axi_bvalid     <= 1'b0;
            s_axi_bresp      <= AXI_OKAY;
            s_axi_rvalid     <= 1'b0;
            s_axi_rdata      <= 32'h0000_0000;
            s_axi_rresp      <= AXI_OKAY;

            dma_ctrl_q       <= 3'b000;
            int_enable_q     <= 3'b000;
            tx_base_addr_q   <= 64'h0000_0000_0000_0000;
            tx_ring_len_q    <= 32'h0000_0000;
            rx_base_addr_q   <= 64'h0000_0000_0000_0000;
            rx_ring_len_q    <= 32'h0000_0000;
            int_status_q     <= 3'b000;

            dma_ctrl_dma_q   <= 3'b000;
            int_enable_dma_q <= 3'b000;
            tx_base_addr_dma_q <= 64'h0000_0000_0000_0000;
            tx_ring_len_dma_q  <= 32'h0000_0000;
            rx_base_addr_dma_q <= 64'h0000_0000_0000_0000;
            rx_ring_len_dma_q  <= 32'h0000_0000;
            dma_cfg_valid_q <= 1'b0;
        end else begin
            // Capture independent AXI write channels.
            if (aw_fire) begin
                aw_hold_q <= 1'b1;
                awaddr_q  <= s_axi_awaddr;
            end

            if (w_fire) begin
                w_hold_q <= 1'b1;
                wdata_q  <= s_axi_wdata;
                wstrb_q  <= s_axi_wstrb;
            end

            // Commit a complete AXI write.
            if (write_commit) begin
                aw_hold_q <= 1'b0;
                w_hold_q  <= 1'b0;

                if (write_is_valid && !write_is_ro && !write_is_w1c) begin
                    if (write_is_cfg) begin
                        dma_ctrl_q     <= dma_ctrl_wr_data;
                        int_enable_q   <= int_enable_wr_data;
                        tx_base_addr_q <= {tx_base_addr_h_wr_data, tx_base_addr_l_wr_data};
                        tx_ring_len_q  <= tx_ring_len_wr_data;
                        rx_base_addr_q <= {rx_base_addr_h_wr_data, rx_base_addr_l_wr_data};
                        rx_ring_len_q  <= rx_ring_len_wr_data;
                    end

                    if (dma_ctrl_write_commit) begin
                        // DMA_CTRL is the configuration commit point.  Other
                        // fields have normally been programmed first, so this
                        // captures the complete software-visible configuration
                        // atomically into the DMA-side shadow bundle.
                        dma_ctrl_dma_q     <= dma_ctrl_wr_data;
                        int_enable_dma_q   <= int_enable_q;
                        tx_base_addr_dma_q <= tx_base_addr_q;
                        tx_ring_len_dma_q  <= tx_ring_len_q;
                        rx_base_addr_dma_q <= rx_base_addr_q;
                        rx_ring_len_dma_q  <= rx_ring_len_q;
                        dma_cfg_valid_q    <= 1'b1;

                        // Delay the AXI response until the DMA-side bundle is
                        // actually consumed.  This also prevents a second
                        // commit from overtaking the first one.
                    end else begin
                        s_axi_bresp  <= AXI_OKAY;
                        s_axi_bvalid <= 1'b1;
                    end
                end else if (write_is_valid && write_is_w1c) begin
                    s_axi_bresp  <= AXI_OKAY;
                    s_axi_bvalid <= 1'b1;
                end else begin
                    // RO or unmapped/misaligned write.
                    s_axi_bresp  <= AXI_SLVERR;
                    s_axi_bvalid <= 1'b1;
                end
            end

            // DMA descriptor/configuration handshake.  The shadow outputs do
            // not change during this transaction, so all fields remain stable
            // while VALID is asserted and READY is low.
            if (dma_cfg_fire) begin
                dma_cfg_valid_q <= 1'b0;
                s_axi_bresp     <= AXI_OKAY;
                s_axi_bvalid    <= 1'b1;
            end

            // W1C implementation; events are set-dominant over clears.
            int_status_q <= (int_status_q & ~int_status_clear_bits) | int_status_set_bits;

            // Complete B-channel handshake.
            if (s_axi_bvalid && s_axi_bready) begin
                s_axi_bvalid <= 1'b0;
            end

            // Read address handshake creates one registered read response.
            if (s_axi_arvalid && s_axi_arready) begin
                s_axi_rdata  <= read_mux_data;
                s_axi_rresp  <= read_mux_resp;
                s_axi_rvalid <= 1'b1;
            end

            // Complete R-channel handshake.
            if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

    // AXI4-Lite AWPROT/ARPROT are intentionally unused because the supplied
    // register specification has no security/privilege-specific decode.

endmodule
