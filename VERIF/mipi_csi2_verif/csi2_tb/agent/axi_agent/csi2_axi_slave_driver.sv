class csi2_axi_slave_driver extends uvm_driver #(csi2_axi_slave_item);
  `uvm_component_utils(csi2_axi_slave_driver)

  csi2_env_config cfg;
  virtual csi2_axi_write_if axi_vif;

  function new(string name = "csi2_axi_slave_driver",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("AXI_SLV_DRV", "Missing environment configuration")
    axi_vif = cfg.axi_vif;
    if (axi_vif == null)
      `uvm_fatal("AXI_SLV_DRV", "AXI write interface is null")
  endfunction

  task drive_idle();
    axi_vif.drv_cb.awready <= 1'b0;
    axi_vif.drv_cb.wready  <= 1'b0;
    axi_vif.drv_cb.bvalid  <= 1'b0;
    axi_vif.drv_cb.bresp   <= 2'b00;
  endtask

  task accept_address(csi2_axi_slave_item item, output bit accepted);
    accepted = 1'b0;
    repeat (item.awready_delay) @(axi_vif.drv_cb);
    if (axi_vif.drv_cb.areset_n !== 1'b1)
      return;
    axi_vif.drv_cb.awready <= 1'b1;
    do begin
      @(axi_vif.drv_cb);
      if (axi_vif.drv_cb.areset_n !== 1'b1) begin
        axi_vif.drv_cb.awready <= 1'b0;
        return;
      end
    end while (!axi_vif.drv_cb.awvalid);
    accepted = 1'b1;
    axi_vif.drv_cb.awready <= 1'b0;
  endtask

  task accept_write_burst(csi2_axi_slave_item item, output bit accepted);
    bit burst_done;
    accepted = 1'b0;
    burst_done = 1'b0;
    repeat (item.wready_delay) @(axi_vif.drv_cb);
    if (axi_vif.drv_cb.areset_n !== 1'b1)
      return;
    axi_vif.drv_cb.wready <= 1'b1;
    while (!burst_done) begin
      @(axi_vif.drv_cb);
      if (axi_vif.drv_cb.areset_n !== 1'b1) begin
        axi_vif.drv_cb.wready <= 1'b0;
        return;
      end
      if (axi_vif.drv_cb.wvalid && axi_vif.drv_cb.wlast)
        burst_done = 1'b1;
    end
    accepted = 1'b1;
    axi_vif.drv_cb.wready <= 1'b0;
  endtask

  task drive_response(csi2_axi_slave_item item);
    repeat (item.bvalid_delay) @(axi_vif.drv_cb);
    if (axi_vif.drv_cb.areset_n !== 1'b1)
      return;
    axi_vif.drv_cb.bresp  <= item.bresp;
    axi_vif.drv_cb.bvalid <= 1'b1;
    do begin
      @(axi_vif.drv_cb);
      if (axi_vif.drv_cb.areset_n !== 1'b1) begin
        axi_vif.drv_cb.bvalid <= 1'b0;
        return;
      end
    end while (!axi_vif.drv_cb.bready);
    axi_vif.drv_cb.bvalid <= 1'b0;
  endtask

  task run_phase(uvm_phase phase);
    csi2_axi_slave_item req;
    bit address_accepted;
    bit burst_accepted;
    drive_idle();
    forever begin
      wait (axi_vif.areset_n === 1'b1);
      seq_item_port.get_next_item(req);
      fork
        accept_address(req, address_accepted);
        accept_write_burst(req, burst_accepted);
      join
      if (address_accepted && burst_accepted)
        drive_response(req);
      else
        drive_idle();
      seq_item_port.item_done();
    end
  endtask
endclass : csi2_axi_slave_driver
