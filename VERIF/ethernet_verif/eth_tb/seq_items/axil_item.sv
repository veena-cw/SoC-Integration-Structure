typedef enum {AXIL_READ,AXIL_WRITE} axil_op_e;  // Defines the supported transaction operation values.
class axil_item extends uvm_sequence_item;  // Declares this UVM testbench class.
    rand axil_op_e op;  // Declares a randomizable field in this transaction.
    rand bit [11:0] addr;  // Declares a randomizable field in this transaction.
    rand bit [31:0] data;  // Declares a randomizable field in this transaction.
    rand bit [3:0] strb;  // Declares a randomizable field in this transaction.
    bit [1:0] resp;  // Declares storage used by this testbench object or operation.
    `uvm_object_utils_begin(axil_item) `uvm_field_enum(axil_op_e,op,UVM_ALL_ON) `uvm_field_int(addr,UVM_ALL_ON) `uvm_field_int(data,UVM_ALL_ON) `uvm_field_int(strb,UVM_ALL_ON) `uvm_field_int(resp,UVM_ALL_ON) `uvm_object_utils_end  // Registers this sequence-item or sequence type with the UVM factory.
    function new(string name="axil_item");  // Constructs this UVM object/component and initializes its base class.
        super.new(name);  // Calls the corresponding base-class UVM implementation.
        strb='1;  // Updates strb for the current transaction or testbench state.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
