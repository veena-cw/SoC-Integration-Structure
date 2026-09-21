class ethernet_memory_model extends uvm_component;  // Declares this UVM testbench class.
    `uvm_component_utils(ethernet_memory_model)  // Registers this component type with the UVM factory.
    byte unsigned mem[longint unsigned];  // Declares storage used by this testbench object or operation.
    function new(string name,uvm_component parent);  // Constructs this UVM object/component and initializes its base class.
        super.new(name,parent);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
    function void write_byte(longint unsigned a,byte unsigned d);  // Declares a helper function used by this testbench class.
        mem[a]=d;  // Updates mem[a] for the current transaction or testbench state.
    endfunction  // Ends this function.
    function byte unsigned read_byte(longint unsigned a);  // Declares a helper function used by this testbench class.
        return mem.exists(a)?mem[a]:8'h00;  // Implements this testbench declaration or operation.
    endfunction  // Ends this function.
    function void write_desc(longint unsigned a,dma_descriptor_item d);  // Declares a helper function used by this testbench class.
        byte unsigned b[16];  // Declares storage used by this testbench object or operation.
        d.pack_bytes(b);  // Implements this testbench declaration or operation.
        foreach(b[i]) mem[a+i]=b[i];  // Iterates through all valid elements of this array.
    endfunction  // Ends this function.
    function void write_packet(longint unsigned a,const ref byte unsigned p[]);  // Declares a helper function used by this testbench class.
        foreach(p[i]) mem[a+i]=p[i];  // Iterates through all valid elements of this array.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
