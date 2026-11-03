class csi2_axi4_lite_monitor extends uvm_monitor;
  `uvm_component_utils(csi2_axi4_lite_monitor)

  csi2_env_config cfg;
  virtual csi2_axi4_lite_if axi_lite_vif;
  int unsigned write_count;
  int unsigned read_count;
  int unsigned error_response_count;

  function new(string name = "csi2_axi4_lite_monitor",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("AXI4L_MON", "Missing environment configuration")
    axi_lite_vif = cfg.axi_lite_vif;
  endfunction

  task run_phase(uvm_phase phase);
    forever begin
      @(axi_lite_vif.mon_cb);
      if (axi_lite_vif.mon_cb.areset_n !== 1'b1)
        continue;
      if (axi_lite_vif.mon_cb.bvalid && axi_lite_vif.mon_cb.bready) begin
        write_count++;
        if (axi_lite_vif.mon_cb.bresp != 2'b00)
          error_response_count++;
      end
      if (axi_lite_vif.mon_cb.rvalid && axi_lite_vif.mon_cb.rready) begin
        read_count++;
        if (axi_lite_vif.mon_cb.rresp != 2'b00)
          error_response_count++;
      end
    end
  endtask
endclass : csi2_axi4_lite_monitor
