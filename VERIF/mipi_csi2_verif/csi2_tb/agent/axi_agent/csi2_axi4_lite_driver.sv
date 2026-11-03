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
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("AXI4L_DRV", "Missing environment configuration")
    axi_lite_vif = cfg.axi_lite_vif;
    if (axi_lite_vif == null)
      `uvm_fatal("AXI4L_DRV", "AXI4-Lite interface is null")
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

  task drive_write(csi2_axi4_lite_item item);
    fork
      begin
        repeat (item.address_delay) @(axi_lite_vif.drv_cb);
        axi_lite_vif.drv_cb.awaddr  <= item.address;
        axi_lite_vif.drv_cb.awvalid <= 1'b1;
        do @(axi_lite_vif.drv_cb);
        while (!(axi_lite_vif.drv_cb.awvalid &&
                 axi_lite_vif.drv_cb.awready));
        axi_lite_vif.drv_cb.awvalid <= 1'b0;
      end
      begin
        repeat (item.data_delay) @(axi_lite_vif.drv_cb);
        axi_lite_vif.drv_cb.wdata  <= item.write_data;
        axi_lite_vif.drv_cb.wstrb  <= item.write_strobe;
        axi_lite_vif.drv_cb.wvalid <= 1'b1;
        do @(axi_lite_vif.drv_cb);
        while (!(axi_lite_vif.drv_cb.wvalid &&
                 axi_lite_vif.drv_cb.wready));
        axi_lite_vif.drv_cb.wvalid <= 1'b0;
      end
    join

    axi_lite_vif.drv_cb.bready <= 1'b1;
    do @(axi_lite_vif.drv_cb);
    while (!axi_lite_vif.drv_cb.bvalid);
    item.response = axi_lite_vif.drv_cb.bresp;
    axi_lite_vif.drv_cb.bready <= 1'b0;
  endtask

  task drive_read(csi2_axi4_lite_item item);
    repeat (item.address_delay) @(axi_lite_vif.drv_cb);
    axi_lite_vif.drv_cb.araddr  <= item.address;
    axi_lite_vif.drv_cb.arvalid <= 1'b1;
    do @(axi_lite_vif.drv_cb);
    while (!(axi_lite_vif.drv_cb.arvalid &&
             axi_lite_vif.drv_cb.arready));
    axi_lite_vif.drv_cb.arvalid <= 1'b0;

    axi_lite_vif.drv_cb.rready <= 1'b1;
    do @(axi_lite_vif.drv_cb);
    while (!axi_lite_vif.drv_cb.rvalid);
    item.read_data = axi_lite_vif.drv_cb.rdata;
    item.response  = axi_lite_vif.drv_cb.rresp;
    axi_lite_vif.drv_cb.rready <= 1'b0;
  endtask

  task run_phase(uvm_phase phase);
    csi2_axi4_lite_item req;
    csi2_axi4_lite_item rsp;
    drive_idle();
    forever begin
      wait (axi_lite_vif.areset_n === 1'b1);
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
