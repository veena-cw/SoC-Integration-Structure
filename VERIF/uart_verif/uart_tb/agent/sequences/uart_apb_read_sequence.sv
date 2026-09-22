`include "uvm_macros.svh"
import uvm_pkg::*;

// ------------------------------------------------------------
// uart_apb_read_sequence
//
// One raw APB read, no RAL involved -- see uart_apb_write_sequence
// for why d2 uses these directly.
// ------------------------------------------------------------

class uart_apb_read_sequence extends uart_base_sequence;

    `uvm_object_utils(uart_apb_read_sequence)

    rand bit [31:0] addr;
         bit [31:0] read_data;

    function new(string name = "uart_apb_read_sequence");
        super.new(name);
    endfunction

    virtual task body();

        uart_seq_item req;

        req = uart_seq_item::type_id::create("req");

        start_item(req);

        req.paddr  = addr;
        req.pwdata = '0;
        req.pwrite = 1'b0;
        req.pstrb  = 4'hF;

        finish_item(req);

        read_data = req.prdata;

        `uvm_info(
            "APB_READ",
            $sformatf(
                "APB READ addr=0x%08h data=0x%08h",
                req.paddr,
                req.prdata
            ),
            UVM_LOW
        )

    endtask

endclass
