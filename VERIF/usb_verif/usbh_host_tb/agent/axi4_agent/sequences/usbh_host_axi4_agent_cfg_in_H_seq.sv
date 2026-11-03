class usbh_host_axi4_agent_in_H_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_in_H_seq)

  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_DATA0 = 8'hC3;

  localparam int MAX_POLLS = 1000;

  // AXI4 single-beat transaction configuration.
  localparam bit [ID_WIDTH-1:0] AXI_ID = 4'h1;

  function new(string name = "usbh_host_axi4_agent_in_H_seq");
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
    int DATA_LENGTH = 32'd4;

    `uvm_info("USB_IN",
      "Starting four-byte IN transfer from EP1",
      UVM_MEDIUM)

    // Program requested IN length.
    write_reg(USB_XFER_DATA, DATA_LENGTH);

    // Clear previous ERR and DONE status.
    // Assumes IRQ_ACK is write-one-to-clear.
    write_reg(USB_IRQ_ACK, 32'h0000_0006);

    // START=1, IN=1, ACK=1, PID=IN,
    // device address=0, endpoint=1.
    token = 32'hE069_0020;
    //Just for reference
    /* pkt.data = {
        1'b1,       // START = 1
        1'b1,       // IN
        1'b1,       // ACK
        1'b0,       // PID_DATAX
        4'b0000,    // Reserved
        8'h69,      // PID_IN
        7'd1,       // DEV_ADDR
        4'd0,       // EP_ADDR
        5'b00000    // Reserved
      };
*/
    `uvm_info("USB_IN",
      $sformatf("Issuing IN token: %08h", token),
      UVM_MEDIUM)

    write_reg(USB_XFER_TOKEN, token);

    // Wait for completion before reading RX FIFO.
    wait_for_usb_done();

    `uvm_info("USB_IN", "IN transfer completed", UVM_MEDIUM)
    
    `uvm_info("USB_IN", "Reading four received bytes from USB_RD_DATA", UVM_MEDIUM)
    //Read received payload
    read_rx_payload(DATA_LENGTH);
    
  endtask
  
        // ----------------------------------------------------------
	// READ FOUR RECEIVED BYTES FROM USB_RD_DATA
	// ----------------------------------------------------------
  task automatic read_rx_payload(int DATA_LEN);
	  logic [31:0] rd_value;
	  byte unsigned rx_payload[$];

	  `uvm_info("USB_IN", "Reading four received bytes from USB_RD_DATA", UVM_MEDIUM)

	  for (int i = 0; i < DATA_LEN; i++) begin
	    read_reg(USB_RD_DATA, rd_value);
	    rx_payload[i] = rd_value[7:0];

	    `uvm_info("USB_IN_PAYLOAD",
	      $sformatf(
		"Received byte[%0d] = 0x%02h",
		i, rx_payload[i]),
	      UVM_MEDIUM)
	  end
	  `uvm_info("USB_IN_PAYLOAD", $sformatf("Received payload"), UVM_MEDIUM)
  endtask

endclass : usbh_host_axi4_agent_in_H_seq
