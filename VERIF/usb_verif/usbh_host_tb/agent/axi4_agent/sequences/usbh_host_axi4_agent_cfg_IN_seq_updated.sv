class usbh_host_axi4_agent_cfg_IN_seq_updated extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_IN_seq_updated)

  usbh_host_axi4_agent_seq_item pkt;

  // Use a unique AXI ID for each transaction.
  // This sequence supports single-beat, 32-bit accesses.
  localparam bit [ID_WIDTH-1:0] AXI_ID = 4'h1;

  function new(string name = "usbh_host_axi4_agent_cfg_IN_seq_updated");
    super.new(name);
  endfunction

  // ------------------------------------------------------------
  // Initialize common AXI4 transaction fields.
  // The wrapper supports one 32-bit beat per transaction.
  // ------------------------------------------------------------
  task automatic init_axi_fields(
    usbh_host_axi4_agent_seq_item item,
    input bit is_write
  );
    item.write = is_write;
    item.id    = AXI_ID;
    item.len   = 8'd0;       // Single beat: LEN = beats - 1
    item.size  = 3'd2;       // 32-bit transfer = 4 bytes
    item.burst = 2'b01;      // INCR burst
    item.strb  = is_write ? 4'b1111 : 4'b0000;
    item.data  = 32'h0;
    item.rdata = 32'h0;
    item.resp  = 2'b00;
    item.resp_id = '0;
    item.wlast = 1'b1;       // Single-beat write
    item.rlast = 1'b0;       // Filled by driver on read
  endtask

  // ------------------------------------------------------------
  // Write one register
  // ------------------------------------------------------------
  task automatic write_reg(
    input string item_name,
    input bit [CFG_AWADDR_I_W-1:0] reg_addr,
    input bit [CFG_WDATA_I_W-1:0] reg_data
  );
    pkt = usbh_host_axi4_agent_seq_item::type_id::create(item_name);

    start_item(pkt);
    init_axi_fields(pkt, 1'b1);
    pkt.addr = reg_addr;
    pkt.data = reg_data;
    pkt.strb = 4'b1111;
    finish_item(pkt);

    if (pkt.resp != 2'b00)
      `uvm_error("IN_SEQ",
        $sformatf("Write failed: addr=%08h BRESP=%0b",
                  reg_addr, pkt.resp))

    if (pkt.resp_id != pkt.id)
      `uvm_error("IN_SEQ",
        $sformatf("Write response ID mismatch: expected=%0h got=%0h",
                  pkt.id, pkt.resp_id))
  endtask

  // ------------------------------------------------------------
  // Read one register
  // ------------------------------------------------------------
  task automatic read_reg(
    input string item_name,
    input bit [CFG_AWADDR_I_W-1:0] reg_addr,
    output bit [CFG_RDATA_O_W-1:0] read_data
  );
    pkt = usbh_host_axi4_agent_seq_item::type_id::create(item_name);

    start_item(pkt);
    init_axi_fields(pkt, 1'b0);
    pkt.addr = reg_addr;
    pkt.strb = 4'b0000;
    finish_item(pkt);

    read_data = pkt.rdata;

    if (pkt.resp != 2'b00)
      `uvm_error("IN_SEQ",
        $sformatf("Read failed: addr=%08h RRESP=%0b",
                  reg_addr, pkt.resp))

    if (pkt.resp_id != pkt.id)
      `uvm_error("IN_SEQ",
        $sformatf("Read response ID mismatch: expected=%0h got=%0h",
                  pkt.id, pkt.resp_id))

    if (pkt.rlast !== 1'b1)
      `uvm_error("IN_SEQ",
        $sformatf("RLAST not asserted for single-beat read at addr=%08h",
                  reg_addr))

    `uvm_info("IN_SEQ",
      $sformatf("Read addr=%08h data=%08h resp=%0b ID=%0h",
                reg_addr, read_data, pkt.resp, pkt.resp_id),
      UVM_MEDIUM)
  endtask

  // ------------------------------------------------------------
  // USB IN transfer configuration and status/data reads
  // ------------------------------------------------------------
  virtual task body();
    bit [CFG_RDATA_O_W-1:0] rx_status;
    bit [CFG_RDATA_O_W-1:0] rx_word;
    int i;

    // 1. Configure transfer length = 0 for an IN transfer.
    // No TX payload is programmed for this IN transaction.
    write_reg("in_xfer_data",
              `USB_XFER_DATA,
              32'h0000_0000);

    // 2. Program USB_XFER_TOKEN.
    // START=0, IN=1, ACK=1, PID_DATAX=0 (DATA0),
    // PID=8'h69 (IN), device address=1, endpoint=0.
    write_reg("in_token_config",
              `USB_XFER_TOKEN,
              {
                1'b0,
                1'b1,
                1'b1,
                1'b0,
                4'b0000,
                8'h69,
                7'd1,
                4'd0,
                5'b00000
              });

    // 3. Set START=1 to trigger the USB IN transaction.
    write_reg("in_transfer_start",
              `USB_XFER_TOKEN,
              {
                1'b1,
                1'b1,
                1'b1,
                1'b0,
                4'b0000,
                8'h69,
                7'd1,
                4'd0,
                5'b00000
              });

    `uvm_info("IN_SEQ", "USB IN transfer START issued", UVM_MEDIUM)

    // 4. Read receive status.
    // NOTE: This is an immediate read, not a completion wait.
    read_reg("rx_status_read", `USB_RX_STAT, rx_status);

    `uvm_info("IN_SEQ", $sformatf("USB_RX_STAT = %08h", rx_status), UVM_MEDIUM)

    // 5. Read four words from USB_RD_DATA.
    // Confirm that four words are expected for your DUT/BFM scenario.
    for (i = 0; i < 4; i++) begin
      read_reg($sformatf("rx_data_read_%0d", i), `USB_RD_DATA, rx_word);

      `uvm_info("IN_SEQ", $sformatf("RX DATA[%0d] = %08h", i, rx_word), UVM_MEDIUM)
    end

  endtask

endclass : usbh_host_axi4_agent_cfg_IN_seq_updated
