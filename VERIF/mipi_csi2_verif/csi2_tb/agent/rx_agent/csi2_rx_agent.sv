class csi2_rx_agent extends uvm_agent;
  `uvm_component_utils(csi2_rx_agent)
   csi2_rx_config rx_cfg;
   csi2_rx_driver rx_dr;
   csi2_rx_monitor rx_mn;
   csi2_rx_sequencer rx_sr;
  function new(string name = "csi2_rx_agent",uvm_component parent);
           super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);
           super.build_phase(phase);
	if(!uvm_config_db#(csi2_rx_config)::get(this,"","rx_cfg",rx_cfg))
	  `uvm_fatal("rx_AGENT","CONFIGURATION FAILED AT rx_AGENT")
	else
	  begin
	    rx_mn = csi2_rx_monitor::type_id::create("rx_mn",this);
	    if(rx_cfg.is_active == UVM_ACTIVE)
		   begin
		   rx_dr = csi2_rx_driver::type_id::create("rx_dr",this);
		   rx_sr = csi2_rx_sequencer::type_id::create("rx_sr",this);
		   end
	  end
   endfunction

   function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        if(rx_dr != null && rx_sr != null)
          rx_dr.seq_item_port.connect(rx_sr.seq_item_export);
   endfunction

endclass
