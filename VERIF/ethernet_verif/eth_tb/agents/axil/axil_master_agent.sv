class axil_master_agent extends uvm_agent;  // Declares this UVM testbench class.
    `uvm_component_utils(axil_master_agent)  // Registers this component type with the UVM factory.
    axil_sequencer sqr;  // Implements this testbench declaration or operation.
    axil_driver drv;  // Implements this testbench declaration or operation.
    axil_monitor mon;  // Implements this testbench declaration or operation.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
    function void build_phase(uvm_phase p);  // Builds this component and obtains required configuration objects.
        super.build_phase(p);  // Calls the corresponding base-class UVM implementation.
        sqr=axil_sequencer::type_id::create("sqr",this);  // Creates this UVM object/component through the UVM factory.
        drv=axil_driver::type_id::create("drv",this);  // Creates this UVM object/component through the UVM factory.
        mon=axil_monitor::type_id::create("mon",this);  // Creates this UVM object/component through the UVM factory.
    endfunction  // Ends this function.
    function void connect_phase(uvm_phase p);  // Connects the UVM communication ports used by this component.
        drv.seq_item_port.connect(sqr.seq_item_export);  // Connects this UVM TLM communication path.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
