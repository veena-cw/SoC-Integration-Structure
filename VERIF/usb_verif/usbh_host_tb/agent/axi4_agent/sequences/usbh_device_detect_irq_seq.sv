
class usbh_device_detect_irq_seq
    extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_device_detect_irq_seq)

  // USB host register offsets
  localparam logic [31:0] USB_CTRL     = 32'h00;
  localparam logic [31:0] USB_IRQ_ACK  = 32'h08;
  localparam logic [31:0] USB_IRQ_STS  = 32'h0C;
  localparam logic [31:0] USB_IRQ_MASK = 32'h10;

  // USB_CTRL PHY pulldown bits
  localparam logic [31:0] PHY_DPPULLDOWN = 32'h0000_0040;
  localparam logic [31:0] PHY_DMPULLDOWN = 32'h0000_0080;
  localparam logic [31:0] PHY_PULLDOWNS =
      PHY_DPPULLDOWN | PHY_DMPULLDOWN;

  // Confirm this bit against the RTL interrupt definitions.
  localparam logic [31:0] DEVICE_DETECT_IRQ = 32'h0000_0008;

  // AXI4 single-beat transaction ID
  localparam bit [ID_WIDTH-1:0] AXI_ID = 4'h1;

  usbh_host_axi4_agent_seq_item pkt;

  logic [31:0] ctrl_value;
  logic [31:0] saved_irq_mask;
  logic [31:0] irq_status;
  logic [31:0] test_irq_mask;

  bit irq_seen;
  int unsigned poll_count;

  localparam int unsigned MAX_POLL_COUNT = 1000;

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

  // ------------------------------------------------------------
  // Main test
  // ------------------------------------------------------------
  virtual task body();

    `uvm_info(get_type_name(),
      "Starting USB device-detect interrupt test",
      UVM_MEDIUM)

    // 1. Read USB_CTRL and enable both PHY pulldowns.
    axi_read(USB_CTRL, ctrl_value);
    ctrl_value |= PHY_PULLDOWNS;
    axi_write(USB_CTRL, ctrl_value);

    `uvm_info(get_type_name(),
      $sformatf("USB_CTRL programmed to 0x%08h", ctrl_value),
      UVM_MEDIUM)

    // 2. Save the original interrupt mask.
    axi_read(USB_IRQ_MASK, saved_irq_mask);

    // 3. Clear stale device-detect interrupt status.
    // Assumes IRQ_ACK is write-one-to-clear.
    axi_write(USB_IRQ_ACK, DEVICE_DETECT_IRQ);

    // 4. Enable device-detect interrupt without changing other masks.
    test_irq_mask = saved_irq_mask | DEVICE_DETECT_IRQ;
    axi_write(USB_IRQ_MASK, test_irq_mask);

    // 5. Allow the host to sample the attached-device LineState.
    #1us;

    // 6. Poll the interrupt status.
    irq_seen   = 1'b0;
    poll_count = 0;
    irq_status = '0;

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

    if (!irq_seen) begin
      `uvm_error(get_type_name(),
        $sformatf(
          "DEVICE_DETECT timeout after %0d polls; USB_CTRL=%08h IRQ_STS=%08h",
          poll_count, ctrl_value, irq_status
        ))
    end
    else begin
      `uvm_info(get_type_name(),
        $sformatf(
          "DEVICE_DETECT observed: IRQ_STS=%08h",
          irq_status
        ),
        UVM_MEDIUM)

      // 7. Acknowledge the interrupt and verify it clears.
      axi_write(USB_IRQ_ACK, DEVICE_DETECT_IRQ);
      axi_read(USB_IRQ_STS, irq_status);

      if ((irq_status & DEVICE_DETECT_IRQ) != 0) begin
        `uvm_error(get_type_name(),
          $sformatf(
            "DEVICE_DETECT did not clear after ACK; IRQ_STS=%08h",
            irq_status
          ))
      end
      else begin
        `uvm_info(get_type_name(),
          "DEVICE_DETECT cleared after ACK",
          UVM_MEDIUM)
      end
    end

    // 8. Restore the previous IRQ mask.
    axi_write(USB_IRQ_MASK, saved_irq_mask);

    `uvm_info(get_type_name(),
      "USB device-detect interrupt test completed",
      UVM_MEDIUM)

  endtask

endclass : usbh_device_detect_irq_seq

