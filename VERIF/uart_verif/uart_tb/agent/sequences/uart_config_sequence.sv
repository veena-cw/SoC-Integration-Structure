`include "uvm_macros.svh"
import uvm_pkg::*;

// ------------------------------------------------------------
// uart_config_sequence
//
// Configures DIVISOR / FRAME / FLOW / IRQ via raw APB writes
// (no RAL). This is d2's configuration path, since d2 has no
// RAL connection; d1 normally configures the same registers
// through uart_ral_sequences instead.
//
// Register bit layouts here must stay in lockstep with
// rtl/apb_uart_top.sv's PADDR case statements -- see that
// file's header comment for the address map, and
// uart_ral_pkg.sv for the same layout expressed as RAL fields.
// ------------------------------------------------------------

class uart_config_sequence extends uart_base_sequence;

    `uvm_object_utils(uart_config_sequence)

    localparam bit [31:0] ADDR_DIVISOR = 32'h0000_0000;
    localparam bit [31:0] ADDR_FRAME   = 32'h0000_0004;
    localparam bit [31:0] ADDR_FLOW    = 32'h0000_0008;
    localparam bit [31:0] ADDR_IRQ     = 32'h0000_0018;

    rand bit [15:0] divisor;
    rand bit [3:0]  data_bits;
    rand bit        parity_en;
    rand bit [1:0]  parity_mode;
    rand bit        stop_2;
    rand bit        flow_en;
    rand bit [4:0]  rts_thresh;

    rand bit rx_irq_en;
    rand bit rx_full_irq_en;
    rand bit tx_empty_irq_en;
    rand bit err_irq_en;

    constraint valid_data_bits_c   { data_bits   inside {[5:9]}; }
    constraint valid_parity_mode_c { parity_mode inside {[0:3]}; }

    function new(string name = "uart_config_sequence");
        super.new(name);
        divisor    = 16'd53;
        data_bits  = 4'd9;
        rts_thresh = 5'd8;
    endfunction

    virtual task body();

        uart_seq_item req;

        // ---- DIVISOR ----
        req = uart_seq_item::type_id::create("req");
        start_item(req);
        req.paddr  = ADDR_DIVISOR;
        req.pwdata = {16'h0, divisor};
        req.pwrite = 1'b1;
        req.pstrb  = 4'hF;
        finish_item(req);

        // ---- FRAME ----
        req = uart_seq_item::type_id::create("req");
        start_item(req);
        req.paddr  = ADDR_FRAME;
        req.pwdata = {24'h0, stop_2, parity_mode, parity_en, data_bits};
        req.pwrite = 1'b1;
        req.pstrb  = 4'hF;
        finish_item(req);

        // ---- FLOW ----
        req = uart_seq_item::type_id::create("req");
        start_item(req);
        req.paddr  = ADDR_FLOW;
        req.pwdata = {19'h0, rts_thresh, 7'h0, flow_en};
        req.pwrite = 1'b1;
        req.pstrb  = 4'hF;
        finish_item(req);

        // ---- IRQ ----
        req = uart_seq_item::type_id::create("req");
        start_item(req);
        req.paddr  = ADDR_IRQ;
        req.pwdata = {28'h0, err_irq_en, tx_empty_irq_en,
                      rx_full_irq_en, rx_irq_en};
        req.pwrite = 1'b1;
        req.pstrb  = 4'hF;
        finish_item(req);

    endtask

endclass
