class eth_env extends uvm_env;
    `uvm_component_utils(eth_env)

    eth_axil_agent       axil_ag;      // Programs and reads the DMA control/status register bank.
    eth_axi_agent        axi_ag;       // Models the external memory accessed by the DMA AXI master.
    eth_reset_agent      reset_ag;
    eth_rgmii_agent      rgmii_ag;     // Observes Ethernet bytes transmitted on the external RGMII boundary.
    eth_irq_monitor      irq_mon;
    eth_axis_tx_monitor  tx_axis_mon;  // Checks the 8-bit packet stream presented to the MAC TX input.
    eth_axis_rx_monitor  rx_axis_mon;  // Observes the packet stream produced by the MAC RX path.
    eth_ral_env          ral_env;
    eth_scoreboard       scb;
    eth_coverage         cov;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        axil_ag     = eth_axil_agent::type_id::create("axil_ag", this);
        axi_ag      = eth_axi_agent::type_id::create("axi_ag", this);
        reset_ag    = eth_reset_agent::type_id::create("reset_ag", this);
        rgmii_ag    = eth_rgmii_agent::type_id::create("rgmii_ag", this);
        irq_mon     = eth_irq_monitor::type_id::create("irq_mon", this);
        tx_axis_mon = eth_axis_tx_monitor::type_id::create("tx_axis_mon", this);
        rx_axis_mon = eth_axis_rx_monitor::type_id::create("rx_axis_mon", this);
        ral_env     = eth_ral_env::type_id::create("ral_env", this);
        scb         = eth_scoreboard::type_id::create("scb", this);
        cov         = eth_coverage::type_id::create("cov", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        tx_axis_mon.ap.connect(cov.analysis_export);
        rx_axis_mon.ap.connect(scb.rx_imp);
        rgmii_ag.mon.ap.connect(scb.tx_imp);
    endfunction
endclass
