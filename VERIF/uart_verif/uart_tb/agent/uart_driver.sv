// ------------------------------------------------------------
// uart_driver.sv
//
// Drives one APB setup+access transfer per item onto a device's
// uart_if (d1 or d2 -- same class, different vif instance).
//
// Reset handshake: checked before SETUP, before ACCESS, and on
// every cycle while waiting for PREADY. If reset drops mid
// transfer the driver parks the bus back at idle and marks the
// item aborted_by_reset rather than reporting a completion that
// the DUT never actually latched -- see the header note in
// uart_seq_item.sv. This is what lets other agents keep issuing
// stimulus while reset_agent asserts reset: nothing is lost,
// the transfer simply doesn't land until the DUT can accept it.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_driver extends uvm_driver #(uart_seq_item);

    `uvm_component_utils(uart_driver)

    virtual uart_if   vif;
    virtual reset_if  rst_vif;

    function new(string name = "uart_driver", uvm_component parent = null);
        super.new(name, parent);
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

    // Park the APB master to idle / reset state.
    task reset_signals();
        vif.psel    <= 1'b0;
        vif.penable <= 1'b0;
        vif.pwrite  <= 1'b0;
        vif.paddr   <= '0;
        vif.pwdata  <= '0;
        vif.pstrb   <= '0;
    endtask

    task run_phase(uvm_phase phase);
        reset_signals();

        // ---- Reset handshake ----
        wait (rst_vif.rst_n === 1'b1);
        @(posedge vif.pclk);

        forever begin
            seq_item_port.get_next_item(req);
            drive_one(req);
            seq_item_port.item_done();
        end
    endtask

    task drive_one(uart_seq_item tr);

        tr.aborted_by_reset = 1'b0;

        // Park at IDLE
        reset_signals();
        @(posedge vif.pclk);

        if (rst_vif.rst_n === 1'b0) begin
            wait (rst_vif.rst_n === 1'b1);
            tr.aborted_by_reset = 1'b1;
            return;
        end

        // -------- SETUP --------
        vif.paddr   <= tr.paddr;
        vif.pwrite  <= tr.pwrite;
        vif.pwdata  <= tr.pwrite ? tr.pwdata : '0;
        vif.pstrb   <= tr.pstrb;
        vif.psel    <= 1'b1;
        vif.penable <= 1'b0;
        @(posedge vif.pclk);

        if (rst_vif.rst_n === 1'b0) begin
            reset_signals();
            wait (rst_vif.rst_n === 1'b1);
            tr.aborted_by_reset = 1'b1;
            return;
        end

        // -------- ACCESS --------
        vif.penable <= 1'b1;
        @(posedge vif.pclk);

        // Wait for PREADY (combinational in this DUT -> 1 on first
        // ACCESS edge), re-checking reset every cycle we wait.
        while (vif.pready !== 1'b1) begin
            if (rst_vif.rst_n === 1'b0) begin
                reset_signals();
                wait (rst_vif.rst_n === 1'b1);
                tr.aborted_by_reset = 1'b1;
                return;
            end
            @(posedge vif.pclk);
        end

        // Sample DUT outputs at the ACCESS edge
        tr.prdata      = vif.prdata;
        tr.pslverr     = vif.pslverr;
        tr.pready_seen = 1'b1;

        // Deassert immediately -- PSEL/PENABLE go low on this
        // edge's NBA, so the DUT sees exactly one PSEL & PENABLE
        // cycle for this transfer.
        vif.psel    <= 1'b0;
        vif.penable <= 1'b0;
        vif.pwrite  <= 1'b0;
        vif.paddr   <= '0;
        vif.pwdata  <= '0;
        vif.pstrb   <= '0;

    endtask

endclass
