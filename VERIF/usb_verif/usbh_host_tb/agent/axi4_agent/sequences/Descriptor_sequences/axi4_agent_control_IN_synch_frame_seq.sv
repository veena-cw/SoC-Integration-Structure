// SYNCH_FRAME sequence
class axi4_agent_control_IN_synch_frame_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_control_IN_synch_frame_seq)

  // ---------------------------------------------------------
  // Configuration
  // ---------------------------------------------------------
  localparam logic [6:0] DEVICE_ADDRESS = 7'd5;
  localparam logic [3:0] ISO_EP_ADDRESS = 4'd1;

  // USB standard request
  localparam logic [7:0] REQ_SYNCH_FRAME = 8'h0C;

  function new(string name =
      "axi4_agent_control_IN_synch_frame_seq");
    super.new(name);
  endfunction

  // ---------------------------------------------------------
  // SYNCH_FRAME
  //
  // bmRequestType = 0x82
  //   Direction: Device-to-host
  //   Type:      Standard
  //   Recipient: Endpoint
  //
  // bRequest = 0x0C
  // wValue   = 0
  // wIndex   = endpoint address
  // wLength  = 2
  //
  // Expected response:
  //   DATA1 containing a 2-byte frame number.
  // ---------------------------------------------------------
  virtual task body();

    logic [7:0] setup_pkt[8];
    logic [31:0] status;

    `uvm_info("SYNCH_FRAME",
      $sformatf(
        "Starting SYNCH_FRAME for device %0d endpoint %0d",
        DEVICE_ADDRESS, ISO_EP_ADDRESS),
      UVM_MEDIUM)

    // Clear stale DONE/ERR interrupts.
    clear_usb_interrupts();

    // -------------------------------------------------------
    // Build SETUP packet
    // -------------------------------------------------------
    setup_pkt[0] = 8'h82;  // bmRequestType
    setup_pkt[1] = REQ_SYNCH_FRAME;
    setup_pkt[2] = 8'h00;  // wValue low
    setup_pkt[3] = 8'h00;  // wValue high
    setup_pkt[4] = {4'h0, ISO_EP_ADDRESS};
    setup_pkt[5] = 8'h00;  // wIndex high
    setup_pkt[6] = 8'h02;  // wLength low
    setup_pkt[7] = 8'h00;  // wLength high

    // -------------------------------------------------------
    // Stage 1: SETUP transaction
    // -------------------------------------------------------
    write_reg(USB_XFER_DATA, 32'd8);

    foreach (setup_pkt[i])
      write_reg(USB_WR_DATA, {24'h0, setup_pkt[i]});

    issue_token(
      PID_SETUP,
      1'b0,             // SETUP transaction
      1'b0,             // DATA0
      DEVICE_ADDRESS,
      4'd0,             // SETUP always uses endpoint 0
      status
    );

    check_response_pid(
      status,
      PID_ACK,
      "SYNCH_FRAME SETUP"
    );

    // -------------------------------------------------------
    // Stage 2: DATA IN
    //
    // SYNCH_FRAME is an IN request with a 2-byte data stage.
    // -------------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd2);

    issue_token(
      PID_IN,
      1'b1,
      1'b1,             // Expected DATA1
      DEVICE_ADDRESS,
      ISO_EP_ADDRESS,
      status
    );

    if (status[23:16] == PID_STALL) begin
      `uvm_fatal("SYNCH_FRAME",
        $sformatf(
          "SYNCH_FRAME data stage returned STALL: RX_STAT=%08h",
          status))
    end

    if (status[23:16] != PID_DATA1) begin
      `uvm_fatal("SYNCH_FRAME",
        $sformatf(
          "Expected DATA1 response; PID=%02h RX_STAT=%08h",
          status[23:16], status))
    end

    if (status[15:0] != 2) begin
      `uvm_fatal("SYNCH_FRAME",
        $sformatf(
          "Expected 2-byte frame number; COUNT=%0d RX_STAT=%08h",
          status[15:0], status))
    end

    `uvm_info("SYNCH_FRAME",
      "Received 2-byte frame-number response",
      UVM_LOW)

    // -------------------------------------------------------
    // Stage 3: STATUS OUT
    //
    // Host sends a zero-length DATA1 packet.
    // Device should ACK it.
    //
    // This step assumes the host RTL exposes the status OUT
    // transaction through the same transfer-token interface.
    // Confirm the PID/token encoding in the host RTL.
    // -------------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd0);

    issue_token(
      PID_OUT,
      1'b0,
      1'b1,             // DATA1 status packet
      DEVICE_ADDRESS,
      4'd0,             // Control endpoint
      status
    );

    check_response_pid(
      status,
      PID_ACK,
      "SYNCH_FRAME STATUS OUT"
    );

    `uvm_info("SYNCH_FRAME",
      "SYNCH_FRAME control transfer completed",
      UVM_LOW)

  endtask

endclass : axi4_agent_control_IN_synch_frame_seq

