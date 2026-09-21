class ethernet_frame_item extends uvm_sequence_item;  // Declares this UVM testbench class.
    rand byte unsigned data[];  // Declares a randomizable field in this transaction.
    bit bad_fcs;  // Declares storage used by this testbench object or operation.
    constraint c_len {data.size inside {[60:1514]};} `uvm_object_utils(ethernet_frame_item)  // Implements this testbench declaration or operation.
    function new(string name="ethernet_frame_item");  // Constructs this UVM object/component and initializes its base class.
        super.new(name);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
