//==================================================================================
//  USB Host Controller - AXI4 Agent
//  Error / Illegal Access Sequence
//==================================================================================

class usbh_host_axi4_agent_cfg_error_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_error_seq)

  usbh_host_axi4_agent_seq_item pkt;

  bit [31:0] expected_ro_value;

  function new(string name = "usbh_host_axi4_agent_cfg_error_seq");
    super.new(name);
  endfunction

  virtual task body();

    //==========================================================================
    // 1. Invalid / Unmapped Address WRITE
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("invalid_addr_write");

    start_item(pkt);

      pkt.addr_c.constraint_mode(0);
      pkt.access_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = 32'h0000_0024;
      pkt.data  = 32'h1234_5678;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    `uvm_info("CFG_ERROR",
              $sformatf("Invalid address WRITE: ADDR=%08h DATA=%08h RESP=%02b",
                        pkt.addr, pkt.data, pkt.resp),
              UVM_MEDIUM)

    if (pkt.resp != 2'b00) begin
      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "Invalid address WRITE response mismatch! Expected OKAY(00), Got=%02b",
                   pkt.resp))
    end

    //==========================================================================
    // 2. Invalid / Unmapped Address READ
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("invalid_addr_read");

    start_item(pkt);

      pkt.addr_c.constraint_mode(0);
      pkt.access_c.constraint_mode(0);

      pkt.write = 1'b0;
      pkt.addr  = 32'h0000_0024;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    `uvm_info("CFG_ERROR",
              $sformatf(
                "Invalid address READ: ADDR=%08h RDATA=%08h RESP=%02b",
                pkt.addr, pkt.rdata, pkt.resp),
              UVM_MEDIUM)

    if (pkt.resp != 2'b00) begin
      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "Invalid address READ response mismatch! Expected OKAY(00), Got=%02b",
                   pkt.resp))
    end

    //==========================================================================
    // 3. Write to USB_STATUS (RO)
    //==========================================================================

    // Read before illegal write
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ro_status_read_before");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_STATUS;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    expected_ro_value = pkt.rdata;

    `uvm_info("CFG_ERROR",
              $sformatf("USB_STATUS before illegal write = %08h",
                        expected_ro_value),
              UVM_MEDIUM)

    // Illegal write
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("write_ro_status");

    start_item(pkt);

      pkt.access_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = `USB_STATUS;
      pkt.data  = 32'hA5A5_A5A5;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    `uvm_info("CFG_ERROR",
              $sformatf(
                "WRITE to RO USB_STATUS: ADDR=%08h DATA=%08h RESP=%02b",
                pkt.addr, pkt.data, pkt.resp),
              UVM_MEDIUM)

    // Read after illegal write
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ro_status_read_after");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_STATUS;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    if (pkt.rdata !== expected_ro_value) begin
      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "USB_STATUS changed after illegal WRITE! Expected=%08h Got=%08h",
                   expected_ro_value, pkt.rdata))
    end

    //==========================================================================
    // 4. Write to USB_IRQ_STS (RO)
    //==========================================================================

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ro_irq_sts_read_before");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_IRQ_STS;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    expected_ro_value = pkt.rdata;

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("write_ro_irq_sts");

    start_item(pkt);

      pkt.access_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = `USB_IRQ_STS;
      pkt.data  = 32'h5A5A_5A5A;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ro_irq_sts_read_after");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_IRQ_STS;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    if (pkt.rdata !== expected_ro_value) begin
      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "USB_IRQ_STS changed after illegal WRITE! Expected=%08h Got=%08h",
                   expected_ro_value, pkt.rdata))
    end

    //==========================================================================
    // 5. Write to USB_RX_STAT (RO)
    //==========================================================================

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ro_rx_stat_read_before");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_RX_STAT;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    expected_ro_value = pkt.rdata;

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("write_ro_rx_stat");

    start_item(pkt);

      pkt.access_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = `USB_RX_STAT;
      pkt.data  = 32'hFFFF_FFFF;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ro_rx_stat_read_after");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_RX_STAT;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    if (pkt.rdata !== expected_ro_value) begin
      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "USB_RX_STAT changed after illegal WRITE! Expected=%08h Got=%08h",
                   expected_ro_value, pkt.rdata))
    end

    //==========================================================================
    // 6. Reserved bits - USB_CTRL [31:9]
    //==========================================================================

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_reserved_write");

    start_item(pkt);

      pkt.data_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = `USB_CTRL;
      pkt.data  = 32'hFFFF_FE00;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_reserved_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_CTRL;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    if (pkt.rdata[31:9] !== 23'b0) begin
      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "USB_CTRL reserved bits are not 0! RDATA=%08h",
                   pkt.rdata))
    end
    else begin
      `uvm_info("CFG_ERROR",
                "USB_CTRL reserved bits correctly read as 0",
                UVM_MEDIUM)
    end

    //==========================================================================
    // 7. Reserved bits - USB_IRQ_ACK [31:4]
    //==========================================================================

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("irq_ack_reserved_write");

    start_item(pkt);

      pkt.data_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = `USB_IRQ_ACK;
      pkt.data  = 32'hFFFF_FFF0;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("irq_ack_reserved_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_IRQ_ACK;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    if (pkt.rdata[31:4] !== 28'b0) begin
      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "USB_IRQ_ACK reserved bits are not 0! RDATA=%08h",
                   pkt.rdata))
    end

    //==========================================================================
    // 8. Reserved bits - USB_XFER_DATA [31:16]
    //==========================================================================

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("xfer_data_reserved_write");

    start_item(pkt);

      pkt.data_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = `USB_XFER_DATA;
      pkt.data  = 32'hFFFF_0000;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("xfer_data_reserved_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_XFER_DATA;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    if (pkt.rdata[31:16] !== 16'b0) begin
      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "USB_XFER_DATA reserved bits are not 0! RDATA=%08h",
                   pkt.rdata))
    end

    //==========================================================================
    // 9. Reserved bits - USB_XFER_TOKEN [27:24] and [4:0]
    //==========================================================================

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("xfer_token_reserved_write");

    start_item(pkt);

      pkt.data_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = `USB_XFER_TOKEN;
      pkt.data  = 32'h0F00_001F;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("xfer_token_reserved_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_XFER_TOKEN;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    if ((pkt.rdata[27:24] !== 4'b0) ||
        (pkt.rdata[4:0]   !== 5'b0)) begin

      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "USB_XFER_TOKEN reserved bits are not 0! RDATA=%08h",
                   pkt.rdata))
    end

    //==========================================================================
    // 10. Reserved bits - USB_WR_DATA [31:8]
    //==========================================================================

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("wr_data_reserved_write");

    start_item(pkt);

      pkt.data_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = `USB_WR_DATA;
      pkt.data  = 32'hFFFF_FF00;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    // Since USB_WR_DATA is write-only, read through USB_RD_DATA.
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("wr_data_reserved_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_RD_DATA;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    if (pkt.rdata[31:8] !== 24'b0) begin
      `uvm_error("CFG_ERROR",
                 $sformatf(
                   "USB_WR_DATA reserved bits are not 0! RDATA=%08h",
                   pkt.rdata))
    end

    //==========================================================================
    // 11. Reserved-bit write - USB_WR_DATA
    //==========================================================================

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("wr_data_reserved");

    start_item(pkt);

      pkt.data_c.constraint_mode(0);

      pkt.write = 1'b1;
      pkt.addr  = `USB_WR_DATA;
      pkt.data  = 32'hFFFF_FFAA;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    `uvm_info("CFG_ERROR",
              $sformatf(
                "USB_WR_DATA reserved-bit write: DATA=%08h",
                pkt.data),
              UVM_MEDIUM)

    //==========================================================================
    // 12. Invalid WSTRB = 4'b0000
    //
    // NOTE:
    // RTL currently declares WSTRB but does not use it.
    // Therefore this sequence observes RTL behavior rather than assuming
    // that the write must have no effect.
    //==========================================================================

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("wr_data_invalid_strb_0000");

    start_item(pkt);

      pkt.write = 1'b1;
      pkt.addr  = `USB_WR_DATA;
      pkt.data  = 32'h0000_00AA;
      pkt.strb  = 4'b0000;

    finish_item(pkt);

    `uvm_info("CFG_ERROR",
              $sformatf(
                "USB_WR_DATA WRITE: DATA=%08h WSTRB=%04b",
                pkt.data, pkt.strb),
              UVM_MEDIUM)

  endtask

endclass : usbh_host_axi4_agent_cfg_error_seq
