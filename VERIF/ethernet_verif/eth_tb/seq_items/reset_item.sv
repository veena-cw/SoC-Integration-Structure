class reset_item extends uvm_sequence_item;  // Declares this UVM testbench class.
    rand int unsigned assert_cycles;  // Declares a randomizable field in this transaction.
    constraint c {assert_cycles inside {[2:20]};} `uvm_object_utils(reset_item)  // Implements this testbench declaration or operation.
    function new(string name="reset_item");  // Constructs this UVM object/component and initializes its base class.
        super.new(name);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
