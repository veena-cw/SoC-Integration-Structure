class csi2_reset_agent extends uvm_agent;
  `uvm_component_utils(csi2_reset_agent)
   csi2_reset_config rst_cfg;
   csi2_reset_driver rst_dr;
   csi2_reset_monitor rst_mn;
   csi2_reset_sequencer rst_sr;
  function new(string name = "csi2_reset_agent",uvm_component parent);
           super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);
           super.build_phase(phase);
	       rst_mn = csi2_reset_monitor::type_id::create("rst_mn",this);
		   rst_dr = csi2_reset_driver::type_id::create("rst_dr",this);
		   rst_sr = csi2_reset_sequencer::type_id::create("rst_sr",this);
   endfunction

   function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        if(rst_dr != null && rst_sr != null)
          rst_dr.seq_item_port.connect(rst_sr.seq_item_export);
   endfunction

endclass
