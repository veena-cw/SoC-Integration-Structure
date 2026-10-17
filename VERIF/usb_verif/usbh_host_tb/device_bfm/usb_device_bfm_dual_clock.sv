// ============================================================================
// Combined USB Device BFM: Phase 1 + Phase 2 + Phase 3 + SOF monitoring
//
// Phase 1: Common USB device foundation, hardened EP0 control-transfer engine, standard
//          requests, descriptors, reset/state handling, packet/error handling.
// Phase 2: HID mouse and boot-keyboard personalities, HID descriptors/reports,
//          class requests, interrupt IN reports, keyboard LED output reports.
// Phase 3: USB Mass Storage Class (MSC), Bulk-Only Transport (BOT), CBW/CSW,
//          subset of SCSI commands, simulated block storage and recovery hooks.
// SOF:     Host SOF capture, frame sequence and optional 1 ms cycle-interval checks.
// Validation hooks: packet-size boundaries, response/error injection, suspend/resume state recovery.
//
// Personality selection is explicit: call exactly one of
// configure_hid_mouse_for_test(), configure_hid_keyboard_for_test(), or
// configure_mass_storage_for_test() before enumeration. These personalities
// share the same USB packet/EP0 infrastructure; they are not simultaneous
// composite-device interfaces.
//
// This is a packet-level/custom UTMI-like simulation model. It does not
// implement physical DP/DM signaling, NRZI serialization, or bit stuffing.
// Compile and run regression in the target simulator before relying on it.
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
    parameter integer AUTO_CONFIG_DEFAULT_EP = 0,
    // Select 48000000 or 60000000 to match clk_i.
    parameter integer UTMI_CLK_HZ = 60000000
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
    output logic [1:0] utmi_linestate_i,
    
    
   input logic device_attach_req_i,
   input logic device_detach_req_i,
   output logic device_attach_done_o,   
  output logic device_detach_done_o
);

    // UTMI 1.05 LineState encoding (Table 1): LineState[0]=DP, [1]=DM.
    // Full-Speed: SE0=2'b00, J=2'b01, K=2'b10, SE1=2'b11.
    // Set UTMI_CLK_HZ to the actual clk_i frequency: 48 MHz or 60 MHz.
    // Full-Speed bit rate is 12 Mbps, so there are 4 or 5 clk_i cycles/bit.
    // All byte, EOP and SOF timing below is derived from these parameters.
    localparam integer USB_FS_BIT_RATE_HZ = 12000000;
    localparam integer FS_BIT_CLKS = UTMI_CLK_HZ / USB_FS_BIT_RATE_HZ;
    localparam integer FS_BYTE_CLKS = 8 * FS_BIT_CLKS;
    localparam integer FS_EOP_SE0_CLKS = 2 * FS_BIT_CLKS;
    localparam integer FS_EOP_J_CLKS = FS_BIT_CLKS;
    localparam integer EXPECTED_SOF_INTERVAL = UTMI_CLK_HZ / 1000;

    initial begin
        if ((UTMI_CLK_HZ != 48000000) && (UTMI_CLK_HZ != 60000000))
            $error("usb_device_bfm: UTMI_CLK_HZ must be 48000000 or 60000000");
        if ((UTMI_CLK_HZ % USB_FS_BIT_RATE_HZ) != 0)
            $error("usb_device_bfm: UTMI clock must be an integer multiple of 12 MHz");
    end

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
    localparam logic [7:0] DESC_HID           = 8'h21;
    localparam logic [7:0] DESC_HID_REPORT    = 8'h22;

    // HID class requests (USB HID 1.11).
    localparam logic [7:0] HID_REQ_GET_REPORT    = 8'h01;
    localparam logic [7:0] HID_REQ_GET_IDLE      = 8'h02;
    localparam logic [7:0] HID_REQ_GET_PROTOCOL  = 8'h03;
    localparam logic [7:0] HID_REQ_SET_REPORT    = 8'h09;
    localparam logic [7:0] HID_REQ_SET_IDLE      = 8'h0A;
    localparam logic [7:0] HID_REQ_SET_PROTOCOL  = 8'h0B;

    localparam integer HID_NONE = 0;
    localparam integer HID_MOUSE = 1;
    localparam integer HID_KEYBOARD = 2;

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
    // SET_INTERFACE commits only after successful control status completion.
    logic       pending_interface_valid;
    logic [7:0] pending_interface_number;
    logic [7:0] pending_interface_alt;
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

    // Optional HID personality. The default generic descriptor remains unchanged
    // until configure_hid_mouse_for_test() or configure_hid_keyboard_for_test()
    // is called before enumeration.
    integer hid_mode;
    logic [7:0] hid_report_desc [0:MAX_DESC_BYTES-1];
    integer hid_report_desc_len;
    logic [7:0] hid_idle_rate;
    logic [7:0] hid_protocol; // 0=Report, 1=Boot
    logic [7:0] hid_keyboard_leds;
    logic hid_report_pending;
    logic [7:0] hid_last_report [0:MAX_IN_DATA-1];
    integer hid_last_report_len;

    // ------------------------------------------------------------------------
    // USB Mass Storage Class (MSC), Bulk-Only Transport (BOT) model.
    // This is a compact, single-LUN test device with a 4-KiB backing store.
    // Bulk IN is EP1 (0x81), Bulk OUT is EP2 (0x02), both Full-Speed MPS=64.
    // ------------------------------------------------------------------------
    localparam integer MSC_STORAGE_BYTES = 4096;
    localparam integer MSC_SECTOR_BYTES  = 512;
    localparam integer MSC_SECTOR_COUNT  = MSC_STORAGE_BYTES / MSC_SECTOR_BYTES;
    localparam integer MSC_NONE          = 0;
    localparam integer MSC_DATA_IN       = 1;
    localparam integer MSC_DATA_OUT      = 2;
    localparam integer MSC_CSW           = 3;
    integer msc_mode;
    integer msc_phase;
    logic [7:0] msc_storage [0:MSC_STORAGE_BYTES-1];
    logic [7:0] msc_xfer_buf [0:MSC_STORAGE_BYTES-1];
    integer msc_xfer_len;
    integer msc_xfer_offset;
    integer msc_expected_out;
    integer msc_out_received;
    integer msc_storage_offset;
    integer msc_residue;
    logic [7:0] msc_csw_tag [0:3];
    logic [7:0] msc_csw_status;
    logic [7:0] msc_sense_key;
    logic [7:0] msc_sense_asc;
    logic [7:0] msc_last_cdb;
    // BOT reset recovery requires the class reset followed by CLEAR_FEATURE
    // on both bulk endpoints. Track both clears explicitly.
    logic msc_reset_recovery_pending;
    logic msc_bulk_in_cleared;
    logic msc_bulk_out_cleared;

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

    // Last accepted OUT packet per endpoint for safe duplicate suppression.
    logic out_last_valid [0:MAX_ENDPOINTS-1];
    logic [7:0] out_last_pid [0:MAX_ENDPOINTS-1];
    integer out_last_len [0:MAX_ENDPOINTS-1];
    logic [7:0] out_last_data [0:MAX_ENDPOINTS-1][0:MAX_OUT_DATA-1];

    // ------------------------------------------------------------------------
    // SOF/frame tracking and optional sequence checking
    // ------------------------------------------------------------------------
    logic [10:0] frame_number;
    logic        sof_seen;
    logic [10:0] sof_previous_frame;
    logic        sof_previous_valid;
    logic        sof_sequence_check_enable;
    integer unsigned sof_count;
    integer unsigned sof_sequence_error_count;
    integer unsigned sof_duplicate_count;
    integer unsigned sof_missing_frame_count;
    integer unsigned sof_last_delta;
    event sof_received_event;

    // Optional clock-cycle SOF timing monitor. Full-Speed USB frames are
    // nominally 1 ms: 48,000 cycles at 48 MHz or 60,000 at 60 MHz.
    // This checks abstract token arrival cadence, not electrical DP/DM timing.
    integer unsigned bfm_clk_cycle;
    integer unsigned sof_previous_cycle;
    integer unsigned sof_last_interval_cycles;
    integer unsigned sof_timing_error_count;
    integer unsigned sof_timing_tolerance_cycles;
    logic sof_timing_check_enable;
    integer unsigned sof_bad_crc_count;
    integer unsigned sof_malformed_count;
    integer unsigned sof_min_interval_cycles;
    integer unsigned sof_max_interval_cycles;
    integer unsigned sof_expected_interval_cycles;
    logic [10:0] sof_last_frame_number;

    // Testbench-visible suspend/resume accounting. The packet-level model
    // cannot infer physical SE0/J/K durations from host-side UTMI bytes, so
    // these hooks model device state and let tests check state recovery.
    integer unsigned suspend_count;
    integer unsigned resume_count;
    device_state_t state_before_suspend;

    // SOF frame numbers are 11-bit values and wrap from 2047 to 0.
    // This checker validates sequence continuity only when enabled; it does
    // not assume an exact 1 ms wall-clock interval at this abstract UTMI layer.

    // ------------------------------------------------------------------------
    // Public timing / suspend / protocol-test APIs
    // ------------------------------------------------------------------------
    task automatic enable_sof_timing_check(input logic enable,
                                            input integer tolerance_cycles);
        begin
            sof_timing_check_enable = enable;
            sof_timing_tolerance_cycles = (tolerance_cycles < 0) ? 0 : tolerance_cycles;
            sof_timing_error_count = 0;
            sof_previous_cycle = bfm_clk_cycle;
            sof_expected_interval_cycles = EXPECTED_SOF_INTERVAL;
        end
    endtask

    // Configure nominal frame period in clk_i cycles. The default is derived
    // from UTMI_CLK_HZ (48,000 at 48 MHz; 60,000 at 60 MHz).
    task automatic set_sof_expected_interval(input integer unsigned interval_cycles);
        begin
            if (interval_cycles != 0)
                sof_expected_interval_cycles = interval_cycles;
        end
    endtask

    // Read extended SOF diagnostics, including malformed and bad-CRC tokens.
    task automatic get_sof_extended_status(
        output integer unsigned bad_crc_tokens,
        output integer unsigned malformed_tokens,
        output integer unsigned minimum_interval,
        output integer unsigned maximum_interval,
        output logic [10:0] last_frame
    );
        begin
            bad_crc_tokens = sof_bad_crc_count;
            malformed_tokens = sof_malformed_count;
            minimum_interval = sof_min_interval_cycles;
            maximum_interval = sof_max_interval_cycles;
            last_frame = sof_last_frame_number;
        end
    endtask

    task automatic get_sof_timing_status(
        output integer unsigned last_interval_cycles,
        output integer unsigned timing_errors,
        output integer unsigned expected_interval_cycles
    );
        begin
            last_interval_cycles = sof_last_interval_cycles;
            timing_errors = sof_timing_error_count;
            expected_interval_cycles = sof_expected_interval_cycles;
        end
    endtask

    // Explicit suspend/resume hooks for state-machine recovery tests. They do
    // not pretend to generate a host-driven physical resume K-state waveform.
    task automatic usb_suspend_for_test();
        begin
            if (device_state != DEV_SUSPENDED) begin
                state_before_suspend = device_state;
                device_state = DEV_SUSPENDED;
                suspend_count = suspend_count + 1;
                $display("[%0t] DEVICE BFM: test suspend entered from state=%0d", $time, state_before_suspend);
            end
        end
    endtask

    task automatic usb_resume_for_test();
        begin
            if (device_state == DEV_SUSPENDED) begin
                device_state = state_before_suspend;
                resume_count = resume_count + 1;
                $display("[%0t] DEVICE BFM: test resume restored state=%0d", $time, device_state);
            end
        end
    endtask

    task automatic get_suspend_resume_counts(
        output integer unsigned suspends,
        output integer unsigned resumes
    );
        begin suspends = suspend_count; resumes = resume_count; end
    endtask

    // Packet-size boundary helper: tests can compare a proposed transfer size
    // against the configured endpoint MPS without mutating endpoint state.
    task automatic check_endpoint_packet_size(
        input integer ep,
        input integer packet_bytes,
        output logic legal,
        output integer endpoint_mps
    );
        begin
            legal = 1'b0;
            endpoint_mps = 0;
            if (ep >= 0 && ep < MAX_ENDPOINTS && ep_enabled[ep] &&
                packet_bytes >= 0 && ep_mps[ep] > 0) begin
                endpoint_mps = ep_mps[ep];
                // This helper validates one USB data packet, not a multi-packet
                // transfer. Zero-length packets are legal; negative sizes and
                // payloads larger than MPS are rejected.
                legal = (packet_bytes <= ep_mps[ep]);
            end
        end
    endtask

    // ------------------------------------------------------------------------
    // Public SOF monitor API
    // ------------------------------------------------------------------------
    // Enable/disable only the sequential frame-number checker. SOF capture and
    // counters remain active when checking is disabled.
    task automatic enable_sof_sequence_check(input logic enable);
        sof_sequence_check_enable = enable;
    endtask

    // Clear counters/history without changing the configured device or storage.
    task automatic clear_sof_stats();
        sof_count = 0;
        sof_sequence_error_count = 0;
        sof_duplicate_count = 0;
        sof_missing_frame_count = 0;
        sof_last_delta = 0;
        sof_previous_cycle = bfm_clk_cycle;
        sof_last_interval_cycles = 0;
        sof_timing_error_count = 0;
        sof_bad_crc_count = 0;
        sof_malformed_count = 0;
        sof_min_interval_cycles = 0;
        sof_max_interval_cycles = 0;
        sof_last_frame_number = 11'd0;
        sof_seen = 1'b0;
        sof_previous_frame = 11'd0;
        sof_previous_valid = 1'b0;
    endtask

    // Snapshot the most recent SOF monitor status.
    task automatic get_sof_status(
        output logic [10:0] current_frame,
        output logic        seen,
        output integer unsigned total_sof,
        output integer unsigned sequence_errors,
        output integer unsigned duplicates,
        output integer unsigned missing_frames,
        output integer unsigned last_delta
    );
        current_frame = frame_number;
        seen = sof_seen;
        total_sof = sof_count;
        sequence_errors = sof_sequence_error_count;
        duplicates = sof_duplicate_count;
        missing_frames = sof_missing_frame_count;
        last_delta = sof_last_delta;
    endtask

    // Wait for the next valid-CRC SOF token. Timeout is expressed in clk_i
    // cycles; returns seen=0 on timeout. This is useful from a module-based
    // testbench without requiring a UVM virtual interface.
    /*task automatic wait_for_sof(
        input integer timeout_clks,
        output logic seen,
        output logic [10:0] received_frame
    );
        integer elapsed;
        seen = 1'b0;
        received_frame = frame_number;
        elapsed = 0;
        fork
            begin : wait_for_event
                @(sof_received_event);
                seen = 1'b1;
                received_frame = frame_number;
            end
            begin : wait_for_timeout
                repeat (timeout_clks) @(posedge clk_i);
            end
        join_any
        disable fork;
    endtask
*/

task automatic wait_for_sof(
    input integer timeout_clks,
    output logic seen,
    output logic [10:0] received_frame
);
    logic seen_local;
    logic [10:0] frame_local;

    // Initialize local variables.
    seen_local  = 1'b0;
    frame_local = frame_number;

    fork
        begin : wait_for_event
            @(sof_received_event);
            seen_local  = 1'b1;
            frame_local = frame_number;
        end

        begin : wait_for_timeout
            repeat (timeout_clks) @(posedge clk_i);
        end
    join_any

    // Stop the process that did not finish first.
    disable fork;

    // Update task outputs only after the timing controls.
    seen           = seen_local;
    received_frame = frame_local;
endtask
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
        pending_interface_valid = 1'b0;
        pending_interface_number = 8'd0;
        pending_interface_alt = 8'd0;

        response_mode = RESP_NORMAL;
        response_delay_clks = DEVICE_IFS_CLKS;
        bfm_clk_cycle = 0;
        sof_previous_cycle = 0;
        sof_last_interval_cycles = 0;
        sof_timing_error_count = 0;
        // USB FS SOF interval tolerance is +/-500 ns. Round up to whole
        // clk_i cycles: 24 cycles at 48 MHz, 30 cycles at 60 MHz.
        sof_timing_tolerance_cycles = UTMI_CLK_HZ / 2000000;
        sof_expected_interval_cycles = EXPECTED_SOF_INTERVAL;
        sof_bad_crc_count = 0;
        sof_malformed_count = 0;
        sof_min_interval_cycles = 0;
        sof_max_interval_cycles = 0;
        sof_last_frame_number = 11'd0;
        sof_timing_check_enable = 1'b0;
        suspend_count = 0;
        resume_count = 0;
        state_before_suspend = DEV_DEFAULT;
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
        hid_mode = HID_NONE;
        hid_report_desc_len = 0;
        hid_idle_rate = 8'h00;
        hid_protocol = 8'h01;
        hid_keyboard_leds = 8'h00;
        hid_report_pending = 1'b0;
        hid_last_report_len = 0;
        msc_mode = 0;
        msc_phase = MSC_NONE;
        msc_xfer_len = 0;
        msc_xfer_offset = 0;
        msc_expected_out = 0;
        msc_out_received = 0;
        msc_storage_offset = 0;
        msc_residue = 0;
        msc_csw_status = 0;
        msc_sense_key = 0;
        msc_sense_asc = 0;
        msc_last_cdb = 0;
        msc_reset_recovery_pending = 1'b0;
        msc_bulk_in_cleared = 1'b0;
        msc_bulk_out_cleared = 1'b0;
        for (b = 0; b < 4; b = b + 1) msc_csw_tag[b] = 0;
        for (b = 0; b < MSC_STORAGE_BYTES; b = b + 1) begin
            msc_storage[b] = 8'h00;
            msc_xfer_buf[b] = 8'h00;
        end
        for (b = 0; b < MAX_DESC_BYTES; b = b + 1) hid_report_desc[b] = 8'h00;
        for (b = 0; b < MAX_IN_DATA; b = b + 1) hid_last_report[b] = 8'h00;
        frame_number = 0;
        sof_seen = 0;
        sof_previous_frame = 11'd0;
        sof_previous_valid = 1'b0;
        sof_sequence_check_enable = 1'b1;
        sof_count = 0;
        sof_sequence_error_count = 0;
        sof_duplicate_count = 0;
        sof_missing_frame_count = 0;
        sof_last_delta = 0;
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
            out_last_valid[k] = 1'b0;
            out_last_pid[k] = PID_DATA0;
            out_last_len[k] = 0;
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

    // Monotonic simulation-clock counter used by SOF interval checking.
    always @(posedge clk_i) begin
        if (rst_i) bfm_clk_cycle <= 0;
        else       bfm_clk_cycle <= bfm_clk_cycle + 1;
    end

    // ------------------------------------------------------------------------
    // Reset behavior. The epoch counter invalidates packet-driving tasks that
    // are waiting on clock edges, so a runtime reset cannot continue emitting
    // the old packet after reset. USB bus reset itself is represented by the
    // public usb_bus_reset() task; see the interface-scope note at module top.
    // ------------------------------------------------------------------------
    always @(posedge clk_i) begin
        // Completion outputs are pulses. Requests are accepted only outside reset.
        device_attach_done_o <= 1'b0;
        device_detach_done_o <= 1'b0;

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
            pending_interface_valid <= 1'b0;
            pending_interface_number <= 8'd0;
            pending_interface_alt <= 8'd0;
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
                out_last_valid[reset_idx] <= 1'b0;
                out_last_pid[reset_idx] <= PID_DATA0;
                out_last_len[reset_idx] <= 0;
            end
            // SOF monitor state is also updated by BFM tasks and packet
            // processing code using blocking assignments. Use blocking
            // assignments here as well to avoid Verilator BLKANDNBLK errors.
            frame_number = 11'd0;
            sof_seen = 1'b0;
            sof_previous_frame = 11'd0;
            sof_previous_valid = 1'b0;
            sof_sequence_check_enable = 1'b1;
            sof_count = 0;
            sof_sequence_error_count = 0;
            sof_duplicate_count = 0;
            sof_missing_frame_count = 0;
            sof_last_delta = 0;
            sof_previous_cycle = 0;
            sof_last_interval_cycles = 0;
            sof_timing_error_count = 0;
            sof_bad_crc_count = 0;
            sof_malformed_count = 0;
            sof_min_interval_cycles = 0;
            sof_max_interval_cycles = 0;
            sof_last_frame_number = 11'd0;
            suspend_count <= 0;
            resume_count <= 0;
            state_before_suspend <= DEV_DEFAULT;
            ctrl_stage <= CTRL_IDLE;
            control_transfer_active <= 1'b0;
            ctrl_stall_pending <= 1'b0;
            tx_pkt_q.delete();
            tx_packet_active <= 1'b0;
        end else if (device_detach_req_i) begin
            // Detach has priority if both requests are asserted together.
            // SE0 is an abstract disconnected indication in this packet-level BFM;
            // it is not a physical DP/DM disconnect waveform.
            device_state <= DEV_DETACHED;
            device_addr <= 7'd0;
            configuration_value <= 8'd0;
            pending_address <= 7'd0;
            address_update_pending <= 1'b0;
            pending_configuration <= 8'd0;
            control_transfer_active <= 1'b0;
            ctrl_stage <= CTRL_IDLE;
            state <= ST_IDLE;
            tx_pkt_q.delete();
            pkt_copy.delete();
            tx_packet_active <= 1'b0;
            utmi_rxvalid_i <= 1'b0;
            utmi_rxactive_i <= 1'b0;
            utmi_rxerror_i <= 1'b0;
            utmi_linestate_i <= 2'b00;
            device_detach_done_o <= 1'b1;
            $display("[%0t] DEVICE BFM: detach request accepted", $time);
        end else if (device_attach_req_i) begin
            // Reconnect as a Full-Speed device at address zero. Enumeration
            // and SET_ADDRESS must still be performed by the host.
            device_state <= DEV_ATTACHED;
            device_addr <= 7'd0;
            configuration_value <= 8'd0;
            pending_address <= 7'd0;
            address_update_pending <= 1'b0;
            pending_configuration <= 8'd0;
            control_transfer_active <= 1'b0;
            ctrl_stage <= CTRL_IDLE;
            state <= ST_IDLE;
            tx_pkt_q.delete();
            pkt_copy.delete();
            tx_packet_active <= 1'b0;
            utmi_rxvalid_i <= 1'b0;
            utmi_rxactive_i <= 1'b0;
            utmi_rxerror_i <= 1'b0;
            utmi_linestate_i <= 2'b01;
            device_attach_done_o <= 1'b1;
            $display("[%0t] DEVICE BFM: attach request accepted; Full-Speed J idle", $time);
        end
    end

    // ------------------------------------------------------------------------
    // UTMI 1.05 Section 5.13: simplified FS-only TX state machine.
    // For this byte-paced UTMI-like model, byte time is FS_BYTE_CLKS:
    // 32 clocks at 48 MHz or 40 clocks at 60 MHz. TXREADY pulses once/byte.
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
                        txsm_byte_clks <= FS_BYTE_CLKS - 1;
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
                        // One-cycle TXREADY pulse once per configured byte time.
                        utmi_txready_i <= 1'b1;
                        txsm_byte_clks <= FS_BYTE_CLKS - 1;
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
                // EOP durations are derived from the configured UTMI clock.
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
            // Reset exits any test-induced suspend state and invalidates timing
            // history so the first post-reset SOF establishes a fresh baseline.
            state_before_suspend = DEV_DEFAULT;
            sof_previous_valid = 1'b0;
            sof_previous_cycle = bfm_clk_cycle;
            sof_last_interval_cycles = 0;
            device_addr = 7'd0;
            pending_address = 7'd0;
            address_update_pending = 1'b0;
            configuration_value = 8'd0;
            pending_configuration = 8'd0;
            hid_idle_rate = 8'h00;
            hid_protocol = 8'h01;
            hid_keyboard_leds = 8'h00;
            hid_report_pending = 1'b0;
            hid_last_report_len = 0;
            remote_wakeup_enabled = 1'b0;
            pending_feature_valid = 1'b0;
            pending_feature_set = 1'b0;
            pending_feature_remote_wakeup = 1'b0;
            pending_feature_ep = 4'd0;
            pending_interface_valid = 1'b0;
            pending_interface_number = 8'd0;
            pending_interface_alt = 8'd0;
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
            // USB bus reset returns BOT transport to idle. Backing storage is
            // intentionally preserved across bus reset, like a real drive.
            msc_phase = MSC_NONE;
            msc_xfer_len = 0;
            msc_xfer_offset = 0;
            msc_expected_out = 0;
            msc_out_received = 0;
            msc_residue = 0;
            msc_csw_status = 0;
            msc_reset_recovery_pending = 1'b0;
            msc_bulk_in_cleared = 1'b0;
            msc_bulk_out_cleared = 1'b0;
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
            pending_interface_valid = 1'b0;
            pending_interface_number = 8'd0;
            pending_interface_alt = 8'd0;
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
                out_last_valid[i] = 1'b0;
                out_last_pid[i] = PID_DATA0;
                out_last_len[i] = 0;
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
                DESC_HID_REPORT: begin
                    if (hid_mode != HID_NONE && setup_wIndex[15:8] == 8'h00 && setup_wIndex[7:0] == 0 && dindex == 0) begin
                        n = hid_report_desc_len;
                        for (i = 0; i < n; i = i + 1) tmp.push_back(hid_report_desc[i]);
                    end
                end
                DESC_HID: begin
                    // HID descriptor is the nine-byte descriptor embedded after
                    // the interface descriptor in the generated HID configuration.
                    if (hid_mode != HID_NONE && setup_wIndex[15:8] == 8'h00 && setup_wIndex[7:0] == 0 && config_desc_len >= 27) begin
                        for (i = 0; i < 9; i = i + 1) tmp.push_back(config_desc[18+i]);
                    end
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

    // ------------------------------------------------------------------------
    // HID class requests for the optional mouse/keyboard personalities.
    // Interface 0 and report ID 0 are used by these boot-HID examples.
    // ------------------------------------------------------------------------
    task automatic decode_hid_class_request();
        logic dir_in;
        logic [4:0] recipient;
        logic [7:0] report_type;
        integer i;
        begin
            dir_in = setup_bmRequestType[7];
            recipient = setup_bmRequestType[4:0];
            if (hid_mode == HID_NONE || recipient != 5'd1 ||
                setup_wIndex[15:8] != 0 || setup_wIndex[7:0] != 0 ||
                setup_wValue[7:0] != 0) begin
                ctrl_stall_pending = 1'b1;
                ctrl_stage = CTRL_IDLE;
                return;
            end

            case (setup_bRequest)
                HID_REQ_GET_REPORT: begin
                    report_type = setup_wValue[15:8];
                    if (!dir_in || setup_wLength == 0 ||
                        !(report_type == 8'd1 || report_type == 8'd2 || report_type == 8'd3)) begin
                        ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE;
                    end else if (report_type == 8'd1) begin
                        prepare_hid_input_report();
                        ctrl_stage = CTRL_DATA_IN;
                    end else if (report_type == 8'd2 && hid_mode == HID_KEYBOARD) begin
                        ep0_in_data[0] = hid_keyboard_leds;
                        ep0_in_data_len = 1;
                        ctrl_in_data_index = 0; ctrl_data_transferred = 0;
                        ctrl_data_remaining = setup_wLength; ctrl_stage = CTRL_DATA_IN;
                    end else begin
                        // No feature report is defined by these example descriptors.
                        ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE;
                    end
                end
                HID_REQ_GET_IDLE: begin
                    if (!dir_in || setup_wLength != 1 || setup_wValue != 0) begin
                        ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE;
                    end else begin
                        ep0_in_data[0] = hid_idle_rate; ep0_in_data_len = 1;
                        ctrl_in_data_index = 0; ctrl_data_transferred = 0;
                        ctrl_data_remaining = setup_wLength; ctrl_stage = CTRL_DATA_IN;
                    end
                end
                HID_REQ_SET_IDLE: begin
                    if (dir_in || setup_wLength != 0 || setup_wValue[7:0] != 0) begin
                        ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE;
                    end else begin
                        hid_idle_rate = setup_wValue[15:8];
                        ctrl_stage = CTRL_STATUS_IN;
                    end
                end
                HID_REQ_GET_PROTOCOL: begin
                    if (!dir_in || setup_wLength != 1 || setup_wValue != 0 || hid_mode == HID_NONE) begin
                        ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE;
                    end else begin
                        ep0_in_data[0] = hid_protocol; ep0_in_data_len = 1;
                        ctrl_in_data_index = 0; ctrl_data_transferred = 0;
                        ctrl_data_remaining = setup_wLength; ctrl_stage = CTRL_DATA_IN;
                    end
                end
                HID_REQ_SET_PROTOCOL: begin
                    if (dir_in || setup_wLength != 0 || setup_wValue[15:8] != 0 || setup_wValue[7:0] > 1) begin
                        ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE;
                    end else begin
                        hid_protocol = setup_wValue[7:0];
                        ctrl_stage = CTRL_STATUS_IN;
                    end
                end
                HID_REQ_SET_REPORT: begin
                    // Keyboard LED output report only: one byte, report ID 0.
                    if (dir_in || setup_wLength != 1 || hid_mode != HID_KEYBOARD ||
                        setup_wValue[15:8] != 2 || setup_wValue[7:0] != 0) begin
                        ctrl_stall_pending = 1'b1; ctrl_stage = CTRL_IDLE;
                    end else begin
                        ctrl_stage = CTRL_DATA_OUT;
                        ctrl_out_data_len = 0;
                    end
                end
                default: begin
                    ctrl_stall_pending = 1'b1;
                    ctrl_stage = CTRL_IDLE;
                end
            endcase
            $display("[%0t] BFM: HID class request mode=%0d bRequest=%02h stage=%0d", $time, hid_mode, setup_bRequest, ctrl_stage);
        end
    endtask

    task automatic prepare_hid_input_report();
        integer i;
        begin
            ep0_in_data_len = hid_last_report_len;
            // Boot mouse protocol omits the report-protocol wheel byte.
            if (hid_mode == HID_MOUSE && hid_protocol == 8'h01 && ep0_in_data_len > 3) ep0_in_data_len = 3;
            if (ep0_in_data_len > MAX_DESC_BYTES) ep0_in_data_len = MAX_DESC_BYTES;
            for (i = 0; i < ep0_in_data_len; i = i + 1) ep0_in_data[i] = hid_last_report[i];
            ctrl_in_data_index = 0;
            ctrl_data_transferred = 0;
            ctrl_data_remaining = setup_wLength;
        end
    endtask

    task automatic complete_hid_set_report();
        begin
            if (hid_mode == HID_KEYBOARD && ctrl_out_data_len == 1)
                hid_keyboard_leds = ep0_out_data[0] & 8'h1F;
            else
                ctrl_stall_pending = 1'b1;
        end
    endtask

    task automatic decode_msc_class_request();
        begin
            // USB Mass Storage Class Bulk-Only Transport Reset:
            // bmRequestType=0x21, bRequest=0xFF, wValue=0, wIndex=0, wLength=0.
            if (setup_bmRequestType == 8'h21 && setup_bRequest == 8'hFF &&
                setup_wValue == 16'h0000 && setup_wIndex == 16'h0000 &&
                setup_wLength == 16'h0000) begin
                msc_phase = MSC_NONE;
                msc_xfer_len = 0;
                msc_xfer_offset = 0;
                msc_expected_out = 0;
                msc_out_received = 0;
                msc_storage_offset = 0;
                msc_residue = 0;
                msc_reset_recovery_pending = 1'b1;
                msc_bulk_in_cleared = 1'b0;
                msc_bulk_out_cleared = 1'b0;
                // BOT reset recovery requires the host to clear halt on both
                // bulk endpoints after the class-specific reset.
                if (MAX_ENDPOINTS > 1) ep_halted[1] = 1'b1;
                if (MAX_ENDPOINTS > 2) ep_halted[2] = 1'b1;
                retry_pending = 1'b0;
                retry_payload.delete();
                ctrl_stage = CTRL_STATUS_IN;
                $display("[%0t] BFM MSC: Mass Storage Reset accepted", $time);
            end else begin
                ctrl_stall_pending = 1'b1;
                ctrl_stage = CTRL_IDLE;
                $display("[%0t] BFM MSC: Invalid class request %02h -> STALL", $time, setup_bRequest);
            end
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

            // USB bmRequestType recipient encodings 4..31 are reserved.
            // Reject them before dispatch so no class/vendor path can accept
            // a malformed SETUP request accidentally.
            if (recipient > 5'd3) begin
                ctrl_stall_pending = 1'b1;
                ctrl_stage = CTRL_IDLE;
                $display("[%0t] EP0 ERROR: reserved recipient encoding %0d", $time, recipient);
                return;
            end

            if (req_type == REQ_TYPE_CLASS) begin
                if (msc_mode) decode_msc_class_request();
                else decode_hid_class_request();
                return;
            end
            if (req_type != REQ_TYPE_STANDARD) begin
                // Unsupported vendor requests STALL; class requests are handled above.
                $display("[%0t] BFM: Unsupported request type=%0d bRequest=%02h", $time, req_type, setup_bRequest);
                ctrl_stall_pending = 1'b1;
                ctrl_stage = CTRL_IDLE;
                return;
            end

            case (setup_bRequest)
                REQ_GET_DESCRIPTOR: begin
                    if (!dir_in || setup_wLength == 0 || setup_wValue[15:8] == 8'h00 ||
                        !((recipient == 5'd0 &&
                           (setup_wValue[15:8] == DESC_DEVICE ||
                            setup_wValue[15:8] == DESC_CONFIGURATION ||
                            setup_wValue[15:8] == DESC_STRING)) ||
                          (recipient == 5'd1 && hid_mode != HID_NONE &&
                           (setup_wValue[15:8] == DESC_HID ||
                            setup_wValue[15:8] == DESC_HID_REPORT))) ||
                        (recipient == 5'd0 && setup_wValue[15:8] != DESC_STRING && setup_wIndex != 16'h0000) ||
                        (recipient == 5'd0 && setup_wValue[15:8] == DESC_DEVICE && setup_wValue[7:0] != 0) ||
                        (recipient == 5'd0 && setup_wValue[15:8] == DESC_CONFIGURATION && setup_wValue[7:0] != 0) ||
                        (recipient == 5'd0 && setup_wValue[15:8] == DESC_STRING &&
                         ((setup_wValue[7:0] == 0 && setup_wIndex != 16'h0000) ||
                          (setup_wValue[7:0] != 0 && setup_wIndex == 16'h0000))) ||
                        (recipient == 5'd1 && (setup_wIndex[15:8] != 0 || setup_wIndex[7:0] != 0 || setup_wValue[7:0] != 0))) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                        $display("[%0t] EP0: Invalid GET_DESCRIPTOR request -> STALL", $time);
                    end else prepare_descriptor_response();
                end

                REQ_SET_ADDRESS: begin
                    if (dir_in || recipient != 5'd0 || setup_wIndex != 16'h0000 ||
                        setup_wValue[15:7] != 0 || setup_wLength != 0 ||
                        device_state == DEV_CONFIGURED) begin
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
                    if (dir_in || recipient != 5'd0 || setup_wIndex != 16'h0000 || setup_wLength != 0 ||
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
                    if (!dir_in || recipient != 5'd0 || setup_wValue != 16'h0000 ||
                        setup_wIndex != 16'h0000 || setup_wLength != 16'd1) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else begin
                        prepare_ep0_single_byte(configuration_value);
                        ctrl_stage = CTRL_DATA_IN;
                    end
                end

                REQ_GET_STATUS: begin
                    // GET_STATUS returns exactly two bytes. Reject malformed
                    // recipients/reserved fields instead of fabricating success.
                    if (!dir_in || setup_wValue != 16'h0000 || setup_wLength != 16'd2) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else if (recipient == 5'd0) begin
                        if (setup_wIndex != 16'h0000) begin
                            ctrl_stall_pending = 1'b1;
                            ctrl_stage = CTRL_IDLE;
                        end else begin
                            prepare_ep0_two_bytes({6'b0, remote_wakeup_enabled, 1'b0}, 8'h00);
                            ctrl_stage = CTRL_DATA_IN;
                        end
                    end else if (recipient == 5'd1) begin
                        if (setup_wIndex[15:8] != 8'h00 || setup_wIndex[7:0] >= MAX_INTERFACES) begin
                            ctrl_stall_pending = 1'b1;
                            ctrl_stage = CTRL_IDLE;
                        end else begin
                            prepare_ep0_two_bytes(8'h00, 8'h00);
                            ctrl_stage = CTRL_DATA_IN;
                        end
                    end else if (recipient == 5'd2) begin
                        ep = setup_wIndex[3:0];
                        if ((setup_wIndex & 16'hFF70) != 16'h0000 || ep >= MAX_ENDPOINTS || !ep_enabled[ep]) begin
                            ctrl_stall_pending = 1'b1;
                            ctrl_stage = CTRL_IDLE;
                        end else begin
                            prepare_ep0_two_bytes({7'b0, ep_halted[ep]}, 8'h00);
                            ctrl_stage = CTRL_DATA_IN;
                        end
                    end else begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end
                end

                REQ_SET_FEATURE: begin
                    if (dir_in || setup_wLength != 0 || setup_wValue[15:1] != 0) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else if (recipient == 5'd0 && setup_wValue == FEAT_REMOTE_WAKEUP && setup_wIndex == 16'h0000) begin
                        pending_feature_valid = 1'b1;
                        pending_feature_set = 1'b1;
                        pending_feature_remote_wakeup = 1'b1;
                        ctrl_stage = CTRL_STATUS_IN;
                    end else if (recipient == 5'd2 && setup_wValue == FEAT_ENDPOINT_HALT) begin
                        ep = setup_wIndex[3:0];
                        if (ep == 0 || ep >= MAX_ENDPOINTS ||
                            (setup_wIndex & 16'hFF70) != 16'h0000 ||
                            ep_dir_in[ep] != setup_wIndex[7]) begin
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
                    end else if (recipient == 5'd0 && setup_wValue == FEAT_REMOTE_WAKEUP && setup_wIndex == 16'h0000) begin
                        pending_feature_valid = 1'b1;
                        pending_feature_set = 1'b0;
                        pending_feature_remote_wakeup = 1'b1;
                        ctrl_stage = CTRL_STATUS_IN;
                    end else if (recipient == 5'd2 && setup_wValue == FEAT_ENDPOINT_HALT) begin
                        ep = setup_wIndex[3:0];
                        if (ep == 0 || ep >= MAX_ENDPOINTS ||
                            (setup_wIndex & 16'hFF70) != 16'h0000 ||
                            ep_dir_in[ep] != setup_wIndex[7]) begin
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
                    if (!dir_in || recipient != 5'd1 || setup_wValue != 16'h0000 || setup_wLength != 1 ||
                        setup_wIndex[15:8] != 8'h00 || setup_wIndex[7:0] >= MAX_INTERFACES ||
                        device_state != DEV_CONFIGURED) begin
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
                    end else if (device_state != DEV_CONFIGURED) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else begin
                        pending_interface_valid = 1'b1;
                        pending_interface_number = setup_wIndex[7:0];
                        pending_interface_alt = setup_wValue[7:0];
                        ctrl_stage = CTRL_STATUS_IN;
                    end
                end

                REQ_SET_DESCRIPTOR: begin
                    // SET_DESCRIPTOR is a simulation extension. Do not accept a
                    // request whose OUT payload cannot fit in the EP0 buffer.
                    if (dir_in || setup_wLength == 0 || setup_wLength > MAX_OUT_DATA ||
                        !(setup_wValue[15:8] == DESC_DEVICE ||
                          setup_wValue[15:8] == DESC_CONFIGURATION ||
                          setup_wValue[15:8] == DESC_STRING)) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                    end else begin
                        ctrl_stage = CTRL_DATA_OUT;
                        ctrl_out_data_len = 0;
                    end
                end

                REQ_SYNCH_FRAME: begin
                    // USB standard SYNCH_FRAME is valid only for an enabled
                    // isochronous endpoint. bmRequestType must be 0x82
                    // (Device-to-host, Standard, Endpoint recipient), wValue=0,
                    // wLength=2, and wIndex must contain only an endpoint address.
                    ep = setup_wIndex[3:0];
                    if (setup_bmRequestType != 8'h82 ||
                        setup_wValue != 16'h0000 || setup_wLength != 16'd2 ||
                        setup_wIndex[15:8] != 8'h00 ||
                        setup_wIndex[6:4] != 3'b000 ||
                        ep == 0 || ep >= MAX_ENDPOINTS ||
                        !ep_enabled[ep] || ep_type[ep] != EP_TYPE_ISO ||
                        ep_dir_in[ep] != setup_wIndex[7]) begin
                        ctrl_stall_pending = 1'b1;
                        ctrl_stage = CTRL_IDLE;
                        $display("[%0t] EP0: Invalid SYNCH_FRAME request (wIndex=%04h, wLength=%0d) -> STALL",
                                 $time, setup_wIndex, setup_wLength);
                    end else begin
                        // Frame number is 11 bits and is returned little-endian.
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
                if (hid_mode != HID_NONE && ep_enabled[1] && ep_dir_in[1]) begin
                    for (i = 0; i < hid_last_report_len && i < MAX_IN_DATA; i = i + 1) ep_in_data[1][i] = hid_last_report[i];
                    ep_in_data_len[1] = hid_last_report_len;
                    in_toggle[1] = 1'b0;
                    hid_report_pending = 1'b1;
                end
                $display("[%0t] BFM: Configuration set to %0d", $time, configuration_value);
            end else if (setup_bRequest == REQ_SET_CONFIGURATION) begin
                configuration_value = 0;
                if (msc_mode) begin
                    msc_phase = MSC_NONE; msc_xfer_len = 0; msc_xfer_offset = 0;
                    msc_reset_recovery_pending = 1'b0;
                    msc_bulk_in_cleared = 1'b0; msc_bulk_out_cleared = 1'b0;
                end
                device_state = (device_addr == 0) ? DEV_DEFAULT : DEV_ADDRESSED;
                for (i = 1; i < MAX_ENDPOINTS; i = i + 1) begin
                    ep_enabled[i] = 1'b0;
                    ep_halted[i] = 1'b0;
                    in_toggle[i] = 1'b0;
                    out_toggle[i] = 1'b0;
                    out_last_valid[i] = 1'b0;
                    out_data_len[i] = 0;
                    ep_in_data_len[i] = 0;
                end
            end
            if (pending_interface_valid) begin
                if (pending_interface_number < MAX_INTERFACES)
                    interface_alt_setting[pending_interface_number] = pending_interface_alt;
                pending_interface_valid = 1'b0;
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
                        if (msc_mode && msc_reset_recovery_pending) begin
                            if (pending_feature_ep == 1) msc_bulk_in_cleared = 1'b1;
                            if (pending_feature_ep == 2) msc_bulk_out_cleared = 1'b1;
                            if (msc_bulk_in_cleared && msc_bulk_out_cleared) begin
                                msc_reset_recovery_pending = 1'b0;
                                msc_phase = MSC_NONE;
                                msc_xfer_len = 0;
                                msc_xfer_offset = 0;
                                msc_expected_out = 0;
                                msc_out_received = 0;
                                $display("[%0t] BFM MSC: BOT reset recovery complete (both bulk halts cleared)", $time);
                            end
                        end
                    end
                end
            end
            pending_feature_valid = 1'b0;
            pending_feature_set = 1'b0;
            pending_feature_remote_wakeup = 1'b0;
            pending_interface_valid = 1'b0;
            pending_configuration = 0;
            control_transfer_active = 1'b0;
            ctrl_data_remaining = 16'd0;
            ctrl_in_data_index = 0;
            ctrl_out_data_len = 0;
            ctrl_in_zlp_required = 1'b0;
            ctrl_stall_pending = 1'b0;
            last_in_was_control_data = 1'b0;
            last_in_was_status = 1'b0;
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
    // Prepare a BOT CSW. Tag comes from the accepted CBW; residue is the
    // number of host-requested bytes not transferred during this command.
    task automatic msc_prepare_csw(input logic [7:0] status_i, input integer residue_i);
        integer r;
        begin
            msc_csw_status = status_i;
            msc_residue = (residue_i < 0) ? 0 : residue_i;
            msc_xfer_buf[0] = 8'h55; // 'USBS' signature, little-endian
            msc_xfer_buf[1] = 8'h53;
            msc_xfer_buf[2] = 8'h42;
            msc_xfer_buf[3] = 8'h53;
            for (r=0; r<4; r=r+1) msc_xfer_buf[4+r] = msc_csw_tag[r];
            msc_xfer_buf[8]  = msc_residue[7:0];
            msc_xfer_buf[9]  = (msc_residue >> 8) & 8'hFF;
            msc_xfer_buf[10] = (msc_residue >> 16) & 8'hFF;
            msc_xfer_buf[11] = (msc_residue >> 24) & 8'hFF;
            msc_xfer_buf[12] = status_i;
            msc_xfer_len = 13;
            msc_xfer_offset = 0;
            msc_phase = MSC_CSW;
        end
    endtask

    task automatic msc_prepare_data_in(input integer data_len, input integer host_len);
        integer actual_len;
        begin
            actual_len = data_len;
            if (actual_len < 0) actual_len = 0;
            if (actual_len > MSC_STORAGE_BYTES) actual_len = MSC_STORAGE_BYTES;
            if (actual_len > host_len) actual_len = host_len;
            msc_xfer_len = actual_len;
            msc_xfer_offset = 0;
            msc_residue = (host_len > actual_len) ? host_len-actual_len : 0;
            if (actual_len == 0) msc_prepare_csw(8'h00, msc_residue);
            else msc_phase = MSC_DATA_IN;
        end
    endtask

    // Execute the supported subset of SCSI commands. CBW layout is the BOT
    // 31-byte wrapper: signature[0:3], tag[4:7], transfer length[8:11],
    // flags[12], LUN[13], CDB length[14], CDB[15:30].
    task automatic msc_execute_scsi();
        integer i, host_len, lba, blocks, bytes_req, base, n;
        logic [7:0] op;
        begin
            host_len = {out_data_buf[2][11], out_data_buf[2][10],
                        out_data_buf[2][9], out_data_buf[2][8]};
            if (host_len < 0) host_len = 0;
            if (host_len > MSC_STORAGE_BYTES) host_len = MSC_STORAGE_BYTES;
            op = out_data_buf[2][15];
            msc_last_cdb = op;
            msc_csw_status = 0;
            msc_xfer_offset = 0;
            msc_xfer_len = 0;
            case (op)
                8'h00: begin // TEST UNIT READY
                    msc_prepare_csw(8'h00, host_len);
                end
                8'h12: begin // INQUIRY, 36-byte standard data
                    for (i=0; i<36; i=i+1) msc_xfer_buf[i]=0;
                    msc_xfer_buf[0]=8'h00; msc_xfer_buf[1]=8'h80;
                    msc_xfer_buf[2]=8'h05; msc_xfer_buf[3]=8'h02;
                    msc_xfer_buf[4]=31;
                    msc_xfer_buf[8]= "O"; msc_xfer_buf[9]= "P"; msc_xfer_buf[10]="E"; msc_xfer_buf[11]="N";
                    msc_xfer_buf[12]="A"; msc_xfer_buf[13]="I"; msc_xfer_buf[14]=" " ; msc_xfer_buf[15]="U";
                    msc_xfer_buf[16]="S"; msc_xfer_buf[17]="B"; msc_xfer_buf[18]=" " ; msc_xfer_buf[19]="D";
                    msc_xfer_buf[20]="I"; msc_xfer_buf[21]="S"; msc_xfer_buf[22]="K";
                    msc_xfer_buf[32]="0"; msc_xfer_buf[33]="0"; msc_xfer_buf[34]="0"; msc_xfer_buf[35]="1";
                    msc_prepare_data_in(36, host_len);
                end
                8'h03: begin // REQUEST SENSE, fixed format, 18 bytes
                    for (i=0; i<18; i=i+1) msc_xfer_buf[i]=0;
                    msc_xfer_buf[0]=8'h70; msc_xfer_buf[2]=msc_sense_key;
                    msc_xfer_buf[7]=10; msc_xfer_buf[12]=msc_sense_asc;
                    msc_prepare_data_in(18, host_len);
                    msc_sense_key=0; msc_sense_asc=0;
                end
                8'h25: begin // READ CAPACITY(10)
                    for (i=0; i<8; i=i+1) msc_xfer_buf[i]=0;
                    msc_xfer_buf[0]=((MSC_SECTOR_COUNT-1) >> 24) & 8'hFF;
                    msc_xfer_buf[1]=((MSC_SECTOR_COUNT-1) >> 16) & 8'hFF;
                    msc_xfer_buf[2]=((MSC_SECTOR_COUNT-1) >> 8) & 8'hFF;
                    msc_xfer_buf[3]=(MSC_SECTOR_COUNT-1) & 8'hFF;
                    msc_xfer_buf[4]=(MSC_SECTOR_BYTES >> 24) & 8'hFF;
                    msc_xfer_buf[5]=(MSC_SECTOR_BYTES >> 16) & 8'hFF;
                    msc_xfer_buf[6]=(MSC_SECTOR_BYTES >> 8) & 8'hFF;
                    msc_xfer_buf[7]=MSC_SECTOR_BYTES & 8'hFF;
                    msc_prepare_data_in(8, host_len);
                end
                8'h1A, 8'h5A: begin // MODE SENSE(6)/(10), minimal header
                    for (i=0; i<8; i=i+1) msc_xfer_buf[i]=0;
                    msc_xfer_buf[0]=(op==8'h1A)?3:7;
                    msc_prepare_data_in((op==8'h1A)?4:8, host_len);
                end
                8'h28: begin // READ(10)
                    lba = {out_data_buf[2][17], out_data_buf[2][18],
                           out_data_buf[2][19], out_data_buf[2][20]};
                    blocks = {out_data_buf[2][22], out_data_buf[2][23]};
                    bytes_req = blocks * MSC_SECTOR_BYTES;
                    base = lba * MSC_SECTOR_BYTES;
                    if (lba < 0 || blocks < 0 || base < 0 || base+bytes_req > MSC_STORAGE_BYTES || bytes_req > host_len) begin
                        msc_sense_key=8'h05; msc_sense_asc=8'h21;
                        msc_prepare_csw(8'h01, host_len);
                    end else begin
                        for (i=0; i<bytes_req; i=i+1) msc_xfer_buf[i]=msc_storage[base+i];
                        msc_prepare_data_in(bytes_req, host_len);
                    end
                end
                8'h2A: begin // WRITE(10), receive following Bulk OUT data
                    lba = {out_data_buf[2][17], out_data_buf[2][18],
                           out_data_buf[2][19], out_data_buf[2][20]};
                    blocks = {out_data_buf[2][22], out_data_buf[2][23]};
                    bytes_req = blocks * MSC_SECTOR_BYTES;
                    base = lba * MSC_SECTOR_BYTES;
                    if (lba < 0 || blocks < 0 || base < 0 || base+bytes_req > MSC_STORAGE_BYTES || bytes_req > host_len || bytes_req > MSC_STORAGE_BYTES) begin
                        msc_sense_key=8'h05; msc_sense_asc=8'h21;
                        msc_prepare_csw(8'h01, host_len);
                    end else if (bytes_req == 0) begin
                        msc_prepare_csw(8'h00, host_len);
                    end else begin
                        msc_expected_out=bytes_req;
                        msc_out_received=0;
                        msc_storage_offset=base;
                        msc_residue=(host_len > bytes_req) ? host_len-bytes_req : 0;
                        msc_phase=MSC_DATA_OUT;
                    end
                end
                default: begin
                    msc_sense_key=8'h05; // ILLEGAL REQUEST
                    msc_sense_asc=8'h20;  // INVALID COMMAND OPERATION CODE
                    msc_prepare_csw(8'h01, host_len);
                end
            endcase
            $display("[%0t] BFM MSC: SCSI opcode=%02h host_len=%0d phase=%0d", $time, op, host_len, msc_phase);
        end
    endtask

    task automatic msc_accept_out_packet(input integer epn, input integer nbytes);
        integer i;
        begin
            if (!msc_mode) return;
            if (msc_reset_recovery_pending) begin
                $display("[%0t] BFM MSC: OUT ignored until BOT reset recovery completes", $time);
                return;
            end
            if (epn == 2 && msc_phase != MSC_DATA_OUT) begin
                // CBW must be exactly 31 bytes and carry the BOT signature.
                // BOT CBW validation (31 bytes): signature, reserved flag bits,
                // LUN, and CDB length are checked before any SCSI side effect.
                // CBW flags[7] is direction; bits[6:0] are reserved and must be 0.
                if (nbytes != 31 || out_data_buf[2][0] != 8'h55 ||
                    out_data_buf[2][1] != 8'h53 || out_data_buf[2][2] != 8'h42 ||
                    out_data_buf[2][3] != 8'h43 ||
                    (out_data_buf[2][12] & 8'h7F) != 8'h00 ||
                    out_data_buf[2][13] != 8'h00 ||
                    out_data_buf[2][14] < 1 || out_data_buf[2][14] > 16) begin
                    $display("[%0t] BFM MSC: Invalid CBW (len=%0d flags=%02h lun=%0d cblen=%0d) -> halt Bulk IN/OUT",
                             $time, nbytes, out_data_buf[2][12], out_data_buf[2][13], out_data_buf[2][14]);
                    // BOT reset recovery: host must issue Mass Storage Reset,
                    // then CLEAR_FEATURE(ENDPOINT_HALT) for both bulk endpoints.
                    ep_halted[1]=1'b1; ep_halted[2]=1'b1;
                    msc_reset_recovery_pending=1'b1;
                    msc_bulk_in_cleared=1'b0;
                    msc_bulk_out_cleared=1'b0;
                    msc_phase=MSC_NONE;
                    msc_xfer_len=0; msc_xfer_offset=0;
                    msc_expected_out=0; msc_out_received=0;
                    retry_pending=1'b0;
                    retry_payload.delete();
                    return;
                end
                for (i=0; i<4; i=i+1) msc_csw_tag[i]=out_data_buf[2][4+i];
                msc_expected_out=0; msc_out_received=0; msc_xfer_offset=0;
                msc_execute_scsi();
            end else if (epn == 2 && msc_phase == MSC_DATA_OUT) begin
                for (i=0; i<nbytes && msc_out_received<msc_expected_out; i=i+1) begin
                    msc_storage[msc_storage_offset+msc_out_received]=out_data_buf[2][i];
                    msc_out_received=msc_out_received+1;
                end
                if (msc_out_received >= msc_expected_out) begin
                    msc_prepare_csw(8'h00, msc_residue);
                    $display("[%0t] BFM MSC: WRITE(10) data committed bytes=%0d", $time, msc_out_received);
                end
            end
        end
    endtask

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
                    if (hid_mode != HID_NONE && pending_ep == 1 && hid_idle_rate == 0)
                        hid_report_pending = 1'b0;
                    if (last_in_ep0) complete_ep0_in_ack();
                    else if (msc_mode && pending_ep == 1) begin
                        if (msc_phase == MSC_DATA_IN) begin
                            msc_xfer_offset = msc_xfer_offset + last_in_len;
                            if (msc_xfer_offset >= msc_xfer_len)
                                msc_prepare_csw(8'h00, msc_residue);
                        end else if (msc_phase == MSC_CSW) begin
                            msc_phase = MSC_NONE;
                            msc_xfer_len = 0;
                            msc_xfer_offset = 0;
                            $display("[%0t] BFM MSC: CSW acknowledged", $time);
                        end
                    end
                    // A valid ACK commits this endpoint's packet. Do not
                    // discard a different endpoint's outstanding retry cache.
                    // EP0 transfer progress/toggle changes only after this ACK.
                    if (retry_pending && retry_ep == pending_ep) begin
                        retry_pending = 1'b0;
                        retry_payload.delete();
                    end
                    state = ST_IDLE;
                end
                return;
            end

            // Token packet.
            if (pid == PID_OUT || pid == PID_IN || pid == PID_SETUP || pid == PID_SOF) begin
                if (pkt.size() != 3) begin
                    if (pid == PID_SOF) begin
                        sof_malformed_count = sof_malformed_count + 1;
                        $display("[%0t] BFM SOF ERROR: malformed token length=%0d (expected 3)", $time, pkt.size());
                    end
                    return;
                end
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
                    if (pid == PID_SOF) begin
                        sof_bad_crc_count = sof_bad_crc_count + 1;
                        $display("[%0t] BFM SOF ERROR: CRC5 invalid RX=%02h CALC=%02h", $time, crc5_rx, crc5_calc);
                    end else begin
                        $display("[%0t] BFM: CRC5 ERROR PID=%02h ADDR=%0d EP=%0d RX=%02h CALC=%02h", $time, pid, addr, ep, crc5_rx, crc5_calc);
                    end
                    return;
                end

                if (pid == PID_SOF) begin : handle_sof_token
                    logic [10:0] received_frame;
                    logic [10:0] expected_frame;
                    integer unsigned delta;

                    // SOF token carries an 11-bit frame number, not ADDR/EP.
                    received_frame = {pkt[2][2:0], pkt[1]};
                    frame_number = received_frame;
                    sof_seen = 1'b1;
                    sof_count = sof_count + 1;
                    -> sof_received_event;

                    if (sof_previous_valid) begin
                        expected_frame = sof_previous_frame + 11'd1; // wraps modulo 2048
                        delta = (received_frame - sof_previous_frame) & 11'h7FF;
                        sof_last_delta = delta;

                        if (received_frame == sof_previous_frame) begin
                            sof_duplicate_count = sof_duplicate_count + 1;
                            if (sof_sequence_check_enable) begin
                                sof_sequence_error_count = sof_sequence_error_count + 1;
                                $display("[%0t] BFM SOF CHECK ERROR: duplicate frame number %0d",
                                         $time, received_frame);
                            end
                        end else if (received_frame != expected_frame) begin
                            if (delta > 1)
                                sof_missing_frame_count = sof_missing_frame_count + (delta - 1);
                            if (sof_sequence_check_enable) begin
                                sof_sequence_error_count = sof_sequence_error_count + 1;
                                $display("[%0t] BFM SOF CHECK ERROR: previous=%0d current=%0d expected=%0d delta=%0d",
                                         $time, sof_previous_frame, received_frame,
                                         expected_frame, delta);
                            end
                        end
                    end

                    if (sof_previous_valid) begin
                        sof_last_interval_cycles = bfm_clk_cycle - sof_previous_cycle;
                        if (sof_min_interval_cycles == 0 || sof_last_interval_cycles < sof_min_interval_cycles)
                            sof_min_interval_cycles = sof_last_interval_cycles;
                        if (sof_last_interval_cycles > sof_max_interval_cycles)
                            sof_max_interval_cycles = sof_last_interval_cycles;
                        if (sof_timing_check_enable &&
                            ((sof_last_interval_cycles + sof_timing_tolerance_cycles < sof_expected_interval_cycles) ||
                             (sof_last_interval_cycles > sof_expected_interval_cycles + sof_timing_tolerance_cycles))) begin
                            sof_timing_error_count = sof_timing_error_count + 1;
                            $display("[%0t] BFM SOF TIMING ERROR: interval=%0d cycles expected=%0d tolerance=+/- %0d",
                                     $time, sof_last_interval_cycles, sof_expected_interval_cycles, sof_timing_tolerance_cycles);
                        end
                    end
                    sof_previous_cycle = bfm_clk_cycle;
                    sof_previous_frame = received_frame;
                    sof_last_frame_number = received_frame;
                    sof_previous_valid = 1'b1;
                    $display("[%0t] BFM: SOF frame=%0d count=%0d",
                             $time, frame_number, sof_count);
                    return;
                end

                // Keep an unacknowledged IN packet cached across unrelated
                // bus traffic. USB requires the same endpoint to retransmit
                // the identical PID/payload until its ACK is received. A new
                // SETUP on EP0 explicitly supersedes an old EP0 control transfer.
                pending_token_pid = pid;
                pending_addr = addr;
                pending_ep = ep;

                // A new EP0 SETUP supersedes any prior control-transfer retry.
                if (pid == PID_SETUP && ep == 0) begin
                    // A new SETUP supersedes only EP0's pending IN packet.
                    // Do not destroy an unrelated endpoint's cached response.
                    if (retry_pending && retry_ep == 0) begin
                        retry_pending = 1'b0;
                        retry_payload.delete();
                    end
                    last_in_len = 0;
                    last_in_ep0 = 1'b0;
                    last_in_was_control_data = 1'b0;
                    last_in_was_status = 1'b0;
                    last_in_was_zlp = 1'b0;
                    pending_feature_valid = 1'b0;
                    pending_interface_valid = 1'b0;
                    address_update_pending = 1'b0;
                    pending_configuration = 8'd0;
                    ctrl_stage = CTRL_IDLE;
                    control_transfer_active = 1'b0;
                    ctrl_stall_pending = 1'b0;
                    ctrl_data_transferred = 16'd0;
                    ctrl_data_remaining = 16'd0;
                    ctrl_in_data_index = 0;
                    ctrl_out_data_len = 0;
                end

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

                // Only ACK a duplicate when PID and payload match the last
                // committed OUT packet. Do not deliver it or toggle twice.
                if (pid != expected_data_pid) begin
                    if (pending_token_pid == PID_OUT && pending_ep < MAX_ENDPOINTS &&
                        ep_type[pending_ep] != EP_TYPE_ISO && out_last_valid[pending_ep] &&
                        pid == out_last_pid[pending_ep] && data_bytes.size() == out_last_len[pending_ep]) begin
                        bit duplicate_match;
                        duplicate_match = 1'b1;
                        for (j = 0; j < data_bytes.size(); j = j + 1)
                            if (data_bytes[j] !== out_last_data[pending_ep][j]) duplicate_match = 1'b0;
                        if (duplicate_match) begin
                            $display("[%0t] BFM: Duplicate OUT DATA packet EP%0d; ACK without recommit", $time, pending_ep);
                            send_handshake(PID_ACK);
                        end else begin
                            $display("[%0t] BFM: Wrong-toggle OUT packet payload mismatch EP%0d; ignored", $time, pending_ep);
                        end
                    end
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                if (pending_token_pid == PID_SETUP) begin
                    if (data_bytes.size() != 8) begin
                        // Malformed SETUP aborts the old control transfer and
                        // leaves EP0 stalled until a new valid SETUP arrives.
                        ctrl_stage = CTRL_IDLE;
                        ctrl_stall_pending = 1'b1;
                        control_transfer_active = 1'b0;
                        address_update_pending = 1'b0;
                        pending_configuration = 8'd0;
                        pending_feature_valid = 1'b0;
                        pending_interface_valid = 1'b0;
                        send_handshake(PID_STALL);
                        pending_data = 1'b0;
                        state = ST_IDLE;
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
                    // SETUP resets EP0 data-toggle sequencing and duplicate history.
                    in_toggle[0] = 1'b1;
                    out_toggle[0] = 1'b1;
                    out_last_valid[0] = 1'b0;
                    out_last_len[0] = 0;
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
                    if (pid != PID_DATA1 || data_bytes.size() != 0) begin
                        send_handshake(PID_STALL);
                    end else begin
                        send_handshake(PID_ACK);
                        complete_control_transfer();
                    end
                    pending_data = 1'b0;
                    state = ST_IDLE;
                    return;
                end

                // Control OUT DATA stage. A control write must receive exactly
                // wLength bytes; an early short packet is not treated as a
                // successful end-of-data. Bounds are checked before any buffer
                // write so malformed host traffic cannot overrun EP0 storage.
                if (pending_ep == 0 && ctrl_stage == CTRL_DATA_OUT) begin
                    if ((ctrl_data_transferred + data_bytes.size()) > ctrl_wLength ||
                        data_bytes.size() > ep_mps[0] ||
                        (ctrl_out_data_len + data_bytes.size()) > MAX_OUT_DATA) begin
                        send_handshake(PID_STALL);
                        pending_data = 1'b0;
                        state = ST_IDLE;
                        return;
                    end
                    for (j = 0; j < data_bytes.size(); j = j + 1) begin
                        ep0_out_data[ctrl_out_data_len] = data_bytes[j];
                        ctrl_out_data_len = ctrl_out_data_len + 1;
                    end
                    ctrl_data_transferred = ctrl_data_transferred + data_bytes.size();

                    // A short packet before wLength is reached is malformed for
                    // this control OUT transfer. Do not ACK/commit partial data.
                    if ((data_bytes.size() < ep_mps[0]) &&
                        (ctrl_data_transferred < ctrl_wLength)) begin
                        ctrl_stall_pending = 1'b1;
                    end

                    if (ctrl_data_transferred == ctrl_wLength) begin
                        if (setup_bRequest == HID_REQ_SET_REPORT) complete_hid_set_report();
                        else if (setup_bRequest == REQ_SET_DESCRIPTOR) handle_set_descriptor_data();
                        else ctrl_stall_pending = 1'b1;
                        if (ctrl_stall_pending) ctrl_stage = CTRL_IDLE;
                        else ctrl_stage = CTRL_STATUS_IN;
                    end
                    if (ctrl_stall_pending) begin
                        send_handshake(PID_STALL);
                        pending_data = 1'b0;
                        state = ST_IDLE;
                        return;
                    end
                    out_last_valid[0] = 1'b1;
                    out_last_pid[0] = pid;
                    out_last_len[0] = data_bytes.size();
                    for (j = 0; j < data_bytes.size(); j = j + 1)
                        out_last_data[0][j] = data_bytes[j];
                    send_handshake(PID_ACK);
                    out_toggle[0] = ~out_toggle[0];
                    pending_data = 1'b0;
                    state = ST_IDLE;
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
                    if (msc_mode && pending_ep == 2 && ep_type[pending_ep] == EP_TYPE_BULK)
                        msc_accept_out_packet(pending_ep, out_data_len[pending_ep]);
                    if (msc_mode && pending_ep == 2 && ep_halted[pending_ep]) begin
                        send_handshake(PID_STALL);
                        pending_data = 1'b0;
                        state = ST_IDLE;
                        return;
                    end
                    // Isochronous transfers have no handshake and no DATA PID
                    // toggle. Bulk/interrupt transfers ACK and toggle.
                    if (ep_type[pending_ep] != EP_TYPE_ISO) begin
                        out_last_valid[pending_ep] = 1'b1;
                        out_last_pid[pending_ep] = pid;
                        out_last_len[pending_ep] = data_bytes.size();
                        for (j = 0; j < data_bytes.size() && j < MAX_OUT_DATA; j = j + 1)
                            out_last_data[pending_ep][j] = data_bytes[j];
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
            // HID idle rate 0 means report only on change. Nonzero idle rates
            // currently make the latest report available on each poll; exact
            // 4-ms idle timer scheduling is a remaining refinement.
            if (ep == 1 && hid_mode != HID_NONE && hid_idle_rate == 0 && !hid_report_pending) begin
                send_handshake(PID_NAK); state = ST_IDLE; return;
            end
            if (msc_mode && ep == 1 && msc_reset_recovery_pending) begin
                send_handshake(PID_STALL); state = ST_IDLE; return;
            end
            if (msc_mode && ep == 1 && msc_phase != MSC_DATA_IN && msc_phase != MSC_CSW) begin
                send_handshake(PID_NAK); state = ST_IDLE; return;
            end

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
                if (msc_mode && ep == 1 && (msc_phase == MSC_DATA_IN || msc_phase == MSC_CSW)) begin
                    n = msc_xfer_len - msc_xfer_offset;
                    if (n > ep_mps[ep]) n = ep_mps[ep];
                    if (n < 0) n = 0;
                    for (i = 0; i < n; i = i + 1)
                        payload.push_back(msc_xfer_buf[msc_xfer_offset+i]);
                end else if (ep_in_data_len[ep] != 0) begin
                    n = ep_in_data_len[ep];
                    // HID boot mouse reports contain buttons, X and Y only;
                    // report protocol additionally carries the wheel byte.
                    if (ep == 1 && hid_mode == HID_MOUSE && hid_protocol == 8'h01 && n > 3) n = 3;
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

                if (ep_type[ep] != EP_TYPE_ISO &&
                    (!retry_pending || retry_ep == ep)) begin
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

            // UTMI-like RX interface: present handshake PID for one configured
            // byte time (32 clocks at 48 MHz; 40 at 60 MHz). RXVALID is a pulse.
            // Keep RX_DATA stable for the rest of the byte time; do not clear
            // the PID immediately after the RXVALID pulse.
            utmi_rxerror_i  <= 1'b0;
            utmi_data_in_i  <= pid;
            utmi_rxactive_i <= 1'b1;
            utmi_rxvalid_i  <= 1'b1;
            $display("[%0t] BFM: Driving handshake PID=%02h", $time, pid);

            @(posedge clk_i);
            utmi_rxvalid_i <= 1'b0;

            // Keep PID stable for the remainder of the configured byte time.
            // RXACTIVE remains asserted through EOP.
            for (byte_clk = 1; byte_clk < FS_BYTE_CLKS; byte_clk = byte_clk + 1) begin
                @(posedge clk_i);
                if (task_epoch != reset_epoch || rst_i) return;
            end

            // USB FS EOP: SE0 for 2 bit times, followed by J for 1 bit time.
            // Durations are 8+4 clocks at 48 MHz, 10+5 clocks at 60 MHz.
            utmi_linestate_i <= 2'b00;
            repeat (FS_EOP_SE0_CLKS) @(posedge clk_i);
            if (task_epoch != reset_epoch || rst_i) return;
            utmi_linestate_i <= 2'b01;

            // UTMI FS RXACTIVE deasserts within 2 clocks after FS idle.
            repeat (2) @(posedge clk_i);
            utmi_rxactive_i <= 1'b0;
            utmi_rxerror_i  <= 1'b0;

            // Keep RXACTIVE low through at least one configured FS bit time.
            repeat (FS_EOP_J_CLKS) @(posedge clk_i);
            utmi_data_in_i <= 8'h00;
            $display("[%0t] BFM: Handshake PID=%02h byte time + EOP complete; LineState=J",
                     $time, pid);
        end
    endtask


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

        // RXVALID qualifies each byte for one CLK; RXACTIVE remains asserted.
        // Byte spacing is derived from UTMI_CLK_HZ: 32 clocks at 48 MHz,
        // 40 clocks at 60 MHz. Drive on clock edges as this packet-level model
        // expects; validate the exact sampling contract against the DUT.
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

            // One CLK of RXVALID; keep RXACTIVE high for the remainder of
            // this byte slot. Total slot length is FS_BYTE_CLKS clocks.
            @(posedge clk_i);
            if (task_epoch != reset_epoch || rst_i) return;
            utmi_rxvalid_i <= 1'b0;
            repeat (FS_BYTE_CLKS - 2) @(posedge clk_i);
            if (task_epoch != reset_epoch || rst_i) return;
        end

        // The last CRC byte's configured byte time is complete. EOP on the bus is
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


    // ------------------------------------------------------------------------
    // Public Mass Storage test personality. Call before enumeration/reset.
    // Exposes one MSC BOT interface: EP1 IN bulk, EP2 OUT bulk, 64-byte MPS.
    // ------------------------------------------------------------------------
    task automatic configure_mass_storage_for_test();
        integer i;
        begin
            msc_mode = 1;
            hid_mode = HID_NONE;
            msc_phase = MSC_NONE;
            msc_xfer_len = 0;
            msc_xfer_offset = 0;
            msc_expected_out = 0;
            msc_out_received = 0;
            msc_storage_offset = 0;
            msc_sense_key = 0;
            msc_sense_asc = 0;
            msc_reset_recovery_pending = 1'b0;
            msc_bulk_in_cleared = 1'b0;
            msc_bulk_out_cleared = 1'b0;
            // Configuration descriptor: 1 MSC interface, Bulk IN 0x81 and
            // Bulk OUT 0x02, both 64-byte max packet size.
            config_desc_len = 32;
            config_desc[0]=9;  config_desc[1]=DESC_CONFIGURATION;
            config_desc[2]=32; config_desc[3]=0;
            config_desc[4]=1;  config_desc[5]=1; config_desc[6]=0;
            config_desc[7]=8'h80; config_desc[8]=8'h32;
            config_desc[9]=9; config_desc[10]=DESC_INTERFACE;
            config_desc[11]=0; config_desc[12]=0; config_desc[13]=2;
            config_desc[14]=8'h08; // Mass Storage class
            config_desc[15]=8'h06; // SCSI transparent command set
            config_desc[16]=8'h50; // Bulk-Only Transport
            config_desc[17]=0;
            config_desc[18]=7; config_desc[19]=DESC_ENDPOINT;
            config_desc[20]=8'h81; config_desc[21]=8'h02;
            config_desc[22]=64; config_desc[23]=0; config_desc[24]=0;
            config_desc[25]=7; config_desc[26]=DESC_ENDPOINT;
            config_desc[27]=8'h02; config_desc[28]=8'h02;
            config_desc[29]=64; config_desc[30]=0; config_desc[31]=0;
            for (i=0; i<MSC_STORAGE_BYTES; i=i+1) msc_storage[i]=0;
            // Deterministic first sector pattern makes READ tests reproducible.
            for (i=0; i<MSC_SECTOR_BYTES; i=i+1) msc_storage[i]=i[7:0];
            for (i=0; i<4; i=i+1) msc_csw_tag[i]=0;
            $display("[%0t] BFM: MSC BOT personality loaded; storage=%0d bytes (%0d sectors)",
                     $time, MSC_STORAGE_BYTES, MSC_SECTOR_COUNT);
        end
    endtask

    // Read-only convenience task for a testbench to inspect simulated media.
    task automatic msc_read_storage_byte(input integer address, output logic [7:0] value);
        begin
            if (address >= 0 && address < MSC_STORAGE_BYTES) value = msc_storage[address];
            else value = 8'hXX;
        end
    endtask

    // ------------------------------------------------------------------------
    // Public HID test personalities. Call BEFORE host enumeration/reset.
    // These replace the generic default configuration descriptor but retain
    // the same module ports and low-level packet engine.
    // ------------------------------------------------------------------------
    task automatic configure_hid_mouse_for_test();
        integer i, p;
        begin
            msc_mode = 0;
            hid_mode = HID_MOUSE;
            hid_protocol = 8'h01;
            hid_idle_rate = 0;
            hid_keyboard_leds = 0;
            for (i=0; i<MAX_DESC_BYTES; i=i+1) hid_report_desc[i]=0;
            p=0;
            // Boot mouse report: buttons(3), padding(5), X, Y, wheel.
            hid_report_desc[p++]=8'h05; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h09; hid_report_desc[p++]=8'h02;
            hid_report_desc[p++]=8'hA1; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h09; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'hA1; hid_report_desc[p++]=8'h00;
            hid_report_desc[p++]=8'h05; hid_report_desc[p++]=8'h09;
            hid_report_desc[p++]=8'h19; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h29; hid_report_desc[p++]=8'h03;
            hid_report_desc[p++]=8'h15; hid_report_desc[p++]=8'h00;
            hid_report_desc[p++]=8'h25; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h95; hid_report_desc[p++]=8'h03;
            hid_report_desc[p++]=8'h75; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h81; hid_report_desc[p++]=8'h02;
            hid_report_desc[p++]=8'h95; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h75; hid_report_desc[p++]=8'h05;
            hid_report_desc[p++]=8'h81; hid_report_desc[p++]=8'h03;
            hid_report_desc[p++]=8'h05; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h09; hid_report_desc[p++]=8'h30;
            hid_report_desc[p++]=8'h09; hid_report_desc[p++]=8'h31;
            hid_report_desc[p++]=8'h09; hid_report_desc[p++]=8'h38;
            hid_report_desc[p++]=8'h15; hid_report_desc[p++]=8'h81;
            hid_report_desc[p++]=8'h25; hid_report_desc[p++]=8'h7F;
            hid_report_desc[p++]=8'h75; hid_report_desc[p++]=8'h08;
            hid_report_desc[p++]=8'h95; hid_report_desc[p++]=8'h03;
            hid_report_desc[p++]=8'h81; hid_report_desc[p++]=8'h06;
            hid_report_desc[p++]=8'hC0; hid_report_desc[p++]=8'hC0;
            hid_report_desc_len=p;
            // Device descriptor still reports one configuration.
            config_desc_len=34;
            config_desc[0]=9; config_desc[1]=DESC_CONFIGURATION; config_desc[2]=34; config_desc[3]=0;
            config_desc[4]=1; config_desc[5]=1; config_desc[6]=0; config_desc[7]=8'h80; config_desc[8]=8'h32;
            config_desc[9]=9; config_desc[10]=DESC_INTERFACE; config_desc[11]=0; config_desc[12]=0; config_desc[13]=1;
            config_desc[14]=8'h03; config_desc[15]=8'h01; config_desc[16]=8'h02; config_desc[17]=0;
            config_desc[18]=9; config_desc[19]=DESC_HID; config_desc[20]=8'h11; config_desc[21]=1; config_desc[22]=0;
            config_desc[23]=1; config_desc[24]=DESC_HID_REPORT; config_desc[25]=hid_report_desc_len[7:0]; config_desc[26]=(hid_report_desc_len>>8)&8'hFF;
            config_desc[27]=7; config_desc[28]=DESC_ENDPOINT; config_desc[29]=8'h81; config_desc[30]=8'h03;
            config_desc[31]=8'd4; config_desc[32]=0; config_desc[33]=8'd10;
            hid_last_report_len=4; hid_last_report[0]=0; hid_last_report[1]=0; hid_last_report[2]=0; hid_last_report[3]=0;
            hid_report_pending=1'b1;
            $display("[%0t] BFM: HID mouse personality loaded; report descriptor bytes=%0d",$time,hid_report_desc_len);
        end
    endtask

    task automatic configure_hid_keyboard_for_test();
        integer i, p;
        begin
            msc_mode = 0;
            hid_mode = HID_KEYBOARD;
            hid_protocol = 8'h01;
            hid_idle_rate = 0;
            hid_keyboard_leds = 0;
            for (i=0; i<MAX_DESC_BYTES; i=i+1) hid_report_desc[i]=0;
            p=0;
            // Standard 8-byte boot keyboard input report, no report IDs.
            hid_report_desc[p++]=8'h05; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h09; hid_report_desc[p++]=8'h06;
            hid_report_desc[p++]=8'hA1; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h05; hid_report_desc[p++]=8'h07;
            hid_report_desc[p++]=8'h19; hid_report_desc[p++]=8'hE0;
            hid_report_desc[p++]=8'h29; hid_report_desc[p++]=8'hE7;
            hid_report_desc[p++]=8'h15; hid_report_desc[p++]=8'h00;
            hid_report_desc[p++]=8'h25; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h75; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h95; hid_report_desc[p++]=8'h08;
            hid_report_desc[p++]=8'h81; hid_report_desc[p++]=8'h02;
            hid_report_desc[p++]=8'h95; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h75; hid_report_desc[p++]=8'h08;
            hid_report_desc[p++]=8'h81; hid_report_desc[p++]=8'h01;
            // LED output report: Num Lock, Caps Lock, Scroll Lock, Compose, Kana.
            hid_report_desc[p++]=8'h05; hid_report_desc[p++]=8'h08;
            hid_report_desc[p++]=8'h19; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h29; hid_report_desc[p++]=8'h05;
            hid_report_desc[p++]=8'h95; hid_report_desc[p++]=8'h05;
            hid_report_desc[p++]=8'h75; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h91; hid_report_desc[p++]=8'h02;
            hid_report_desc[p++]=8'h95; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h75; hid_report_desc[p++]=8'h03;
            hid_report_desc[p++]=8'h91; hid_report_desc[p++]=8'h01;
            hid_report_desc[p++]=8'h05; hid_report_desc[p++]=8'h07;
            hid_report_desc[p++]=8'h95; hid_report_desc[p++]=8'h06;
            hid_report_desc[p++]=8'h75; hid_report_desc[p++]=8'h08;
            hid_report_desc[p++]=8'h15; hid_report_desc[p++]=8'h00;
            hid_report_desc[p++]=8'h25; hid_report_desc[p++]=8'h65;
            hid_report_desc[p++]=8'h19; hid_report_desc[p++]=8'h00;
            hid_report_desc[p++]=8'h29; hid_report_desc[p++]=8'h65;
            hid_report_desc[p++]=8'h81; hid_report_desc[p++]=8'h00;
            hid_report_desc[p++]=8'hC0;
            hid_report_desc_len=p;
            config_desc_len=34;
            config_desc[0]=9; config_desc[1]=DESC_CONFIGURATION; config_desc[2]=34; config_desc[3]=0;
            config_desc[4]=1; config_desc[5]=1; config_desc[6]=0; config_desc[7]=8'h80; config_desc[8]=8'h32;
            config_desc[9]=9; config_desc[10]=DESC_INTERFACE; config_desc[11]=0; config_desc[12]=0; config_desc[13]=1;
            config_desc[14]=8'h03; config_desc[15]=8'h01; config_desc[16]=8'h01; config_desc[17]=0;
            config_desc[18]=9; config_desc[19]=DESC_HID; config_desc[20]=8'h11; config_desc[21]=1; config_desc[22]=0;
            config_desc[23]=1; config_desc[24]=DESC_HID_REPORT; config_desc[25]=hid_report_desc_len[7:0]; config_desc[26]=(hid_report_desc_len>>8)&8'hFF;
            config_desc[27]=7; config_desc[28]=DESC_ENDPOINT; config_desc[29]=8'h81; config_desc[30]=8'h03;
            config_desc[31]=8'd8; config_desc[32]=0; config_desc[33]=8'd10;
            hid_last_report_len=8;
            for (i=0;i<8;i=i+1) hid_last_report[i]=0;
            hid_report_pending=1'b1;
            $display("[%0t] BFM: HID keyboard personality loaded; report descriptor bytes=%0d",$time,hid_report_desc_len);
        end
    endtask

    task automatic set_hid_mouse_report(input logic [7:0] buttons, input logic signed [7:0] dx,
                                        input logic signed [7:0] dy, input logic signed [7:0] wheel);
        begin
            if (hid_mode != HID_MOUSE) $error("set_hid_mouse_report called when HID mouse mode is not active");
            else begin
                hid_last_report[0]=buttons & 8'h07;
                hid_last_report[1]=dx; hid_last_report[2]=dy; hid_last_report[3]=wheel;
                hid_last_report_len=4;
                hid_report_pending=1'b1;
                if (ep_enabled[1]) begin
                    ep_in_data[1][0]=buttons & 8'h07; ep_in_data[1][1]=dx; ep_in_data[1][2]=dy; ep_in_data[1][3]=wheel;
                    ep_in_data_len[1]=4;
                end
            end
        end
    endtask

    task automatic set_hid_keyboard_report(input logic [7:0] modifiers, input logic [7:0] reserved,
                                           input logic [7:0] key0, input logic [7:0] key1,
                                           input logic [7:0] key2, input logic [7:0] key3,
                                           input logic [7:0] key4, input logic [7:0] key5);
        begin
            if (hid_mode != HID_KEYBOARD) $error("set_hid_keyboard_report called when HID keyboard mode is not active");
            else begin
                hid_last_report[0]=modifiers; hid_last_report[1]=reserved;
                hid_last_report[2]=key0; hid_last_report[3]=key1; hid_last_report[4]=key2;
                hid_last_report[5]=key3; hid_last_report[6]=key4; hid_last_report[7]=key5;
                hid_last_report_len=8;
                hid_report_pending=1'b1;
                if (ep_enabled[1]) begin
                    ep_in_data[1][0]=modifiers; ep_in_data[1][1]=reserved;
                    ep_in_data[1][2]=key0; ep_in_data[1][3]=key1; ep_in_data[1][4]=key2;
                    ep_in_data[1][5]=key3; ep_in_data[1][6]=key4; ep_in_data[1][7]=key5;
                    ep_in_data_len[1]=8;
                end
            end
        end
    endtask

    task automatic get_hid_keyboard_leds(output logic [7:0] leds);
        begin leds = hid_keyboard_leds; end
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


  // ---------------------------------------------------------
  // Device attach/detach stimulus for host device-detect tests
  // ---------------------------------------------------------

  task automatic usb_device_attach_for_test();
    begin
      $display("[%0t] DEVICE BFM: Attach stimulus", $time);
      device_state = DEV_ATTACHED;
      device_addr = 7'd0;
      configuration_value = 8'd0;
      pending_address = 7'd0;
      address_update_pending = 1'b0;
      pending_configuration = 8'd0;
      control_transfer_active = 1'b0;
      ctrl_stage = CTRL_IDLE;
      state = ST_IDLE;
      utmi_rxvalid_i = 1'b0;
      utmi_rxactive_i = 1'b0;
      utmi_rxerror_i = 1'b0;
      utmi_linestate_i = 2'b01;
      repeat (10) @(posedge clk_i);
      $display("[%0t] DEVICE BFM: FS J idle presented", $time);
    end
  endtask

  task automatic usb_device_detach_for_test();
    begin
      $display("[%0t] DEVICE BFM: Detach stimulus", $time);
      device_state = DEV_DETACHED;
      device_addr = 7'd0;
      configuration_value = 8'd0;
      pending_address = 7'd0;
      address_update_pending = 1'b0;
      pending_configuration = 8'd0;
      control_transfer_active = 1'b0;
      ctrl_stage = CTRL_IDLE;
      state = ST_IDLE;
      tx_pkt_q.delete();
      pkt_copy.delete();
      tx_packet_active = 1'b0;
      utmi_rxvalid_i = 1'b0;
      utmi_rxactive_i = 1'b0;
      utmi_rxerror_i = 1'b0;
      utmi_linestate_i = 2'b00; // abstract disconnected indication
      repeat (10) @(posedge clk_i);
      $display("[%0t] DEVICE BFM: detached", $time);
    end
  endtask
  
  
  // Directed-test setup for SYNCH_FRAME.
// Call before starting the UVM sequence.
task automatic setup_synch_frame_for_test();
    begin
        device_addr = 7'd0;
        device_state = DEV_CONFIGURED;
        configuration_value = 8'd1;

        // EP0 remains the control endpoint.
        ep_enabled[0] = 1'b1;
        ep_type[0]    = EP_TYPE_CONTROL;
        ep_mps[0]     = EP0_MAX_PACKET_SIZE;

        // EP1 IN is the isochronous endpoint being queried.
        enable_endpoint(
            1,              // Endpoint number
            1'b1,           // IN
            EP_TYPE_ISO,    // Isochronous
            64,             // Maximum packet size
            1               // Interval
        );

        ep_halted[1] = 1'b0;
        in_toggle[1] = 1'b0;

        // Reset control-transfer state for an isolated test.
        ctrl_stage = CTRL_IDLE;
        control_transfer_active = 1'b0;
        ctrl_stall_pending = 1'b0;
        pending_data = 1'b0;
        state = ST_IDLE;

        $display("[%0t] BFM: SYNCH_FRAME test setup: EP1 IN isochronous enabled",
                 $time);
    end
endtask
endmodule

