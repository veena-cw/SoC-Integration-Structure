class NoC_env extends uvm_env;
    `uvm_component_utils(NoC_env)
	 NoC_master_agt_top  NoC_master_ag_tp;
	 NoC_slave_agt_top   NoC_slave_ag_tp;
	 NoC_reset_agt_top   NoC_rst_ag_tp;
	 NoC_vsqr           m_vsqr;
	 NoC_vsqr           s_vsqr;
	 score_board  sb_h;
	 function new(string name = "env",uvm_component parent);
	          super.new(name,parent);
	 endfunction
	function void build_phase(uvm_phase phase);
	    NoC_master_ag_tp    = NoC_master_agt_top::type_id::create("NoC_master_ag_tp",this);
            NoC_slave_ag_tp     = NoC_slave_agt_top::type_id::create("NoC_slave_ag_tp",this);
	    NoC_rst_ag_tp     = NoC_reset_agt_top::type_id::create("NoC_reset_ag_tp",this);
	     m_vsqr = NoC_vsqr::type_id::create("m_vsqr", this);
	     s_vsqr = NoC_vsqr::type_id::create("s_vsqr", this);
	    sb_h        = score_board::type_id::create("sb_h",this); 	
    endfunction
	function void connect_phase(uvm_phase phase);
		super.connect_phase(phase);
	
	    foreach(NoC_master_ag_tp.NoC_master_agt[i])
          	begin	
  	        if(NoC_master_ag_tp.NoC_master_agt[i].NoC_master_mon!= null)
			   NoC_master_ag_tp.NoC_master_agt[i].NoC_master_mon.w_mn2sb.connect(sb_h.sb_NoC_master.analysis_export);
		end
	    foreach(NoC_slave_ag_tp.NoC_slave_agt[i])
          	begin	
  	        if(NoC_slave_ag_tp.NoC_slave_agt[i].NoC_slave_mon!= null)
			   NoC_slave_ag_tp.NoC_slave_agt[i].NoC_slave_mon.r_mn2sb.connect(sb_h.sb_NoC_slave.analysis_export);
		end
		  
        m_vsqr.mst_sq = m_master_agent.m_sequencer;
        m_vsqr.slv_sq = m_slave_agent.m_sequencer;
      //  m_vsqr.rst_sq = m_reset_agent.m_sequencer;
    
	endfunction
	
  endclass
