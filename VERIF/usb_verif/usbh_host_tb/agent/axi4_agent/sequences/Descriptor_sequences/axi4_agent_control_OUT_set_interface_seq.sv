class axi4_agent_control_OUT_set_interface_seq extends usbh_host_axi4_agent_base_seq;
    `uvm_object_utils(axi4_agent_control_OUT_set_interface_seq)
    
  // USB 2.0 standard request and token values
  localparam bit [7:0] PID_SETUP = 8'h2D;
  localparam bit [7:0] PID_IN    = 8'h69;
  // Test parameters
  localparam bit [6:0] DEV_ADDR        = 7'd5;
  localparam bit [7:0] INTERFACE_NUM   = 8'd0;
  localparam bit [7:0] ALT_SETTING     = 8'd0;
  function new(string name = "axi4_agent_control_OUT_set_interface_seq");
    super.new(name);
  endfunction
  
  virtual task body();
  logic [31:0] status;
  
    clear_usb_interrupts(); //   Clear stale DONE/ERR interrupts         
    write_reg(USB_XFER_DATA, 32'd8); // SETUP stage contains 8 bytes

    `uvm_info(get_type_name(), "Starting USB SET_INTERFACE request", UVM_MEDIUM)
    // ---------------------------------------------------------
    // SETUP packet: USB 2.0 Section 9.3
    // ---------------------------------------------------------
    write_reg(USB_WR_DATA, 32'h00000001); // bmRequestType: Host-to-device, Standard, Interface
    write_reg(USB_WR_DATA, 32'h0000000B); // bRequest: SET_INTERFACE
    write_reg(USB_WR_DATA, {24'h0, ALT_SETTING});   // wValue low byte: alternate setting
    write_reg(USB_WR_DATA, 32'h00000000); // wValue high byte: zero
    write_reg(USB_WR_DATA, {24'h0, INTERFACE_NUM}); // wIndex low byte: interface number
    write_reg(USB_WR_DATA, 32'h00000000); // wIndex high byte: zero
    write_reg(USB_WR_DATA, 32'h00000000); // wLength low byte: zero
    write_reg(USB_WR_DATA, 32'h00000000); // wLength high byte: zero

    // SETUP stage: SETUP PID, OUT direction, DATA0, device address, EP0
    issue_token(8'h2D, 1'b0, 1'b0, DEV_ADDR, 4'd0, status);
    wait_usb_done(status);                               // Wait for SETUP transaction completion

    // ---------------------------------------------------------
    // STATUS stage: no data stage for SET_INTERFACE
    // ---------------------------------------------------------
    clear_usb_interrupts(); //   Clear stale DONE/ERR interrupts 
    // Status stage: IN direction, DATA1, device address, EP0
    issue_token(8'h69, 1'b1, 1'b1, DEV_ADDR, 4'd0, status);
    //issue_token(1, 1, PID_IN, DEV_ADDR, 0, 0); // IN status stage; expect DATA1 ZLP
    wait_usb_done(status);                            // Wait for status stage completion

    `uvm_info(get_type_name(),
              "SET_INTERFACE request completed", UVM_MEDIUM)
  endtask
     
endclass
