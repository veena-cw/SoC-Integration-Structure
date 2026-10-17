
class usbh_host_axi4_agent_driver extends
    uvm_driver #(usbh_host_axi4_agent_seq_item);

  `uvm_component_utils(usbh_host_axi4_agent_driver)

  virtual usbh_host_axi4_if vif;

  localparam int unsigned AXI_TIMEOUT = 1000;

  function new(
    string name = "usbh_host_axi4_agent_driver",
    uvm_component parent = null
  );
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_resource_db#(virtual usbh_host_axi4_if)::read_by_name(
          get_full_name(), "vif", vif, this)) begin
      `uvm_fatal("NOVIF",
        $sformatf("[%s] Virtual interface not found in resource_db",
                  get_full_name()))
    end
  endfunction

  // ----------------------------------------------------------
  // Main driver process
  // Assumption: rst_i is active-low.
  // ----------------------------------------------------------
  task run_phase(uvm_phase phase);

    forever begin

      // Wait until reset is deasserted.
      wait (vif.rst_i === 1'b1);

      `uvm_info("AXI_DRV",
        "Reset deasserted -- driver resuming",
        UVM_MEDIUM)

      seq_item_port.get_next_item(req);

      // Do not begin a new transaction if reset is asserted.
      if (vif.rst_i !== 1'b1) begin
        seq_item_port.item_done();
        continue;
      end

      if (req.write)
        drive_write(req);
      else
        drive_read(req);

      seq_item_port.item_done();

    end
  endtask

  // ----------------------------------------------------------
  // Drive all master outputs to idle.
  // ----------------------------------------------------------
  task do_reset();

    @(vif.drv_cb);

    vif.drv_cb.cfg_awvalid_i <= 1'b0;
    vif.drv_cb.cfg_awaddr_i  <= '0;
    vif.drv_cb.cfg_awid_i    <= '0;
    vif.drv_cb.cfg_awlen_i   <= '0;
    vif.drv_cb.cfg_awsize_i  <= '0;
    vif.drv_cb.cfg_awburst_i <= '0;

    vif.drv_cb.cfg_wvalid_i <= 1'b0;
    vif.drv_cb.cfg_wdata_i  <= '0;
    vif.drv_cb.cfg_wstrb_i  <= '0;
    vif.drv_cb.cfg_wlast_i  <= 1'b0;

    vif.drv_cb.cfg_bready_i <= 1'b0;

    vif.drv_cb.cfg_arvalid_i <= 1'b0;
    vif.drv_cb.cfg_araddr_i  <= '0;
    vif.drv_cb.cfg_arid_i    <= '0;
    vif.drv_cb.cfg_arlen_i   <= '0;
    vif.drv_cb.cfg_arsize_i  <= '0;
    vif.drv_cb.cfg_arburst_i <= '0;
    vif.drv_cb.cfg_arlock_i  <= 1'b0;
    vif.drv_cb.cfg_arcache_i <= '0;
    vif.drv_cb.cfg_arprot_i  <= '0;
    vif.drv_cb.cfg_arqos_i   <= '0;

    vif.drv_cb.cfg_rready_i <= 1'b0;

  endtask

  // ----------------------------------------------------------
  // WRITE transaction
  // ----------------------------------------------------------
  task drive_write(usbh_host_axi4_agent_seq_item req);

    int unsigned timeout;

    timeout = 0;

    `uvm_info("AXI4_DRV",
      $sformatf("WRITE ADDR=%08h DATA=%08h STRB=%h",
                req.addr, req.data, req.strb),
      UVM_MEDIUM)

    // Address channel
    vif.drv_cb.cfg_awaddr_i  <= req.addr;
    vif.drv_cb.cfg_awid_i    <= req.id;
    vif.drv_cb.cfg_awlen_i   <= req.len;
    vif.drv_cb.cfg_awsize_i  <= req.size;
    vif.drv_cb.cfg_awburst_i <= req.burst;
    vif.drv_cb.cfg_awvalid_i <= 1'b1;

    do begin
      @(vif.drv_cb);
      timeout++;

      if (vif.rst_i !== 1'b1)
        `uvm_fatal("AXI_AW_RESET",
          "Reset asserted during write address phase")

      if (timeout >= AXI_TIMEOUT)
        `uvm_fatal("AXI_AW_TIMEOUT",
          $sformatf("AWREADY timeout: ADDR=%08h", req.addr))

    end while (!vif.drv_cb.cfg_awready_o);

    vif.drv_cb.cfg_awvalid_i <= 1'b0;

    // Write data channel
    vif.drv_cb.cfg_wdata_i  <= req.data;
    vif.drv_cb.cfg_wstrb_i  <= req.strb;
    vif.drv_cb.cfg_wlast_i  <= 1'b1;
    vif.drv_cb.cfg_wvalid_i <= 1'b1;

    timeout = 0;

    do begin
      @(vif.drv_cb);
      timeout++;

      if (vif.rst_i !== 1'b1)
        `uvm_fatal("AXI_W_RESET",
          "Reset asserted during write data phase")

      if (timeout >= AXI_TIMEOUT)
        `uvm_fatal("AXI_W_TIMEOUT",
          $sformatf("WREADY timeout: ADDR=%08h", req.addr))

    end while (!vif.drv_cb.cfg_wready_o);

    vif.drv_cb.cfg_wvalid_i <= 1'b0;
    vif.drv_cb.cfg_wlast_i  <= 1'b0;

    // Write response channel
    vif.drv_cb.cfg_bready_i <= 1'b1;

    timeout = 0;

    do begin
      @(vif.drv_cb);
      timeout++;

      if (vif.rst_i !== 1'b1)
        `uvm_fatal("AXI_B_RESET",
          "Reset asserted during write response phase")

      if (timeout >= AXI_TIMEOUT)
        `uvm_fatal("AXI_B_TIMEOUT",
          $sformatf("BVALID timeout: ADDR=%08h", req.addr))

    end while (!vif.drv_cb.cfg_bvalid_o);

    req.resp    = vif.drv_cb.cfg_bresp_o;
    req.resp_id = vif.drv_cb.cfg_bid_o;

    vif.drv_cb.cfg_bready_i <= 1'b0;

    if (req.resp_id != req.id)
      `uvm_error("AXI_BID",
        $sformatf("BID mismatch: expected=%0h received=%0h",
                  req.id, req.resp_id))

    `uvm_info("AXI4_DRV",
      $sformatf("WRITE COMPLETE ADDR=%08h DATA=%08h BRESP=%0b ID=%0h",
                req.addr, req.data, req.resp, req.resp_id),
      UVM_MEDIUM)

  endtask

  // ----------------------------------------------------------
  // READ transaction
  // IMPORTANT:
  // Never read cfg_arvalid_i or cfg_rready_i through drv_cb.
  // They are clocking-block outputs.
  // ----------------------------------------------------------
  task drive_read(usbh_host_axi4_agent_seq_item req);

    int unsigned timeout;

    bit ar_handshake;
    bit r_handshake;

    timeout      = 0;
    ar_handshake = 0;
    r_handshake  = 0;

    `uvm_info("AXI4_DRV",
      $sformatf("READ START ADDR=%08h ID=%0h",
                req.addr, req.id),
      UVM_MEDIUM)

 // --------------------------------------------------------
    // 1. Drive read address and hold ARVALID until handshake.
    // --------------------------------------------------------
    // Start from a clocking event. The clocking block drives
    // these values at its configured output skew.
    @(vif.drv_cb);

    if (vif.rst_i !== 1'b1)
        `uvm_fatal("AXI_AR_RESET",
          "Reset asserted before starting AR transaction")

    vif.drv_cb.cfg_araddr_i  <= req.addr;
    vif.drv_cb.cfg_arid_i    <= req.id;
    vif.drv_cb.cfg_arlen_i   <= req.len;
    vif.drv_cb.cfg_arsize_i  <= req.size;
    vif.drv_cb.cfg_arburst_i <= req.burst;

    vif.drv_cb.cfg_arlock_i  <= 1'b0;
    vif.drv_cb.cfg_arcache_i <= '0;
    vif.drv_cb.cfg_arprot_i  <= '0;
    vif.drv_cb.cfg_arqos_i   <= '0;

    vif.drv_cb.cfg_arvalid_i <= 1'b1;

    `uvm_info("AXI_AR",
      $sformatf("Driving ARVALID=1 ADDR=%08h ID=%0h",
                req.addr, req.id),
      UVM_MEDIUM)

    timeout = 0;
    ar_handshake = 0;

    // Do not deassert ARVALID until ARREADY is sampled high.
    // Since this driver owns ARVALID and keeps it asserted,
    // sampled ARREADY completes the address handshake.
    while (!ar_handshake) begin
        @(vif.drv_cb);

        if (vif.rst_i !== 1'b1)
            `uvm_fatal("AXI_AR_RESET",
              $sformatf("Reset during AR phase: ADDR=%08h",
                        req.addr))

        timeout++;

        if (vif.drv_cb.cfg_arready_o === 1'b1) begin
            ar_handshake = 1'b1;

            `uvm_info("AXI_AR",
              $sformatf(
                "AR handshake: ADDR=%08h ARREADY=1",
                req.addr),
              UVM_MEDIUM)
        end
        else if (timeout >= AXI_TIMEOUT) begin
            `uvm_fatal("AXI_AR_TIMEOUT",
              $sformatf(
                "ARREADY timeout: ADDR=%08h ARVALID held high",
                req.addr))
        end
    end

    vif.drv_cb.cfg_arvalid_i <= 1'b0;

    `uvm_info("AXI_AR",
      $sformatf("ARVALID deasserted after handshake: ADDR=%08h",
                req.addr),
      UVM_MEDIUM)

    // --------------------------------------------------------
    // 2. Accept read response.
    // --------------------------------------------------------
    vif.drv_cb.cfg_rready_i <= 1'b1;

    timeout = 0;

    // RREADY remains asserted until RVALID is sampled.
    // The DUT response must be held until RREADY is accepted.
    while (!r_handshake) begin

      @(vif.drv_cb);

      if (vif.rst_i !== 1'b1)
        `uvm_fatal("AXI_R_RESET",
          $sformatf("Reset during R phase: ADDR=%08h", req.addr))

      if (vif.drv_cb.cfg_rvalid_o) begin

        r_handshake = 1'b1;

        req.rdata   = vif.drv_cb.cfg_rdata_o;
        req.resp    = vif.drv_cb.cfg_rresp_o;
        req.resp_id = vif.drv_cb.cfg_rid_o;
        req.rlast   = vif.drv_cb.cfg_rlast_o;

      end
      else begin
        timeout++;

        if (timeout >= AXI_TIMEOUT)
          `uvm_fatal("AXI_R_TIMEOUT",
            $sformatf(
              "RVALID timeout: ADDR=%08h RVALID=%0b",
              req.addr, vif.drv_cb.cfg_rvalid_o))
      end

    end

    vif.drv_cb.cfg_rready_i <= 1'b0;

    // --------------------------------------------------------
    // 3. Validate the response.
    // --------------------------------------------------------
    if (req.resp_id != req.id)
      `uvm_error("AXI_RID",
        $sformatf("RID mismatch: expected=%0h received=%0h",
                  req.id, req.resp_id))

    if (req.rlast !== 1'b1)
      `uvm_error("AXI_RLAST",
        "RLAST was not asserted for single-beat read")

    `uvm_info("AXI4_DRV",
      $sformatf(
        "READ COMPLETE ADDR=%08h ID=%0h RDATA=%08h RESP=%0b RLAST=%0b",
        req.addr, req.id, req.rdata, req.resp, req.rlast),
      UVM_MEDIUM)

  endtask

endclass : usbh_host_axi4_agent_driver

