class csi2_env extends uvm_env;
  `uvm_component_utils(csi2_env)
   csi2_env_config   env_cfg;
   csi2_tx_agent_top tx_agt_tp;
   csi2_rx_agent_top rx_agt_tp;
   csi2_reset_agent  rst_agt;
   csi2_scoreboard   sb;
   uvm_tlm_analysis_fifo#(csi2_rx_lane_item) captured_fifo;
   csi2_reset_config rst_cfg;
  function new(string name = "csi2_env",uvm_component parent);
           super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);
           super.build_phase(phase);
           captured_fifo = new("captured_fifo",this);
           if(!uvm_config_db#(csi2_reset_config)::get(this,"","rst_cfg",rst_cfg))
             `uvm_fatal("ENV","Missing reset configuration")
	if(!uvm_config_db#(csi2_env_config)::get(this,"","env_cfg",env_cfg))
	  `uvm_fatal("ENV","CONFIGURATION FAILED AT csi2_env")
	else
	  begin
	       sb        = csi2_scoreboard::type_id::create("sb",this);
		   tx_agt_tp = csi2_tx_agent_top::type_id::create("tx_agt_tp",this);
		   rx_agt_tp = csi2_rx_agent_top::type_id::create("rx_agt_tp",this);
		   rst_agt   = csi2_reset_agent::type_id::create("rst_agt",this);
	  end
   endfunction

   function void connect_phase(uvm_phase phase);
     super.connect_phase(phase);

     if(tx_agt_tp.tx_ag.size() != 1 || rx_agt_tp.rx_ag.size() != 1)
       `uvm_fatal("ENV","Scoreboard currently requires one TX , one RX and one RESET agent")
     tx_agt_tp.tx_ag[0].tx_mn.ap.connect(sb.tx_fifo.analysis_export);
     if(tx_agt_tp.tx_ag[0].tx_dr == null || rst_agt.rst_dr == null ||
        rx_agt_tp.rx_ag[0].rx_dr == null)
     `uvm_fatal("ENV","Source comparison requires an active TX driver and RESET driver")

     tx_agt_tp.tx_ag[0].tx_dr.source_ap.connect(sb.source_fifo.analysis_export);
     rx_agt_tp.rx_ag[0].rx_mn.ap.connect(sb.rx_fifo.analysis_export);
     tx_agt_tp.tx_ag[0].tx_mn.lane_ap.connect(captured_fifo.analysis_export);
     rx_agt_tp.rx_ag[0].rx_dr.done_ap.connect(sb.done_fifo.analysis_export);
   endfunction
  task run_phase(uvm_phase phase);
    forever begin
      wait(rst_cfg.vif.rst_n !== 1'b1);
      captured_fifo.flush();
      wait(rst_cfg.vif.rst_n === 1'b1);
    end
  endtask
endclass
