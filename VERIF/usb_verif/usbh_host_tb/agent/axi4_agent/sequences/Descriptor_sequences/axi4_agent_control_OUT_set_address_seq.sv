/*
The device applies NEW_ADDRESS only after the status stage completes successfully.
---------------------------------------------------------
Q). How to check whether the new address is applied or not ?
Ans. Step 1: Send SET_ADDRESS(eg:5)               - SETUP token to address 0, followed by DATA0 and ACK.
     Step 2: Complete the status stage            - IN token to address 0 → DATA1 zero-length packet → host ACK.
     Step 3: Send GET_CONFIGURATION to address 5  - Expect a valid response from the device at address 5.
*/

// SET_ADDRESS sequence
class axi4_agent_control_OUT_set_address_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_control_OUT_set_address_seq)

  // ---------------------------------------------------------
  // Configuration
  // ---------------------------------------------------------
  localparam logic [6:0] NEW_ADDRESS = 7'd5;
  localparam logic [6:0] DEFAULT_ADDRESS = 7'd0;
  localparam logic [3:0] EP0 = 4'd0;

  function new(string name =
      "axi4_agent_control_OUT_set_address_seq");
    super.new(name);
  endfunction

  // ---------------------------------------------------------
  // SET_ADDRESS
  //
  // SETUP stage:
  //   bmRequestType = 0x00
  //   bRequest      = 0x05
  //   wValue        = NEW_ADDRESS
  //   wIndex        = 0
  //   wLength       = 0
  //
  // STATUS stage:
  //   IN token to DEFAULT_ADDRESS
  //   Device returns DATA1 ZLP
  //   Host ACKs the DATA1 packet
  //
  // The device applies NEW_ADDRESS only after the status
  // stage completes successfully.
  // ---------------------------------------------------------
  virtual task body();

    logic [7:0] setup_pkt[8];
    logic [31:0] status;

    // -------------------------------------------------------
    // Validate address
    // -------------------------------------------------------
    if (NEW_ADDRESS == 7'd0) begin
      `uvm_fatal("SET_ADDRESS",
        "NEW_ADDRESS must be between 1 and 127")
    end

    `uvm_info("SET_ADDRESS",
      $sformatf("Starting SET_ADDRESS(%0d)", NEW_ADDRESS),
      UVM_MEDIUM)

    // Clear stale DONE/ERR interrupts.
    clear_usb_interrupts();

    // -------------------------------------------------------
    // Build SETUP packet
    // USB setup fields are transmitted little-endian.
    // -------------------------------------------------------
    setup_pkt[0] = 8'h00;                // bmRequestType
    setup_pkt[1] = 8'h05;                // SET_ADDRESS
    setup_pkt[2] = {1'b0, NEW_ADDRESS};  // wValue low byte
    setup_pkt[3] = 8'h00;                // wValue high byte
    setup_pkt[4] = 8'h00;                // wIndex low byte
    setup_pkt[5] = 8'h00;                // wIndex high byte
    setup_pkt[6] = 8'h00;                // wLength low byte
    setup_pkt[7] = 8'h00;                // wLength high byte

    // -------------------------------------------------------
    // Stage 1: SETUP token + DATA0 payload (8 bytes)
    // -------------------------------------------------------
    write_reg(USB_XFER_DATA, 32'd8);

    foreach (setup_pkt[i]) begin
      write_reg(USB_WR_DATA, {24'h0, setup_pkt[i]});
    end

    issue_token(
      PID_SETUP,
      1'b0,             // OUT direction for SETUP transaction
      1'b0,             // DATA0
      DEFAULT_ADDRESS,
      EP0,
      status
    );

    check_response_pid(
      status,
      PID_ACK,
      "SET_ADDRESS SETUP"
    );

    // -------------------------------------------------------
    // Stage 2: STATUS IN
    //
    // The status stage still uses address zero.
    // The data packet is DATA1 with zero payload bytes.
    // -------------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd0);

    issue_token(
      PID_IN,
      1'b1,             // IN
      1'b1,             // DATA1
      DEFAULT_ADDRESS,
      EP0,
      status
    );

    check_response_pid(
      status,
      PID_DATA1,
      "SET_ADDRESS STATUS"
    );

    if (status[15:0] != 0) begin
      `uvm_fatal("SET_ADDRESS_STATUS",
        $sformatf(
          "Expected zero-length DATA1 packet; COUNT=%0d RX_STAT=%08h",
          status[15:0], status))
    end

    `uvm_info("SET_ADDRESS",
      $sformatf(
        "SET_ADDRESS(%0d): status DATA1 packet received",
        NEW_ADDRESS),
      UVM_LOW)

    // -------------------------------------------------------
    // IMPORTANT:
    // Confirm that the host sends ACK and completes the status
    // stage. Receiving DATA1 alone does not prove that the
    // device committed the new address.
    //
    // The next USB request should use NEW_ADDRESS after the
    // status stage has completed.
    // -------------------------------------------------------

  endtask

endclass : axi4_agent_control_OUT_set_address_seq
