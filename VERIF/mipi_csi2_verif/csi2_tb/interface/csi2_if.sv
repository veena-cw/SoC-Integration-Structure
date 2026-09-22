interface csi2_if #(
    parameter int NUM_LANES = 4
) (
    input logic clk
);

    // ------------------------------------------------
    // Common reset
    // ------------------------------------------------
    logic rst_n;


    // ================================================================
    // TX INPUT SIDE
    // TB -> CSI-2 TX
    // ================================================================

    // Packet request
    logic        pkt_valid_i;
    logic        pkt_ready_o;
    logic [1:0]  pkt_vc_i;
    logic [5:0]  pkt_dt_i;
    logic [15:0] pkt_len_i;

    // Payload input
    logic [7:0]  px_data_i;
    logic        px_valid_i;
    logic        px_ready_o;


    // ================================================================
    // TX -> RX INTERNAL LANE LINK
    // Monitor observation point
    // ================================================================

    logic [NUM_LANES*8-1:0] lane_data_link;
    logic [NUM_LANES-1:0]   lane_valid_link;

    logic hs_active_link;
    logic hs_start_link;
    logic hs_last_link;


    // ================================================================
    // RX OUTPUT SIDE
    // CSI-2 RX -> TB
    // ================================================================

    logic        px_ready_i;

    logic [7:0]  px_data_o;
    logic        px_valid_o;
    logic        px_last_o;
    logic [1:0]  px_vc_o;
    logic [5:0]  px_dt_o;

    // Short packet outputs

    // Standard synchronization events
    logic frame_start_o;
    logic frame_end_o;
    logic line_start_o;
    logic line_end_o;

    // Generic short packet outputs
    logic        generic_sp_valid_o;
    logic [5:0]  generic_sp_dt_o;
    logic [15:0] generic_sp_data_o;

    // Error/status outputs
    logic hdr_ecc_1bit_o;
    logic hdr_ecc_2bit_o;
    logic payload_crc_err_o;
    logic packet_format_err_o;


    // ================================================================
    // TX DRIVER CLOCKING BLOCK
    // ================================================================

    clocking tx_drv_cb @(posedge clk);
        default input #1step output #0;

        output pkt_valid_i;
        output pkt_vc_i;
        output pkt_dt_i;
        output pkt_len_i;

        output px_data_i;
        output px_valid_i;

        input  pkt_ready_o;
        input  px_ready_o;
        input  rst_n;

    endclocking


    // ================================================================
    // TX MONITOR CLOCKING BLOCK
    // Observe what DUT accepts + what TX sends toward RX
    // ================================================================

    clocking tx_mon_cb @(posedge clk);
        default input #1step;

        input rst_n;

        // TX request
        input pkt_valid_i;
        input pkt_ready_o;
        input pkt_vc_i;
        input pkt_dt_i;
        input pkt_len_i;

        // Payload input
        input px_data_i;
        input px_valid_i;
        input px_ready_o;

        // Generated lane stream
        input lane_data_link;
        input lane_valid_link;
        input hs_active_link;
        input hs_start_link;
        input hs_last_link;

    endclocking


    // ================================================================
    // RX MONITOR CLOCKING BLOCK
    // ================================================================

    clocking rx_mon_cb @(posedge clk);
        default input #1step;

        input rst_n;

        // RX payload
        input px_ready_i;
        input px_data_o;
        input px_valid_o;
        input px_last_o;
        input px_vc_o;
        input px_dt_o;

        // Short packets

        // Frame / line events
        input frame_start_o;
        input frame_end_o;
        input line_start_o;
        input line_end_o;

        // Generic short packet
        input generic_sp_valid_o;
        input generic_sp_dt_o;
        input generic_sp_data_o;

        // Errors
        input hdr_ecc_1bit_o;
        input hdr_ecc_2bit_o;
        input payload_crc_err_o;
        input packet_format_err_o;

    endclocking

    // RX agent owns these inputs; TX link remains observation-only.
    logic [NUM_LANES*8-1:0] rx_lane_data;
    logic [NUM_LANES-1:0] rx_lane_valid;
    logic rx_hs_start, rx_hs_last;

    clocking rx_drv_cb @(posedge clk);
        default input #1step output #0;
        output rx_lane_data, rx_lane_valid, rx_hs_start, rx_hs_last;
        input rst_n;
        input hdr_ecc_1bit_o, hdr_ecc_2bit_o;
        input payload_crc_err_o, packet_format_err_o;
    endclocking

    modport TX_DRIVER (
        clocking tx_drv_cb
    );

    modport TX_MONITOR (
        clocking tx_mon_cb
    );

    modport RX_MONITOR (
        clocking rx_mon_cb
    );

endinterface