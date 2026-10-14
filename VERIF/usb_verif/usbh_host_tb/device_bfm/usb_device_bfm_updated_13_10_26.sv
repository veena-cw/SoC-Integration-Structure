`timescale 1ns/1ps

// ============================================================================
// USB Full-Speed Device BFM - UTMI based
//
// FS-only UTMI BFM targeting a 48 MHz CLK and 12 Mbps USB Full-Speed bus.
// Byte-level RXVALID/TXREADY timing follows UTMI 1.05 (one CLK pulse per
// byte time, 32 CLK cycles per byte at FS-only 48 MHz). Physical bit-level
// NRZI/bit-stuff serialization is abstracted; LineState models packet boundary
// signaling (J, SE0 EOP) for the host SIE.
// Keeps the original UTMI ports and packet-capture approach, while adding:
//   * USB device state machine
//   * EP0 control-transfer engine
//   * Standard Device Requests
//   * Device / Configuration / Interface / Endpoint / String descriptors
//   * Multi-packet EP0 DATA stage, short packets and ZLP handling
//   * SET_ADDRESS delayed until status completion
//   * SET/CLEAR_FEATURE, endpoint HALT, remote wakeup
//   * GET/SET_CONFIGURATION and GET/SET_INTERFACE
//   * GET_STATUS
//   * SET_DESCRIPTOR (simulation feature)
//   * Interrupt/Bulk/Control endpoint configuration
//   * SOF/frame tracking
//   * CRC/NAK/STALL/timeout/wrong-PID/descriptor-corruption injection
//
// NOTE: At a pure UTMI boundary, USB RESET is a PHY/bus-level SE0 condition.
// This BFM therefore provides usb_bus_reset() as a public task. If the testbench
// has a real UTMI PHY/bus model, call this task when that PHY detects >= 10 ms
// of SE0. The BFM cannot infer a host-driven SE0 from utmi_linestate_i because
// that signal is an output driven by this BFM. This remains a packet-level,
// custom UTMI-like model: it does not implement DP/DM electrical behavior,
// NRZI serialization, bit stuffing, or full suspend/resume signaling.
// ============================================================================

module usb_device_bfm #(
    parameter integer DEVICE_IFS_CLKS       = 7,
    parameter integer MAX_IN_DATA           = 64,
    parameter integer MAX_OUT_DATA          = 64,
    parameter integer MAX_ENDPOINTS         = 16,
    parameter integer EP0_MAX_PACKET_SIZE   = 64,
    parameter integer MAX_DESC_BYTES        = 256,
    parameter integer MAX_STRINGS           = 8,
    parameter integer MAX_INTERFACES        = 256,
    parameter integer AUTO_CONFIG_DEFAULT_EP = 0
)(
    input  logic       clk_i,
    input  logic       rst_i,

    // DUT -> Device BFM
    input  logic [7:0] utmi_data_out_o,
    input  logic       utmi_txvalid_o,
    input  logic [1:0] utmi_op_mode_o,
    input  logic [1:0] utmi_xcvrselect_o,
    input  logic       utmi_termselect_o,
    input  logic       utmi_dppulldown_o,
    input  logic       utmi_dmpulldown_o,

    // Device BFM -> DUT
    output logic [7:0] utmi_data_in_i,
    output logic       utmi_txready_i,
    output logic       utmi_rxvalid_i,
    output logic       utmi_rxactive_i,
    output logic       utmi_rxerror_i,
    output logic [1:0] utmi_linestate_i
);

    // UTMI 1.05 LineState encoding (Table 1): LineState[0]=DP, [1]=DM.
    // Full-Speed: SE0=2'b00, J=2'b01, K=2'b10, SE1=2'b11.
    // Full-Speed EOP (Section 6.1.2): SE0 for 2 bit-times, then J for 1.
    // At 48 MHz FS-only UTMI, one FS bit-time is 4 clocks.
    localparam integer UTMI_CLK_HZ       = 48000000;
    localparam integer FS_BIT_CLKS       = 4;
    localparam integer FS_BYTE_CLKS      = 8 * FS_BIT_CLKS;
    localparam integer FS_EOP_SE0_CLKS   = 2 * FS_BIT_CLKS;
    localparam integer FS_EOP_J_CLKS     = FS_BIT_CLKS;

    // ------------------------------------------------------------------------
    // USB PID definitions
    // ------------------------------------------------------------------------
    localparam logic [7:0] PID_OUT   = 8'hE1;
    localparam logic [7:0] PID_IN    = 8'h69;
    localparam logic [7:0] PID_SOF   = 8'hA5;
    localparam logic [7:0] PID_SETUP = 8'h2D;
    localparam logic [7:0] PID_DATA0 = 8'hC3;
    localparam logic [7:0] PID_DATA1 = 8'h4B;
    localparam logic [7:0] PID_ACK   = 8'hD2;
    localparam logic [7:0] PID_NAK   = 8'h5A;
    localparam logic [7:0] PID_STALL = 8'h1E;

    // Standard requests
    localparam logic [7:0] REQ_GET_STATUS        = 8'h00;
    localparam logic [7:0] REQ_CLEAR_FEATURE     = 8'h01;
    localparam logic [7:0] REQ_SET_FEATURE       = 8'h03;
    localparam logic [7:0] REQ_SET_ADDRESS       = 8'h05;
    localparam logic [7:0] REQ_GET_DESCRIPTOR    = 8'h06;
    localparam logic [7:0] REQ_SET_DESCRIPTOR    = 8'h07;
    localparam logic [7:0] REQ_GET_CONFIGURATION = 8'h08;
    localparam logic [7:0] REQ_SET_CONFIGURATION = 8'h09;
    localparam logic [7:0] REQ_GET_INTERFACE     = 8'h0A;
    localparam logic [7:0] REQ_SET_INTERFACE     = 8'h0B;
    localparam logic [7:0] REQ_SYNCH_FRAME       = 8'h0C;

    // Descriptor types
    localparam logic [7:0] DESC_DEVICE        = 8'h01;
    localparam logic [7:0] DESC_CONFIGURATION = 8'h02;
    localparam logic [7:0] DESC_STRING        = 8'h03;
    localparam logic [7:0] DESC_INTERFACE     = 8'h04;
    localparam logic [7:0] DESC_ENDPOINT      = 8'h05;

    // Feature selectors
    localparam logic [15:0] FEAT_ENDPOINT_HALT  = 16'h0000;
    localparam logic [15:0] FEAT_REMOTE_WAKEUP  = 16'h0001;

    // bmRequestType fields
    localparam logic [1:0] REQ_TYPE_STANDARD = 2'b00;
    localparam logic [1:0] REQ_TYPE_CLASS    = 2'b01;
    localparam logic [1:0] REQ_TYPE_VENDOR   = 2'b10;

    // Response modes
    localparam integer RESP_NORMAL    = 0;
    localparam integer RESP_NAK       = 1;
    localparam integer RESP_STALL     = 2;
    localparam integer RESP_TIMEOUT   = 3;
    localparam integer RESP_CRC_ERROR = 4;

    // Endpoint transfer types
    localparam logic [1:0] EP_TYPE_CONTROL = 2'b00;
    localparam logic [1:0] EP_TYPE_ISO     = 2'b01;
    localparam logic [1:0] EP_TYPE_BULK    = 2'b10;
    localparam logic [1:0] EP_TYPE_INT     = 2'b11;

    integer response_mode;

    // ------------------------------------------------------------------------
    // Device state
    // ------------------------------------------------------------------------
    typedef enum logic [2:0] {
        DEV_DETACHED,
        DEV_ATTACHED,
        DEV_DEFAULT,
        DEV_ADDRESSED,
        DEV_CONFIGURED,
        DEV_SUSPENDED
    } device_state_t;

    device_state_t device_state;
    logic [6:0] device_addr;
    logic [6:0] pending_address;
    logic       address_update_pending;
    logic [7:0] configuration_value;
    logic [7:0] pending_configuration;
    logic       remote_wakeup_enabled;
    // Standard feature changes are committed only after the status stage ACK.
    logic       pending_feature_valid;
    logic       pending_feature_set;
    logic       pending_feature_remote_wakeup;
    logic [3:0] pending_feature_ep;
    logic [7:0] interface_alt_setting [0:MAX_INTERFACES-1];

    // ------------------------------------------------------------------------
    // Endpoint configuration
    // ------------------------------------------------------------------------
    logic ep_enabled     [0:MAX_ENDPOINTS-1];
    logic ep_halted      [0:MAX_ENDPOINTS-1];
    logic ep_can_receive [0:MAX_ENDPOINTS-1];
    logic in_toggle      [0:MAX_ENDPOINTS-1];
    logic out_toggle     [0:MAX_ENDPOINTS-1];
    logic ep_dir_in      [0:MAX_ENDPOINTS-1];
    logic [1:0] ep_type   [0:MAX_ENDPOINTS-1];
    integer ep_mps        [0:MAX_ENDPOINTS-1];
    integer ep_interval   [0:MAX_ENDPOINTS-1];

    // ------------------------------------------------------------------------
    // Generic endpoint buffers
    // ------------------------------------------------------------------------
    logic [7:0] in_data [0:MAX_IN_DATA-1];
    integer in_data_len;
    logic [7:0] ep_in_data [0:MAX_ENDPOINTS-1][0:MAX_IN_DATA-1];
    integer ep_in_data_len [0:MAX_ENDPOINTS-1];

    logic [7:0] out_data_buf [0:MAX_ENDPOINTS-1][0:MAX_OUT_DATA-1];
    integer out_data_len [0:MAX_ENDPOINTS-1];

    // ------------------------------------------------------------------------
    // Descriptor storage
    // ------------------------------------------------------------------------
    logic [7:0] device_desc [0:MAX_DESC_BYTES-1];
    integer device_desc_len;
    logic [7:0] config_desc [0:MAX_DESC_BYTES-1];
    integer config_desc_len;
    logic [7:0] string_desc [0:MAX_STRINGS-1][0:MAX_DESC_BYTES-1];
    integer string_desc_len [0:MAX_STRINGS-1];

    // ------------------------------------------------------------------------
    // EP0 control-transfer context
    // ------------------------------------------------------------------------
    typedef enum logic [2:0] {
        CTRL_IDLE,
        CTRL_DATA_IN,
        CTRL_DATA_OUT,
        CTRL_STATUS_IN,
        CTRL_STATUS_OUT,
        CTRL_COMPLETE
    } ctrl_stage_t;

    ctrl_stage_t ctrl_stage;
    logic        ctrl_data_dir_in;
    logic        ctrl_status_dir_in;
    logic [15:0] ctrl_wLength;
    logic [15:0] ctrl_data_transferred;
    logic [15:0] ctrl_data_remaining;
    integer      ctrl_in_data_index;
    integer      ctrl_out_data_len;
    logic        ctrl_in_zlp_required;
    integer      ctrl_last_packet_len;
    logic        control_transfer_active;
    logic        ctrl_stall_pending;

    logic [7:0] ep0_in_data [0:MAX_DESC_BYTES-1];
    logic [7:0] ep0_out_data [0:MAX_OUT_DATA-1];
    integer ep0_in_data_len;
    integer ep0_out_data_len;

    logic [7:0] setup_bmRequestType;
    logic [7:0] setup_bRequest;
    logic [15:0] setup_wValue;
    logic [15:0] setup_wIndex;
    logic [15:0] setup_wLength;

    // SETUP decoding helpers
    logic [1:0] setup_request_type;
    logic [4:0] setup_recipient;
    logic       setup_direction_in;

    // ------------------------------------------------------------------------
    // Packet capture / transaction context
    // ------------------------------------------------------------------------
    logic [7:0] tx_pkt_q[$];
    logic [7:0] pkt_copy[$];
    logic       tx_packet_active;

    logic [7:0] pending_token_pid;
    logic [6:0] pending_addr;
    logic [3:0] pending_ep;
    logic       pending_data;
    logic [7:0] expected_data_pid;

    typedef enum logic [3:0] {
        ST_IDLE,
        ST_TOKEN,
        ST_WAIT_DATA,
        ST_SEND_DATA,
        ST_WAIT_ACK,
        ST_SEND_HANDSHAKE,
        ST_COMPLETE,
        ST_ERROR
    } transaction_state_t;
    transaction_state_t state;

    // Last BFM-generated IN packet, used when host sends ACK.
    integer last_in_len;
    logic   last_in_ep0;
    logic   last_in_was_control_data;
    logic   last_in_was_status;
    logic   last_in_was_zlp;
    logic   last_in_requires_ack;

    // IN retransmission cache: USB requires the same DATA PID and payload to
    // be retransmitted until a valid ACK is received. This also protects the
    // retry if a test sequence changes the source buffer while the host retries.
    logic retry_pending;
    logic [3:0] retry_ep;
    logic [7:0] retry_pid;
    logic [15:0] retry_crc;
    logic retry_corrupt_crc;
    logic retry_last_in_ep0;
    logic retry_last_in_was_control_data;
    logic retry_last_in_was_status;
    logic retry_last_in_was_zlp;
    logic retry_last_in_requires_ack;
    integer retry_last_in_len;
    logic [7:0] retry_payload[$];

    // Epoch changes invalidate any in-flight packet-driving task on reset.
    integer reset_epoch;

    // ------------------------------------------------------------------------
    // SOF/frame tracking
    // ------------------------------------------------------------------------
    logic [10:0] frame_number;
    logic        sof_seen;

    // ------------------------------------------------------------------------
    // Error injection controls
    // ------------------------------------------------------------------------
    logic inject_crc_error;
    logic inject_wrong_data_pid;
    logic inject_descriptor_corruption;
    logic inject_bad_crc5;
    integer response_delay_clks;

    // ------------------------------------------------------------------------
    // CRC functions
    // ------------------------------------------------------------------------
    function automatic [15:0] crc16_usb(input logic [7:0] data[$]);
        logic [15:0] crc;
        logic mix;
        integer i, j;
        begin
            crc = 16'hFFFF;
            for (i = 0; i < data.size(); i = i + 1) begin
                for (j = 0; j < 8; j = j + 1) begin
                    mix = crc[0] ^ data[i][j];
                    crc = crc >> 1;
                    if (mix) crc = crc ^ 16'hA001;
                end
            end
            crc16_usb = crc;
        end
    endfunction

    function automatic logic [4:0] crc5_usb_bits(input logic [10:0] token_bits);
        logic [4:0] crc;
        logic feedback;
        integer i;
        begin
            // USB CRC5 processes the 11 token/frame bits least-significant bit first.
            crc = 5'h1F;
            for (i = 0; i < 11; i = i + 1) begin
                feedback = crc[0] ^ token_bits[i];
                crc = crc >> 1;
                if (feedback) crc = crc ^ 5'h14;
            end
            crc5_usb_bits = ~crc;
        end
    endfunction

    function automatic logic [4:0] crc5_usb(
        input logic [6:0] addr,
        input logic [3:0] ep
    );
        begin
            crc5_usb = crc5_usb_bits({ep, addr});
        end
    endfunction
    function automatic bit valid_pid(input logic [7:0] pid);
        valid_pid = (pid[7:4] == ~pid[3:0]);
    endfunction

    // ------------------------------------------------------------------------
    // Endpoint transfer-type helper.  The host controller does not put the
    // transfer type on the USB token; it is determined by the endpoint
    // descriptor/configuration.  Control is EP0, while bulk/interrupt use
    // the same USB token/data/handshake packet mechanics.
    // ------------------------------------------------------------------------
    function automatic string endpoint_type_name(input logic [1:0] t);
        case (t)
            EP_TYPE_CONTROL: endpoint_type_name = "CONTROL";
            EP_TYPE_ISO:     endpoint_type_name = "ISOCHRONOUS";
            EP_TYPE_BULK:    endpoint_type_name = "BULK";
            EP_TYPE_INT:     endpoint_type_name = "INTERRUPT";
            default:         endpoint_type_name = "UNKNOWN";
        endcase
    endfunction

    // ------------------------------------------------------------------------
    // Initialization
    // ------------------------------------------------------------------------
    integer k, s, b;
    integer reset_idx;
    initial begin
        utmi_data_in_i  = 8'h00;
        utmi_rxvalid_i  = 1'b0;
        utmi_rxactive_i = 1'b0;
        utmi_rxerror_i  = 1'b0;
        utmi_linestate_i = 2'b01; // FS J idle

        device_state = DEV_ATTACHED;
        device_addr = 7'd0;
        pending_address = 7'd0;
        address_update_pending = 1'b0;
        configuration_value = 8'd0;
        pending_configuration = 8'd0;
        remote_wakeup_enabled = 1'b0;
        pending_feature_valid = 1'b0;
        pending_feature_set = 1'b0;
        pending_feature_remote_wakeup = 1'b0;
        pending_feature_ep = 4'd0;

        response_mode = RESP_NORMAL;
        response_delay_clks = DEVICE_IFS_CLKS;
        inject_crc_error = 1'b0;
        inject_wrong_data_pid = 1'b0;
        inject_descriptor_corruption = 1'b0;
        inject_bad_crc5 = 1'b0;

        state = ST_IDLE;
        ctrl_stage = CTRL_IDLE;
        control_transfer_active = 1'b0;
        ctrl_stall_pending = 1'b0;
        ep0_in_data_len = 0;
        ep0_out_data_len = 0;
        in_data_len = 0;
        device_desc_len = 0;
        config_desc_len = 0;
        frame_number = 0;
        sof_seen = 0;
        tx_packet_active = 0;
        pending_data = 0;
        pending_token_pid = 0;
        pending_addr = 0;
        pending_ep = 0;
        expected_data_pid = 0;
        last_in_len = 0;
        last_in_ep0 = 0;
        last_in_was_control_data = 0;
        last_in_was_status = 0;
        last_in_was_zlp = 0;
        last_in_requires_ack = 1;
        retry_pending = 1'b0;
        retry_ep = '0;
        retry_pid = PID_DATA0;
        retry_crc = '0;
        retry_corrupt_crc = 1'b0;
        retry_last_in_ep0 = 1'b0;
        retry_last_in_was_control_data = 1'b0;
        retry_last_in_was_status = 1'b0;
        retry_last_in_was_zlp = 1'b0;
        retry_last_in_requires_ack = 1'b1;
        retry_last_in_len = 0;
        retry_payload.delete();
        reset_epoch = 0;

        for (k = 0; k < MAX_ENDPOINTS; k = k + 1) begin
            ep_enabled[k] = 1'b0;
            ep_halted[k] = 1'b0;
            ep_can_receive[k] = 1'b1;
            in_toggle[k] = 1'b0;
            out_toggle[k] = 1'b0;
            ep_dir_in[k] = 1'b0;
            ep_type[k] = EP_TYPE_BULK;
            ep_mps[k] = 64;
            ep_interval[k] = 1;
            out_data_len[k] = 0;
            ep_in_data_len[k] = 0;
        end

        // USB interface alternate settings must have a defined value.
        // Leaving this array uninitialized makes GET_INTERFACE return X
        // before the first SET_INTERFACE request.
        for (s = 0; s < MAX_INTERFACES; s = s + 1)
            interface_alt_setting[s] = 8'h00;

        ep_enabled[0] = 1'b1;
        ep_dir_in[0] = 1'b0;
        ep_type[0] = EP_TYPE_CONTROL;
        ep_mps[0] = EP0_MAX_PACKET_SIZE;

        for (s = 0; s < MAX_STRINGS; s = s + 1) begin
            string_desc_len[s] = 0;
            for (b = 0; b < MAX_DESC_BYTES; b = b + 1)
                string_desc[s][b] = 8'h00;
        end

        for (b = 0; b < MAX_DESC_BYTES; b = b + 1) begin
            device_desc[b] = 8'h00;
            config_desc[b] = 8'h00;
        end

        load_default_descriptors();
    end

    // ------------------------------------------------------------------------
    // Reset behavior. The epoch counter invalidates packet-driving tasks that
    // are waiting on clock edges, so a runtime reset cannot continue emitting
    // the old packet after reset. USB bus reset itself is represented by the
    // public usb_bus_reset() task; see the interface-scope note at module top.
    // ------------------------------------------------------------------------
    always @(posedge clk_i) begin
        if (rst_i) begin
            utmi_data_in_i <= 8'h00;
            utmi_rxvalid_i <= 1'b0;
            utmi_rxactive_i <= 1'b0;
            utmi_rxerror_i <= 1'b0;
            utmi_linestate_i <= 2'b01;
            device_state <= DEV_DEFAULT;
            device_addr <= 7'd0;
            configuration_value <= 8'd0;
            address_update_pending <= 1'b0;
            remote_wakeup_enabled <= 1'b0;
            pending_feature_valid <= 1'b0;
            pending_feature_set <= 1'b0;
            pending_feature_remote_wakeup <= 1'b0;
            pending_feature_ep <= 4'd0;
            pending_configuration <= 8'd0;
            pending_address <= 7'd0;
            pending_data <= 1'b0;
            pending_token_pid <= 8'd0;
            pending_addr <= 7'd0;
            pending_ep <= 4'd0;
            expected_data_pid <= 8'd0;
            state <= ST_IDLE;
            tx_pkt_q.delete();
            pkt_copy.delete();
            last_in_len <= 0;
            last_in_ep0 <= 1'b0;
            last_in_was_control_data <= 1'b0;
            last_in_was_status <= 1'b0;
            last_in_was_zlp <= 1'b0;
            last_in_requires_ack <= 1'b1;
            reset_epoch <= reset_epoch + 1;
            retry_pending <= 1'b0;
            retry_ep <= '0;
            retry_pid <= PID_DATA0;
            retry_crc <= '0;
            retry_corrupt_crc <= 1'b0;
            retry_last_in_ep0 <= 1'b0;
            retry_last_in_was_control_data <= 1'b0;
            retry_last_in_was_status <= 1'b0;
            retry_last_in_was_zlp <= 1'b0;
            retry_last_in_requires_ack <= 1'b1;
            retry_last_in_len <= 0;
            retry_payload.delete();
            ctrl_data_dir_in <= 1'b0;
            ctrl_status_dir_in <= 1'b0;
            ctrl_wLength <= 16'd0;
            ctrl_data_transferred <= 16'd0;
            ctrl_data_remaining <= 16'd0;
            ctrl_in_data_index <= 0;
            ctrl_out_data_len <= 0;
            ctrl_in_zlp_required <= 1'b0;
            ctrl_last_packet_len <= 0;
            setup_bmRequestType <= 8'd0;
            setup_bRequest <= 8'd0;
            setup_wValue <= 16'd0;
            setup_wIndex <= 16'd0;
            setup_wLength <= 16'd0;
            in_data_len <= 0;
            for (reset_idx = 0; reset_idx < MAX_ENDPOINTS; reset_idx = reset_idx + 1) begin
                ep_enabled[reset_idx] <= (reset_idx == 0);
                ep_halted[reset_idx] <= 1'b0;
                ep_can_receive[reset_idx] <= 1'b1;
                in_toggle[reset_idx] <= 1'b0;
                out_toggle[reset_idx] <= 1'b0;
                ep_dir_in[reset_idx] <= 1'b0;
                ep_type[reset_idx] <= (reset_idx == 0) ? EP_TYPE_CONTROL : EP_TYPE_BULK;
                ep_mps[reset_idx] <= (reset_idx == 0) ? EP0_MAX_PACKET_SIZE : 64;
                ep_interval[reset_idx] <= 1;
                out_data_len[reset_idx] <= 0;
                ep_in_data_len[reset_idx] <= 0;
            end
            frame_number <= 11'd0;
            sof_seen <= 1'b0;
            ctrl_stage <= CTRL_IDLE;
            control_transfer_active <= 1'b0;
            ctrl_stall_pending <= 1'b0;
            tx_pkt_q.delete();
            tx_packet_active <= 1'b0;
        end
    end

    // ------------------------------------------------------------------------
    // UTMI 1.05 Section 5.13: simplified FS-only TX state machine.
    // For FS-only 8-bit UTMI at 48 MHz, one USB byte time is 32 CLK cycles.
    // TXREADY is pulsed for one CLK per byte time, not held high continuously.
    // This models byte acceptance timing; it does not serialize bits or perform
    // physical NRZI/bit-stuffing in this behavioral BFM.
    // ------------------------------------------------------------------------
    typedef enum logic [2:0] {
        TXSM_RESET,
        TXSM_WAIT,
        TXSM_SEND_SYNC,
        TXSM_DATA_LOAD,
        TXSM_SEND_EOP
    } txsm_state_t;

    txsm_state_t txsm_state;
    integer      txsm_eop_clks;
    integer      txsm_byte_clks;

    always @(posedge clk_i) begin
        if (rst_i) begin
            txsm_state     <= TXSM_RESET;
            txsm_eop_clks  <= 0;
            txsm_byte_clks <= 0;
            utmi_txready_i <= 1'b0;
        end else begin
            // Default: TXREADY is a pulse, except when explicitly raised below.
            utmi_txready_i <= 1'b0;
            case (txsm_state)
                TXSM_RESET: begin
                    txsm_state     <= TXSM_WAIT;
                    txsm_byte_clks <= 0;
                end

                TXSM_WAIT: begin
                    txsm_byte_clks <= 0;
                    if (utmi_txvalid_o)
                        txsm_state <= TXSM_SEND_SYNC;
                end

                TXSM_SEND_SYNC: begin
                    // Earliest legal FS-only SYNC start is implementation
                    // dependent; allow the byte interface to accept PID here.
                    if (utmi_txvalid_o) begin
                        utmi_txready_i <= 1'b1;
                        txsm_byte_clks <= 31;
                        txsm_state <= TXSM_DATA_LOAD;
                    end else begin
                        txsm_state <= TXSM_WAIT;
                    end
                end

                TXSM_DATA_LOAD: begin
                    if (!utmi_txvalid_o) begin
                        txsm_byte_clks <= 0;
                        txsm_eop_clks  <= 2;
                        txsm_state     <= TXSM_SEND_EOP;
                    end else if (txsm_byte_clks > 0) begin
                        txsm_byte_clks <= txsm_byte_clks - 1;
                    end else begin
                        // One-cycle TXREADY pulse once per 32-clock byte time.
                        utmi_txready_i <= 1'b1;
                        txsm_byte_clks <= 31;
                    end
                end

                TXSM_SEND_EOP: begin
                    utmi_txready_i <= 1'b0;
                    if (txsm_eop_clks > 1) begin
                        txsm_eop_clks <= txsm_eop_clks - 1;
                    end else begin
                        txsm_eop_clks <= 0;
                        txsm_state <= TXSM_WAIT;
                    end
                end

                default: begin
                    utmi_txready_i <= 1'b0;
                    txsm_state <= TXSM_RESET;
                    txsm_eop_clks <= 0;
                    txsm_byte_clks <= 0;
                end
            endcase
        end
    end

    // ------------------------------------------------------------------------
    // Capture host/DUT packet bytes at UTMI TX interface.
    // ------------------------------------------------------------------------
    always @(posedge clk_i) begin
        if (rst_i) begin
            tx_pkt_q.delete();
            tx_packet_active <= 1'b0;
        end else begin
            if (utmi_txvalid_o && utmi_txready_i) begin
                tx_pkt_q.push_back(utmi_data_out_o);
                tx_packet_active <= 1'b1;
            end else if (tx_packet_active && !utmi_txvalid_o) begin
                tx_packet_active <= 1'b0;
                // Process the completed packet synchronously.  The previous
                // implementation forked process_packet(pkt_copy) using a
                // shared pkt_copy queue.  Because join_none starts the child
                // later, pkt_copy could be overwritten by the next UTMI
                // packet before the child evaluated its argument.  That race
                // caused DATA packets to be ignored and produced the large
                // cascade of missing ACK/DATA/NAK/STALL failures.
                pkt_copy = tx_pkt_q;
                tx_pkt_q.delete();

                // UTMI 1.05 Table 1 encoding: LineState[0]=DP, [1]=DM.
                // Therefore SE0=00, J=01, K=10, SE1=11.
                // FS EOP (spec 6.1.2): SE0 for 2 bit times, then J for 1 bit.
                // At 48 MHz FS-only UTMI, one bit time is 4 clocks.
                utmi_linestate_i <= 2'b00; // SE0 / EOP
                repeat (FS_EOP_SE0_CLKS) @(posedge clk_i);
                utmi_linestate_i <= 2'b01; // J / idle
                repeat (FS_EOP_J_CLKS) @(posedge clk_i);
                $display("[%0t] BFM: Host packet EOP complete; LineState returned to J", $time);

                process_packet(pkt_copy);
            end
        end
    end

    // ------------------------------------------------------------------------
    // Default descriptors
    // Device: VID 1234 / PID 5678, one configuration.
    // Configuration: Interface 0, EP1 IN interrupt, EP2 OUT bulk.
    // ------------------------------------------------------------------------
    task automatic load_default_descriptors();
        begin
            device_desc[0]  = 8'h12;
            device_desc[1]  = DESC_DEVICE;
            device_desc[2]  = 8'h10; device_desc[3] = 8'h01;
            device_desc[4]  = 8'h00; device_desc[5] = 8'h00; device_desc[6] = 8'h00;
            device_desc[7]  = EP0_MAX_PACKET_SIZE;
            device_desc[8]  = 8'h34; device_desc[9]  = 8'h12; // VID
            device_desc[10] = 8'h78; device_desc[11] = 8'h56; // PID
            device_desc[12] = 8'h00; device_desc[13] = 8'h01;
            device_desc[14] = 8'h01; // manufacturer
            device_desc[15] = 8'h02; // product
            device_desc[16] = 8'h03; // serial
            device_desc[17] = 8'h01; // one configuration
            device_desc_len = 18;

            config_desc[0] = 8'h09; config_desc[1] = DESC_CONFIGURATION;
            config_desc[2] = 8'h2E; config_desc[3] = 8'h00; // total 46 bytes
            config_desc[4] = 8'h01; // interfaces
            config_desc[5] = 8'h01; // configuration value
            config_desc[6] = 8'h00;
            config_desc[7] = 8'h80; // bus powered
            config_desc[8] = 8'h32; // 100mA

            config_desc[9]  = 8'h09; config_desc[10] = DESC_INTERFACE;
            config_desc[11] = 8'h00; config_desc[12] = 8'h00;
            config_desc[13] = 8'h04; // 4 endpoints
            config_desc[14] = 8'hFF; config_desc[15] = 8'h00; config_desc[16] = 8'h00;
            config_desc[17] = 8'h00;

            // EP1 IN interrupt, MPS 64, interval 1 ms
            config_desc[18] = 8'h07; config_desc[19] = DESC_ENDPOINT;
            config_desc[20] = 8'h81; config_desc[21] = 8'h03;
            config_desc[22] = 8'h40; config_desc[23] = 8'h00; config_desc[24] = 8'h01;

            // EP2 OUT bulk, MPS 64
            config_desc[25] = 8'h07; config_desc[26] = DESC_ENDPOINT;
            config_desc[27] = 8'h02; config_desc[28] = 8'h02;
            config_desc[29] = 8'h40; config_desc[30] = 8'h00; config_desc[31] = 8'h00;

            // EP3 IN bulk, MPS 64
            config_desc[32] = 8'h07; config_desc[33] = DESC_ENDPOINT;
            config_desc[34] = 8'h83; config_desc[35] = 8'h02;
            config_desc[36] = 8'h40; config_desc[37] = 8'h00; config_desc[38] = 8'h00;

            // EP4 OUT interrupt, MPS 64, interval 1 ms
            config_desc[39] = 8'h07; config_desc[40] = DESC_ENDPOINT;
            config_desc[41] = 8'h04; config_desc[42] = 8'h03;
            config_desc[43] = 8'h40; config_desc[44] = 8'h00; config_desc[45] = 8'h01;
            config_desc_len = 46;

            set_string_descriptor(1, "Harish BFM");
            set_string_descriptor(2, "USB Device BFM");
            set_string_descriptor(3, "000001");

            if (AUTO_CONFIG_DEFAULT_EP) begin
                ep_enabled[1] = 1'b1; ep_dir_in[1] = 1'b1; ep_type[1] = EP_TYPE_INT;  ep_mps[1] = 64; ep_interval[1] = 1;
                ep_enabled[2] = 1'b1; ep_dir_in[2] = 1'b0; ep_type[2] = EP_TYPE_BULK; ep_mps[2] = 64; ep_interval[2] = 0;
                ep_enabled[3] = 1'b1; ep_dir_in[3] = 1'b1; ep_type[3] = EP_TYPE_BULK; ep_mps[3] = 64; ep_interval[3] = 0;
                ep_enabled[4] = 1'b1; ep_dir_in[4] = 1'b0; ep_type[4] = EP_TYPE_INT;  ep_mps[4] = 64; ep_interval[4] = 1;
            end
        end
    endtask

    // ------------------------------------------------------------------------
    // Descriptor configuration tasks
    // ------------------------------------------------------------------------
    task automatic set_device_descriptor(input logic [7:0] data[], input integer len);
        integer i;
        begin
            device_desc_len = (len > MAX_DESC_BYTES) ? MAX_DESC_BYTES : len;
            for (i = 0; i < device_desc_len; i = i + 1) device_desc[i] = data[i];
            if (device_desc_len >= 8) device_desc[7] = EP0_MAX_PACKET_SIZE;
        end
    endtask

    task automatic set_configuration_descriptor(input logic [7:0] data[], input integer len);
        integer i;
        begin
            config_desc_len = (len > MAX_DESC_BYTES) ? MAX_DESC_BYTES : len;
            for (i = 0; i < config_desc_len; i = i + 1) config_desc[i] = data[i];
        end
    endtask

    task automatic set_string_descriptor(input integer index, input string str);
        integer i, n;
        begin
            if (index == 0 || index >= MAX_STRINGS) return;
            n = str.len();
            if ((2 + 2*n) > MAX_DESC_BYTES) n = (MAX_DESC_BYTES-2)/2;
            string_desc[index][0] = 2 + 2*n;
            string_desc[index][1] = DESC_STRING;
            for (i = 0; i < n; i = i + 1) begin
                string_desc[index][2 + 2*i] = str.getc(i);
                string_desc[index][3 + 2*i] = 8'h00;
            end
            string_desc_len[index] = 2 + 2*n;
        end
    endtask

    // ------------------------------------------------------------------------
    // Public USB bus reset operation.
    // ------------------------------------------------------------------------
    task automatic usb_bus_reset();
        integer i;
        integer j;
        begin
            $display("[%0t] DEVICE BFM: USB BUS RESET", $time);
            device_state = DEV_DEFAULT;
            device_addr = 7'd0;
            pending_address = 7'd0;
            address_update_pending = 1'b0;
            configuration_value = 8'd0;
            pending_configuration = 8'd0;
            remote_wakeup_enabled = 1'b0;
            pending_feature_valid = 1'b0;
            pending_feature_set = 1'b0;
            pending_feature_remote_wakeup = 1'b0;
            pending_feature_ep = 4'd0;
            control_transfer_active = 1'b0;
            ctrl_stall_pending = 1'b0;
            ctrl_stage = CTRL_IDLE;
            ep0_in_data_len = 0;
            ep0_out_data_len = 0;
            ctrl_data_transferred = 0;
            ctrl_data_remaining = 0;
            ctrl_in_data_index = 0;
            ctrl_out_data_len = 0;
            ctrl_in_zlp_required = 0;
            pending_data = 0;
            pending_token_pid = 0;
            pending_addr = 0;
            pending_ep = 0;
            expected_data_pid = 0;
            tx_pkt_q.delete();
            pkt_copy.delete();
            last_in_len = 0;
            last_in_ep0 = 0;
            last_in_was_control_data = 0;
            last_in_was_status = 0;
            last_in_was_zlp = 0;
            last_in_requires_ack = 1;
            reset_epoch = reset_epoch + 1;
            retry_pending = 1'b0;
            retry_payload.delete();
            retry_ep = '0;
            retry_pid = PID_DATA0;
            retry_crc = '0;
            retry_corrupt_crc = 1'b0;
            retry_last_in_len = 0;
            retry_last_in_ep0 = 1'b0;
            retry_last_in_was_control_data = 1'b0;
            retry_last_in_was_status = 1'b0;
            retry_last_in_was_zlp = 1'b0;
            retry_last_in_requires_ack = 1'b1;
            ctrl_data_dir_in = 1'b0;
            ctrl_status_dir_in = 1'b0;
            ctrl_wLength = 16'd0;
            ctrl_data_transferred = 16'd0;
            ctrl_data_remaining = 16'd0;
            ctrl_in_data_index = 0;
            ctrl_out_data_len = 0;
            ctrl_in_zlp_required = 1'b0;
            ctrl_last_packet_len = 0;
            setup_bmRequestType = 8'd0;
            setup_bRequest = 8'd0;
            setup_wValue = 16'd0;
            setup_wIndex = 16'd0;
            setup_wLength = 16'd0;
            in_data_len = 0;
            pending_feature_valid = 0;
            pending_feature_set = 0;
            pending_feature_remote_wakeup = 0;
            pending_feature_ep = 0;
            utmi_data_in_i = 8'h00;
            utmi_rxvalid_i = 1'b0;
            utmi_rxactive_i = 1'b0;
            utmi_rxerror_i = 1'b0;
            utmi_txready_i = 1'b0;
            utmi_linestate_i = 2'b01; // return bus model to Full-Speed J idle
            txsm_state = TXSM_RESET;
            txsm_eop_clks = 0;
            txsm_byte_clks = 0;
            state = ST_IDLE;
            frame_number = 0;
            for (i = 0; i < MAX_ENDPOINTS; i = i + 1) begin
                ep_enabled[i] = (i == 0);
                ep_halted[i] = 1'b0;
                ep_can_receive[i] = 1'b1;
                in_toggle[i] = 1'b0;
                out_toggle[i] = 1'b0;
                ep_dir_in[i] = 1'b0;
                ep_type[i] = (i == 0) ? EP_TYPE_CONTROL : EP_TYPE_BULK;
                ep_mps[i] = (i == 0) ? EP0_MAX_PACKET_SIZE : 64;
                ep_interval[i] = 1;
                out_data_len[i] = 0;
                ep_in_data_len[i] = 0;
            end

            // USB 2.0 specifies interface alternate setting 0 after reset.
            for (j = 0; j < MAX_INTERFACES; j = j + 1)
                interface_alt_setting[j] = 8'h00;

            ep_enabled[0] = 1'b1;
            ep_type[0] = EP_TYPE_CONTROL;
            ep_mps[0] = EP0_MAX_PACKET_SIZE;
        end
    endtask

    // ------------------------------------------------------------------------
    // Request decode / SETUP processing
    // ------------------------------------------------------------------------
    task automatic initialize_control_transfer();
        begin
            ctrl_data_dir_in = setup_bmRequestType[7];
            ctrl_status_dir_in = ~setup_bmRequestType[7];
            ctrl_wLength = setup_wLength;
            ctrl_data_transferred = 0;
            ctrl_data_remaining = setup_wLength;
            ctrl_in_data_index = 0;
            ctrl_out_data_len = 0;
            ctrl_in_zlp_required = 0;
            ctrl_last_packet_len = 0;
            last_in_len = 0;
            last_in_was_control_data = 1'b0;
            last_in_was_status = 1'b0;
            last_in_was_zlp = 1'b0;
            ep0_in_data_len = 0;
            ep0_out_data_len = 0;
            in_toggle[0] = 1'b1;
            out_toggle[0] = 1'b1;
            control_transfer_active = 1'b1;
            ctrl_stall_pending = 1'b0;
        end
    endtask

    task automatic prepare_ep0_response(input logic [7:0] data[], input integer len);
        integer i, n;
        begin
            n = len;
            if (n > MAX_DESC_BYTES) n = MAX_DESC_BYTES;
            ep0_in_data_len = n;
            for (i = 0; i < n; i = i + 1) ep0_in_data[i] = data[i];
            ctrl_in_data_index = 0;
            ctrl_data_transferred = 0;
            ctrl_data_remaining = setup_wLength;
        end
    endtask

    task automatic prepare_ep0_single_byte(input logic [7:0] value);
        begin
            ep0_in_data[0] = value;
            ep0_in_data_len = 1;
            ctrl_in_data_index = 0;
            ctrl_data_transferred = 0;
            ctrl_data_remaining = setup_wLength;
        end
    endtask

    task automatic prepare_ep0_two_bytes(input logic [7:0] b0, input logic [7:0] b1);
        begin
            ep0_in_data[0] = b0;
            ep0_in_data[1] = b1;
            ep0_in_data_len = 2;
            ctrl_in_data_index = 0;
            ctrl_data_transferred = 0;
            ctrl_data_remaining = setup_wLength;
        end
    endtask

    task automatic prepare_descriptor_response();
        logic [7:0] tmp[$];
        logic [7:0] dtype, dindex;
        integer i, n;
        begin
            tmp.delete();
            dtype = setup_wValue[15:8];
            dindex = setup_wValue[7:0];
            case (dtype)
                DESC_DEVICE: begin
                    n = device_desc_len;
                    for (i = 0; i < n; i = i + 1) tmp.push_back(device_desc[i]);
                end
                DESC_CONFIGURATION: begin
                    n = config_desc_len;
                    for (i = 0; i < n; i = i + 1) tmp.push_back(config_desc[i]);
                end
                DESC_STRING: begin
                    if (dindex == 0) begin
                        tmp.push_back(8'h04); tmp.push_back(DESC_STRING); tmp.push_back(8'h09); tmp.push_back(8'h04);
                    end else if (dindex < MAX_STRINGS && string_desc_len[dindex] != 0) begin
                        n = string_desc_len[dindex];
                        for (i = 0; i < n; i = i + 1) tmp.push_back(string_desc[dindex][i]);
                    end
                end
                default: begin end
            endcase

            if (tmp.size() == 0) begin
                // Unknown descriptor type/index is unsupported: do not fake an
                // empty successful data stage. The next EP0 IN must return STALL.
                ep0_in_data_len = 0;
                ctrl_stall_pending = 1'b1;
                ctrl_stage = CTRL_IDLE;
                $display("[%0t] BFM: Unsupported descriptor type=%02h index=%0d -> STALL",
                         $time, dtype, dindex);
                return;
            end

            n = tmp.size();
            if (n > MAX_DESC_BYTES) n = MAX_DESC_BYTES;
            // The source descriptor may be longer than wLength; keep the full
            // image in storage and let respond_to_in() limit bytes sent to the
            // host's requested length. Log both values for debug visibility.
            $display("[%0t] BFM: GET_DESCRIPTOR type=%02h index=%0d stored_len=%0d requested=%0d",
                     $time, dtype, dindex, n, setup_wLength);
            ep0_in_data_len = n;
            for (i = 0; i < n; i = i + 1) begin
                ep0_in_data[i] = tmp[i];
                if (inject_descriptor_corruption && i == 2) ep0_in_data[i] = ~tmp[i];
            end
            ctrl_in_data_index = 0;
            ctrl_data_transferred = 0;
            ctrl_data_remaining = setup_wLength;
            ctrl_stage = CTRL_DATA_IN;
        end
    endtask

    task automatic decode_standard_request();
        logic [4:0] recipient;
        logic [1:0] req_type;
        logic dir_in;
        integer ep;
        begin
            req_type = setup_bmRequestType[6:5];
            recipient = setup_bmRequestType[4:0];
            dir_in = setup_bmRequestType[7];
            setup_request_type = req_type;
            setup_recipient = recipient;
            setup_direction_in = dir_in;

            if (req_type != REQ_TYPE_STANDARD) begin
                // Framework for class/vendor requests. Unsupported requests STALL.
                $display("[%0t] BFM: Non-standard request type=%0d bRequest=%02h", $time, req_type, setup_bRequest);
                ctrl_stall_pending = 1'b1;
                ctrl_stage = CTRL_IDLE;
                return;
            end

            case (setup_bRequest)
                REQ_GET_DESCRIPTOR: begin
                    if (!dir_in || recipient != 5'd0) begin ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE; end
                    else prepare_descriptor_response();
                end

                REQ_SET_ADDRESS: begin
                    if (dir_in || recipient != 5'd0 || setup_wValue[15:7] != 0 || setup_wLength != 0) begin
                        ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE;
                    end else begin
                        pending_address = setup_wValue[6:0];
                        address_update_pending = 1'b1;
                        ctrl_stage = CTRL_STATUS_IN;
                    end
                end

                REQ_SET_CONFIGURATION: begin
                    // This BFM advertises one configuration with value 1;
                    // value 0 is legal for unconfiguration.
                    if (dir_in || recipient != 5'd0 || setup_wLength != 0 ||
                        setup_wValue[15:8] != 8'h00 ||
                        (setup_wValue[7:0] != 8'h00 && setup_wValue[7:0] != config_desc[5])) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else begin
                        pending_configuration = setup_wValue[7:0];
                        ctrl_stage = CTRL_STATUS_IN;
                    end
                end

                REQ_GET_CONFIGURATION: begin
                    if (!dir_in || recipient != 5'd0 || setup_wLength == 0) begin ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE; end
                    else begin
                        prepare_ep0_single_byte(configuration_value);
                        ctrl_stage = CTRL_DATA_IN;
                    end
                end

                REQ_GET_STATUS: begin
                    if (!dir_in || setup_wLength != 2) begin
                        ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE;
                    end else begin
                        if (recipient == 5'd0) begin
                            prepare_ep0_two_bytes({6'b0, remote_wakeup_enabled, 1'b0}, 8'h00);
                        end else if (recipient == 5'd2) begin
                            ep = setup_wIndex[3:0];
                            if (ep < MAX_ENDPOINTS)
                                prepare_ep0_two_bytes({7'b0, ep_halted[ep]}, 8'h00);
                            else
                                prepare_ep0_two_bytes(8'h00, 8'h00);
                        end else begin
                            prepare_ep0_two_bytes(8'h00, 8'h00);
                        end
                        ctrl_stage = CTRL_DATA_IN;
                    end
                end

                REQ_SET_FEATURE: begin
                    if (dir_in || setup_wLength != 0 || setup_wValue[15:1] != 0) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else if (recipient == 5'd0 && setup_wValue == FEAT_REMOTE_WAKEUP) begin
                        pending_feature_valid = 1'b1;
                        pending_feature_set = 1'b1;
                        pending_feature_remote_wakeup = 1'b1;
                        ctrl_stage = CTRL_STATUS_IN;
                    end else if (recipient == 5'd2 && setup_wValue == FEAT_ENDPOINT_HALT) begin
                        ep = setup_wIndex[3:0];
                        if (ep == 0 || ep >= MAX_ENDPOINTS || setup_wIndex[15:7] != 0) begin
                            ctrl_stall_pending = 1'b1;
                            ctrl_stage = CTRL_IDLE;
                        end else begin
                            pending_feature_valid = 1'b1;
                            pending_feature_set = 1'b1;
                            pending_feature_remote_wakeup = 1'b0;
                            pending_feature_ep = ep[3:0];
                            ctrl_stage = CTRL_STATUS_IN;
                        end
                    end else begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end
                end

                REQ_CLEAR_FEATURE: begin
                    if (dir_in || setup_wLength != 0 || setup_wValue[15:1] != 0) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else if (recipient == 5'd0 && setup_wValue == FEAT_REMOTE_WAKEUP) begin
                        pending_feature_valid = 1'b1;
                        pending_feature_set = 1'b0;
                        pending_feature_remote_wakeup = 1'b1;
                        ctrl_stage = CTRL_STATUS_IN;
                    end else if (recipient == 5'd2 && setup_wValue == FEAT_ENDPOINT_HALT) begin
                        ep = setup_wIndex[3:0];
                        if (ep == 0 || ep >= MAX_ENDPOINTS || setup_wIndex[15:7] != 0) begin
                            ctrl_stall_pending = 1'b1;
                            ctrl_stage = CTRL_IDLE;
                        end else begin
                            pending_feature_valid = 1'b1;
                            pending_feature_set = 1'b0;
                            pending_feature_remote_wakeup = 1'b0;
                            pending_feature_ep = ep[3:0];
                            ctrl_stage = CTRL_STATUS_IN;
                        end
                    end else begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end
                end

                REQ_GET_INTERFACE: begin
                    if (!dir_in || recipient != 5'd1 || setup_wLength != 1 ||
                        setup_wIndex[15:8] != 8'h00 || setup_wIndex[7:0] >= MAX_INTERFACES) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else begin
                        prepare_ep0_single_byte(interface_alt_setting[setup_wIndex[7:0]]);
                        ctrl_stage = CTRL_DATA_IN;
                    end
                end

                REQ_SET_INTERFACE: begin
                    if (dir_in || recipient != 5'd1 || setup_wLength != 0 ||
                        setup_wIndex[15:8] != 8'h00 || setup_wIndex[7:0] >= MAX_INTERFACES ||
                        setup_wValue[15:8] != 8'h00) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else begin
                        interface_alt_setting[setup_wIndex[7:0]] = setup_wValue[7:0];
                        ctrl_stage = CTRL_STATUS_IN;
                    end
                end

                REQ_SET_DESCRIPTOR: begin
                    if (dir_in || setup_wLength == 0) begin ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE; end
                    else begin
                        ctrl_stage = CTRL_DATA_OUT;
                        ctrl_out_data_len = 0;
                    end
                end

                REQ_SYNCH_FRAME: begin
                    // Return current frame number for simulation completeness.
                    if (!dir_in || setup_wLength != 2 || recipient != 5'd2) begin ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE; end
                    else begin
                        prepare_ep0_two_bytes(frame_number[7:0], {5'b0, frame_number[10:8]});
                        ctrl_stage = CTRL_DATA_IN;
                    end
                end

                default: begin
                    ctrl_stall_pending = 1'b1;
                    ctrl_stage = CTRL_IDLE;
                end
            endcase
        end
    endtask

    // ------------------------------------------------------------------------
    // Commit pending SET_ADDRESS / SET_CONFIGURATION after status stage.
    // ------------------------------------------------------------------------
    task automatic complete_control_transfer();
        integer i;
        begin
            if (address_update_pending) begin
                device_addr = pending_address;
                address_update_pending = 1'b0;
                device_state = (device_addr == 0) ? DEV_DEFAULT : DEV_ADDRESSED;
                $display("[%0t] BFM: Address updated to %0d", $time, device_addr);
            end
            if (pending_configuration != 8'h00) begin
                configuration_value = pending_configuration;
                device_state = DEV_CONFIGURED;
                for (i = 0; i < MAX_ENDPOINTS; i = i + 1) begin
                    if (i == 0) begin
                        ep_enabled[i] = 1'b1;
                        ep_type[i] = EP_TYPE_CONTROL;
                        ep_mps[i] = EP0_MAX_PACKET_SIZE;
                    end
                end
                apply_configuration_endpoints();
                $display("[%0t] BFM: Configuration set to %0d", $time, configuration_value);
            end else if (setup_bRequest == REQ_SET_CONFIGURATION) begin
                configuration_value = 0;
                device_state = (device_addr == 0) ? DEV_DEFAULT : DEV_ADDRESSED;
                for (i = 1; i < MAX_ENDPOINTS; i = i + 1) ep_enabled[i] = 1'b0;
            end
            if (pending_feature_valid) begin
                if (pending_feature_remote_wakeup) begin
                    remote_wakeup_enabled = pending_feature_set;
                end else if (pending_feature_ep < MAX_ENDPOINTS) begin
                    ep_halted[pending_feature_ep] = pending_feature_set;
                    if (!pending_feature_set) begin
                        // CLEAR_FEATURE(ENDPOINT_HALT) resets data toggles.
                        in_toggle[pending_feature_ep] = 1'b0;
                        out_toggle[pending_feature_ep] = 1'b0;
                    end
                end
            end
            pending_feature_valid = 1'b0;
            pending_feature_set = 1'b0;
            pending_feature_remote_wakeup = 1'b0;
            pending_configuration = 0;
            control_transfer_active = 1'b0;
            ctrl_stage = CTRL_COMPLETE;
        end
    endtask

    // Parse the endpoint descriptors in the active configuration.
    task automatic apply_configuration_endpoints();
        integer off, i, epn, mps;
        logic [7:0] len, dtype, addr, attr, interval;
        begin
            for (i = 1; i < MAX_ENDPOINTS; i = i + 1) begin
                ep_enabled[i] = 1'b0;
                ep_halted[i] = 1'b0;
                in_toggle[i] = 1'b0;
                out_toggle[i] = 1'b0;
            end
            off = 0;
            while (off + 1 < config_desc_len) begin
                len = config_desc[off];
                dtype = config_desc[off+1];
                // A descriptor must at least include bLength/bDescriptorType
                // and fit entirely in the configuration image.  Terminate on
                // malformed data instead of using break, which some simulators
                // do not support in a task loop.
                if (len < 2 || off + len > config_desc_len) begin
                    off = config_desc_len;
                end else begin
                    if (dtype == DESC_ENDPOINT && len >= 7) begin
                        addr = config_desc[off+2];
                        attr = config_desc[off+3] & 2'b11;
                        epn = addr[3:0];
                        mps = {config_desc[off+5], config_desc[off+4]} & 16'h07FF;
                        interval = config_desc[off+6];
                        if (epn < MAX_ENDPOINTS && epn != 0) begin
                            ep_enabled[epn] = 1'b1;
                            ep_dir_in[epn] = addr[7];
                            ep_type[epn] = attr;
                            ep_mps[epn] = (mps == 0) ? 64 : mps;
                            ep_interval[epn] = interval;
                        end
                    end
                    off = off + len;
                end
            end
            ep_enabled[0] = 1'b1;
        end
    endtask

    // ------------------------------------------------------------------------
    // Main packet decoder
    // ------------------------------------------------------------------------
    task automatic process_packet(input logic [7:0] pkt[$]);
        logic [7:0] pid;
        logic [6:0] addr;
        logic [3:0] ep;
        logic [15:0] received_crc, calculated_crc;
        logic [7:0] data_bytes[$];
        logic [4:0] crc5_calc, crc5_rx;
        integer i, j;
        begin
            if (pkt.size() == 0) return;
            pid = pkt[0];
            if (!valid_pid(pid)) begin
                $display("[%0t] BFM: Invalid PID %02h", $time, pid);
                return;
            end

            // Host ACK after BFM IN response.
            if (pid == PID_ACK || pid == PID_NAK || pid == PID_STALL) begin
                if (pid == PID_ACK && state == ST_WAIT_ACK && pending_token_pid == PID_IN) begin
                    if (pending_ep < MAX_ENDPOINTS && ep_type[pending_ep] != EP_TYPE_ISO)
                        in_toggle[pending_ep] = ~in_toggle[pending_ep];
                    if (last_in_ep0) complete_ep0_in_ack();
                    // A valid ACK commits this packet. Only now may a later IN
                    // request generate a new PID/payload and advance EP0 data.
                    retry_pending = 1'b0;
                    retry_payload.delete();
                    state = ST_IDLE;
                end
                return;
            end

            // Token packet.
            if (pid == PID_OUT || pid == PID_IN || pid == PID_SETUP || pid == PID_SOF) begin
                if (pkt.size() != 3) return;
                addr = pkt[1][6:0];
		ep   = {pkt[2][2:0], pkt[1][7]};
                // SOF carries an 11-bit frame number, unlike token ADDR/ENDP.
                if (pid == PID_SOF)
                    crc5_calc = crc5_usb_bits({pkt[2][2:0], pkt[1]});
                else
                    crc5_calc = crc5_usb(addr, ep);
                if (inject_bad_crc5) crc5_calc = ~crc5_calc;
                crc5_rx = pkt[2][7:3];
                if (crc5_rx != crc5_calc) begin
                    $display("[%0t] BFM: CRC5 ERROR PID=%02h ADDR=%0d EP=%0d RX=%02h CALC=%02h", $time, pid, addr, ep, crc5_rx, crc5_calc);
                    return;
                end

                if (pid == PID_SOF) begin
                    // SOF token carries an 11-bit frame number, not ADDR/EP.
                    frame_number = {pkt[2][2:0], pkt[1]};
                    sof_seen = 1'b1;
                    $display("[%0t] BFM: SOF frame=%0d", $time, frame_number);
                    return;
                end

                // A cached IN packet is reusable only for a retry of the same
                // endpoint. A different token abandons that retry context.
                if (retry_pending && (pid != PID_IN || ep != retry_ep)) begin
                    retry_pending = 1'b0;
                    retry_payload.delete();
                end
                pending_token_pid = pid;
                pending_addr = addr;
                pending_ep = ep;

                // Do not index endpoint arrays until the range check has
                // passed.  Invalid endpoint tests must not access ep_type[ep]
                // out of bounds.
                if (ep >= MAX_ENDPOINTS) begin
                    $display("[%0t] BFM: Invalid endpoint %0d", $time, ep);
                    if (pid == PID_IN) send_handshake(PID_STALL);
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                $display("[%0t] BFM: %s token EP%0d type=%s", $time, (pid==PID_IN)?"IN":(pid==PID_OUT)?"OUT":"SETUP", ep, endpoint_type_name(ep_type[ep]));

                if (addr != device_addr) begin
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end
                if (!ep_enabled[ep]) begin
                    if (pid == PID_IN) send_handshake(PID_STALL);
                    else pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                // Endpoint direction is part of the endpoint descriptor.
                // EP0 is bidirectional control; non-zero endpoints have a
                // fixed direction.
                if (pid == PID_IN && ep != 0 && !ep_dir_in[ep]) begin
                    $display("[%0t] BFM: Invalid IN token on OUT EP%0d (%s)", $time, ep, endpoint_type_name(ep_type[ep]));
                    send_handshake(PID_STALL);
                    state = ST_IDLE;
                    return;
                end
                if (pid == PID_OUT && ep != 0 && ep_dir_in[ep]) begin
                    $display("[%0t] BFM: Invalid OUT token on IN EP%0d (%s)", $time, ep, endpoint_type_name(ep_type[ep]));
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                if (ep != 0 && device_state != DEV_CONFIGURED) begin
                    $display("[%0t] BFM: EP%0d accessed while device not CONFIGURED", $time, ep);
                    if (pid == PID_IN) send_handshake(PID_STALL);
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                if (ep_halted[ep] && pid != PID_SETUP) begin
                    if (pid == PID_IN) send_handshake(PID_STALL);
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                if (pid == PID_IN) begin
                    pending_data = 1'b0;
                    state = ST_SEND_DATA;
                    // Keep IN response generation in the same packet-processing
                    // thread.  A detached response task can race with the next
                    // ACK/token and corrupt pending/last-IN state.
                    respond_to_in(ep);
                end else begin
                    if (pid == PID_SETUP && ep != 0) begin
                        send_handshake(PID_STALL);
                        return;
                    end
                    pending_data = 1'b1;
                    expected_data_pid = (pid == PID_SETUP) ? PID_DATA0 : (out_toggle[ep] ? PID_DATA1 : PID_DATA0);
                    state = ST_WAIT_DATA;
                end
                return;
            end

            // DATA packet.
            if (pid == PID_DATA0 || pid == PID_DATA1) begin
                $display("[%0t] BFM: DATA packet PID=%02h bytes=%0d pending=%0b expected=%02h",
                         $time, pid, pkt.size(), pending_data, expected_data_pid);
                if (!pending_data || pkt.size() < 3) return;

                data_bytes.delete();
                for (i = 1; i < pkt.size()-2; i = i + 1) data_bytes.push_back(pkt[i]);
                received_crc = {pkt[pkt.size()-1], pkt[pkt.size()-2]};
                calculated_crc = ~crc16_usb(data_bytes);
                if (received_crc != calculated_crc) begin
                    $display("[%0t] BFM: CRC16 ERROR EP%0d PID=%02h RX=%04h CALC=%04h",
                             $time, pending_ep, pid, received_crc, calculated_crc);
                    pending_data = 1'b0;
                    state = ST_ERROR;
                    return;
                end

                // A valid duplicate OUT DATA packet is ACKed again, but its
                // payload is not stored and the endpoint toggle is not advanced.
                if (pid != expected_data_pid) begin
                    if (pending_token_pid == PID_OUT &&
                        pid == (expected_data_pid == PID_DATA0 ? PID_DATA1 : PID_DATA0)) begin
                        if (ep_type[pending_ep] != EP_TYPE_ISO) send_handshake(PID_ACK);
                        pending_data = 1'b0;
                        state = ST_IDLE;
                        return;
                    end
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                if (pending_token_pid == PID_SETUP) begin
                    if (data_bytes.size() != 8) begin
                        send_handshake(PID_STALL);
                        pending_data = 1'b0;
                        return;
                    end
                    for (j = 0; j < 8; j = j + 1) ep0_out_data[j] = data_bytes[j];
                    ep0_out_data_len = 8;
                    setup_bmRequestType = data_bytes[0];
                    setup_bRequest = data_bytes[1];
                    setup_wValue = {data_bytes[3], data_bytes[2]};
                    setup_wIndex = {data_bytes[5], data_bytes[4]};
                    setup_wLength = {data_bytes[7], data_bytes[6]};
                    // A new SETUP aborts any previous EP0 transfer context.
                    pending_data = 1'b0;
                    pending_feature_valid = 1'b0;
                    address_update_pending = 1'b0;
                    pending_configuration = 8'd0;
                    initialize_control_transfer();
                    decode_standard_request();
                    send_handshake(PID_ACK);
                    pending_data = 1'b0;
                    return;
                end

                // Fault injection applies to ordinary OUT transactions, not SETUP.
                // NAK means the endpoint cannot currently accept the payload.
                if (pending_token_pid == PID_OUT && response_mode == RESP_TIMEOUT) begin
                    // Deliberately suppress the handshake for timeout testing.
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end
                if (pending_token_pid == PID_OUT && response_mode == RESP_NAK) begin
                    if (ep_type[pending_ep] != EP_TYPE_ISO) send_handshake(PID_NAK);
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end
                if (pending_token_pid == PID_OUT && response_mode == RESP_STALL) begin
                    if (ep_type[pending_ep] != EP_TYPE_ISO) send_handshake(PID_STALL);
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                // Control STATUS OUT stage: must be a zero-length DATA1 packet.
                if (pending_ep == 0 && ctrl_stage == CTRL_STATUS_OUT) begin
                    if (data_bytes.size() != 0) begin
                        send_handshake(PID_STALL);
                    end else begin
                        send_handshake(PID_ACK);
                        complete_control_transfer();
                    end
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                // Control OUT DATA stage.
                if (pending_ep == 0 && ctrl_stage == CTRL_DATA_OUT) begin
                    if ((ctrl_data_transferred + data_bytes.size()) > ctrl_wLength ||
                        data_bytes.size() > ep_mps[0]) begin
                        // Invalid oversized control payload: do not commit it.
                        send_handshake(PID_STALL);
                        pending_data = 1'b0;
                        state = ST_IDLE;
                        return;
                    end
                    for (j = 0; j < data_bytes.size() && ctrl_out_data_len < MAX_OUT_DATA; j = j + 1) begin
                        ep0_out_data[ctrl_out_data_len] = data_bytes[j];
                        ctrl_out_data_len = ctrl_out_data_len + 1;
                    end
                    ctrl_data_transferred = ctrl_data_transferred + data_bytes.size();
                    if (ctrl_data_transferred >= ctrl_wLength || data_bytes.size() < ep_mps[0]) begin
                        handle_set_descriptor_data();
                        ctrl_stage = CTRL_STATUS_IN;
                    end
                    send_handshake(PID_ACK);
                    out_toggle[0] = ~out_toggle[0];
                    pending_data = 1'b0;
                    return;
                end

                // Normal non-control endpoint.
                if (!ep_can_receive[pending_ep]) begin
                    // Isochronous endpoints do not use NAK handshakes; for
                    // bulk/interrupt, NAK means temporarily unavailable.
                    if (ep_type[pending_ep] != EP_TYPE_ISO)
                        send_handshake(PID_NAK);
                end else begin
                    out_data_len[pending_ep] = (data_bytes.size() > MAX_OUT_DATA) ? MAX_OUT_DATA : data_bytes.size();
                    for (j = 0; j < out_data_len[pending_ep]; j = j + 1) out_data_buf[pending_ep][j] = data_bytes[j];
                    // Isochronous transfers have no handshake and no DATA PID
                    // toggle. Bulk/interrupt transfers ACK and toggle.
                    if (ep_type[pending_ep] != EP_TYPE_ISO) begin
                        send_handshake(PID_ACK);
                        out_toggle[pending_ep] = ~out_toggle[pending_ep];
                    end
                end
                pending_data = 1'b0;
                state = ST_IDLE;
                return;
            end
        end
    endtask

    // ------------------------------------------------------------------------
    // Complete EP0 IN DATA/STATUS transaction after host ACK.
    // ------------------------------------------------------------------------
    task automatic complete_ep0_in_ack();
        integer packet_len;
        begin
            if (last_in_was_status) begin
                complete_control_transfer();
                return;
            end
            if (last_in_was_control_data) begin
                packet_len = last_in_len;
                ctrl_data_transferred = ctrl_data_transferred + packet_len;
                ctrl_in_data_index = ctrl_in_data_index + packet_len;

                if ((ctrl_data_transferred >= ctrl_wLength) ||
                    (packet_len < EP0_MAX_PACKET_SIZE) ||
                    (ctrl_in_data_index >= ep0_in_data_len)) begin
                    ctrl_stage = CTRL_STATUS_OUT;
                end
            end
        end
    endtask

    // ------------------------------------------------------------------------
    // Respond to IN token.
    // ------------------------------------------------------------------------
    task automatic respond_to_in(input logic [3:0] ep);
        logic [7:0] response_pid;
        logic [7:0] payload[$];
        logic [15:0] crc;
        integer i, n;
        logic corrupt;
        integer task_epoch;
        begin
            task_epoch = reset_epoch;
            if (response_delay_clks > 0) repeat(response_delay_clks) @(posedge clk_i);
            if (task_epoch != reset_epoch || rst_i) return;

            last_in_ep0 = (ep == 0);
            last_in_requires_ack = (ep_type[ep] != EP_TYPE_ISO);
            last_in_was_control_data = 1'b0;
            last_in_was_status = 1'b0;
            last_in_was_zlp = 1'b0;

            if (ep == 0 && ctrl_stall_pending) begin
                send_handshake(PID_STALL);
                state = ST_IDLE;
                return;
            end
            if (response_mode == RESP_TIMEOUT) begin state = ST_IDLE; return; end
            if (response_mode == RESP_NAK) begin send_handshake(PID_NAK); state = ST_IDLE; return; end
            if (response_mode == RESP_STALL || ep_halted[ep]) begin send_handshake(PID_STALL); state = ST_IDLE; return; end

            if (ep == 0) begin
                if (ctrl_stage == CTRL_STATUS_IN) begin
                    payload.delete();
                    last_in_was_status = 1'b1;
                end else if (ctrl_stage == CTRL_DATA_IN) begin
                    payload.delete();
                    if (ctrl_in_data_index < ep0_in_data_len && ctrl_data_transferred < ctrl_wLength) begin
                        n = ep0_in_data_len - ctrl_in_data_index;
                        if (n > EP0_MAX_PACKET_SIZE) n = EP0_MAX_PACKET_SIZE;
                        if (n > (ctrl_wLength - ctrl_data_transferred)) n = ctrl_wLength - ctrl_data_transferred;
                        for (i = 0; i < n; i = i + 1) payload.push_back(ep0_in_data[ctrl_in_data_index+i]);
                    end
                    last_in_was_control_data = 1'b1;
                end else begin
                    payload.delete();
                    last_in_was_status = 1'b1;
                end
            end else begin
                payload.delete();
                if (ep_in_data_len[ep] != 0) begin
                    n = ep_in_data_len[ep];
                    if (n > ep_mps[ep]) n = ep_mps[ep];
                    for (i = 0; i < n; i = i + 1) payload.push_back(ep_in_data[ep][i]);
                end else begin
                    // Backward-compatible common IN buffer.
                    n = in_data_len;
                    if (n > ep_mps[ep]) n = ep_mps[ep];
                    for (i = 0; i < n; i = i + 1) payload.push_back(in_data[i]);
                end
            end

            if (retry_pending && retry_ep == ep && last_in_requires_ack) begin
                // Retransmit the exact previously emitted DATA packet. Do not
                // recompute PID, CRC, payload, or EP0 completion metadata.
                payload = retry_payload;
                response_pid = retry_pid;
                crc = retry_crc;
                corrupt = retry_corrupt_crc;
                last_in_len = retry_last_in_len;
                last_in_ep0 = retry_last_in_ep0;
                last_in_was_control_data = retry_last_in_was_control_data;
                last_in_was_status = retry_last_in_was_status;
                last_in_was_zlp = retry_last_in_was_zlp;
                last_in_requires_ack = retry_last_in_requires_ack;
            end else begin
                response_pid = in_toggle[ep] ? PID_DATA1 : PID_DATA0;
                crc = ~crc16_usb(payload);
                corrupt = inject_crc_error || (response_mode == RESP_CRC_ERROR);
                if (inject_wrong_data_pid)
                    response_pid = (response_pid == PID_DATA0) ? PID_DATA1 : PID_DATA0;
                last_in_len = payload.size();
                last_in_was_zlp = (payload.size() == 0);

                if (ep_type[ep] != EP_TYPE_ISO) begin
                    retry_pending = 1'b1;
                    retry_ep = ep;
                    retry_pid = response_pid;
                    retry_payload = payload;
                    retry_crc = crc;
                    retry_corrupt_crc = corrupt;
                    retry_last_in_len = last_in_len;
                    retry_last_in_ep0 = last_in_ep0;
                    retry_last_in_was_control_data = last_in_was_control_data;
                    retry_last_in_was_status = last_in_was_status;
                    retry_last_in_was_zlp = last_in_was_zlp;
                    retry_last_in_requires_ack = last_in_requires_ack;
                end
            end

            send_data_packet(response_pid, payload, crc, corrupt);
            if (task_epoch != reset_epoch || rst_i) return;
            if (ep_type[ep] == EP_TYPE_ISO) begin
                // No ACK and no DATA toggle for isochronous transfers.
                state = ST_IDLE;
            end else begin
                state = ST_WAIT_ACK;
            end
        end
    endtask

    // ------------------------------------------------------------------------
    // SET_DESCRIPTOR DATA OUT handling.
    // ------------------------------------------------------------------------
    task automatic handle_set_descriptor_data();
        integer i, n, idx;
        logic [7:0] dtype, dindex;
        begin
            dtype = setup_wValue[15:8];
            dindex = setup_wValue[7:0];
            n = ctrl_out_data_len;
            if (dtype == DESC_DEVICE) begin
                if (n > MAX_DESC_BYTES) n = MAX_DESC_BYTES;
                for (i = 0; i < n; i = i + 1) device_desc[i] = ep0_out_data[i];
                device_desc_len = n;
            end else if (dtype == DESC_CONFIGURATION) begin
                if (n > MAX_DESC_BYTES) n = MAX_DESC_BYTES;
                for (i = 0; i < n; i = i + 1) config_desc[i] = ep0_out_data[i];
            end else if (dtype == DESC_STRING && dindex < MAX_STRINGS) begin
                if (n > MAX_DESC_BYTES) n = MAX_DESC_BYTES;
                for (i = 0; i < n; i = i + 1) string_desc[dindex][i] = ep0_out_data[i];
                string_desc_len[dindex] = n;
            end
        end
    endtask

    // ------------------------------------------------------------------------
    // Send handshake / DATA packet through UTMI RX interface.
    // ------------------------------------------------------------------------
    task automatic send_handshake(input logic [7:0] pid);
        integer byte_clk;
        integer task_epoch;
        begin
            task_epoch = reset_epoch;
            $display("[%0t] BFM: Scheduling handshake PID=%02h", $time, pid);

            // Device response turnaround before the handshake packet.
            repeat (DEVICE_IFS_CLKS) @(posedge clk_i);
            if (task_epoch != reset_epoch || rst_i) return;

            // UTMI RX interface: present the handshake PID on RX_DATA for a
            // complete FS-only byte time (32 clocks at 48 MHz). RXVALID is
            // asserted for one clock to mark the valid byte, per UTMI timing.
            // Keep RX_DATA stable for the rest of the byte time; do not clear
            // the PID immediately after the RXVALID pulse.
            utmi_rxerror_i  <= 1'b0;
            utmi_data_in_i  <= pid;
            utmi_rxactive_i <= 1'b1;
            utmi_rxvalid_i  <= 1'b1;
            $display("[%0t] BFM: Driving handshake PID=%02h", $time, pid);

            @(posedge clk_i);
            utmi_rxvalid_i <= 1'b0;

            // PID remains stable for the remaining 31 clocks of the 32-clock
            // Full-Speed byte time. RXACTIVE remains asserted through EOP.
            for (byte_clk = 0; byte_clk < 31; byte_clk = byte_clk + 1) begin
                @(posedge clk_i);
                if (task_epoch != reset_epoch || rst_i) return;
            end

            // USB FS EOP: SE0 for 2 bit times (8 clocks at 48 MHz), followed
            // by J for 1 bit time (4 clocks). UTMI encoding: SE0=00, J=01.
            utmi_linestate_i <= 2'b00;
            repeat (FS_EOP_SE0_CLKS) @(posedge clk_i);
            if (task_epoch != reset_epoch || rst_i) return;
            utmi_linestate_i <= 2'b01;

            // UTMI FS RXACTIVE deasserts within 2 clocks after FS idle.
            repeat (2) @(posedge clk_i);
            utmi_rxactive_i <= 1'b0;
            utmi_rxerror_i  <= 1'b0;

            // Ensure RXACTIVE is low for at least 4 clocks between packets.
            repeat (FS_EOP_J_CLKS) @(posedge clk_i);
            utmi_data_in_i <= 8'h00;
            $display("[%0t] BFM: Handshake PID=%02h byte time + EOP complete; LineState=J",
                     $time, pid);
        end
    endtask
/*
    task automatic send_data_packet(
        input logic [7:0] pid,
        input logic [7:0] payload[$],
        input logic [15:0] crc,
        input bit corrupt_crc
    );
        logic [15:0] tx_crc;
        integer i;
        begin
            tx_crc = crc;
            if (corrupt_crc) tx_crc[0] = ~tx_crc[0];

            // UTMI RXACTIVE denotes that a packet is being received. RXVALID
            // qualifies each byte on RX_DATA. They are intentionally HIGH
            // together for every valid packet byte; RXACTIVE drops only after
            // the final CRC byte has been sampled. Driving on posedges avoids
            // races with the DUT's posedge sampling logic.
            @(posedge clk_i);
            utmi_rxerror_i  = 1'b0;
            utmi_rxactive_i = 1'b1;
            utmi_rxvalid_i  = 1'b1;
            utmi_data_in_i  = pid;

            for (i = 0; i < payload.size(); i = i + 1) begin
                @(posedge clk_i);
                utmi_rxactive_i = 1'b1;
                utmi_rxvalid_i  = 1'b1;
                utmi_data_in_i  = payload[i];
            end

            @(posedge clk_i);
            utmi_rxactive_i = 1'b1;
            utmi_rxvalid_i  = 1'b1;
            utmi_data_in_i  = tx_crc[7:0];

            @(posedge clk_i);
            utmi_rxactive_i = 1'b1;
            utmi_rxvalid_i  = 1'b1;
            utmi_data_in_i  = tx_crc[15:8];

            // The last CRC byte is sampled at the following posedge. Then
            // end the packet cleanly: RXVALID low and RXACTIVE low together.
            @(posedge clk_i);
            utmi_rxvalid_i  = 1'b0;
            utmi_rxactive_i = 1'b0;
            utmi_rxerror_i  = 1'b0;
            utmi_data_in_i  = 8'h00;
        end
    endtask
*/

task automatic send_data_packet(
    input logic [7:0] pid,
    input logic [7:0] payload[$],
    input logic [15:0] crc,
    input bit corrupt_crc
);
    logic [15:0] tx_crc;
    integer i;
    logic [7:0] tx_byte;
    integer byte_idx;
    integer total_bytes;
    integer task_epoch;

    begin
        task_epoch = reset_epoch;
        tx_crc = crc;
        if (corrupt_crc)
            tx_crc[0] = ~tx_crc[0];

        // UTMI 1.05 Sections 4.4 and 5.8: RXVALID qualifies each valid byte
        // for one CLK; RXACTIVE remains asserted through the packet. In an
        // FS-only 8-bit UTMI at 48 MHz, bytes are separated by 32 CLK cycles.
        // Drive on falling edges so the DUT samples stable values on posedges.
        total_bytes = payload.size() + 3; // PID + payload + two CRC bytes
        for (byte_idx = 0; byte_idx < total_bytes; byte_idx = byte_idx + 1) begin
            if (byte_idx == 0)
                tx_byte = pid;
            else if (byte_idx <= payload.size())
                tx_byte = payload[byte_idx-1];
            else if (byte_idx == payload.size() + 1)
                tx_byte = tx_crc[7:0];
            else
                tx_byte = tx_crc[15:8];

            @(posedge clk_i);
            if (task_epoch != reset_epoch || rst_i) return;
            utmi_rxerror_i  <= 1'b0;
            utmi_rxactive_i <= 1'b1;
            utmi_rxvalid_i  <= 1'b1;
            utmi_data_in_i  <= tx_byte;

            // One CLK of RXVALID. Keep RXACTIVE high and allow the remaining
            // 31 clocks of this FS byte time before presenting the next byte.
            @(posedge clk_i);
            if (task_epoch != reset_epoch || rst_i) return;
            utmi_rxvalid_i <= 1'b0;
            repeat (30) @(posedge clk_i);
            if (task_epoch != reset_epoch || rst_i) return;
        end

        // The last CRC byte's 32-CLK byte time is complete. EOP on the bus is
        // SE0 for two bit times, then J for one bit time.
        @(posedge clk_i);
        if (task_epoch != reset_epoch || rst_i) return;
        utmi_rxvalid_i  <= 1'b0;
        utmi_data_in_i  <= 8'h00;
        utmi_linestate_i <= 2'b00; // SE0: DP=0, DM=0
        repeat (FS_EOP_SE0_CLKS) @(posedge clk_i);
        if (task_epoch != reset_epoch || rst_i) return;
        utmi_linestate_i <= 2'b01; // J idle
        repeat (FS_EOP_J_CLKS) @(posedge clk_i);
        utmi_rxactive_i <= 1'b0;
        utmi_rxerror_i  <= 1'b0;
        $display("[%0t] BFM: Device DATA packet PID=%02h EOP complete; LineState=J", $time, pid);
    end
endtask

    // ------------------------------------------------------------------------
    // Public configuration / debug tasks
    // ------------------------------------------------------------------------
    task automatic set_device_address(input logic [6:0] addr);
        begin device_addr = addr; device_state = (addr == 0) ? DEV_DEFAULT : DEV_ADDRESSED; end
    endtask

    task automatic set_response_mode(input integer mode);
        begin response_mode = mode; end
    endtask

    task automatic set_ep_in_data(input integer ep, input integer len);
        integer i, n;
        begin
            if (ep < 0 || ep >= MAX_ENDPOINTS) return;
            n = len;
            if (n < 0) n = 0;
            if (n > MAX_IN_DATA) n = MAX_IN_DATA;
            ep_in_data_len[ep] = n;
            for (i = 0; i < n; i = i + 1) ep_in_data[ep][i] = i[7:0];
            $display("[%0t] BFM: EP%0d IN data length=%0d type=%s", $time, ep, n, endpoint_type_name(ep_type[ep]));
        end
    endtask

    task automatic set_ep_in_byte(input integer ep, input integer index, input logic [7:0] value);
        begin
            if (ep >= 0 && ep < MAX_ENDPOINTS && index >= 0 && index < MAX_IN_DATA) begin
                if (index >= ep_in_data_len[ep]) ep_in_data_len[ep] = index + 1;
                ep_in_data[ep][index] = value;
            end
        end
    endtask

    task automatic clear_ep_in_data(input integer ep);
        begin
            if (ep >= 0 && ep < MAX_ENDPOINTS) ep_in_data_len[ep] = 0;
        end
    endtask

    task automatic set_in_data(input integer len);
        begin
            in_data_len = (len > MAX_IN_DATA) ? MAX_IN_DATA : len;
            if (in_data_len > 0) in_data[0] = 8'h11;
            if (in_data_len > 1) in_data[1] = 8'h22;
            if (in_data_len > 2) in_data[2] = 8'h33;
            if (in_data_len > 3) in_data[3] = 8'h44;
        end
    endtask

    task automatic enable_endpoint(input integer ep, input bit dir_in, input logic [1:0] type_i, input integer mps, input integer interval);
        begin
            if (ep < MAX_ENDPOINTS) begin
                ep_enabled[ep] = 1'b1;
                ep_dir_in[ep] = dir_in;
                ep_type[ep] = type_i;
                ep_mps[ep] = (mps > 0) ? mps : 64;
                ep_interval[ep] = interval;
            end
        end
    endtask

    task automatic disable_endpoint(input integer ep);
        begin if (ep > 0 && ep < MAX_ENDPOINTS) ep_enabled[ep] = 1'b0; end
    endtask

    task automatic halt_endpoint(input integer ep);
        begin if (ep < MAX_ENDPOINTS) ep_halted[ep] = 1'b1; end
    endtask

    task automatic clear_endpoint_halt(input integer ep);
        begin
            if (ep < MAX_ENDPOINTS) begin
                ep_halted[ep] = 1'b0;
                in_toggle[ep] = 1'b0;
                out_toggle[ep] = 1'b0;
            end
        end
    endtask

    task automatic set_endpoint_receive(input integer ep, input bit can_receive);
        begin if (ep < MAX_ENDPOINTS) ep_can_receive[ep] = can_receive; end
    endtask

    task automatic inject_crc16_error(input bit enable);
        begin inject_crc_error = enable; end
    endtask

    task automatic inject_wrong_pid(input bit enable);
        begin inject_wrong_data_pid = enable; end
    endtask

    task automatic inject_descriptor_error(input bit enable);
        begin inject_descriptor_corruption = enable; end
    endtask

    task automatic inject_crc5_error(input bit enable);
        begin inject_bad_crc5 = enable; end
    endtask

    task automatic set_response_delay(input integer cycles);
        begin response_delay_clks = cycles; end
    endtask

    task automatic get_bfm_state(output device_state_t state_o);
        begin state_o = device_state; end
    endtask


  // ----------------------------------------------------------
  // Directed-test setup: configure EP2 OUT bulk
  //
  // Use only for an isolated OUT-transfer test before
  // enumeration / SET_CONFIGURATION is implemented in the test.
  // ----------------------------------------------------------
  task automatic setup_ep2_out_for_test();
    begin
      device_addr = 7'd0;
      device_state = DEV_CONFIGURED;
      configuration_value = 8'd1;

      ep_enabled[2]   = 1'b1;
      ep_dir_in[2]    = 1'b0;  // OUT endpoint
      ep_type[2]      = EP_TYPE_BULK;
      ep_mps[2]       = 64;
      ep_can_receive[2] = 1'b1;
      ep_halted[2]    = 1'b0;
      out_toggle[2]   = 1'b0;
      out_data_len[2] = 0;

      pending_data = 1'b0;
      expected_data_pid = PID_DATA0;
      state = ST_IDLE;

      $display("[%0t] BFM: Directed setup complete: device configured, EP2 OUT bulk enabled",
               $time);
    end
  endtask
  
  task automatic setup_ep1_in_for_test();
begin
    device_addr = 7'd0;
    device_state = DEV_CONFIGURED;
    configuration_value = 8'd1;

    enable_endpoint(1, 1'b1, EP_TYPE_INT, 64, 1);

    set_ep_in_byte(1, 0, 8'h11);
    set_ep_in_byte(1, 1, 8'h22);
    set_ep_in_byte(1, 2, 8'h33);
    set_ep_in_byte(1, 3, 8'h44);

    in_toggle[1] = 1'b0;

    $display("[%0t] BFM: EP1 IN configured with four bytes", $time);
end
endtask

endmodule

