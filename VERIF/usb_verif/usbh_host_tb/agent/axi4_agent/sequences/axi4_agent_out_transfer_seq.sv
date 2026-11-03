/*
//==================================================================================
// USB Host OUT Transfer Sequence
//
// Flow:
//   OUT Token -> DATA0/DATA1 + Payload -> Device ACK
//
// Assumptions:
//   1. USB device is connected and responding.
//   2. Device address has already been assigned.
//   3. For a non-control endpoint, the device is configured.
//   4. The device BFM supports the selected endpoint and payload.
//==================================================================================

class axi4_agent_out_transfer_seq
    extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_out_transfer_seq)

  // ---------------------------------------------------------
  // Configuration
  // ---------------------------------------------------------
  localparam logic [6:0] DEVICE_ADDRESS = 7'd0;
  localparam logic [3:0] ENDPOINT       = 4'd2; // BFM supports OUT transfer at EP2

  localparam int PAYLOAD_LENGTH = 4;

  // Example payload sent from USB host to device
  logic [7:0] payload[PAYLOAD_LENGTH] = '{
    8'h11,
    8'h22,
    8'h33,
    8'h44
  };

  // ---------------------------------------------------------
  // Constructor
  // ---------------------------------------------------------
  function new(string name = "axi4_agent_out_transfer_seq");
    super.new(name);
  endfunction

  // ---------------------------------------------------------
  // OUT Transfer
  // ---------------------------------------------------------
  virtual task body();

    logic [31:0] status;

    `uvm_info("OUT_TRANSFER",
      $sformatf(
        "Starting OUT transfer: Device=%0d EP=%0d Length=%0d",
        DEVICE_ADDRESS, ENDPOINT, PAYLOAD_LENGTH),
      UVM_LOW)

    // -------------------------------------------------------
    // Step 1: Clear stale DONE/ERR interrupts
    // -------------------------------------------------------
    clear_usb_interrupts();

    // -------------------------------------------------------
    // Step 2: Configure transmit payload length
    // -------------------------------------------------------
    write_reg(USB_XFER_DATA, PAYLOAD_LENGTH);

    // -------------------------------------------------------
    // Step 3: Load payload bytes into USB transmit FIFO
    // -------------------------------------------------------
    foreach (payload[i]) begin
      write_reg(USB_WR_DATA, {24'h0, payload[i]});

      `uvm_info("OUT_PAYLOAD",
        $sformatf("TX payload[%0d] = 0x%02h",
                  i, payload[i]),
        UVM_MEDIUM)
    end

    // -------------------------------------------------------
    // Step 4: Issue OUT token and DATA0 packet
    //
    // is_in = 0 : OUT transaction
    // data1 = 0 : DATA0 packet
    //
    // Host RTL generates the USB packet and CRC16.
    // -------------------------------------------------------
    issue_token(
      PID_OUT,
      1'b0,                  // OUT
      1'b0,                  // DATA0
      DEVICE_ADDRESS,
      ENDPOINT,
      status
    );

    // -------------------------------------------------------
    // Step 5: Check device handshake
    // -------------------------------------------------------
    check_response_pid(
      status,
      PID_ACK,
      "OUT_TRANSFER"
    );

    // -------------------------------------------------------
    // Step 6: Check completion status
    // -------------------------------------------------------
    if (status[31] || status[30] || status[29]) begin
      `uvm_fatal("OUT_TRANSFER",
        $sformatf(
          "Invalid OUT completion: RX_STAT=%08h",
          status))
    end

    `uvm_info("OUT_TRANSFER",
      $sformatf( "PASS: Device ACK received for OUT transfer RX_STAT=%08h", status), UVM_LOW) //"The transmit payload was %0d bytes.",

  endtask

endclass : axi4_agent_out_transfer_seq
*/







class axi4_agent_out_transfer_seq extends usbh_host_axi4_agent_base_seq; // usbh_host_out_transfer_seq

  `uvm_object_utils(axi4_agent_out_transfer_seq)

  // USB PIDs
  localparam logic [7:0] PID_OUT = 8'hE1;
  localparam logic [7:0] PID_ACK = 8'hD2;

  localparam int MAX_POLLS = 1000;
  
  // AXI4 single-beat transaction configuration.
  localparam bit [ID_WIDTH-1:0] AXI_ID = 4'h1;

  // Token for device address 0, endpoint 1.
  // Assumes START=bit31, ACK-wait=bit29,
  // PID_OUT=[23:16], device address=[15:9], endpoint=[8:5].
  localparam logic [31:0] OUT_TOKEN_EP2 = 32'hA0E1_0040;

  function new(string name = "axi4_agent_out_transfer_seq");
    super.new(name);
  endfunction

  // ----------------------------------------------------------
  // AXI register write
  // ----------------------------------------------------------
  task automatic axi_write(
    input logic [31:0] address,
    input logic [31:0] value
  );
    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("wr_req");

    start_item(req);

    req.write = 1'b1;
    req.addr  = address;
    req.data  = value;
    req.strb  = 4'hF;

    // Single-beat AXI attributes.
    // Keep these assignments if they exist in your sequence item.
    req.id      = AXI_ID;
    req.len     = 0;
    req.size    = 2;
    req.burst   = 2'b01;
    req.wlast   = 1'b1;
    req.rlast   = 1'b0;
    req.resp_id = '0;

    finish_item(req);

    if (req.resp != 2'b00) begin
      `uvm_fatal("AXI_WRITE",
        $sformatf("AXI write failed: addr=%08h data=%08h resp=%0h",
                  address, value, req.resp))
    end
  endtask

  // ----------------------------------------------------------
  // AXI register read
  // ----------------------------------------------------------
  task automatic axi_read(
    input  logic [31:0] address,
    output logic [31:0] value
  );
    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("rd_req");

    start_item(req);

    req.write = 1'b0;
    req.addr  = address;
    req.data  = '0;
    req.strb  = '0;

    req.id      = AXI_ID;
    req.len     = 0;
    req.size    = 2;
    req.burst   = 2'b01;
    req.wlast   = 1'b0;
    req.rlast   = 1'b1;
    req.resp_id = '0;

    finish_item(req);

    if (req.resp != 2'b00) begin
      `uvm_fatal("AXI_READ",
        $sformatf("AXI read failed: addr=%08h resp=%0h",
                  address, req.resp))
    end

    value = req.rdata;
  endtask

  // ----------------------------------------------------------
  // Wait for USB DONE and verify the device ACK
  // ----------------------------------------------------------
  task automatic wait_for_usb_done();
    logic [31:0] irq_status;
    logic [31:0] rx_status;
    bit done_seen;

    done_seen = 1'b0;

    for (int i = 0; i < MAX_POLLS; i++) begin
      axi_read(USB_IRQ_STS, irq_status);

      `uvm_info("USB_OUT",
        $sformatf("Poll %0d: IRQ_STS=%08h", i, irq_status),
        UVM_HIGH)

      // ERR = bit 2
      if (irq_status[2]) begin
        axi_read(USB_RX_STAT, rx_status);
        `uvm_fatal("USB_OUT",
          $sformatf("USB ERR interrupt. IRQ_STS=%08h RX_STAT=%08h",
                    irq_status, rx_status))
      end

      // DONE = bit 1
      if (irq_status[1]) begin
        done_seen = 1'b1;
        break;
      end
    end

    if (!done_seen) begin
      axi_read(USB_RX_STAT, rx_status);
      `uvm_fatal("USB_OUT",
        $sformatf("Timeout waiting for DONE. RX_STAT=%08h",
                  rx_status))
    end

    axi_read(USB_RX_STAT, rx_status);

    `uvm_info("USB_OUT",
      $sformatf(
        {"RX_STAT=%08h START_PEND=%0b CRC_ERR=%0b ",
         "TIMEOUT=%0b IDLE=%0b RESP_PID=%02h COUNT=%0d"},
        rx_status,
        rx_status[31],
        rx_status[30],
        rx_status[29],
        rx_status[28],
        rx_status[23:16],
        rx_status[15:0]),
      UVM_MEDIUM)

    if (rx_status[31]) begin
      `uvm_fatal("USB_OUT",
        "Transfer is still pending after DONE")
    end

    if (rx_status[30]) begin
      `uvm_fatal("USB_OUT",
        "USB response CRC error")
    end

    if (rx_status[29]) begin
      `uvm_fatal("USB_OUT",
        "USB response timeout")
    end

    if (rx_status[23:16] != PID_ACK) begin
      `uvm_fatal("USB_OUT",
        $sformatf(
          "Expected ACK PID=%02h, received PID=%02h; RX_STAT=%08h",
          PID_ACK, rx_status[23:16], rx_status))
    end

    `uvm_info("USB_OUT",
      "USB OUT transfer received ACK",
      UVM_MEDIUM)
  endtask

  // ----------------------------------------------------------
  // OUT transfer: four bytes to device address 0, endpoint 1
  // ----------------------------------------------------------
  virtual task body();
    logic [31:0] token;

    `uvm_info("USB_OUT",
      "Starting four-byte OUT transfer to device 0, EP1",
      UVM_MEDIUM)

    // 1. Clear previous ERR and DONE status (write-one-to-clear).
    axi_write(USB_IRQ_ACK, 32'h0000_0006);

    // 2. Flush the TX FIFO.
    axi_write(USB_CTRL, 32'h0000_0100);

    // 3. Load payload bytes in FIFO order.
    // This assumes each write queues one byte from WDATA[7:0].
    axi_write(USB_WR_DATA, 32'h0000_0011);
    axi_write(USB_WR_DATA, 32'h0000_0022);
    axi_write(USB_WR_DATA, 32'h0000_0033);
    axi_write(USB_WR_DATA, 32'h0000_0044);

    // 4. Program the transfer length in bytes.
    axi_write(USB_XFER_DATA, 32'd4);

    // 5. Issue the OUT token.
    token = OUT_TOKEN_EP2;

    `uvm_info("USB_OUT",
      $sformatf("Issuing OUT token: %08h", token),
      UVM_MEDIUM)

    axi_write(USB_XFER_TOKEN, token);

    // 6. Wait for completion and validate the handshake.
    wait_for_usb_done();

    `uvm_info("USB_OUT",
      "OUT transfer sequence completed successfully",
      UVM_LOW)
  endtask

endclass


