// ------------------------------------------------------------
// uart_apb_adapter.sv
//
// Translates between uvm_reg_bus_op (used by RAL front-door) and
// uart_seq_item (used by both the d1 and d2 agents' sequencer/
// driver). Timing-free: the driver owns IDLE->SETUP->ACCESS.
// This adapter only maps fields.
//
// One shared instance is used regardless of which device the
// RAL model's default_map is currently pointed at (see
// uart_env.connect_phase and uart_virtual_sequence's
// redirect_to_d1()/redirect_to_d2()) -- the adapter itself has
// no device-specific state, only the map's assigned sequencer
// changes.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_apb_adapter extends uvm_reg_adapter;

    `uvm_object_utils(uart_apb_adapter)

    function new(string name = "uart_apb_adapter");
        super.new(name);
        supports_byte_enable = 1;
        provides_responses   = 0;
    endfunction

    // uvm_reg_bus_op -> uart_seq_item
    virtual function uvm_sequence_item reg2bus(const ref uvm_reg_bus_op rw);
        uart_seq_item item;
        item = uart_seq_item::type_id::create("ral_bus_item");

        item.paddr  = rw.addr;
        item.pwrite = (rw.kind == UVM_WRITE);
        item.pstrb  = rw.byte_en;

        if (rw.kind == UVM_WRITE) begin
            item.pwdata = rw.data;
        end else begin
            item.pwdata = '0;
        end

        return item;
    endfunction

    // uart_seq_item -> uvm_reg_bus_op
    virtual function void bus2reg(uvm_sequence_item bus_item,
                                  ref uvm_reg_bus_op rw);
        uart_seq_item item;

        if (!$cast(item, bus_item)) begin
            `uvm_fatal("APB_ADAPTER",
                "bus2reg: could not cast bus_item to uart_seq_item")
            return;
        end

        rw.addr    = item.paddr;
        rw.byte_en = item.pstrb;
        rw.status  = item.pslverr ? UVM_NOT_OK : UVM_IS_OK;

        if (item.pwrite) begin
            rw.kind = UVM_WRITE;
            rw.data = item.pwdata;
        end else begin
            rw.kind = UVM_READ;
            rw.data = item.prdata;
        end
    endfunction

endclass
