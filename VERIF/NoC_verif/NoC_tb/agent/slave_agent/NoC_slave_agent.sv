class NoC_slave_agent extends uvm_agent;
  `uvm_component_utils(NoC_slave_agent)

  NoC_slave_driver  NoC_slave_drv;
  NoC_slave_monitor NoC_slave_mon;
  NoC_slave_config  NoC_slave_cfg;
  NoC_slave_sqr     NoC_slave_sr;

  function new(string name = "NoC_slave_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(NoC_slave_config)::get(this, "", "NoC_slave_cfg", NoC_slave_cfg))
      `uvm_fatal("CONFIG_ERROR", "NoC_SLAVE_AGENT : configuration is not working properly")
    else begin
      NoC_slave_mon = NoC_slave_monitor::type_id::create("NoC_slave_mon", this);
      if (NoC_slave_cfg.is_active == UVM_ACTIVE) begin
        NoC_slave_drv = NoC_slave_driver::type_id::create("NoC_slave_drv", this);
        NoC_slave_sr  = NoC_slave_sqr::type_id::create("NoC_slave_sr", this);
      end
    end
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    if (NoC_slave_drv != null && NoC_slave_sr != null)
      NoC_slave_drv.seq_item_port.connect(NoC_slave_sr.seq_item_export);
  endfunction
endclass
