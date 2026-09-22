//==================================================================================
//  USB Host Controller - AXI4 Agent
//  USB_XFER_DATA / USB_XFER_TOKEN Sequence
//==================================================================================

class usbh_host_axi4_agent_cfg_xfer_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_xfer_seq)

  usbh_host_axi4_agent_seq_item pkt;

  function new(string name = "usbh_host_axi4_agent_cfg_xfer_seq");
    super.new(name);
  endfunction

  virtual task body();

    bit [15:0] expected_tx_len;
    bit [2:0]  expected_in;
    bit [7:0]  expected_pid;
    bit [6:0]  expected_dev_addr;
    bit [3:0]  expected_ep_addr;

    //==========================================================================
    // 1. USB_XFER_DATA [15:0]
    //==========================================================================
    for (int i = 0; i < 10; i++) begin

      expected_tx_len = $urandom_range(0, 16'hFFFF);

      // Write
      pkt = usbh_host_axi4_agent_seq_item::type_id::create("xfer_data_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_XFER_DATA;
        pkt.data  = {16'b0, expected_tx_len};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      // Read
      pkt = usbh_host_axi4_agent_seq_item::type_id::create("xfer_data_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_XFER_DATA;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      // Self-check
      if (pkt.rdata[15:0] != expected_tx_len) begin
        `uvm_error("CFG_XFER",
          $sformatf("USB_XFER_DATA mismatch! Expected=%04h Got=%04h",
                    expected_tx_len, pkt.rdata[15:0]))
      end

    end

    //==========================================================================
    // 2. USB_XFER_TOKEN - IN/ACK/PID_DATAX
    //==========================================================================
    for (int i = 0; i < 8; i++) begin

      expected_in = i[2:0];

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("token_in_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_XFER_TOKEN;
        pkt.data  = {1'b0, expected_in, 28'b0};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("token_in_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_XFER_TOKEN;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      if (pkt.rdata[30:28] != expected_in) begin
        `uvm_error("CFG_XFER",
          $sformatf("USB_XFER_TOKEN [30:28] mismatch! Expected=%03b Got=%03b",
                    expected_in, pkt.rdata[30:28]))
      end

    end

    //==========================================================================
    // 3. PID [23:16]
    //==========================================================================
    for (int i = 0; i < 10; i++) begin

      expected_pid = $urandom_range(0, 8'hFF);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("token_pid_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_XFER_TOKEN;
        pkt.data  = {8'b0, expected_pid, 16'b0};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("token_pid_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_XFER_TOKEN;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      if (pkt.rdata[23:16] != expected_pid) begin
        `uvm_error("CFG_XFER",
          $sformatf("PID mismatch! Expected=%02h Got=%02h",
                    expected_pid, pkt.rdata[23:16]))
      end

    end

    //==========================================================================
    // 4. DEV_ADDR [15:9] and EP_ADDR [8:5]
    //==========================================================================
    for (int i = 0; i < 40; i++) begin

      expected_dev_addr = $urandom_range(0, 7'h7F);
      expected_ep_addr  = $urandom_range(0, 4'hF);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("token_addr_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_XFER_TOKEN;

        pkt.data = {
          1'b0,              // START
          1'b0,              // IN
          1'b0,              // ACK
          1'b0,              // PID_DATAX
          4'b0000,           // Reserved
          8'h69,             // PID
          expected_dev_addr, // DEV_ADDR
          expected_ep_addr,  // EP_ADDR
          5'b00000           // Reserved
        };

        pkt.strb = 4'b1111;
      finish_item(pkt);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("token_addr_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_XFER_TOKEN;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      if (pkt.rdata[15:9] != expected_dev_addr) begin
        `uvm_error("CFG_XFER",
          $sformatf("DEV_ADDR mismatch! Expected=%02h Got=%02h",
                    expected_dev_addr, pkt.rdata[15:9]))
      end

      if (pkt.rdata[8:5] != expected_ep_addr) begin
        `uvm_error("CFG_XFER",
          $sformatf("EP_ADDR mismatch! Expected=%01h Got=%01h",
                    expected_ep_addr, pkt.rdata[8:5]))
      end

    end

    //==========================================================================
    // 5. Program a complete transfer token
    //
    // START intentionally kept 0.
    // Actual USB transaction is tested by the UTMI-side sequence.
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("complete_token_write");

    start_item(pkt);
      pkt.write = 1'b1;
      pkt.addr  = `USB_XFER_TOKEN;

      pkt.data = {
        1'b0,       // START
        1'b1,       // IN
        1'b0,       // ACK
        1'b0,       // PID_DATAX
        4'b0000,
        8'h69,      // PID_IN
        7'd1,       // DEV_ADDR
        4'd0,       // EP_ADDR
        5'b00000
      };

      pkt.strb = 4'b1111;
    finish_item(pkt);

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("complete_token_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_XFER_TOKEN;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_XFER",
              $sformatf("Complete TOKEN register = %08h", pkt.rdata),
              UVM_MEDIUM)

  endtask

endclass : usbh_host_axi4_agent_cfg_xfer_seq
