//==================================================================================
//  USB Host Controller - AXI4 Agent
//  Constrained-Random Configuration Sequence
//==================================================================================

class usbh_host_axi4_agent_cfg_constrained_random_seq
  extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(usbh_host_axi4_agent_cfg_constrained_random_seq)

  usbh_host_axi4_agent_seq_item pkt;

  function new(string name = "usbh_host_axi4_agent_cfg_constrained_random_seq");
    super.new(name);
  endfunction

  virtual task body();

    //==========================================================================
    // Generate 100 constrained-random AXI configuration transactions
    //==========================================================================
    repeat (100) begin

      pkt = usbh_host_axi4_agent_seq_item::type_id::create("cfg_rand_pkt");

      start_item(pkt);

      if (!pkt.randomize()) begin
        `uvm_fatal("CFG_RAND",
                   "usbh_host_axi4_agent_seq_item randomization failed")
      end

      // Prevent random configuration traffic from accidentally starting
      // a USB transaction.
      //
      // USB_XFER_TOKEN.START = bit [31]
      //
      if (pkt.write && (pkt.addr == `USB_XFER_TOKEN)) begin
        pkt.data[31] = 1'b0;
      end

      finish_item(pkt);

      if (pkt.write) begin

        `uvm_info("CFG_RAND",
                  $sformatf(
                    "RANDOM WRITE : ADDR=0x%08h DATA=0x%08h STRB=%04b",
                    pkt.addr,
                    pkt.data,
                    pkt.strb),
                  UVM_LOW)

      end
      else begin

        `uvm_info("CFG_RAND",
                  $sformatf(
                    "RANDOM READ : ADDR=0x%08h STRB=%04b",
                    pkt.addr,
                    pkt.strb),
                  UVM_LOW)

      end

    end

  endtask

endclass : usbh_host_axi4_agent_cfg_constrained_random_seq
