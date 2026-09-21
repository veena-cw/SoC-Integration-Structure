class ethernet_env extends uvm_env;  // Declares this UVM testbench class.
    `uvm_component_utils(ethernet_env)  // Registers this component type with the UVM factory.
    axil_master_agent axil;  // Implements this testbench declaration or operation.
    axi_mem_slave_agent mem;  // Implements this testbench declaration or operation.
    reset_agent reset_ag;  // Implements this testbench declaration or operation.
    irq_monitor irq;  // Implements this testbench declaration or operation.
    ethernet_virtual_sequencer vsqr;  // Implements this testbench declaration or operation.
    ethernet_scoreboard sb;  // Implements this testbench declaration or operation.
    ethernet_coverage cov;  // Implements this testbench declaration or operation.
    ethernet_ref_model refm;  // Implements this testbench declaration or operation.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
    function void build_phase(uvm_phase p);  // Builds this component and obtains required configuration objects.
        axil=axil_master_agent::type_id::create("axil",this);  // Creates this UVM object/component through the UVM factory.
        mem=axi_mem_slave_agent::type_id::create("mem",this);  // Creates this UVM object/component through the UVM factory.
        reset_ag=reset_agent::type_id::create("reset_ag",this);  // Creates this UVM object/component through the UVM factory.
        irq=irq_monitor::type_id::create("irq",this);  // Creates this UVM object/component through the UVM factory.
        vsqr=ethernet_virtual_sequencer::type_id::create("vsqr",this);  // Creates this UVM object/component through the UVM factory.
        sb=ethernet_scoreboard::type_id::create("sb",this);  // Creates this UVM object/component through the UVM factory.
        cov=ethernet_coverage::type_id::create("cov",this);  // Creates this UVM object/component through the UVM factory.
        refm=ethernet_ref_model::type_id::create("refm",this);  // Creates this UVM object/component through the UVM factory.
    endfunction  // Ends this function.
    function void connect_phase(uvm_phase p);  // Connects the UVM communication ports used by this component.
        vsqr.axil_sqr=axil.sqr;  // Updates vsqr.axil_sqr for the current transaction or testbench state.
        vsqr.mem_sqr=mem.sqr;  // Updates vsqr.mem_sqr for the current transaction or testbench state.
        vsqr.reset_sqr=reset_ag.sqr;  // Updates vsqr.reset_sqr for the current transaction or testbench state.
        mem.mon.ap.connect(sb.axi_imp);  // Connects this UVM TLM communication path.
        mem.mon.ap.connect(cov.analysis_export);  // Connects this UVM TLM communication path.
        irq.ap.connect(sb.irq_imp);  // Connects this UVM TLM communication path.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
