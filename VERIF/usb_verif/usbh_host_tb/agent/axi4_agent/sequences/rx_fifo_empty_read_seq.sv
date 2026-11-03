class rx_fifo_empty_read_seq extends usbh_host_axi4_agent_base_seq;
  `uvm_object_utils(rx_fifo_empty_read_seq)
  function new(string name="rx_fifo_empty_read_seq"); super.new(name); endfunction

  task body();
    logic [31:0] rxstat, rd;

    // Case A: empty straight after reset
    read_reg(USB_RX_STAT, rxstat);
    if (rxstat[15:0] != 0) `uvm_fatal("PRECOND", "RX FIFO not empty after reset")
    repeat (4) begin
      read_reg(USB_WR_DATA, rd);               // 0x20 = USB_RD_DATA on reads
      if ($isunknown(rd))
        `uvm_error("RXFIFO_X", $sformatf("RD_DATA on empty RX FIFO = %h", rd))
      else if (rd[7:0] != 8'h00)
        `uvm_error("RXFIFO_STALE", $sformatf("RD_DATA on empty RX FIFO = %h, expected 0", rd))
      else 
        `uvm_info("RXFIFO_STATE", $sformatf("RD_DATA on empty RX FIFO = %h, expected 0", rd), UVM_MEDIUM)
    end
  endtask
endclass












