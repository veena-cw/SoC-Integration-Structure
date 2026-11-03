//GET_DESCRIPTOR performed
// ===============================================================================================================
/*
Contains:
1. IN Transfer
2. OUT Transfer
3. CONTROL IN : GET_DESCRIPTOR sequences.
*/
// ===============================================================================================================

class usbh_host_axi4_agent_in_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_in_seq)

  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_DATA0 = 8'hC3;

  localparam int MAX_POLLS = 1000;

  // AXI4 single-beat transaction configuration.
  localparam bit [ID_WIDTH-1:0] AXI_ID = 4'h1;

  function new(string name = "usbh_host_axi4_agent_in_seq");
    super.new(name);
  endfunction

  // ----------------------------------------------------------
  // Initialize AXI4 transaction attributes.
  // ----------------------------------------------------------
  task automatic init_axi_fields(
    usbh_host_axi4_agent_seq_item item,
    input bit is_write
  );
    item.write   = is_write;
    item.id      = AXI_ID;
    item.len     = 8'd0;       // One beat: LEN = beats - 1
    item.size    = 3'd2;       // 32-bit transfer
    item.burst   = 2'b01;      // INCR burst
    item.strb    = is_write ? 4'b1111 : 4'b0000;
    item.data    = 32'h0;
    item.rdata   = 32'h0;
    item.resp    = 2'b00;
    item.resp_id = '0;
    item.wlast   = 1'b1;
    item.rlast   = 1'b0;
  endtask

  // ----------------------------------------------------------
  // AXI WRITE
  // ----------------------------------------------------------
  task automatic write_reg(
    input logic [31:0] addr,
    input logic [31:0] value
  );
    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("wr_req");

    start_item(req);
    init_axi_fields(req, 1'b1);

    req.addr = addr;
    req.data = value;

    finish_item(req);

    if (req.resp != 2'b00)
      `uvm_fatal("AXI_WRITE",
        $sformatf("AXI write failed addr=%08h BRESP=%0h",
                  addr, req.resp))

    if (req.resp_id != req.id)
      `uvm_error("AXI_WRITE_ID",
        $sformatf("Write response ID mismatch: expected=%0h got=%0h",
                  req.id, req.resp_id))

    `uvm_info("AXI_WRITE",
      $sformatf("ADDR=%08h DATA=%08h ID=%0h",
                addr, value, req.id),
      UVM_MEDIUM)
  endtask

  // ----------------------------------------------------------
  // AXI READ
  // ----------------------------------------------------------
  task automatic read_reg(
    input logic [31:0] addr,
    output logic [31:0] value
  );
    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("rd_req");

    start_item(req);
    init_axi_fields(req, 1'b0);

    req.addr = addr;

    finish_item(req);

    if (req.resp != 2'b00)
      `uvm_fatal("AXI_READ",
        $sformatf("AXI read failed addr=%08h RRESP=%0h",
                  addr, req.resp))

    if (req.resp_id != req.id)
      `uvm_error("AXI_READ_ID",
        $sformatf("Read response ID mismatch: expected=%0h got=%0h",
                  req.id, req.resp_id))

    if (req.rlast !== 1'b1)
      `uvm_error("AXI_RLAST",
        $sformatf("RLAST not asserted for single-beat read at %08h",
                  addr))

    value = req.rdata;

    `uvm_info("AXI_READ",
      $sformatf("ADDR=%08h RDATA=%08h RESP=%0h ID=%0h",
                addr, value, req.resp, req.resp_id),
      UVM_MEDIUM)
  endtask

  // ----------------------------------------------------------
  // WAIT FOR USB DONE
  // ----------------------------------------------------------
  task automatic wait_for_usb_done();
    logic [31:0] irq_status;
    logic [31:0] rx_status;
    bit done_seen;

    done_seen = 1'b0;

    for (int i = 0; i < MAX_POLLS; i++) begin
      read_reg(USB_IRQ_STS, irq_status);

      if (irq_status[2])
        `uvm_fatal("USB_IN",
          $sformatf("USB ERR interrupt: IRQ_STS=%08h",
                    irq_status))

      if (irq_status[1]) begin
        done_seen = 1'b1;
        break;
      end

      // Allow the USB controller to progress.
      #100ns;
    end

    if (!done_seen)
      `uvm_fatal("USB_IN",
        "Timeout waiting for USB DONE interrupt")

    read_reg(USB_RX_STAT, rx_status);

    `uvm_info("USB_IN",
      $sformatf(
        "RX_STAT=%08h CRC_ERR=%0b TIMEOUT=%0b IDLE=%0b RESP_PID=%02h COUNT=%0d",
        rx_status,
        rx_status[30],
        rx_status[29],
        rx_status[28],
        rx_status[23:16],
        rx_status[15:0]),
      UVM_MEDIUM)

    if (rx_status[30])
      `uvm_fatal("USB_IN", "USB receive CRC error")

    if (rx_status[29])
      `uvm_fatal("USB_IN", "USB response timeout")

    if (rx_status[23:16] != PID_DATA0)
      `uvm_fatal("USB_IN",
        $sformatf("Expected DATA0 PID=%02h, received=%02h",
                  PID_DATA0, rx_status[23:16]))

    if (rx_status[15:0] != 4)
      `uvm_fatal("USB_IN",
        $sformatf("Expected 4 received bytes, COUNT=%0d",
                  rx_status[15:0]))
  endtask

  // ----------------------------------------------------------
  // IN TRANSFER: 4 BYTES FROM DEVICE ADDRESS 0, EP1
  // ----------------------------------------------------------
  virtual task body();
    logic [31:0] token;
    logic [31:0] rd_value;
    logic [7:0] expected[4];
    logic [7:0] actual[4];

    expected[0] = 8'h11;
    expected[1] = 8'h22;
    expected[2] = 8'h33;
    expected[3] = 8'h44;

    `uvm_info("USB_IN",
      "Starting four-byte IN transfer from EP1",
      UVM_MEDIUM)

    // Program requested IN length.
    write_reg(USB_XFER_DATA, 32'd4);

    // Clear previous ERR and DONE status.
    // Assumes IRQ_ACK is write-one-to-clear.
    write_reg(USB_IRQ_ACK, 32'h0000_0006);

    // START=1, IN=1, ACK=1, PID=IN,
    // device address=0, endpoint=1.
    token = 32'hE069_0020;

    `uvm_info("USB_IN",
      $sformatf("Issuing IN token: %08h", token),
      UVM_MEDIUM)

    write_reg(USB_XFER_TOKEN, token);

    // Wait for completion before reading RX FIFO.
    wait_for_usb_done();

    // Read and validate received bytes.
    for (int i = 0; i < 4; i++) begin
      read_reg(USB_RD_DATA, rd_value);
      actual[i] = rd_value[7:0];

      if (actual[i] !== expected[i])
        `uvm_fatal("USB_IN",
          $sformatf(
            "Data mismatch byte %0d: expected=%02h actual=%02h",
            i, expected[i], actual[i]))

      `uvm_info("USB_IN",
        $sformatf("Received byte[%0d]=%02h",
                  i, actual[i]),
        UVM_MEDIUM)
    end

    `uvm_info("USB_IN",
      "IN transfer completed; payload verified",
      UVM_MEDIUM)
  endtask

endclass : usbh_host_axi4_agent_in_seq




class usbh_host_axi4_agent_out_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_out_seq)


  localparam logic [7:0] PID_OUT = 8'hE1;
  localparam logic [7:0] PID_ACK = 8'hD2;

  localparam logic [31:0] OUT_TOKEN_EP2 =
      32'hA0E1_0040;

  localparam int MAX_POLLS = 1000;


// AXI4 single-beat transaction configuration.
  localparam bit [ID_WIDTH-1:0] AXI_ID = 4'h1;
  function new(string name = "usbh_host_axi4_agent_out_seq");
    super.new(name);
  endfunction

  // ----------------------------------------------------------
  // AXI WRITE
  // ----------------------------------------------------------
  task automatic write_reg(
    input logic [31:0] addr,
    input logic [31:0] value
  );
    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("wr_req");

    start_item(req);

    // Initialize all fields expected by the AXI driver.
    req.write   = 1'b1;
    req.addr    = addr;
    req.data    = value;
    req.strb    = 4'hF;

    // Retain the default single-beat transaction attributes
    // if these fields exist in your sequence-item class.
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
                  addr, value, req.resp))
    end
  endtask

  // ----------------------------------------------------------
  // AXI READ
  // ----------------------------------------------------------
  task automatic read_reg(
    input  logic [31:0] addr,
    output logic [31:0] value
  );
    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("rd_req");

    start_item(req);

    req.write   = 1'b0;
    req.addr    = addr;
    req.data    = '0;
    req.strb    = 4'h0;

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
                  addr, req.resp))
    end

    value = req.rdata;
  endtask

  // ----------------------------------------------------------
  // WAIT FOR USB COMPLETION AND VERIFY ACK
  // ----------------------------------------------------------
  task automatic wait_for_usb_done();
    logic [31:0] irq_status;
    logic [31:0] rx_status;
    bit done_seen;

    done_seen = 1'b0;

    for (int i = 0; i < MAX_POLLS; i++) begin
      read_reg(USB_IRQ_STS, irq_status);

      `uvm_info("USB_OUT",
        $sformatf("Poll %0d: IRQ_STS=%08h", i, irq_status),
        UVM_HIGH)

      // ERR = bit 2
      if (irq_status[2]) begin
        `uvm_fatal("USB_OUT",
          $sformatf("USB ERR interrupt: IRQ_STS=%08h",
                    irq_status))
      end

      // DONE = bit 1
      if (irq_status[1]) begin
        done_seen = 1'b1;
        break;
      end
    end

    if (!done_seen) begin
      `uvm_fatal("USB_OUT",
        "Timeout waiting for USB DONE interrupt")
    end

    read_reg(USB_RX_STAT, rx_status);

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
        "Transfer still pending: START_PEND is set")
    end

    if (rx_status[30]) begin
      `uvm_fatal("USB_OUT",
        "USB response CRC error")
    end

    if (rx_status[29]) begin
      `uvm_fatal("USB_OUT",
        "USB response timeout")
    end

    // For an OUT transaction, the expected handshake is ACK.
    if (rx_status[23:16] != PID_ACK) begin
      `uvm_fatal("USB_OUT",
        $sformatf(
          "Expected ACK PID=%02h, received PID=%02h; RX_STAT=%08h",
          PID_ACK, rx_status[23:16], rx_status))
    end

    `uvm_info("USB_OUT",
      "USB OUT transaction completed with ACK",
      UVM_MEDIUM)
  endtask

  // ----------------------------------------------------------
  // OUT TRANSFER: 4 BYTES TO DEVICE ADDRESS 0, EP2
  // ----------------------------------------------------------
  virtual task body();
    logic [31:0] irq_status;
    logic [31:0] token;
    logic [31:0] readback;
    logic [7:0] payload[4];

    payload[0] = 8'h11;
    payload[1] = 8'h22;
    payload[2] = 8'h33;
    payload[3] = 8'h44;

    `uvm_info("USB_OUT",
      "Starting four-byte OUT transfer to device 0, EP2",
      UVM_MEDIUM)

    // 1. Clear stale ERR and DONE interrupts before starting.
    write_reg(USB_IRQ_ACK, 32'h0000_0006);

    // 2. Flush TX FIFO.
    write_reg(USB_CTRL, 32'h0000_0100);

    // 3. Load four payload bytes into the TX FIFO.
    foreach (payload[i]) begin
      write_reg(USB_WR_DATA, {24'h0, payload[i]});
    end

    // 4. Program the transfer length in bytes.
    write_reg(USB_XFER_DATA, 32'd4);

    // 5. Confirm no stale completion is being mistaken for this transfer.
    read_reg(USB_IRQ_STS, irq_status);

    if (irq_status[1] || irq_status[2]) begin
      `uvm_fatal("USB_OUT",
        $sformatf("Stale USB interrupt after clearing status: %08h",
                  irq_status))
    end

    // 6. Issue OUT token to device address 0, endpoint 2.
    token = OUT_TOKEN_EP2;

    `uvm_info("USB_OUT",
      $sformatf("Writing OUT token: %08h", token),
      UVM_MEDIUM)

    write_reg(USB_XFER_TOKEN, token);

    // 7. Wait for completion and verify the ACK handshake.
    wait_for_usb_done();

    // Optional diagnostic read: retain if useful for your RTL.
    read_reg(USB_RX_STAT, readback);

    `uvm_info("USB_OUT",
      $sformatf("Final RX_STAT=%08h", readback),
      UVM_MEDIUM)

    `uvm_info("USB_OUT",
      "OUT transfer completed successfully",
      UVM_LOW)
  endtask

endclass




class usbh_host_out_transfer_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_out_transfer_seq)

  // USB PIDs
  localparam logic [7:0] PID_OUT = 8'hE1;
  localparam logic [7:0] PID_ACK = 8'hD2;

  localparam int MAX_POLLS = 1000;
  
  // AXI4 single-beat transaction configuration.
  localparam bit [ID_WIDTH-1:0] AXI_ID = 4'h1;

  // Token for device address 0, endpoint 1.
  // Assumes START=bit31, ACK-wait=bit29,
  // PID_OUT=[23:16], device address=[15:9], endpoint=[8:5].
  localparam logic [31:0] OUT_TOKEN_EP1 = 32'hA0E1_0020;

  function new(string name = "usbh_host_out_transfer_seq");
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
    token = OUT_TOKEN_EP1;

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


class axi4_agent_control_IN_get_descriptor_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_control_IN_get_descriptor_seq)

  // ---------------------------------------------------------
  // USB PIDs
  // ---------------------------------------------------------
  localparam logic [7:0] PID_SETUP = 8'h2D;
  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_OUT   = 8'hE1;

  localparam logic [7:0] PID_DATA0 = 8'hC3;
  localparam logic [7:0] PID_DATA1 = 8'h4B;
  localparam logic [7:0] PID_ACK   = 8'hD2;
  localparam logic [7:0] PID_STALL = 8'h1E;
  localparam logic [7:0] PID_NAK   = 8'h5A;

  // ---------------------------------------------------------
  // Transfer parameters
  // ---------------------------------------------------------
  localparam int EP0_MPS       = 8;
  localparam int DESC_LEN      = 18;
  localparam int POLL_LIMIT    = 1000;
  localparam int MAX_RETRIES   = 3;
  
    localparam bit [ID_WIDTH-1:0] AXI_ID = 4'h1;

  logic [7:0] descriptor[DESC_LEN];
  
  

  function new(string name = "axi4_agent_control_IN_get_descriptor_seq");
    super.new(name);
  endfunction

  // ---------------------------------------------------------
  // AXI WRITE
  // ---------------------------------------------------------
  task automatic write_reg(
    input logic [31:0] addr,
    input logic [31:0] value
  );
    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("wr_req");

    start_item(req);

    req.write = 1'b1;
    req.addr  = addr;
    req.data  = value;
    req.strb  = 4'hF;

    // Remove these assignments if your driver sets them internally
    // or the sequence item does not declare these fields.
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
                  addr, value, req.resp))
    end
  endtask

  // ---------------------------------------------------------
  // AXI READ
  // ---------------------------------------------------------
  task automatic read_reg(
    input  logic [31:0] addr,
    output logic [31:0] value
  );
    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("rd_req");

    start_item(req);

    req.write = 1'b0;
    req.addr  = addr;
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
                  addr, req.resp))
    end

    value = req.rdata;
  endtask

  // ---------------------------------------------------------
  // Set transfer length
  // ---------------------------------------------------------
  task automatic set_transfer_length(input int unsigned length);
    if (length > 16'hFFFF) begin
      `uvm_fatal("USB_LENGTH",
        $sformatf("Transfer length exceeds register range: %0d", length))
    end

    write_reg(USB_XFER_DATA, length);
  endtask

  // ---------------------------------------------------------
  // Write bytes to TX FIFO
  // ---------------------------------------------------------
  task automatic write_tx_bytes(
    input logic [7:0] bytes[8],
    input int unsigned count
  );
    if (count > 8) begin
      `uvm_fatal("USB_TX",
        $sformatf("TX packet length %0d exceeds EP0 MPS", count))
    end

    for (int i = 0; i < count; i++) begin
      write_reg(USB_WR_DATA, {24'h0, bytes[i]});
    end
  endtask

  // ---------------------------------------------------------
  // Read bytes from RX FIFO
  // ---------------------------------------------------------
  task automatic read_rx_bytes(
    output logic [7:0] bytes[8],
    input int unsigned count
  );
    logic [31:0] rdata;

    if (count > 8) begin
      `uvm_fatal("USB_RX",
        $sformatf("RX packet length %0d exceeds EP0 MPS", count))
    end

    for (int i = 0; i < count; i++) begin
      read_reg(USB_WR_DATA, rdata);
      bytes[i] = rdata[7:0];
    end
  endtask

  // ---------------------------------------------------------
  // Wait for USB completion using IRQ status.
  //
  // Assumptions:
  // IRQ_STS[2] = ERR
  // IRQ_STS[1] = DONE
  //
  // RX_STAT:
  // [31] START_PEND
  // [30] CRC_ERR
  // [29] RESP_TIMEOUT
  // [28] IDLE
  // [23:16] RESP_PID
  // [15:0] COUNT
  // ---------------------------------------------------------
  task automatic wait_usb_done(output logic [31:0] status);
    logic [31:0] irq_status;
    bit completed;

    completed = 1'b0;
    status    = '0;

    for (int i = 0; i < POLL_LIMIT; i++) begin
      read_reg(USB_IRQ_STS, irq_status);

      if (irq_status[2]) begin
        read_reg(USB_RX_STAT, status);

        `uvm_fatal("USB_ERR",
          $sformatf("USB ERR interrupt: IRQ_STS=%08h RX_STAT=%08h",
                    irq_status, status))
      end

      if (irq_status[1]) begin
        completed = 1'b1;
        break;
      end
    end

    if (!completed) begin
      read_reg(USB_RX_STAT, status);

      `uvm_fatal("USB_WAIT",
        $sformatf("Timeout waiting for USB DONE: RX_STAT=%08h",
                  status))
    end

    read_reg(USB_RX_STAT, status);

    `uvm_info("USB_CTRL_SEQ",
      $sformatf(
        {"RX_STAT=%08h PENDING=%0b CRC_ERR=%0b ",
         "TIMEOUT=%0b IDLE=%0b RESP_PID=%02h COUNT=%0d"},
        status,
        status[31],
        status[30],
        status[29],
        status[28],
        status[23:16],
        status[15:0]),
      UVM_MEDIUM)

    if (status[31]) begin
      `uvm_fatal("USB_PENDING",
        "DONE asserted while RX_STAT still reports START_PEND")
    end

    if (status[30]) begin
      `uvm_fatal("USB_CRC",
        $sformatf("USB CRC error: RX_STAT=%08h", status))
    end

    if (status[29]) begin
      `uvm_fatal("USB_TIMEOUT",
        $sformatf("USB response timeout: RX_STAT=%08h", status))
    end
  endtask

  // ---------------------------------------------------------
  // Validate response PID
  // ---------------------------------------------------------
  task automatic check_response_pid(
    input logic [31:0] status,
    input logic [7:0] expected_pid
  );
    logic [7:0] response_pid;

    response_pid = status[23:16];

    if (response_pid == PID_STALL) begin
      `uvm_fatal("USB_STALL",
        $sformatf("Device returned STALL: RX_STAT=%08h", status))
    end

    if (response_pid == PID_NAK) begin
      `uvm_fatal("USB_NAK",
        $sformatf("Device returned NAK: RX_STAT=%08h", status))
    end

    if (response_pid != expected_pid) begin
      `uvm_fatal("USB_RESP",
        $sformatf("Unexpected response PID: got=%02h expected=%02h RX_STAT=%08h",
                  response_pid, expected_pid, status))
    end
  endtask

  // ---------------------------------------------------------
  // Issue USB token
  //
  // Confirm these field definitions against usb_host.sv.
  // ---------------------------------------------------------
  task automatic issue_token(
    input logic [7:0] pid,
    input bit is_in,
    input bit data1,
    input logic [6:0] dev_addr,
    input logic [3:0] ep,
    output logic [31:0] status
  );
    logic [31:0] token;

    token = '0;
    token[31]    = 1'b1;
    token[30]    = is_in;
    token[29]    = 1'b1;
    token[28]    = data1;
    token[23:16] = pid;
    token[15:9]  = dev_addr;
    token[8:5]   = ep;

    `uvm_info("USB_CTRL_SEQ",
      $sformatf("Token=%08h PID=%02h IN=%0b DATA1=%0b EP=%0d",
                token, pid, is_in, data1, ep),
      UVM_MEDIUM)

    write_reg(USB_XFER_TOKEN, token);
    wait_usb_done(status);
  endtask

  // ---------------------------------------------------------
  // GET_DESCRIPTOR(Device): 18 bytes
  // ---------------------------------------------------------
  virtual task body();

    logic [7:0] setup_pkt[8];
    logic [7:0] packet[8];

    logic [31:0] status;

    int unsigned remaining;
    int unsigned packet_len;
    int unsigned desc_index;

    logic data1;

    `uvm_info("USB_CTRL_SEQ",
      "Starting GET_DESCRIPTOR(Device) control-read",
      UVM_MEDIUM)

    // Clear stale ERR/DONE interrupt status.
    write_reg(USB_IRQ_ACK, 32'h0000_0006);

    // SETUP packet:
    // bmRequestType = 0x80: device-to-host, standard, device
    // bRequest      = 0x06: GET_DESCRIPTOR
    // wValue        = 0x0100: device descriptor
    // wIndex        = 0
    // wLength       = 18
    setup_pkt[0] = 8'h80;
    setup_pkt[1] = 8'h06;
    setup_pkt[2] = 8'h00;
    setup_pkt[3] = 8'h01;
    setup_pkt[4] = 8'h00;
    setup_pkt[5] = 8'h00;
    setup_pkt[6] = DESC_LEN;
    setup_pkt[7] = 8'h00;

    // -------------------------------------------------------
    // Stage 1: SETUP, DATA0, eight bytes
    // -------------------------------------------------------
    set_transfer_length(8);
    write_tx_bytes(setup_pkt, 8);

    issue_token(PID_SETUP, 1'b0, 1'b0, 7'd0, 4'd0, status);

    if (status[23:16] != PID_ACK) begin
      `uvm_fatal("USB_SETUP",
        $sformatf("SETUP was not ACKed: RX_STAT=%08h", status))
    end

    // -------------------------------------------------------
    // Stage 2: DATA IN
    // First control-read data packet uses DATA1.
    // -------------------------------------------------------
    remaining  = DESC_LEN;
    desc_index = 0;
    data1      = 1'b1;

    while (remaining > 0) begin

      packet_len = (remaining > EP0_MPS) ? EP0_MPS : remaining;

      // Clear prior DONE/ERR before each transaction.
      write_reg(USB_IRQ_ACK, 32'h0000_0006);

      set_transfer_length(packet_len);

      issue_token(PID_IN, 1'b1, data1, 7'd0, 4'd0, status);

      check_response_pid(status, data1 ? PID_DATA1 : PID_DATA0);

      if (status[15:0] != packet_len) begin
        `uvm_fatal("USB_COUNT",
          $sformatf("IN packet length mismatch: expected=%0d got=%0d RX_STAT=%08h",
                    packet_len, status[15:0], status))
      end

      read_rx_bytes(packet, packet_len);

      for (int i = 0; i < packet_len; i++) begin
        descriptor[desc_index] = packet[i];

        `uvm_info("USB_DESC",
          $sformatf("Descriptor[%0d]=%02h",
                    desc_index, descriptor[desc_index]),
          UVM_MEDIUM)

        desc_index++;
      end

      remaining -= packet_len;
      data1 = ~data1;
    end

    // -------------------------------------------------------
    // Stage 3: STATUS OUT, DATA1, zero-length payload
    // -------------------------------------------------------
    write_reg(USB_IRQ_ACK, 32'h0000_0006);
    set_transfer_length(0);

    issue_token(PID_OUT, 1'b0, 1'b1, 7'd0, 4'd0, status);

    if (status[23:16] != PID_ACK) begin
      `uvm_fatal("USB_STATUS",
        $sformatf("Status stage was not ACKed: RX_STAT=%08h", status))
    end

    // -------------------------------------------------------
    // Descriptor validation
    // -------------------------------------------------------
    if (desc_index != DESC_LEN) begin
      `uvm_fatal("USB_DESC",
        $sformatf("Descriptor length mismatch: expected=%0d received=%0d",
                  DESC_LEN, desc_index))
    end

    if (descriptor[0] != 8'd18 || descriptor[1] != 8'd1) begin
      `uvm_fatal("USB_DESC",
        $sformatf("Invalid device descriptor header: bLength=%0d bDescriptorType=%02h",
                  descriptor[0], descriptor[1]))
    end

    `uvm_info("USB_CTRL_SEQ",
      "GET_DESCRIPTOR(Device) control-read completed successfully",
      UVM_LOW)

  endtask

endclass //axi4_agent_control_IN_get_descriptor_seq



