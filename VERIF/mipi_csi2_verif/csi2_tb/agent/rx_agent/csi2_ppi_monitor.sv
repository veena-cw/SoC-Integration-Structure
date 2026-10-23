class csi2_ppi_monitor extends uvm_monitor;
  `uvm_component_utils(csi2_ppi_monitor)

  csi2_env_config cfg;
  virtual c_phy_bfm_if phy_vif;
  int unsigned sot_count;
  int unsigned sync_count;
  int unsigned data_word_count;
  int unsigned eot_count;

  function new(string name = "csi2_ppi_monitor", uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("PPI_MON", "Missing environment configuration")
    phy_vif = cfg.phy_vif;
  endfunction

  task run_phase(uvm_phase phase);
    forever begin
      @(posedge phy_vif.rxwordclkhs);
      if (phy_vif.rst_n !== 1'b1)
        continue;
      if (phy_vif.rx_lane_sts_reg7)
        sot_count++;
      if (|phy_vif.rxsynchs)
        sync_count++;
      if (phy_vif.rxactivehs && (|phy_vif.rxvalidhs))
        data_word_count++;
      if (phy_vif.rx_lane_sts_reg4)
        eot_count++;
    end
  endtask
endclass : csi2_ppi_monitor
