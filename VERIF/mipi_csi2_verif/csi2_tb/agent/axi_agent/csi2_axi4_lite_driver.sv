class csi2_axi4_lite_driver extends uvm_driver #(csi2_axi4_lite_item);
  `uvm_component_utils(csi2_axi4_lite_driver)

  csi2_env_config cfg;
  virtual csi2_axi4_lite_if axi_lite_vif;

  function new(string name = "csi2_axi4_lite_driver",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_config_db#(csi2_env_config)::get(
          this, "", "env_cfg", cfg))
      `uvm_fatal("AXI4L_DRV",
                 "Missing environment configuration")

    axi_lite_vif = cfg.axi_lite_vif;

    if (axi_lite_vif == null)
      `uvm_fatal("AXI4L_DRV",
                 "AXI4-Lite interface is null")
  endfunction

  task drive_idle();
    axi_lite_vif.drv_cb.awaddr  <= '0;
    axi_lite_vif.drv_cb.awvalid <= 1'b0;

    axi_lite_vif.drv_cb.wdata   <= '0;
    axi_lite_vif.drv_cb.wstrb   <= '0;
    axi_lite_vif.drv_cb.wvalid  <= 1'b0;

    axi_lite_vif.drv_cb.bready  <= 1'b0;

    axi_lite_vif.drv_cb.araddr  <= '0;
    axi_lite_vif.drv_cb.arvalid <= 1'b0;

    axi_lite_vif.drv_cb.rready  <= 1'b0;
  endtask

  task wait_for_reset_release();
    do begin
      @(axi_lite_vif.mon_cb);
    end
    while (axi_lite_vif.mon_cb.areset_n !== 1'b1);
  endtask

  task drive_write(csi2_axi4_lite_item item);
    bit aw_completed;
    bit w_completed;
    bit b_completed;

    aw_completed = 1'b0;
    w_completed  = 1'b0;
    b_completed  = 1'b0;

    /*
     * AXI4-Lite AW and W channels are independent.
     */
    fork
      begin : drive_aw_channel
        repeat (item.address_delay)
          @(axi_lite_vif.drv_cb);

        if (axi_lite_vif.mon_cb.areset_n === 1'b1) begin
          axi_lite_vif.drv_cb.awaddr  <= item.address;
          axi_lite_vif.drv_cb.awvalid <= 1'b1;

          forever begin
            @(axi_lite_vif.mon_cb);

            if (axi_lite_vif.mon_cb.areset_n !== 1'b1) begin
              axi_lite_vif.drv_cb.awvalid <= 1'b0;
              break;
            end

            if (axi_lite_vif.mon_cb.awvalid &&
                axi_lite_vif.mon_cb.awready) begin
              aw_completed = 1'b1;
              axi_lite_vif.drv_cb.awvalid <= 1'b0;
              break;
            end
          end
        end
      end

      begin : drive_w_channel
        repeat (item.data_delay)
          @(axi_lite_vif.drv_cb);

        if (axi_lite_vif.mon_cb.areset_n === 1'b1) begin
          axi_lite_vif.drv_cb.wdata  <= item.write_data;
          axi_lite_vif.drv_cb.wstrb  <= item.write_strobe;
          axi_lite_vif.drv_cb.wvalid <= 1'b1;

          forever begin
            @(axi_lite_vif.mon_cb);

            if (axi_lite_vif.mon_cb.areset_n !== 1'b1) begin
              axi_lite_vif.drv_cb.wvalid <= 1'b0;
              break;
            end

            if (axi_lite_vif.mon_cb.wvalid &&
                axi_lite_vif.mon_cb.wready) begin
              w_completed = 1'b1;
              axi_lite_vif.drv_cb.wvalid <= 1'b0;
              break;
            end
          end
        end
      end
    join

    if (!aw_completed || !w_completed) begin
      item.response = 2'b11;
      drive_idle();
      return;
    end

    /*
     * Wait for the write response.
     */
    axi_lite_vif.drv_cb.bready <= 1'b1;

    forever begin
      @(axi_lite_vif.mon_cb);

      if (axi_lite_vif.mon_cb.areset_n !== 1'b1) begin
        axi_lite_vif.drv_cb.bready <= 1'b0;
        item.response = 2'b11;
        return;
      end

      if (axi_lite_vif.mon_cb.bvalid &&
          axi_lite_vif.mon_cb.bready) begin
        item.response = axi_lite_vif.mon_cb.bresp;
        b_completed   = 1'b1;
        axi_lite_vif.drv_cb.bready <= 1'b0;
        break;
      end
    end

    if (!b_completed)
      item.response = 2'b11;

    `uvm_info(
      "AXI4L_DRV",
      $sformatf(
        "WRITE address=0x%08h data=0x%08h strobe=0x%0h response=0x%0h",
        item.address,
        item.write_data,
        item.write_strobe,
        item.response
      ),
      UVM_NONE
    )
  endtask

  task drive_read(csi2_axi4_lite_item item);
    bit ar_completed;
    bit r_completed;

    ar_completed = 1'b0;
    r_completed  = 1'b0;

    repeat (item.address_delay)
      @(axi_lite_vif.drv_cb);

    if (axi_lite_vif.mon_cb.areset_n !== 1'b1) begin
      item.response = 2'b11;
      return;
    end

    axi_lite_vif.drv_cb.araddr  <= item.address;
    axi_lite_vif.drv_cb.arvalid <= 1'b1;

    forever begin
      @(axi_lite_vif.mon_cb);

      if (axi_lite_vif.mon_cb.areset_n !== 1'b1) begin
        axi_lite_vif.drv_cb.arvalid <= 1'b0;
        item.response = 2'b11;
        return;
      end

      if (axi_lite_vif.mon_cb.arvalid &&
          axi_lite_vif.mon_cb.arready) begin
        ar_completed = 1'b1;
        axi_lite_vif.drv_cb.arvalid <= 1'b0;
        break;
      end
    end

    if (!ar_completed) begin
      item.response = 2'b11;
      return;
    end

    /*
     * Wait for the read response.
     */
    axi_lite_vif.drv_cb.rready <= 1'b1;

    forever begin
      @(axi_lite_vif.mon_cb);

      if (axi_lite_vif.mon_cb.areset_n !== 1'b1) begin
        axi_lite_vif.drv_cb.rready <= 1'b0;
        item.response = 2'b11;
        return;
      end

      if (axi_lite_vif.mon_cb.rvalid &&
          axi_lite_vif.mon_cb.rready) begin
        item.read_data = axi_lite_vif.mon_cb.rdata;
        item.response  = axi_lite_vif.mon_cb.rresp;
        r_completed    = 1'b1;
        axi_lite_vif.drv_cb.rready <= 1'b0;
        break;
      end
    end

    if (!r_completed)
      item.response = 2'b11;

    `uvm_info(
      "AXI4L_DRV",
      $sformatf(
        "READ address=0x%08h data=0x%08h response=0x%0h",
        item.address,
        item.read_data,
        item.response
      ),
      UVM_NONE
    )
  endtask

  task run_phase(uvm_phase phase);
    csi2_axi4_lite_item req;
    csi2_axi4_lite_item rsp;

    @(axi_lite_vif.drv_cb);
    drive_idle();

    forever begin
      wait_for_reset_release();

      seq_item_port.get_next_item(req);

      if (req.operation == CSI2_AXI4L_WRITE)
        drive_write(req);
      else
        drive_read(req);

      rsp = csi2_axi4_lite_item::type_id::create("rsp");

      rsp.operation     = req.operation;
      rsp.address       = req.address;
      rsp.write_data    = req.write_data;
      rsp.write_strobe  = req.write_strobe;
      rsp.read_data     = req.read_data;
      rsp.response      = req.response;
      rsp.address_delay = req.address_delay;
      rsp.data_delay    = req.data_delay;

      rsp.set_id_info(req);

      seq_item_port.item_done(rsp);
    end
  endtask

endclass : csi2_axi4_lite_driver
