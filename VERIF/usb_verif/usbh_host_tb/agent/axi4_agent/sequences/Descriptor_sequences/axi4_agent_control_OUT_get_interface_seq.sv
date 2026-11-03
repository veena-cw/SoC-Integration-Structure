class axi4_agent_control_OUT_get_interface_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_control_OUT_get_interface_seq)

  // USB PID values
  localparam logic [7:0] PID_SETUP = 8'h2D;
  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_OUT   = 8'hE1;
  localparam logic [7:0] PID_ACK   = 8'hD2;
  localparam logic [7:0] PID_DATA1 = 8'h4B;

  // Request parameters
  localparam logic [6:0] DEV_ADDR      = 7'd5;
  localparam logic [7:0] INTERFACE_NUM = 8'd0;

  logic [31:0] status;           // USB transaction status
  logic [31:0] interface_data;   // Returned alternate-setting byte

  function new(string name = "axi4_agent_control_OUT_get_interface_seq");
    super.new(name);
  endfunction

  virtual task body();

    `uvm_info(get_type_name(),
              "Starting USB GET_INTERFACE request", UVM_MEDIUM)

    clear_usb_interrupts(); // Clear stale DONE/ERR interrupts

    // Prepare the 8-byte GET_INTERFACE setup request
    write_reg(USB_XFER_DATA, 32'd8); // SETUP packet length = 8 bytes
    write_reg(USB_WR_DATA, 32'h00000081); // bmRequestType: Device-to-host, Standard, Interface
    write_reg(USB_WR_DATA, 32'h0000000A); // bRequest: GET_INTERFACE
    write_reg(USB_WR_DATA, 32'h00000000); // wValue low byte
    write_reg(USB_WR_DATA, 32'h00000000); // wValue high byte
    write_reg(USB_WR_DATA, {24'h0, INTERFACE_NUM}); // wIndex: interface number
    write_reg(USB_WR_DATA, 32'h00000000); // wIndex high byte
    write_reg(USB_WR_DATA, 32'h00000001); // wLength low byte = 1
    write_reg(USB_WR_DATA, 32'h00000000); // wLength high byte = 0

    // SETUP stage: send request to endpoint zero using DATA0
    clear_usb_interrupts(); // Clears stale interrupts before SETUP only
    issue_token(PID_SETUP, 1'b0, 1'b0, DEV_ADDR, 4'd0, status);
    `uvm_info("GET_INTERFACE", $sformatf("After SETUP: RX_STAT=%08h", status), UVM_MEDIUM)

    // DATA stage: read the one-byte alternate-setting response
    write_reg(USB_XFER_DATA, 32'd1);
    clear_usb_interrupts(); // Clears stale interrupts before SETUP only
    issue_token(PID_IN, 1'b1, 1'b1, DEV_ADDR, 4'd0, status);
    
    check_response_pid(status, PID_DATA1, "GET_INTERFACE data stage");
    `uvm_info("GET_INTERFACE", $sformatf("After IN data: RX_STAT=%08h", status), UVM_MEDIUM)
    `uvm_info("GET_INTERFACE_DEBUG", $sformatf("Data stage RX_STAT=0x%08h, PID=0x%02h", status, status[23:16]), UVM_MEDIUM)

    read_reg(USB_RD_DATA, interface_data); // Read returned data; confirm register byte placement

    `uvm_info("GET_INTERFACE",
              $sformatf("Interface %0d alternate setting = 0x%02h",
                        INTERFACE_NUM, interface_data[7:0]),
              UVM_MEDIUM)

    // STATUS stage: host sends OUT with DATA1 and zero payload
    clear_usb_interrupts(); // Clears stale interrupts before SETUP only
    write_reg(USB_XFER_DATA,32'h00); // Now OUT payload should be ZLP.
    issue_token(PID_OUT, 1'b0, 1'b1, DEV_ADDR, 4'd0, status);

    `uvm_info(get_type_name(),
              "GET_INTERFACE request completed", UVM_MEDIUM)

  endtask

endclass
