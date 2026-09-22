//==================================================================================
//  USB Host Controller - AXI4 Agent
//  USB_CTRL Field-Level Sequence
//==================================================================================

class usbh_host_axi4_agent_cfg_ctrl_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_ctrl_seq)

  usbh_host_axi4_agent_seq_item pkt;

  function new(string name = "usbh_host_axi4_agent_cfg_ctrl_seq");
    super.new(name);
  endfunction

  virtual task body();

    bit expected_enable_sof;
    bit [1:0] expected_opmode;
    bit [1:0] expected_xcvrselect;
    bit expected_termselect;
    bit expected_dppulldown;
    bit expected_dmpulldown;
    bit expected_tx_flush;

    //==========================================================================
    // 1. ENABLE_SOF [0]
    //==========================================================================
    expected_enable_sof = 1'b1;

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_enable_sof");

    start_item(pkt);
      pkt.write = 1'b1;
      pkt.addr  = `USB_CTRL;
      pkt.data  = {31'b0, expected_enable_sof};
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_enable_sof_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_CTRL;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    if (pkt.rdata[0] != expected_enable_sof) begin
      `uvm_error("CFG_CTRL",
        $sformatf("ENABLE_SOF mismatch! Expected=%b Got=%b",
                  expected_enable_sof, pkt.rdata[0]))
    end

    //==========================================================================
    // 2. PHY_OPMODE [2:1]
    //==========================================================================
    for (int i = 0; i < 4; i++) begin

      expected_opmode = i[1:0];

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_opmode_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_CTRL;
        pkt.data  = {29'b0, expected_opmode, 1'b0};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_opmode_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_CTRL;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      if (pkt.rdata[2:1] != expected_opmode) begin
        `uvm_error("CFG_CTRL",
          $sformatf("PHY_OPMODE mismatch! Expected=%b Got=%b",
                    expected_opmode, pkt.rdata[2:1]))
      end

    end

    //==========================================================================
    // 3. PHY_XCVRSELECT [4:3]
    //==========================================================================
    for (int i = 0; i < 4; i++) begin

      expected_xcvrselect = i[1:0];

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_xcvrselect_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_CTRL;
        pkt.data  = {27'b0, expected_xcvrselect, 3'b0};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_xcvrselect_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_CTRL;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      if (pkt.rdata[4:3] != expected_xcvrselect) begin
        `uvm_error("CFG_CTRL",
          $sformatf("PHY_XCVRSELECT mismatch! Expected=%b Got=%b",
                    expected_xcvrselect, pkt.rdata[4:3]))
      end

    end

    //==========================================================================
    // 4. PHY_TERMSELECT [5]
    //==========================================================================
    for (int i = 0; i < 2; i++) begin

      expected_termselect = i[0];

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_termselect_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_CTRL;
        pkt.data  = {26'b0, expected_termselect, 5'b0};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_termselect_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_CTRL;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      if (pkt.rdata[5] != expected_termselect) begin
        `uvm_error("CFG_CTRL",
          $sformatf("PHY_TERMSELECT mismatch! Expected=%b Got=%b",
                    expected_termselect, pkt.rdata[5]))
      end

    end

    //==========================================================================
    // 5. PHY_DPPULLDOWN [6]
    //==========================================================================
    for (int i = 0; i < 2; i++) begin

      expected_dppulldown = i[0];

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_dppulldown_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_CTRL;
        pkt.data  = {25'b0, expected_dppulldown, 6'b0};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_dppulldown_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_CTRL;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      if (pkt.rdata[6] != expected_dppulldown) begin
        `uvm_error("CFG_CTRL",
          $sformatf("PHY_DPPULLDOWN mismatch! Expected=%b Got=%b",
                    expected_dppulldown, pkt.rdata[6]))
      end

    end

    //==========================================================================
    // 6. PHY_DMPULLDOWN [7]
    //==========================================================================
    for (int i = 0; i < 2; i++) begin

      expected_dmpulldown = i[0];

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_dmpulldown_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_CTRL;
        pkt.data  = {24'b0, expected_dmpulldown, 7'b0};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_dmpulldown_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_CTRL;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      if (pkt.rdata[7] != expected_dmpulldown) begin
        `uvm_error("CFG_CTRL",
          $sformatf("PHY_DMPULLDOWN mismatch! Expected=%b Got=%b",
                    expected_dmpulldown, pkt.rdata[7]))
      end

    end

    //==========================================================================
    // 7. TX_FLUSH [8]
    //==========================================================================
    for (int i = 0; i < 2; i++) begin

      expected_tx_flush = i[0];

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_tx_flush_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_CTRL;
        pkt.data  = {23'b0, expected_tx_flush, 8'b0};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("ctrl_tx_flush_read");

      start_item(pkt);
        pkt.write = 1'b0;
        pkt.addr  = `USB_CTRL;
        pkt.data  = 32'h0;
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      if (pkt.rdata[8] != expected_tx_flush) begin
        `uvm_error("CFG_CTRL",
          $sformatf("TX_FLUSH mismatch! Expected=%b Got=%b",
                    expected_tx_flush, pkt.rdata[8]))
      end

    end

  endtask

endclass : usbh_host_axi4_agent_cfg_ctrl_seq
