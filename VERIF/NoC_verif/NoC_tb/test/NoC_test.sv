class NoC_base_test extends uvm_test;
    `uvm_component_utils(NoC_base_test)
	 NoC_env en;

         NoC_vseq_base       vseq;
	 NoC_master_config   NoC_master_cfg[];
	 NoC_slave_config    NoC_slave_cfg[];
	 NoC_env_config      env_cfg;
	 int                 no_of_NoC_master_agents = 10;
	 int                 no_of_NoC_slave_agents = 5;

     function new(string name = "NoC_base_test",uvm_component parent);
        super.new(name,parent);
     endfunction
	 function void build_phase(uvm_phase phase);
	        super.build_phase(phase);
	        NoC_master_cfg                  =  new[no_of_NoC_master_agents];
		NoC_slave_cfg                   =  new[no_of_NoC_slave_agents];
		env_cfg                         =  NoC_env_config::type_id::create("env_cfg");
		env_cfg.NoC_master_cfg          =  new[no_of_NoC_master_agents];
		env_cfg.NoC_slave_cfg           =  new[no_of_NoC_slave_agents];
		env_cfg.no_of_NoC_master_agents = no_of_NoC_master_agents;
		env_cfg.no_of_NoC_slave_agents  = no_of_NoC_slave_agents;
		foreach(NoC_master_cfg[i])
		   begin
		    NoC_master_cfg[i] = NoC_master_config::type_id::create($sformatf("NoC_master_cfg[%0d]",i));
			/*if(!uvm_config_db #(virtual axi_fifo_slave_if)::get(this,"","vif",NoC_master_cfg[i].vif))
			   `uvm_fatal("CONFIG_ERROR","WR_CONFIG at TEST:configuration is not working properly")
			else
			 begin*/
			  env_cfg.NoC_master_cfg[i] = NoC_master_cfg[i];
		     //if(i<2)
			  NoC_master_cfg[i].is_active = UVM_ACTIVE;
			// else
		    //  NoC_master_cfg[i].is_active = UVM_PASSIVE;
		      uvm_config_db#(NoC_master_config)::set(this,$sformatf("en.NoC_master_ag_tp.NoC_master_agt[%0d]*",i),"NoC_master_cfg",NoC_master_cfg[i]);
			// end
		  end
		foreach(NoC_slave_cfg[i])
		   begin
		      NoC_slave_cfg[i] = NoC_slave_config::type_id::create($sformatf("NoC_slave_cfg[%0d]",i));
			/*if(! uvm_config_db #(virtual axi_fifo_slave_if)::get(this,"","vif",NoC_slave_cfg[i].vif))
			  `uvm_fatal("CONFIG_ERROR","RD_CONFIG at TEST:configuration is not working properly")
			else
             begin	*/
			   env_cfg.NoC_slave_cfg[i] = NoC_slave_cfg[i];
			/* if(i<2)
			   NoC_slave_cfg[i].is_active = UVM_PASSIVE;
			 else*/
		       NoC_slave_cfg[i].is_active = UVM_ACTIVE;

			   uvm_config_db#(NoC_slave_config)::set(this,$sformatf("en.NoC_slave_ag_tp.NoC_slave_agt[%0d]*",i),"NoC_slave_cfg",NoC_slave_cfg[i]);
		    // end
		   end
		  uvm_config_db#(NoC_env_config)::set(this,"*","env_cfg",env_cfg);
		  en    = NoC_env::type_id::create("en",this);
		 // NoC_master_sq = NoC_master_seq::type_id::create("NoC_master_sq");
		 // NoC_slave_sq = NoC_slave_seq::type_id::create("NoC_slave_sq");
	 endfunction


	 function void end_of_elaboration_phase(uvm_phase phase);
	               //uvm_top.print_topology();
		         uvm_root::get().print_topology();
	 endfunction

	 task run_phase(uvm_phase phase);
           phase.raise_objection(this);
             vseq = NoC_vseq_base::type_id::create("vseq");
             vseq.start(en.m_vsqr);
           phase.drop_objection(this);
         endtask

endclass
