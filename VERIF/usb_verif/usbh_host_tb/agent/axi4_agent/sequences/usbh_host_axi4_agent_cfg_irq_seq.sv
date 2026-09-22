//==================================================================================
//  USB Host Controller - AXI4 Agent
//  Interrupt Register Sequence
//==================================================================================

class usbh_host_axi4_agent_cfg_irq_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_irq_seq)

  usbh_host_axi4_agent_seq_item pkt;

  function new(string name = "usbh_host_axi4_agent_cfg_irq_seq");
    super.new(name);
  endfunction

  virtual task body();

    bit [3:0] expected_irq_mask;

    //==========================================================================
    // 1. USB_IRQ_MASK [3:0]
    //==========================================================================
    for (int i = 0; i < 16; i++) begin

      expected_irq_mask = i[3:0];

      // Write
      pkt = usbh_host_axi4_agent_seq_item::type_id::create("irq_mask_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_IRQ_MASK;
        pkt.data  = {28'b0, expected_irq_mask};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      // Read
      pkt = usbh_host_axi4_agent_seq_item::type_id::create("irq_mask_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_IRQ_MASK;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      // Self-check
      if (pkt.rdata[3:0] != expected_irq_mask) begin
        `uvm_error("CFG_IRQ",
          $sformatf("USB_IRQ_MASK mismatch! Expected=%04b Got=%04b",
                    expected_irq_mask, pkt.rdata[3:0]))
      end

    end

    //==========================================================================
    // 2. Read USB_IRQ_STS
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("irq_status_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_IRQ_STS;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_IRQ",
              $sformatf("USB_IRQ_STS = %08h", pkt.rdata),
              UVM_MEDIUM)

    //==========================================================================
    // 3. Read USB_IRQ_ACK
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("irq_ack_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_IRQ_ACK;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_IRQ",
              $sformatf("USB_IRQ_ACK = %08h", pkt.rdata),
              UVM_MEDIUM)

  endtask

endclass : usbh_host_axi4_agent_cfg_irq_seq
