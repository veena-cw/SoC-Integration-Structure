class axi4_agent_control_IN_get_configuration_seq
    extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_control_IN_get_configuration_seq)

  localparam logic [7:0] PID_SETUP = 8'h2D;
  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_OUT   = 8'hE1;

  localparam logic [7:0] PID_DATA1 = 8'h4B;
  localparam logic [7:0] PID_ACK   = 8'hD2;

  localparam logic [ID_WIDTH-1:0] AXI_ID = 4'h1;
  localparam int POLL_LIMIT = 1000;
  localparam logic [6:0] DEVICE_ADDRESS = 7'd5; //7'd0;  // Device address 0 for initial phase of SETUP

  function new(string name =
      "axi4_agent_control_IN_get_configuration_seq");
    super.new(name);
  endfunction

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
        $sformatf("Write failed: addr=%08h resp=%0h",
                  addr, req.resp))
  endtask

  task automatic read_reg(
      input logic [31:0] addr,
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
        $sformatf("Read failed: addr=%08h resp=%0h",
                  addr, req.resp))

    value = req.rdata;
  endtask

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
        $sformatf("Timeout: RX_STAT=%08h", status))
    end

    read_reg(USB_RX_STAT, status);

    if (status[31] || status[30] || status[29])
      `uvm_fatal("USB_STATUS",
        $sformatf("Invalid completion status: RX_STAT=%08h",
                  status))
  endtask

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
    token[15:9]  = DEVICE_ADDRESS; 
    token[8:5]   = 4'd0;  // Endpoint 0

    write_reg(USB_XFER_TOKEN, token);
    wait_usb_done(status);
  endtask

  virtual task body();
    logic [7:0] setup_pkt[8];
    logic [31:0] status;
    logic [31:0] rdata;
    logic [7:0] configuration;

    `uvm_info("GET_CONFIG",
      "Starting GET_CONFIGURATION control-read",
      UVM_MEDIUM)

    // Clear stale DONE/ERR interrupts.
    write_reg(USB_IRQ_ACK, 32'h0000_0006);

    // Setup packet: GET_CONFIGURATION, wLength = 1.
    setup_pkt[0] = 8'h80; // bmRequestType
    setup_pkt[1] = 8'h08; // GET_CONFIGURATION
    setup_pkt[2] = 8'h00; // wValue low
    setup_pkt[3] = 8'h00; // wValue high
    setup_pkt[4] = 8'h00; // wIndex low
    setup_pkt[5] = 8'h00; // wIndex high
    setup_pkt[6] = 8'h01; // wLength low
    setup_pkt[7] = 8'h00; // wLength high

    // Stage 1: SETUP token + DATA0 payload.
    write_reg(USB_XFER_DATA, 32'd8);

    foreach (setup_pkt[i]) begin
      write_reg(USB_WR_DATA, {24'h0, setup_pkt[i]});
    end

    issue_token(PID_SETUP, 1'b0, 1'b0, status);

    if (status[23:16] != PID_ACK)
      `uvm_fatal("GET_CONFIG_SETUP",
        $sformatf("SETUP was not ACKed: RX_STAT=%08h", status))

    // Stage 2: DATA IN.
    // The first control-read data packet uses DATA1.
    write_reg(USB_IRQ_ACK, 32'h0000_0006);
    write_reg(USB_XFER_DATA, 32'd1);

    issue_token(PID_IN, 1'b1, 1'b1, status);

    if (status[23:16] != PID_DATA1)
      `uvm_fatal("GET_CONFIG_PID",
        $sformatf("Expected DATA1, got PID=%02h RX_STAT=%08h",
                  status[23:16], status))

    if (status[15:0] != 1)
      `uvm_fatal("GET_CONFIG_COUNT",
        $sformatf("Expected one byte, got count=%0d RX_STAT=%08h",
                  status[15:0], status))

    read_reg(USB_WR_DATA, rdata);
    configuration = rdata[7:0];

    `uvm_info("GET_CONFIG",
      $sformatf("Device configuration value = %0d (0x%02h)",
                configuration, configuration),
      UVM_LOW)

    // Stage 3: STATUS OUT, DATA1, zero-length payload.
    write_reg(USB_IRQ_ACK, 32'h0000_0006);
    write_reg(USB_XFER_DATA, 32'd0);

    issue_token(PID_OUT, 1'b0, 1'b1, status);

    if (status[23:16] != PID_ACK)
      `uvm_fatal("GET_CONFIG_STATUS",
        $sformatf("Status OUT was not ACKed: RX_STAT=%08h", status))

    // The expected value depends on the device's prior state.
    // 0 = addressed but not configured; 1 = configured.
    if (configuration > 1)
      `uvm_error("GET_CONFIG_VALUE",
        $sformatf("Unexpected configuration value: %0d",
                  configuration))

    `uvm_info("GET_CONFIG",
      "GET_CONFIGURATION control-read completed",
      UVM_LOW)
  endtask

endclass
