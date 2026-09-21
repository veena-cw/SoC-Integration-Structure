class reset_monitor extends uvm_monitor;  // Declares this UVM testbench class.
    `uvm_component_utils(reset_monitor)  // Registers this component type with the UVM factory.
    virtual reset_if vif;  // Declares the virtual interface used to access DUT-facing signals.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
    function void build_phase(uvm_phase p);  // Builds this component and obtains required configuration objects.
        void'(uvm_config_db#(virtual reset_if)::get(this,"","vif",vif));  // Gets the configured interface/model handle from the UVM configuration database.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
