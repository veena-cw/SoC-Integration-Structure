/*
class axi4_agent_control_GET_STATUS_device_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_control_GET_STATUS_device_seq)

  // ---------------------------------------------------------
  // USB host-controller registers
  // ---------------------------------------------------------
  localparam logic [31:0] USB_RD_DATA = 32'h24;

  // ---------------------------------------------------------
  // USB PIDs
  // ---------------------------------------------------------
  localparam logic [7:0] PID_SETUP = 8'h2D;
  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_OUT   = 8'hE1;
  localparam logic [7:0] PID_ACK   = 8'hD2;
  localparam logic [7:0] PID_DATA1 = 8'h4B;

  // ---------------------------------------------------------
  // Request parameters
  // ---------------------------------------------------------
  localparam logic [6:0] DEV_ADDR = 7'd5;
  localparam logic [3:0] EP0      = 4'd0;

  // Device GET_STATUS request:
  // bmRequestType = 0x80
  // bRequest      = 0x00
  // wValue        = 0
  // wIndex        = 0
  // wLength       = 2

  // Set these expected values to match the device BFM model.
  // Bit 0: currently self-powered
  // Bit 1: remote wakeup enabled
  localparam bit EXPECTED_SELF_POWERED = 1'b0;
  localparam bit EXPECTED_REMOTE_WAKEUP = 1'b0;

  function new( string name = "axi4_agent_control_GET_STATUS_device_seq");
    super.new(name);
  endfunction

  virtual task body();

    logic [31:0] status;
    logic [31:0] rd_data;
    logic [15:0] device_status;
    logic [7:0] setup_pkt[8];

    `uvm_info("GET_STATUS_DEVICE", "Starting device GET_STATUS request", UVM_MEDIUM)

    // -------------------------------------------------------
    // Build the 8-byte SETUP payload
    // -------------------------------------------------------
    setup_pkt[0] = 8'h80; // Device-to-host, standard, device
    setup_pkt[1] = 8'h00; // GET_STATUS
    setup_pkt[2] = 8'h00; // wValue low
    setup_pkt[3] = 8'h00; // wValue high
    setup_pkt[4] = 8'h00; // wIndex low
    setup_pkt[5] = 8'h00; // wIndex high
    setup_pkt[6] = 8'h02; // wLength low = 2 bytes
    setup_pkt[7] = 8'h00; // wLength high
    // -------------------------------------------------------
    // Stage 1: SETUP
    // Address 5, endpoint 0, DATA0
    // -------------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd8);
    foreach (setup_pkt[i]) begin
      write_reg(USB_WR_DATA, {24'h0, setup_pkt[i]});
    end
    issue_token(
      PID_SETUP,
      1'b0,  // OUT direction for SETUP
      1'b0,  // DATA0
      DEV_ADDR,
      EP0,
      status
    );
    check_response_pid (status, PID_ACK,"GET_STATUS device SETUP");
    `uvm_info("GET_STATUS_DEVICE", $sformatf("SETUP accepted: RX_STAT=%08h", status), UVM_MEDIUM)
    // -------------------------------------------------------
    // Stage 2: DATA IN
    // Expect two status bytes in a DATA1 packet.
    // -------------------------------------------------------
    clear_usb_interrupts();

    write_reg(USB_XFER_DATA, 32'd2);

    issue_token(
      PID_IN,
      1'b1,  // IN
      1'b1,  // DATA1
      DEV_ADDR,
      EP0,
      status
    );

    check_response_pid(
      status,
      PID_DATA1,
      "GET_STATUS device DATA IN"
    );
    if (status[15:0] != 16'd2) begin
      `uvm_fatal("GET_STATUS_COUNT", $sformatf( "Expected 2 status bytes, got COUNT=%0d RX_STAT=%08h", status[15:0], status ))
    end
    read_reg(USB_RD_DATA, rd_data);
    // Assumes byte 0 is in [7:0] and byte 1 in [15:8].
    device_status = rd_data[15:0];
    `uvm_info("GET_STATUS_DEVICE", $sformatf( "Device status: raw=0x%04h self_powered=%0b remote_wakeup=%0b"
    , device_status, device_status[0], device_status[1] ), UVM_LOW)
    // -------------------------------------------------------
    // Check reserved bits
    // Bits 15:2 must be zero.
    // -------------------------------------------------------
    if (device_status[15:2] != 14'b0) begin
      `uvm_fatal("GET_STATUS_RESERVED",
        $sformatf( "Reserved device status bits are nonzero: 0x%04h", device_status ))
    end
    // -------------------------------------------------------
    // Check device status against the BFM's modeled state
    // -------------------------------------------------------
    if (device_status[0] !== EXPECTED_SELF_POWERED) begin
      `uvm_fatal("GET_STATUS_SELF_POWERED",
        $sformatf( "Self-powered mismatch: expected=%0b actual=%0b", EXPECTED_SELF_POWERED, device_status[0] ))
    end
    if (device_status[1] !== EXPECTED_REMOTE_WAKEUP) begin
      `uvm_fatal("GET_STATUS_REMOTE_WAKEUP",
        $sformatf( "Remote-wakeup mismatch: expected=%0b actual=%0b", EXPECTED_REMOTE_WAKEUP, device_status[1] ))
    end
    `uvm_info("GET_STATUS_DEVICE", "Device GET_STATUS data checks PASSED", UVM_LOW)
    // -------------------------------------------------------
    // Stage 3: STATUS OUT
    // Host sends OUT + DATA1 ZLP.
    // Device should ACK the status packet.
    // -------------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd0);
    issue_token(
      PID_OUT,
      1'b0,  // OUT
      1'b1,  // DATA1
      DEV_ADDR,
      EP0,
      status
    );

    check_response_pid( status, PID_ACK, "GET_STATUS device STATUS OUT" );
    if (status[15:0] != 16'd0) begin
      `uvm_fatal("GET_STATUS_STATUS_COUNT", $sformatf( "Expected zero-length status stage, RX_STAT=%08h", status ))
    end

    `uvm_info("GET_STATUS_DEVICE", $sformatf( "Device GET_STATUS PASSED: status=0x%04h", device_status ),  UVM_LOW)

  endtask

endclass
*/


class axi4_agent_control_GET_STATUS_device_seq
    extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_control_GET_STATUS_device_seq)

  // ---------------------------------------------------------
  // USB PIDs
  // ---------------------------------------------------------
  localparam logic [7:0] PID_SETUP = 8'h2D;
  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_OUT   = 8'hE1;
  localparam logic [7:0] PID_ACK   = 8'hD2;
  localparam logic [7:0] PID_DATA1 = 8'h4B;
  localparam logic [7:0] PID_STALL = 8'h1E;

  // ---------------------------------------------------------
  // Request parameters
  // ---------------------------------------------------------
  localparam logic [6:0] DEV_ADDR = 7'd5;
  localparam logic [3:0] EP0      = 4'd0;

  // Must match the BFM's modeled state.
  // BFM GET_STATUS device response:
  // bit 0 = 0 (self-powered status in this BFM)
  // bit 1 = remote_wakeup_enabled
  localparam bit EXPECTED_SELF_POWERED  = 1'b0;
  localparam bit EXPECTED_REMOTE_WAKEUP = 1'b0;

  function new(
      string name = "axi4_agent_control_GET_STATUS_device_seq"
  );
    super.new(name);
  endfunction

  virtual task body();

    logic [31:0] status;
    logic [31:0] rd_data;
    logic [15:0] device_status;
    logic [7:0] setup_pkt[8];

    logic [15:0] expected_status;

    `uvm_info("GET_STATUS_DEVICE",
      "Starting self-checking device GET_STATUS",
      UVM_MEDIUM)

    expected_status = 16'h0000;
    expected_status[0] = EXPECTED_SELF_POWERED;
    expected_status[1] = EXPECTED_REMOTE_WAKEUP;

    // -------------------------------------------------------
    // Build GET_STATUS setup payload
    // bmRequestType = 0x80
    // bRequest      = 0x00
    // wValue        = 0
    // wIndex        = 0
    // wLength       = 2
    // -------------------------------------------------------
    setup_pkt[0] = 8'h80;
    setup_pkt[1] = 8'h00;
    setup_pkt[2] = 8'h00;
    setup_pkt[3] = 8'h00;
    setup_pkt[4] = 8'h00;
    setup_pkt[5] = 8'h00;
    setup_pkt[6] = 8'h02;
    setup_pkt[7] = 8'h00;

    // -------------------------------------------------------
    // Stage 1: SETUP
    // -------------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd8);

    foreach (setup_pkt[i]) begin
      write_reg(USB_WR_DATA, {24'h0, setup_pkt[i]});
    end

    issue_token(
      PID_SETUP,
      1'b0,  // OUT direction for SETUP
      1'b0,  // DATA0
      DEV_ADDR,
      EP0,
      status
    );

    // Reject STALL explicitly for a clearer diagnostic.
    if (status[23:16] == PID_STALL) begin
      `uvm_fatal("GET_STATUS_SETUP",
        $sformatf("Device STALLED GET_STATUS SETUP: RX_STAT=%08h",
                  status))
    end

    //check_response_pid( status, PID_ACK, "GET_STATUS SETUP" );

    `uvm_info("GET_STATUS_DEVICE", $sformatf("SETUP stage PASS: RX_STAT=%08h", status), UVM_MEDIUM)

    // -------------------------------------------------------
    // Stage 2: DATA IN
    // Expected: DATA1 containing exactly two bytes.
    // -------------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd2);

    issue_token(
      PID_IN,
      1'b1,  // IN
      1'b1,  // DATA1
      DEV_ADDR,
      EP0,
      status
    );

    if (status[23:16] == PID_STALL) begin
      `uvm_fatal("GET_STATUS_DATA",
        $sformatf("Device STALLED GET_STATUS data stage: RX_STAT=%08h",
                  status))
    end

    check_response_pid(
      status, PID_DATA1, "GET_STATUS DATA IN"
    );

    if (status[15:0] != 16'd2) begin
      `uvm_fatal("GET_STATUS_COUNT",
        $sformatf("Expected 2 bytes; COUNT=%0d RX_STAT=%08h",
                  status[15:0], status))
    end

    read_reg(USB_RD_DATA, rd_data);
    device_status = rd_data[15:0];

    `uvm_info("GET_STATUS_DEVICE",
      $sformatf("Received status=0x%04h; expected=0x%04h",
                device_status, expected_status),
      UVM_MEDIUM)

    // -------------------------------------------------------
    // Check the complete returned status word.
    // This checks both modeled bits and reserved bits.
    // -------------------------------------------------------
    if (device_status !== expected_status) begin
      `uvm_fatal("GET_STATUS_VALUE",
        $sformatf(
          {"Device GET_STATUS mismatch: expected=0x%04h actual=0x%04h ",
           "(self_powered=%0b remote_wakeup=%0b)"},
          expected_status,
          device_status,
          device_status[0],
          device_status[1]))
    end

    `uvm_info("GET_STATUS_DEVICE",
      "DATA IN stage PASS: PID, byte count and status value match",
      UVM_LOW)

    // -------------------------------------------------------
    // Stage 3: STATUS OUT
    // Host sends OUT + DATA1 ZLP.
    // Device should ACK.
    // -------------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd0);

    issue_token(
      PID_OUT,
      1'b0,  // OUT
      1'b1,  // DATA1
      DEV_ADDR,
      EP0,
      status
    );

    if (status[23:16] == PID_STALL) begin
      `uvm_fatal("GET_STATUS_STATUS",
        $sformatf("Device STALLED status OUT stage: RX_STAT=%08h",
                  status))
    end

    check_response_pid(
      status, PID_ACK, "GET_STATUS STATUS OUT"
    );

    if (status[15:0] != 16'd0) begin
      `uvm_fatal("GET_STATUS_STATUS_COUNT",
        $sformatf("Expected zero-length status stage: RX_STAT=%08h",
                  status))
    end

    `uvm_info("GET_STATUS_DEVICE", $sformatf( "PASS: Device GET_STATUS completed. status=0x%04h", device_status), UVM_LOW)

  endtask

endclass : axi4_agent_control_GET_STATUS_device_seq


