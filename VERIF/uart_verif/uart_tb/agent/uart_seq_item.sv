// ------------------------------------------------------------
// uart_seq_item.sv
//
// One APB transfer against a device's apb_uart_top register
// port. Used directly by uart_driver/uart_monitor for both the
// d1 and d2 agent instances, and as the bus-side item the RAL
// adapter converts uvm_reg_bus_op to/from (d1 only).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_seq_item extends uvm_sequence_item;

    `uvm_object_utils(uart_seq_item)

    rand bit [31:0] paddr;
    rand bit [31:0] pwdata;
    rand bit        pwrite;
    rand bit [3:0]  pstrb;

    // Sampled during ACCESS
    bit [31:0] prdata;
    bit        pslverr;
    bit        pready_seen;

    // Set by the driver if reset hit mid-transfer -- see
    // uart_driver.drive_one(). Consumers (scoreboard, RAL
    // predictor feed) must skip a transaction with this set,
    // since its data was never actually latched by the DUT.
    bit        aborted_by_reset;

    function new(string name = "uart_seq_item");
        super.new(name);
        pstrb = 4'hF;
    endfunction

    function string convert2string();
        return $sformatf("%s addr=0x%08h data=0x%08h strb=0x%0h%s",
                         pwrite ? "WR" : "RD",
                         paddr, pwrite ? pwdata : prdata, pstrb,
                         aborted_by_reset ? " [ABORTED_BY_RESET]" : "");
    endfunction

endclass
