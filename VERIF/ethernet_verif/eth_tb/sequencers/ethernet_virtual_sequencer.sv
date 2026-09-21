class ethernet_virtual_sequencer extends uvm_sequencer;  // Declares this UVM testbench class.
    `uvm_component_utils(ethernet_virtual_sequencer)  // Registers this component type with the UVM factory.
    axil_sequencer axil_sqr;  // Implements this testbench declaration or operation.
    axi_mem_sequencer mem_sqr;  // Implements this testbench declaration or operation.
    reset_sequencer reset_sqr;  // Implements this testbench declaration or operation.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
