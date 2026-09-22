// ------------------------------------------------------------
// uart_monitor.sv
//
// Passively observes completed APB transfers on this device's
// uart_if (PSEL && PENABLE && PREADY sampled at the clock edge)
// and reports them on analysis_port. Used for both d1 and d2.
//
// Two concurrent tasks, as usual for this IP, split by
// direction so together they cover every transfer exactly
// once (a transfer is either a write or a read, never both):
//
//   * tx_monitor_task -- watches completed WRITEs. The write
//     that matters for UART content is TXDATA (0x0C) -- "byte
//     transmitted" -- but this task reports every write (e.g.
//     DIVISOR/FRAME/FLOW/IRQ/CLEAR too) so the RAL predictor on
//     d1 can keep its mirror in sync for the whole register
//     file, not just the data FIFOs.
//
//   * rx_monitor_task -- watches completed READs, the same way.
//     The read that matters for UART content is RXDATA (0x10)
//     -- "byte received".
//
// Both publish the same uart_seq_item shape on the one
// analysis_port; consumers (uart_scoreboard, uart_coverage,
// the RAL predictor on d1) tell transfers apart by paddr/pwrite,
// exactly as they would for any other APB transfer.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_monitor extends uvm_monitor;

    `uvm_component_utils(uart_monitor)

    virtual uart_if   vif;
    virtual reset_if  rst_vif;

    uvm_analysis_port #(uart_seq_item) analysis_port;

    localparam bit [31:0] ADDR_TXDATA = 32'h0000_000C;
    localparam bit [31:0] ADDR_RXDATA = 32'h0000_0010;

    function new(string name = "uart_monitor", uvm_component parent = null);
        super.new(name, parent);
        analysis_port = new("analysis_port", this);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_resource_db#(virtual uart_if)::read_by_name(
                get_full_name(), "vif", vif))
            `uvm_fatal(get_type_name(), "uart_if vif not set")

        if (!uvm_resource_db#(virtual reset_if)::read_by_name(
                get_full_name(), "rst_vif", rst_vif))
            `uvm_fatal(get_type_name(), "reset_if rst_vif not set")
    endfunction

    task run_phase(uvm_phase phase);
        wait (rst_vif.rst_n === 1'b1);
        @(posedge vif.pclk);

        fork
            tx_monitor_task();
            rx_monitor_task();
        join
    endtask

    // ---------- writes (TXDATA = "byte transmitted", plus every
    // other register write, for the RAL mirror) ----------
    task tx_monitor_task();

        uart_seq_item item;

        forever begin
            @(posedge vif.pclk);

            if (rst_vif.rst_n === 1'b0) continue;
            if (!(vif.psel && vif.penable && vif.pready)) continue;
            if (!vif.pwrite) continue;

            item = uart_seq_item::type_id::create("tx_obs");
            item.paddr   = vif.paddr;
            item.pwrite  = 1'b1;
            item.pwdata  = vif.pwdata;
            item.pstrb   = vif.pstrb;
            item.pslverr = vif.pslverr;

            if (item.paddr == ADDR_TXDATA)
                `uvm_info(get_type_name(),
                    $sformatf("TX byte observed: data=0x%03h",
                              item.pwdata[8:0]),
                    UVM_HIGH)

            analysis_port.write(item);
        end

    endtask

    // ---------- reads (RXDATA = "byte received", plus every
    // other register read, for the RAL mirror) ----------
    task rx_monitor_task();

        uart_seq_item item;

        forever begin
            @(posedge vif.pclk);

            if (rst_vif.rst_n === 1'b0) continue;
            if (!(vif.psel && vif.penable && vif.pready)) continue;
            if (vif.pwrite) continue;

            item = uart_seq_item::type_id::create("rx_obs");
            item.paddr   = vif.paddr;
            item.pwrite  = 1'b0;
            item.prdata  = vif.prdata;
            item.pslverr = vif.pslverr;

            if (item.paddr == ADDR_RXDATA)
                `uvm_info(get_type_name(),
                    $sformatf("RX byte observed: data=0x%03h",
                              item.prdata[8:0]),
                    UVM_HIGH)

            analysis_port.write(item);
        end

    endtask

endclass
