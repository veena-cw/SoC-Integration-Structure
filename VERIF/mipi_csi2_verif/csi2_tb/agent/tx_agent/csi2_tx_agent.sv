class csi2_tx_agent extends uvm_agent;
  `uvm_component_utils(csi2_tx_agent)
   csi2_tx_config tx_cfg;
   csi2_tx_driver tx_dr;
   csi2_tx_monitor tx_mn;
   csi2_tx_sequencer tx_sr;
  function new(string name = "csi2_tx_agent",uvm_component parent);
           super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);
           super.build_phase(phase);
	if(!uvm_config_db#(csi2_tx_config)::get(this,"","tx_cfg",tx_cfg))
	  `uvm_fatal("TX_AGENT","CONFIGURATION FAILED AT TX_AGENT")
	else
	  begin
	    tx_mn = csi2_tx_monitor::type_id::create("tx_mn",this);
	    if(tx_cfg.is_active == UVM_ACTIVE)
		   begin
		   tx_dr = csi2_tx_driver::type_id::create("tx_dr",this);
		   tx_sr = csi2_tx_sequencer::type_id::create("tx_sr",this);
		   end
	  end
   endfunction

   function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        if(tx_dr != null && tx_sr != null)
          tx_dr.seq_item_port.connect(tx_sr.seq_item_export);
   endfunction

endclass
