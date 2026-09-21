class ethernet_coverage extends uvm_subscriber #(axi_mem_item);  // Declares this UVM testbench class.
    `uvm_component_utils(ethernet_coverage)  // Registers this component type with the UVM factory.
    axi_mem_op_e op;  // Implements this testbench declaration or operation.
    bit[7:0] len;  // Declares storage used by this testbench object or operation.
    bit[2:0] size;  // Declares storage used by this testbench object or operation.
    covergroup cg;  // Implements this testbench declaration or operation.
    coverpoint op;  // Implements this testbench declaration or operation.
    coverpoint len {bins single={0};bins short_burst={[1:7]};bins long_burst={[8:255]};} coverpoint size;  // Updates coverpoint len {bins single for the current transaction or testbench state.
    cross op,len;  // Implements this testbench declaration or operation.
    endgroup  // Implements this testbench declaration or operation.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
        cg=new;  // Updates cg for the current transaction or testbench state.
    endfunction  // Ends this function.
    function void write(axi_mem_item t);  // Declares a helper function used by this testbench class.
        op=t.op;  // Updates op for the current transaction or testbench state.
        len=t.len;  // Updates len for the current transaction or testbench state.
        size=t.size;  // Updates size for the current transaction or testbench state.
        cg.sample();  // Implements this testbench declaration or operation.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
