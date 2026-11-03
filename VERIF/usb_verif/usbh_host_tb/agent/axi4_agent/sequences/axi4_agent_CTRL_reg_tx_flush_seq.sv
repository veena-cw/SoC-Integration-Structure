class axi4_agent_tx_flush_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_tx_flush_seq)

  // USB_CTRL
  localparam bit [31:0] TX_FLUSH_MASK = 32'h0000_0100;

  // USB_IRQ_ACK / USB_IRQ_STS
  localparam bit [31:0] IRQ_ERR  = 32'h0000_0004;
  localparam bit [31:0] IRQ_DONE = 32'h0000_0002;

  // USB_XFER_TOKEN fields
  localparam bit [31:0] TOKEN_START    = 32'h8000_0000;
  localparam bit [31:0] TOKEN_OUT      = 32'h0000_0000;
  localparam bit [31:0] PID_OUT        = 32'h00E1_0000;
  localparam bit [31:0] DEVICE_ADDR_0  = 32'h0000_0000;
  localparam bit [31:0] ENDPOINT_2     = 32'h0000_0040;

  localparam int POLL_LIMIT = 100;

  bit [31:0] ctrl_before;
  bit [31:0] ctrl_after;
  bit [31:0] irq_status;
  bit [31:0] rx_status;

  int poll_count;

  function new(string name = "axi4_agent_tx_flush_seq");
    super.new(name);
  endfunction

  // Write one byte to the TX FIFO.
  task automatic write_tx_byte(input bit [7:0] data_byte);
    write_reg(USB_WR_DATA, {24'h0, data_byte});
  endtask

  virtual task body();
    super.body();

    `uvm_info(get_type_name(),
              "Starting TX FIFO flush verification",
              UVM_MEDIUM)

    // --------------------------------------------------
    // 1. Read USB_CTRL
    // --------------------------------------------------
    read_reg(USB_CTRL, ctrl_before);

    // --------------------------------------------------
    // 2. Queue stale bytes before flush
    // --------------------------------------------------
    write_tx_byte(8'hAA);
    write_tx_byte(8'hBB);

    `uvm_info(get_type_name(),
              "Queued stale bytes: AA BB",
              UVM_MEDIUM)

    // --------------------------------------------------
    // 3. Flush TX FIFO
    // --------------------------------------------------
    write_reg(USB_CTRL, ctrl_before | TX_FLUSH_MASK);

    #100ns;

    read_reg(USB_CTRL, ctrl_after);

    `uvm_info(get_type_name(),
              $sformatf("USB_CTRL before=%08h after=%08h",
                        ctrl_before, ctrl_after),
              UVM_MEDIUM)

    // --------------------------------------------------
    // 4. Queue fresh bytes after flush
    // Expected payload: 78 56 34 12
    // --------------------------------------------------
    write_tx_byte(8'h78);
    write_tx_byte(8'h56);
    write_tx_byte(8'h34);
    write_tx_byte(8'h12);

    // Program transfer length in bytes
    write_reg(USB_XFER_DATA, 32'd4);

    // --------------------------------------------------
    // 5. Clear stale DONE/ERR interrupt status
    // --------------------------------------------------
    write_reg(USB_IRQ_ACK, IRQ_DONE | IRQ_ERR);

    // --------------------------------------------------
    // 6. Start OUT transfer to device 0, EP2
    // START=1, IN=0, PID=OUT, DEV_ADDR=0, EP_ADDR=2
    // --------------------------------------------------
    write_reg(USB_XFER_TOKEN,
              TOKEN_START | TOKEN_OUT | PID_OUT |
              DEVICE_ADDR_0 | ENDPOINT_2);

    // --------------------------------------------------
    // 7. Poll for DONE or ERR
    // --------------------------------------------------
    irq_status = 32'h0;
    poll_count = 0;

    while (poll_count < POLL_LIMIT) begin
      #100ns;
      read_reg(USB_IRQ_STS, irq_status);

      if (irq_status & IRQ_DONE)
        break;

      if (irq_status & IRQ_ERR)
        `uvm_fatal(get_type_name(),
                   $sformatf("OUT transfer error: IRQ_STS=%08h",
                             irq_status))

      poll_count++;
    end

    if (!(irq_status & IRQ_DONE))
      `uvm_fatal(get_type_name(),
                 "Timeout waiting for OUT transfer DONE interrupt")
    // --------------------------------------------------
    // 8. Confirm transfer completion through IRQ status
    // --------------------------------------------------
    read_reg(USB_IRQ_STS, irq_status);

    if (!(irq_status & IRQ_DONE))
      `uvm_fatal(get_type_name(),
                 "OUT transfer did not complete")

    `uvm_info(get_type_name(),
              $sformatf("OUT transfer completed: IRQ_STS=%08h",
                        irq_status),
              UVM_MEDIUM)

    // --------------------------------------------------
    // 9. Payload verification belongs at the Device BFM
    // --------------------------------------------------
    // Expected payload: 78 56 34 12
    //
    // Compare the four bytes captured by the Device BFM
    // against this expected payload. Fail if stale bytes
    // AA or BB are transmitted.

  endtask

endclass
