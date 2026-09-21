class dma_descriptor_item extends uvm_sequence_item;  // Declares this UVM testbench class.
    rand bit [63:0] buf_addr;  // Declares a randomizable field in this transaction.
    rand bit own,ioc,eor;  // Declares a randomizable field in this transaction.
    rand bit [15:0] buf_size;  // Declares a randomizable field in this transaction.
    bit valid,err_sum,crc_err,fifo_err;  // Declares storage used by this testbench object or operation.
    bit [15:0] frame_len;  // Declares storage used by this testbench object or operation.
    `uvm_object_utils(dma_descriptor_item)  // Registers this sequence-item or sequence type with the UVM factory.
    function new(string name="dma_descriptor_item");  // Constructs this UVM object/component and initializes its base class.
        super.new(name);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
    function void pack_bytes(ref byte unsigned b[16]);  // Declares a helper function used by this testbench class.
        bit [31:0] w0,w1,w2,w3;  // Declares storage used by this testbench object or operation.
        w0=buf_addr[31:0];  // Updates w0 for the current transaction or testbench state.
        w1=buf_addr[63:32];  // Updates w1 for the current transaction or testbench state.
        w2={own,ioc,eor,13'b0,buf_size};  // Updates w2 for the current transaction or testbench state.
        w3={valid,err_sum,crc_err,fifo_err,12'b0,frame_len};  // Updates w3 for the current transaction or testbench state.
        for(int i=0;i<4;i++)  // Iterates through the required beats or bytes.
        begin  // Starts this procedural block.
            b[i]=w0[i*8+:8];  // Updates b[i] for the current transaction or testbench state.
            b[4+i]=w1[i*8+:8];  // Updates b[4+i] for the current transaction or testbench state.
            b[8+i]=w2[i*8+:8];  // Updates b[8+i] for the current transaction or testbench state.
            b[12+i]=w3[i*8+:8];  // Updates b[12+i] for the current transaction or testbench state.
        end  // Ends this procedural block.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
