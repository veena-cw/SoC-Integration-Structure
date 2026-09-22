//==================================================================================
//  USB Host Controller - AXI4 Agent
//  Reset / Default Register Value Sequence
//==================================================================================

class usbh_host_axi4_agent_cfg_reset_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_reset_seq)

  usbh_host_axi4_agent_seq_item pkt;

  function new(string name = "usbh_host_axi4_agent_cfg_reset_seq");
    super.new(name);
  endfunction

  virtual task body();

    //==========================================================================
    // 1. Read USB_CTRL after reset
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_reset_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_CTRL;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_RESET",
              $sformatf("USB_CTRL after reset = %08h", pkt.rdata),
              UVM_MEDIUM)

    //==========================================================================
    // 2. Read USB_IRQ_MASK after reset
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("irq_mask_reset_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_IRQ_MASK;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_RESET",
              $sformatf("USB_IRQ_MASK after reset = %08h", pkt.rdata),
              UVM_MEDIUM)

    //==========================================================================
    // 3. Read USB_XFER_DATA after reset
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("xfer_data_reset_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_XFER_DATA;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_RESET",
              $sformatf("USB_XFER_DATA after reset = %08h", pkt.rdata),
              UVM_MEDIUM)

    //==========================================================================
    // 4. Read USB_XFER_TOKEN after reset
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("xfer_token_reset_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_XFER_TOKEN;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_RESET",
              $sformatf("USB_XFER_TOKEN after reset = %08h", pkt.rdata),
              UVM_MEDIUM)

    //==========================================================================
    // 5. Read USB_STATUS after reset
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("status_reset_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_STATUS;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_RESET",
              $sformatf("USB_STATUS after reset = %08h", pkt.rdata),
              UVM_MEDIUM)

    //==========================================================================
    // 6. Read USB_IRQ_STS after reset
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("irq_status_reset_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_IRQ_STS;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_RESET",
              $sformatf("USB_IRQ_STS after reset = %08h", pkt.rdata),
              UVM_MEDIUM)

    //==========================================================================
    // 7. Read USB_RX_STAT after reset
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("rx_stat_reset_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_RX_STAT;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_RESET",
              $sformatf("USB_RX_STAT after reset = %08h", pkt.rdata),
              UVM_MEDIUM)

  endtask

endclass : usbh_host_axi4_agent_cfg_reset_seq
