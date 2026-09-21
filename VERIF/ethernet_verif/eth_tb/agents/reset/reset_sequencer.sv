class reset_sequencer extends uvm_sequencer #(reset_item);  // Declares this UVM testbench class.
    `uvm_component_utils(reset_sequencer)  // Registers this component type with the UVM factory.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
