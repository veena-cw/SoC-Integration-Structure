class axi4_agent_control_OUT_set_configuration_seq
    extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_control_OUT_set_configuration_seq)
  
  // ---------------------------------------------------------
  // USB PIDs
  // ---------------------------------------------------------
  localparam logic [7:0] PID_SETUP = 8'h2D;
  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_ACK   = 8'hD2;
  localparam logic [7:0] PID_DATA1 = 8'h4B;
  localparam logic [7:0] PID_STALL = 8'h1E;

  localparam logic [ID_WIDTH-1:0] AXI_ID = 4'h1;
  localparam int POLL_LIMIT = 1000;

  // Configuration value to set.
  // Set to 1 to select configuration 1.
  localparam logic [7:0] CONFIG_VALUE = 8'h01;

  function new(string name =
      "axi4_agent_control_OUT_set_configuration_seq");
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

    req.id      = AXI_ID;
    req.len     = 0;
    req.size    = 2;
    req.burst   = 2'b01;
    req.wlast   = 1'b1;
    req.rlast   = 1'b0;
    req.resp_id = '0;

    finish_item(req);

    if (req.resp != 2'b00)
      `uvm_fatal("AXI_WRITE",
        $sformatf("AXI write failed: addr=%08h data=%08h resp=%0h",
                  addr, value, req.resp))
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

    if (req.resp != 2'b00)
      `uvm_fatal("AXI_READ",
        $sformatf("AXI read failed: addr=%08h resp=%0h",
                  addr, req.resp))

    value = req.rdata;
  endtask

  // ---------------------------------------------------------
  // Wait for USB transaction completion
  //
  // Assumptions inherited from your GET_DESCRIPTOR sequence:
  // IRQ_STS[2] = ERR
  // IRQ_STS[1] = DONE
  //
  // RX_STAT[31]    = START_PEND
  // RX_STAT[30]    = CRC_ERR
  // RX_STAT[29]    = RESP_TIMEOUT
  // RX_STAT[23:16] = RESP_PID
  // RX_STAT[15:0]  = COUNT
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
          $sformatf("USB error: IRQ_STS=%08h RX_STAT=%08h",
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

    if (status[31] || status[30] || status[29]) begin
      `uvm_fatal("USB_STATUS",
        $sformatf("Invalid completion status: RX_STAT=%08h",
                  status))
    end
  endtask

  // ---------------------------------------------------------
  // Issue USB token
  //
  // Confirm field positions against usb_host.sv.
  // ---------------------------------------------------------
  task automatic issue_token(
      input logic [7:0] pid,
      input bit is_in,
      input bit data1,
      output logic [31:0] status
  );
    logic [31:0] token;

    token = '0;
    token[31]    = 1'b1;
    token[30]    = is_in;
    token[29]    = 1'b1;
    token[28]    = data1;
    token[23:16] = pid;
    token[15:9]  = 7'd5;  // 7'd0; // Device address= 0 is used during enumeration. After that non-zero address will be used.
    token[8:5]   = 4'd0;  // Endpoint 0 

    write_reg(USB_XFER_TOKEN, token);
    wait_usb_done(status);
  endtask

  // ---------------------------------------------------------
  // SET_CONFIGURATION
  //
  // SETUP stage:
  //   bmRequestType = 0x00
  //   bRequest      = 0x09
  //   wValue        = configuration value
  //   wIndex        = 0
  //   wLength       = 0
  //
  // STATUS stage:
  //   IN token, DATA1, zero-length response from host
  //   Device responds with ACK.
  // ---------------------------------------------------------
  virtual task body();

    logic [7:0] setup_pkt[8];
    logic [31:0] status;

    `uvm_info("SET_CONFIG",
      $sformatf("Starting SET_CONFIGURATION(%0d)",
                CONFIG_VALUE), UVM_MEDIUM)

    // Clear stale DONE/ERR interrupts.
    write_reg(USB_IRQ_ACK, 32'h0000_0006);

    // -------------------------------------------------------
    // Build SETUP payload
    // -------------------------------------------------------
    setup_pkt[0] = 8'h00;         // bmRequestType: host -> device
    setup_pkt[1] = 8'h09;         // bRequest: SET_CONFIGURATION
    setup_pkt[2] = CONFIG_VALUE;  // wValue low byte
    setup_pkt[3] = 8'h00;         // wValue high byte
    setup_pkt[4] = 8'h00;         // wIndex low byte
    setup_pkt[5] = 8'h00;         // wIndex high byte
    setup_pkt[6] = 8'h00;         // wLength low byte
    setup_pkt[7] = 8'h00;         // wLength high byte

    // -------------------------------------------------------
    // Stage 1: SETUP token + DATA0 payload (8 bytes)
    // -------------------------------------------------------
    write_reg(USB_XFER_DATA, 32'd8);

    foreach (setup_pkt[i]) begin
      write_reg(USB_WR_DATA, {24'h0, setup_pkt[i]});
    end

    issue_token(PID_SETUP, 1'b0, 1'b0, status);

    if (status[23:16] == PID_STALL) begin
      `uvm_fatal("SET_CONFIG_SETUP",
        $sformatf("SETUP returned STALL: RX_STAT=%08h", status))
    end

    if (status[23:16] != PID_ACK) begin
      `uvm_fatal("SET_CONFIG_SETUP",
        $sformatf("SETUP was not ACKed: RX_STAT=%08h", status))
    end

    // -------------------------------------------------------
    // Stage 2: STATUS IN
    //
    // No data stage for SET_CONFIGURATION.
    // The host requests a zero-length DATA1 packet.
    // -------------------------------------------------------
    write_reg(USB_IRQ_ACK, 32'h0000_0006);
    write_reg(USB_XFER_DATA, 32'd0);

    issue_token(PID_IN, 1'b1, 1'b1, status);

    if (status[23:16] == PID_STALL) begin
      `uvm_fatal("SET_CONFIG_STATUS",
        $sformatf("STATUS IN returned STALL: RX_STAT=%08h",
                  status))
    end

    if (status[23:16] != PID_DATA1) begin
      `uvm_fatal("SET_CONFIG_STATUS",
        $sformatf("Expected DATA1 ZLP; got PID=%02h RX_STAT=%08h",
                  status[23:16], status))
    end

    if (status[15:0] != 0) begin
      `uvm_fatal("SET_CONFIG_STATUS",
        $sformatf("Expected zero-length status packet; COUNT=%0d",
                  status[15:0]))
    end

    `uvm_info("SET_CONFIG",
      $sformatf("SET_CONFIGURATION(%0d) status stage completed",
                CONFIG_VALUE),
      UVM_LOW)

    // -------------------------------------------------------
    // Optional follow-up:
    // Run GET_CONFIGURATION to verify the committed value.
    //
    // The SET_CONFIGURATION request should be committed by
    // the device after successful completion of the status
    // stage. The exact completion semantics of this host RTL
    // should be confirmed against its implementation.
    // -------------------------------------------------------

  endtask

endclass
