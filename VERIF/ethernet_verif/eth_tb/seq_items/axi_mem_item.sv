typedef enum {AXI_MEM_READ,AXI_MEM_WRITE} axi_mem_op_e;  // Defines the supported transaction operation values.
class axi_mem_item extends uvm_sequence_item;  // Declares this UVM testbench class.
    axi_mem_op_e op;  // Implements this testbench declaration or operation.
    bit [3:0] id;  // Declares storage used by this testbench object or operation.
    bit [31:0] addr;  // Declares storage used by this testbench object or operation.
    bit [7:0] len;  // Declares storage used by this testbench object or operation.
    bit [2:0] size;  // Declares storage used by this testbench object or operation.
    bit [1:0] burst;  // Declares storage used by this testbench object or operation.
    bit [63:0] data[$];  // Declares storage used by this testbench object or operation.
    bit [7:0] strb[$];  // Declares storage used by this testbench object or operation.
    bit [1:0] resp;  // Declares storage used by this testbench object or operation.
    `uvm_object_utils(axi_mem_item)  // Registers this sequence-item or sequence type with the UVM factory.
    function new(string name="axi_mem_item");  // Constructs this UVM object/component and initializes its base class.
        super.new(name);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
