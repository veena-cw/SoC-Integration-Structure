`include "uvm_macros.svh"
import uvm_pkg::*;

// ------------------------------------------------------------
// uart_apb_write_sequence
//
// One raw APB write, no RAL involved. This is how d2 (which has
// no RAL connection) configures its registers and sends TXDATA
// bytes; d1 normally goes through the RAL model instead, but
// can use this directly for any raw/backdoor-style poking.
// ------------------------------------------------------------

class uart_apb_write_sequence extends uart_base_sequence;

    `uvm_object_utils(uart_apb_write_sequence)

    rand bit [31:0] addr;
    rand bit [31:0] data;
    rand bit [3:0]  strb;

    function new(string name = "uart_apb_write_sequence");
        super.new(name);
        strb = 4'hF;
    endfunction

    virtual task body();

        uart_seq_item req;

        req = uart_seq_item::type_id::create("req");

        start_item(req);

        req.paddr  = addr;
        req.pwdata = data;
        req.pwrite = 1'b1;
        req.pstrb  = strb;

        finish_item(req);

    endtask

endclass
