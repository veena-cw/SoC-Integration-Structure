class spi_env extends uvm_env;

    `uvm_component_utils(spi_env)

    spi_master_agent      m_agent;
    spi_slave_agent       s_agent;
    spi_virtual_sequencer vseqr;
    spi_scoreboard        sb;

    function new(string name = "spi_env",
                 uvm_component parent = null);
      super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
      super.build_phase(phase);

      m_agent = spi_master_agent     ::type_id::create("m_agent", this);
      s_agent = spi_slave_agent      ::type_id::create("s_agent", this);
      vseqr   = spi_virtual_sequencer::type_id::create("vseqr",   this);
      sb      = spi_scoreboard       ::type_id::create("sb",      this);
    endfunction

    function void connect_phase(uvm_phase phase);
      super.connect_phase(phase);

      vseqr.master_seqr = m_agent.sequencer;
      vseqr.slave_seqr  = s_agent.sequencer;

      m_agent.driver.exp_ap.connect(sb.master_exp_imp);
      s_agent.driver.exp_ap.connect(sb.slave_exp_imp);
      s_agent.monitor.ap.connect(sb.bus_imp);
      m_agent.monitor.ap.connect(sb.master_rx_imp);
    endfunction

  endclass
