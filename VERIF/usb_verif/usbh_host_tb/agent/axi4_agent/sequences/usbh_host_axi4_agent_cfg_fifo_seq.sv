//==================================================================================
//  USB Host Controller - AXI4 Agent
//  FIFO Data Access Sequence
//==================================================================================

class usbh_host_axi4_agent_cfg_fifo_seq extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_fifo_seq)

  usbh_host_axi4_agent_seq_item pkt;

  function new(string name = "usbh_host_axi4_agent_cfg_fifo_seq");
    super.new(name);
  endfunction

  virtual task body();

    bit [7:0] expected_wr_data;

    //==========================================================================
    // 1. USB_WR_DATA
    //==========================================================================
    for (int i = 0; i < 10; i++) begin

      case (i)
        0: expected_wr_data = 8'h00;
        1: expected_wr_data = 8'hFF;
        2: expected_wr_data = 8'hAA;
        3: expected_wr_data = 8'h55;
        default:
          expected_wr_data = $urandom_range(0, 8'hFF);
      endcase

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("fifo_write");

      start_item(pkt);
        pkt.write = 1'b1;
        pkt.addr  = `USB_WR_DATA;
        pkt.data  = {24'b0, expected_wr_data};
        pkt.strb  = 4'b1111;
      finish_item(pkt);

      `uvm_info("CFG_FIFO",
                $sformatf("USB_WR_DATA WRITE = %02h", expected_wr_data),
                UVM_MEDIUM)

    end

    //==========================================================================
    // 2. USB_RD_DATA
    //
    // Actual RX data checking will be performed after UTMI/device model
    // integration.
    //==========================================================================
    pkt = usbh_host_axi4_agent_seq_item::type_id::create("fifo_read");

    start_item(pkt);
      pkt.write = 1'b0;
      pkt.addr  = `USB_RD_DATA;
      pkt.data  = 32'h0;
      pkt.strb  = 4'b1111;
    finish_item(pkt);

    `uvm_info("CFG_FIFO",
              $sformatf("USB_RD_DATA READ = %08h", pkt.rdata),
              UVM_MEDIUM)

  endtask

endclass : usbh_host_axi4_agent_cfg_fifo_seq
