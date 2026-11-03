//================================================================================
// CLEAR_FEATURE sequence
// Clears ENDPOINT_HALT on EP1 OUT for an addressed (addr = 5) USB device.
// Inherits register access and USB token helpers from base sequence.
//================================================================================

class axi4_agent_control_OUT_clear_feature_seq
  extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_control_OUT_clear_feature_seq)

  // --------------------------------------------------------------------------
  // Configuration
  // --------------------------------------------------------------------------
  localparam logic [6:0] DEVICE_ADDRESS = 7'd5;
  localparam logic [3:0] ENDPOINT_NUMBER = 4'd1;

  // Standard USB request values
  localparam logic [7:0] REQUEST_CLEAR_FEATURE = 8'h01;
  localparam logic [7:0] BM_REQUEST_TYPE       = 8'h02;
  localparam logic [15:0] FEATURE_ENDPOINT_HALT = 16'h0000;

  // USB_WR_DATA setup packet bytes:
  // bmRequestType = 02h : Host-to-device, Standard, Endpoint
  // bRequest      = 01h : CLEAR_FEATURE
  // wValue        = 0000h: ENDPOINT_HALT
  // wIndex        = 0001h: EP1 OUT
  // wLength       = 0000h: No data stage

  logic [7:0]  setup_pkt [8];
  logic [31:0] status;
  logic [31:0] irq_status;

  // --------------------------------------------------------------------------
  // Constructor
  // --------------------------------------------------------------------------
  function new(string name = "axi4_agent_control_OUT_clear_feature_seq");
    super.new(name);
  endfunction

  // --------------------------------------------------------------------------
  // Sequence body
  // --------------------------------------------------------------------------
  virtual task body();

    super.body();

    `uvm_info(get_type_name(),
      "Starting CLEAR_FEATURE: ENDPOINT_HALT on EP1 OUT",
      UVM_LOW)

    // ------------------------------------------------------------------------
    // Build the 8-byte SETUP packet (little-endian fields)
    // ------------------------------------------------------------------------
    setup_pkt[0] = BM_REQUEST_TYPE;                 // 8'h02
    setup_pkt[1] = REQUEST_CLEAR_FEATURE;           // 8'h01
    setup_pkt[2] = FEATURE_ENDPOINT_HALT[7:0];      // 8'h00
    setup_pkt[3] = FEATURE_ENDPOINT_HALT[15:8];     // 8'h00
    setup_pkt[4] = {4'b1000, ENDPOINT_NUMBER};      // 8'h01 {0000,EP_no.} - EP-OUT;     8'h81 {1000,EP_no.} - EP-IN (targeting)
    setup_pkt[5] = 8'h00;
    setup_pkt[6] = 8'h00;
    setup_pkt[7] = 8'h00;

    // ------------------------------------------------------------------------
    // Stage 1: Write Payload length (8 Bytes) + SETUP payload to the host controller FIFO
    // ------------------------------------------------------------------------
    clear_usb_interrupts(); //   Clear stale DONE/ERR interrupts
    
    write_reg(USB_XFER_DATA, 32'd8); 

    foreach (setup_pkt[i]) begin
      write_reg(USB_WR_DATA, {24'h000000, setup_pkt[i]});
    end

    // ------------------------------------------------------------------------
    // Send SETUP token to EP0 using DATA0
    // issue_token() already waits for completion and returns RX_STAT.
    // ------------------------------------------------------------------------
    clear_usb_interrupts(); // Clear the previous transaction's latched flags

    issue_token(
      PID_SETUP,
      1'b0,             // is_in = 0
      1'b0,             // DATA0 for SETUP
      DEVICE_ADDRESS,
      4'd0,             // Control endpoint EP0
      status
    );

    check_response_pid(
      status,
      PID_ACK,
      "CLEAR_FEATURE SETUP stage"
    );

    `uvm_info(get_type_name(),
      "SETUP stage completed: ACK received",
      UVM_MEDIUM)

    // ------------------------------------------------------------------------
    // Stage 2: Status IN stage
    // The device should return DATA1 with zero payload bytes.
    // The host controller is expected to ACK the IN data packet.
    // ------------------------------------------------------------------------
    clear_usb_interrupts(); // Clear the previous transaction's latched flags
    write_reg(USB_XFER_DATA, 32'd0); // No transmit payload for the status IN stage.

    issue_token(
      PID_IN,
      1'b1,             // IN transaction
      1'b1,             // DATA1 for status stage
      DEVICE_ADDRESS,
      4'd0,             // Control endpoint EP0
      status
    );

    // Verify the device returned DATA1.
    check_response_pid(
      status,
      PID_DATA1,
      "CLEAR_FEATURE status stage"
    );

    // A successful control status stage must contain zero data bytes.
    if (status[15:0] != 16'd0) begin
      `uvm_fatal("CLEAR_FEATURE",
        $sformatf(
          "Expected status-stage ZLP, received COUNT=%0d RX_STAT=0x%08h",
          status[15:0], status))
    end

    `uvm_info(get_type_name(),
      "CLEAR_FEATURE transaction completed: DATA1 ZLP received",
      UVM_LOW)

  endtask : body

endclass : axi4_agent_control_OUT_clear_feature_seq

