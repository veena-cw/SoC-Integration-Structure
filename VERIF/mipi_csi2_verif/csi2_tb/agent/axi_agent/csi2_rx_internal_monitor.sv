class csi2_rx_internal_monitor extends uvm_monitor;
  `uvm_component_utils(csi2_rx_internal_monitor)

  csi2_env_config cfg;
  virtual csi2_rx_status_if status_vif;

  int unsigned pixel_valid_cycles;
  int unsigned axi_wr_en_cycles;
  int unsigned axi_full_cycles;
  int unsigned axi_fifo_read_cycles;
  int unsigned data_length_vld_cycles;

  function new(string name = "csi2_rx_internal_monitor",
               uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("INTERNAL_MON", "Missing environment configuration")
    status_vif = cfg.status_vif;
    if (status_vif == null)
      `uvm_fatal("INTERNAL_MON", "RX status virtual interface is null")
  endfunction

  task monitor_rx_domain();
    forever begin
      @(status_vif.rx_cb);
      if (status_vif.rx_cb.rst_n === 1'b1 &&
          status_vif.rx_cb.rx_pixel_dvalid)
        pixel_valid_cycles++;
    end
  endtask

  task monitor_axi_domain();
    forever begin
      @(status_vif.axi_cb);
      if (status_vif.axi_cb.rst_n !== 1'b1)
        continue;
      if (status_vif.axi_cb.axi_wr_en)
        axi_wr_en_cycles++;
      if (status_vif.axi_cb.axi_full)
        axi_full_cycles++;
      if (status_vif.axi_cb.axi_fifo_rd_vld)
        axi_fifo_read_cycles++;
      if (status_vif.axi_cb.data_length_vld)
        data_length_vld_cycles++;
    end
  endtask

  task run_phase(uvm_phase phase);
    fork
      monitor_rx_domain();
      monitor_axi_domain();
    join
  endtask
endclass : csi2_rx_internal_monitor
