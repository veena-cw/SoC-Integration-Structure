class NoC_env extends uvm_env;
  `uvm_component_utils(NoC_env)

  NoC_master_agt_top NoC_master_ag_tp;
  NoC_slave_agt_top  NoC_slave_ag_tp;
  NoC_reset_agt_top  NoC_rst_ag_tp;
  NoC_vsqr    m_vsqr;
  score_board sb_h;

   function new(string name = "env",
               uvm_component parent = null);
    super.new(name, parent);
   endfunction

   function void build_phase(uvm_phase phase);

    super.build_phase(phase);

     NoC_master_ag_tp  = NoC_master_agt_top::type_id::create("NoC_master_ag_tp", this);

     NoC_slave_ag_tp   = NoC_slave_agt_top::type_id::create("NoC_slave_ag_tp", this);

     NoC_rst_ag_tp     = NoC_reset_agt_top::type_id::create("NoC_rst_ag_tp", this);

     m_vsqr            = NoC_vsqr::type_id::create("m_vsqr", this);

     sb_h              = score_board::type_id::create("sb_h", this);

   endfunction

   function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    m_vsqr.mst_sq = new[NoC_master_ag_tp.NoC_master_agt.size()];

    m_vsqr.slv_sq = new[NoC_slave_ag_tp.NoC_slave_agt.size()];

    foreach (NoC_master_ag_tp.NoC_master_agt[i])
    begin
      if (NoC_master_ag_tp.NoC_master_agt[i].NoC_master_mon != null)
        NoC_master_ag_tp.NoC_master_agt[i].NoC_master_mon.w_mn2sb.connect(sb_h.sb_NoC_master.analysis_export);

        //Use the actual sequencer member name from NoC_master_agent.
        if (NoC_master_ag_tp.NoC_master_agt[i].NoC_master_sr != null)
        m_vsqr.mst_sq[i] = NoC_master_ag_tp.NoC_master_agt[i].NoC_master_sr;
    end

    foreach (NoC_slave_ag_tp.NoC_slave_agt[i])
     begin
      if (NoC_slave_ag_tp.NoC_slave_agt[i].NoC_slave_mon != null)
      NoC_slave_ag_tp.NoC_slave_agt[i].NoC_slave_mon.r_mn2sb.connect(sb_h.sb_NoC_slave.analysis_export);

      //Use the actual sequencer member name from NoC_slave_agent.
      if (NoC_slave_ag_tp.NoC_slave_agt[i].NoC_slave_sr != null)
      m_vsqr.slv_sq[i]  =   NoC_slave_ag_tp.NoC_slave_agt[i].NoC_slave_sr;

     end

      if(NoC_rst_ag_tp.NoC_reset_agt != null && NoC_rst_ag_tp.NoC_reset_agt.NoC_reset_sr != null)
      m_vsqr.rst_sq =  NoC_rst_ag_tp.NoC_reset_agt.NoC_reset_sr;

   endfunction

endclass
