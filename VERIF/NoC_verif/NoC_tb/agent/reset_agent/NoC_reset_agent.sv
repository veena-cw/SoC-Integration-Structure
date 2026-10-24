class NoC_reset_agent extends uvm_agent;
  `uvm_component_utils(NoC_reset_agent)

  NoC_reset_driver  NoC_reset_drv;
  NoC_reset_monitor NoC_reset_mon;
  NoC_reset_config  NoC_reset_cfg;
  NoC_reset_sqr     NoC_reset_sr;

  function new(string name = "NoC_reset_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(NoC_reset_config)::get(this, "", "NoC_reset_cfg", NoC_reset_cfg))
      `uvm_fatal("CONFIG_ERROR", "NoC_RESET_AGENT : configuration is not working properly")
    else begin
      NoC_reset_mon = NoC_reset_monitor::type_id::create("NoC_reset_mon", this);
      if (NoC_reset_cfg.is_active == UVM_ACTIVE) begin
        NoC_reset_drv = NoC_reset_driver::type_id::create("NoC_reset_drv", this);
        NoC_reset_sr  = NoC_reset_sqr::type_id::create("NoC_reset_sr", this);
      end
    end
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    if (NoC_reset_drv != null && NoC_reset_sr != null)
      NoC_reset_drv.seq_item_port.connect(NoC_reset_sr.seq_item_export);
  endfunction
endclass
