//==================================================================================
//  USB Host Controller - AXI4 Agent
//  USB IN Transfer Configuration Sequence
//==================================================================================

class usbh_host_axi4_agent_cfg_in_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_in_seq)

  usbh_host_axi4_agent_seq_item pkt;

  function new(string name = "usbh_host_axi4_agent_cfg_in_seq");
    super.new(name);
  endfunction

  virtual task body();

    //==========================================================================
    // 1. Program USB_XFER_DATA
    //
    // IN transfer has no TX payload.
    // Therefore TX length = 0.
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("in_xfer_data");

    start_item(pkt);

      pkt.write = 1'b1;
      pkt.addr  = `USB_XFER_DATA;
      pkt.data  = 32'h0000_0000;
      pkt.strb  = 4'b1111;

    finish_item(pkt);

    //==========================================================================
    // 2. Program USB_XFER_TOKEN
    //
    // [31]    START      = 0
    // [30]    IN         = 1
    // [29]    ACK        = 1
    // [28]    PID_DATAX  = 0 -> DATA0
    // [23:16] PID        = 8'h69
    // [15:9]  DEV_ADDR   = 1
    // [8:5]   EP_ADDR    = 0
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("in_token_config");

    start_item(pkt);

      pkt.write = 1'b1;
      pkt.addr  = `USB_XFER_TOKEN;

      pkt.data = {
        1'b0,       // START
        1'b1,       // IN
        1'b1,       // ACK
        1'b0,       // PID_DATAX
        4'b0000,    // Reserved
        8'h69,      // PID_IN
        7'd1,       // DEV_ADDR
        4'd0,       // EP_ADDR
        5'b00000    // Reserved
      };

      pkt.strb = 4'b1111;

    finish_item(pkt);

    //==========================================================================
    // 3. START = 1
    //
    // This triggers the actual USB IN transaction.
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("in_transfer_start");

    start_item(pkt);

      pkt.write = 1'b1;
      pkt.addr  = `USB_XFER_TOKEN;

      pkt.data = {
        1'b1,       // START = 1
        1'b1,       // IN
        1'b1,       // ACK
        1'b0,       // PID_DATAX
        4'b0000,    // Reserved
        8'h69,      // PID_IN
        7'd1,       // DEV_ADDR
        4'd0,       // EP_ADDR
        5'b00000    // Reserved
      };

      pkt.strb = 4'b1111;

    finish_item(pkt);

    `uvm_info("CFG_IN_SEQ",
              "IN transfer START issued",
              UVM_MEDIUM)

  endtask

endclass : usbh_host_axi4_agent_cfg_in_seq
