//==================================================================================
//  USB Host Controller - AXI4 Agent
//  Directed Configuration Sequence
//==================================================================================

class usbh_host_axi4_agent_cfg_directed_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_directed_seq)

  usbh_host_axi4_agent_seq_item pkt;

  function new(string name = "usbh_host_axi4_agent_cfg_directed_seq");
    super.new(name);
  endfunction

  virtual task body();

    //==========================================================================
    // 1. Write USB_CTRL
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_write");

    start_item(pkt);
      pkt.write = 1'b1;
      pkt.addr  = `USB_CTRL;
      pkt.data  = 32'h0000_0001;       // ENABLE_SOF = 1
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    //==========================================================================
    // 2. Read USB_CTRL - Verify write
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_CTRL;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_DIRECTED",
              $sformatf("USB_CTRL READ DATA = %08h", pkt.rdata),
              UVM_MEDIUM)

    //==========================================================================
    // 3. Read USB_STATUS
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("status_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_STATUS;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_DIRECTED",
              $sformatf("USB_STATUS = %08h", pkt.rdata),
              UVM_MEDIUM)

    //==========================================================================
    // 4. Read USB_IRQ_STS
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("irq_status_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_IRQ_STS;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    //==========================================================================
    // 5. Read USB_RX_STAT
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("rx_status_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_RX_STAT;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

  endtask

endclass : usbh_host_axi4_agent_cfg_directed_seq
