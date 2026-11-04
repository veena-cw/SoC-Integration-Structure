class eth_axil_reg_adapter extends uvm_reg_adapter;
    `uvm_object_utils(eth_axil_reg_adapter)

    function new(string name = "eth_axil_reg_adapter");
        super.new(name);
        supports_byte_enable = 1; // CSR writes support AXI-Lite byte strobes.
    endfunction

    function uvm_sequence_item reg2bus(const ref uvm_reg_bus_op rw);
        eth_axil_item axil_transaction;

        axil_transaction =
            eth_axil_item::type_id::create("axil_transaction");

        axil_transaction.write = (rw.kind == UVM_WRITE);
        axil_transaction.addr  = rw.addr;
        axil_transaction.data  = rw.data;
        axil_transaction.strb  = rw.byte_en;

        return axil_transaction;
    endfunction

    function void bus2reg(uvm_sequence_item bus_item,
                          ref uvm_reg_bus_op rw);
        eth_axil_item axil_transaction;

        if (!$cast(axil_transaction, bus_item))
            return;

        rw.kind   = axil_transaction.write ? UVM_WRITE : UVM_READ;
        rw.addr   = axil_transaction.addr;
        rw.data   = axil_transaction.data;
        rw.status = (axil_transaction.resp == 2'b00) ?
                    UVM_IS_OK : UVM_NOT_OK;
    endfunction

endclass
