class usbh_device_detect_irq_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_device_detect_irq_seq)

  // ---------------------------------------------------------
  // Register offsets
  // ---------------------------------------------------------


  // ---------------------------------------------------------
  // Bit definitions
  // ---------------------------------------------------------
  localparam logic [31:0] PHY_DMPULLDOWN    = 32'h0000_0080;
  localparam logic [31:0] PHY_DPPULLDOWN    = 32'h0000_0040;
  localparam logic [31:0] PHY_PULLDOWNS     = PHY_DMPULLDOWN | PHY_DPPULLDOWN;
  localparam logic [31:0] DEVICE_DETECT_IRQ = 32'h0000_0008;

  localparam int MAX_POLL_COUNT = 1000;

usbh_host_axi4_agent_seq_item pkt;
  // ---------------------------------------------------------
  // Variables
  // ---------------------------------------------------------
  logic [31:0] saved_ctrl;
  logic [31:0] saved_irq_mask;
  logic [31:0] test_ctrl;
  logic [31:0] test_irq_mask;

  logic [31:0] usb_status;
  logic [31:0] irq_status;
  logic [31:0] irq_mask;

  bit          irq_seen;
  int unsigned poll_count;

  // ---------------------------------------------------------
  // Constructor
  // ---------------------------------------------------------
  function new(string name = "usbh_device_detect_irq_seq");
    super.new(name);
  endfunction
  
    // ------------------------------------------------------------
  // Initialize AXI4 transaction attributes
  // ------------------------------------------------------------
  task automatic init_axi_fields(
      usbh_host_axi4_agent_seq_item item,
      input bit is_write
  );
    item.write   = is_write;
    item.id      = AXI_ID;
    item.len     = 8'd0;       // Single beat
    item.size    = 3'd2;       // 32-bit transfer
    item.burst   = 2'b01;      // INCR
    item.strb    = is_write ? 4'b1111 : 4'b0000;
    item.data    = 32'h0;
    item.rdata   = 32'h0;
    item.resp    = 2'b00;
    item.resp_id = '0;
    item.wlast   = is_write;
    item.rlast   = 1'b0;
  endtask
  
  // ------------------------------------------------------------
  // AXI register write
  // ------------------------------------------------------------
  task automatic axi_write(
      input logic [31:0] address,
      input logic [31:0] value
  );
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("axi_wr");

    start_item(pkt);
    init_axi_fields(pkt, 1'b1);

    pkt.addr = address;
    pkt.data = value;

    finish_item(pkt);

    if (pkt.resp != 2'b00) begin
      `uvm_error("DEVICE_DETECT_AXI_WRITE",
        $sformatf(
          "AXI write failed: addr=%08h data=%08h BRESP=%0b",
          address, value, pkt.resp
        ))
    end

    if (pkt.resp_id != pkt.id) begin
      `uvm_error("DEVICE_DETECT_AXI_WRITE_ID",
        $sformatf(
          "Write response ID mismatch: expected=%0h got=%0h",
          pkt.id, pkt.resp_id
        ))
    end

    `uvm_info("DEVICE_DETECT_AXI",
      $sformatf("WRITE addr=%08h data=%08h", address, value),
      UVM_MEDIUM)
  endtask

  // ------------------------------------------------------------
  // AXI register read
  // ------------------------------------------------------------
  task automatic axi_read(
      input  logic [31:0] address,
      output logic [31:0] value
  );
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("axi_rd");

    start_item(pkt);
    init_axi_fields(pkt, 1'b0);

    pkt.addr = address;

    finish_item(pkt);

    if (pkt.resp != 2'b00) begin
      `uvm_error("DEVICE_DETECT_AXI_READ",
        $sformatf(
          "AXI read failed: addr=%08h RRESP=%0b",
          address, pkt.resp
        ))
    end

    if (pkt.resp_id != pkt.id) begin
      `uvm_error("DEVICE_DETECT_AXI_READ_ID",
        $sformatf(
          "Read response ID mismatch: expected=%0h got=%0h",
          pkt.id, pkt.resp_id
        ))
    end

    value = pkt.rdata;

    `uvm_info("DEVICE_DETECT_AXI",
      $sformatf("READ addr=%08h data=%08h", address, value),
      UVM_MEDIUM)
  endtask

  // ---------------------------------------------------------
  // Sequence body
  // ---------------------------------------------------------
  virtual task body();

    `uvm_info(get_type_name(),
      "Starting USB device-detect interrupt test",
      UVM_MEDIUM)

    // =======================================================
    // 1. Save original register settings
    // =======================================================
    axi_read(USB_CTRL, saved_ctrl);
    axi_read(USB_IRQ_MASK, saved_irq_mask);

    `uvm_info(get_type_name(),
      $sformatf(
        "Saved USB_CTRL=0x%08h USB_IRQ_MASK=0x%08h",
        saved_ctrl, saved_irq_mask
      ),
      UVM_MEDIUM)

    // =======================================================
    // 2. Disable device-detect interrupt during setup
    // =======================================================
    test_irq_mask = saved_irq_mask & ~DEVICE_DETECT_IRQ;
    axi_write(USB_IRQ_MASK, test_irq_mask);

    // =======================================================
    // 3. Assert both PHY pull-down controls
    // =======================================================
    test_ctrl = saved_ctrl | PHY_PULLDOWNS;
    axi_write(USB_CTRL, test_ctrl);

    `uvm_info(get_type_name(),
      "Pull-down controls asserted; expecting SE0 (00)",
      UVM_MEDIUM)

    // Hold SE0 for 10 ms.
    #1ms;

    // =======================================================
    // 4. Check line state before releasing pull-downs
    // =======================================================
    axi_read(USB_STATUS, usb_status);

    `uvm_info(get_type_name(),
      $sformatf(
        "Before release: USB_STATUS=0x%08h LINESTATE=%02b",
        usb_status, usb_status[1:0]
      ),
      UVM_MEDIUM)

    // =======================================================
    // 5. Clear stale device-detect status
    // =======================================================
    axi_write(USB_IRQ_ACK, DEVICE_DETECT_IRQ);

    // Verify stale status is cleared.
    axi_read(USB_IRQ_STS, irq_status);

    if ((irq_status & DEVICE_DETECT_IRQ) != 0) begin
      `uvm_warning(get_type_name(),
        $sformatf(
          "Device-detect status remains set after ACK: IRQ_STS=0x%08h",
          irq_status
        ))
    end

    // =======================================================
    // 6. Enable device-detect interrupt
    // =======================================================
    test_irq_mask = saved_irq_mask | DEVICE_DETECT_IRQ;
    axi_write(USB_IRQ_MASK, test_irq_mask);

    // =======================================================
    // 7. Release pull-downs to allow device idle J-state
    // =======================================================
    test_ctrl = saved_ctrl & ~PHY_PULLDOWNS;
    axi_write(USB_CTRL, test_ctrl);

    `uvm_info(get_type_name(),
      "Pull-downs released; expecting Full-Speed J-state (01)",
      UVM_MEDIUM)

    // Allow DUT to sample the new line state.
    #100us;

    // =======================================================
    // 8. Read line state and interrupt registers
    // =======================================================
    axi_read(USB_STATUS, usb_status);
    axi_read(USB_IRQ_STS, irq_status);
    axi_read(USB_IRQ_MASK, irq_mask);

    `uvm_info(get_type_name(),
      $sformatf(
        {"After release: USB_STATUS=0x%08h LINESTATE=%02b ",
         "IRQ_STS=0x%08h IRQ_MASK=0x%08h"},
        usb_status,
        usb_status[1:0],
        irq_status,
        irq_mask
      ),
      UVM_MEDIUM)

    // Verify the DUT sees the expected idle line state.
    if (usb_status[1:0] != 2'b01) begin
      `uvm_error(get_type_name(),
        $sformatf(
          "Expected Full-Speed J-state 01, got LINESTATE=%02b",
          usb_status[1:0]
        ))
    end

    // Verify device-detect interrupt is enabled.
    if ((irq_mask & DEVICE_DETECT_IRQ) == 0) begin
      `uvm_error(get_type_name(),
        $sformatf(
          "Device-detect interrupt mask is disabled: IRQ_MASK=0x%08h",
          irq_mask
        ))
    end

    // =======================================================
    // 9. Poll device-detect status
    // =======================================================
    irq_seen   = 1'b0;
    poll_count = 0;

    while ((poll_count < MAX_POLL_COUNT) && !irq_seen) begin

      axi_read(USB_IRQ_STS, irq_status);

      if ((irq_status & DEVICE_DETECT_IRQ) != 0) begin
        irq_seen = 1'b1;
      end
      else begin
        poll_count++;
        #1us;
      end

    end

    // =======================================================
    // 10. Report interrupt detection result
    // =======================================================
    if (!irq_seen) begin

      `uvm_error(get_type_name(),
        $sformatf(
          {"DEVICE_DETECT timeout after %0d polls. ",
           "USB_STATUS=0x%08h LINESTATE=%02b ",
           "IRQ_STS=0x%08h IRQ_MASK=0x%08h"},
          poll_count,
          usb_status,
          usb_status[1:0],
          irq_status,
          irq_mask
        ))

    end
    else begin

      `uvm_info(get_type_name(),
        $sformatf(
          "PASS: Device-detect status observed. IRQ_STS=0x%08h",
          irq_status
        ),
        UVM_MEDIUM)

      // =====================================================
      // 11. Acknowledge interrupt and verify it clears
      // =====================================================
      axi_write(USB_IRQ_ACK, DEVICE_DETECT_IRQ);

      // Allow register update to propagate.
      #1us;

      axi_read(USB_IRQ_STS, irq_status);

      if ((irq_status & DEVICE_DETECT_IRQ) != 0) begin
        `uvm_error(get_type_name(),
          $sformatf(
            "Device-detect status did not clear after ACK: IRQ_STS=0x%08h",
            irq_status
          ))
      end
      else begin
        `uvm_info(get_type_name(),
          "PASS: Device-detect status cleared after ACK",
          UVM_MEDIUM)
      end

    end

    // =======================================================
    // 12. Restore original interrupt mask and control register
    // =======================================================
    axi_write(USB_IRQ_MASK, saved_irq_mask);
    axi_write(USB_CTRL, saved_ctrl);

    `uvm_info(get_type_name(),
      "USB device-detect interrupt test completed; registers restored",
      UVM_MEDIUM)

  endtask

endclass : usbh_device_detect_irq_seq


