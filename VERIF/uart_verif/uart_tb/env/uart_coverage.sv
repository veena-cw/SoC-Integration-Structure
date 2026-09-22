// ------------------------------------------------------------
// uart_coverage.sv
//
// Both DUT instances are apb_uart_top now, so unlike the older
// pin-level coverage model, everything here is derived from
// observed APB transfers (fed the same way as uart_scoreboard,
// from both d1_agent.monitor and d2_agent.monitor) plus a live
// poll of each device's irq_o pin, which IS still a real
// top-level port on both devices.
//
// xvlog notes carried over from the reference TB this was
// adapted from: all declarations at the top of their class or
// task, no decl-with-initializer inside a procedural block, no
// variable-dimension parameters.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_coverage extends uvm_component;

    `uvm_component_utils(uart_coverage)

    // ---------------- virtual interfaces (irq_o only) --------
    virtual uart_if vif_d1;
    virtual uart_if vif_d2;

    // ---------------- analysis imps ----------------
    `uvm_analysis_imp_decl(_d1)
    `uvm_analysis_imp_decl(_d2)

    uvm_analysis_imp_d1 #(uart_seq_item, uart_coverage) monitor_d1_imp;
    uvm_analysis_imp_d2 #(uart_seq_item, uart_coverage) monitor_d2_imp;

    localparam bit [31:0] ADDR_DIVISOR = 32'h0000_0000;
    localparam bit [31:0] ADDR_FRAME   = 32'h0000_0004;
    localparam bit [31:0] ADDR_FLOW    = 32'h0000_0008;
    localparam bit [31:0] ADDR_TXDATA  = 32'h0000_000C;
    localparam bit [31:0] ADDR_RXDATA  = 32'h0000_0010;
    localparam bit [31:0] ADDR_STATUS  = 32'h0000_0014;
    localparam bit [31:0] ADDR_IRQ     = 32'h0000_0018;
    localparam bit [31:0] ADDR_CLEAR   = 32'h0000_001C;

    // ---------------- frame coverage variables ----------------
    bit [3:0] data_bits;
    bit       parity_en;
    bit [1:0] parity_mode;
    bit       stop_2;

    // ---------------- direction coverage variables ------------
    bit d1_tx;
    bit d1_rx;
    bit d2_tx;
    bit d2_rx;

    // ---------------- flow coverage variable -------------------
    bit flow_en;

    // ---------------- error coverage variables ------------------
    bit frame_err;
    bit parity_err;
    bit overrun_err;
    bit break_err;

    // ---------------- APB coverage variables ----------------
    bit [31:0] last_addr;
    bit        last_write;
    bit        last_is_d1;

`ifndef VERILATOR
    // ---------------- frame covergroup ----------------
    covergroup frame_cg;
        cp_data_bits: coverpoint data_bits {
            bins bits_5 = {5};
            bins bits_6 = {6};
            bins bits_7 = {7};
            bins bits_8 = {8};
            bins bits_9 = {9};
        }
        cp_parity_en: coverpoint parity_en {
            bins disabled = {0};
            bins enabled  = {1};
        }
        cp_parity_mode: coverpoint parity_mode {
            bins none  = {0};
            bins even  = {1};
            bins odd   = {2};
            bins mark  = {3};
        }
        cp_stop: coverpoint stop_2 {
            bins one_stop = {0};
            bins two_stop = {1};
        }
        data_parity_cross: cross cp_data_bits, cp_parity_en;
        data_stop_cross:   cross cp_data_bits, cp_stop;
    endgroup

    // ---------------- direction covergroup ----------------
    // d1_to_d2 / d2_to_d1: only one side transmitted since the
    // last sample. full_duplex: both sides' TX flags were seen
    // set together, i.e. d1 and d2 both had a TXDATA write
    // in-flight in the same sampling window -- see
    // sample_direction()'s overlap-window handling below.
    covergroup direction_cg;
        cp_direction: coverpoint {d1_tx, d2_rx, d2_tx, d1_rx} {
            bins d1_to_d2    = {4'b1000};
            bins d2_to_d1    = {4'b0010};
            bins full_duplex = {4'b1010};
        }
    endgroup

    // ---------------- flow-control covergroup ----------------
    covergroup flow_cg;
        cp_flow_enable: coverpoint flow_en {
            bins disabled = {0};
            bins enabled  = {1};
        }
    endgroup

    // ---------------- error covergroup ----------------
    covergroup error_cg;
        cp_frame_err:  coverpoint frame_err   { bins no_error = {0}; bins error = {1}; }
        cp_parity_err: coverpoint parity_err  { bins no_error = {0}; bins error = {1}; }
        cp_overrun:    coverpoint overrun_err { bins no_error = {0}; bins error = {1}; }
        cp_break:      coverpoint break_err   { bins no_break = {0}; bins break_detected = {1}; }
    endgroup

    // ---------------- IRQ covergroup ----------------
    covergroup irq_cg;
        cp_irq_d1: coverpoint vif_d1.irq_o { bins inactive = {0}; bins active = {1}; }
        cp_irq_d2: coverpoint vif_d2.irq_o { bins inactive = {0}; bins active = {1}; }
    endgroup

    // ---------------- APB covergroup ----------------
    covergroup apb_cg;
        cp_addr: coverpoint last_addr {
            bins divisor = {ADDR_DIVISOR};
            bins frame   = {ADDR_FRAME};
            bins flow    = {ADDR_FLOW};
            bins txdata  = {ADDR_TXDATA};
            bins rxdata  = {ADDR_RXDATA};
            bins status  = {ADDR_STATUS};
            bins irq     = {ADDR_IRQ};
            bins clear   = {ADDR_CLEAR};
        }
        cp_write: coverpoint last_write {
            bins rd = {0};
            bins wr = {1};
        }
        cp_device: coverpoint last_is_d1 {
            bins d1 = {1};
            bins d2 = {0};
        }
        addr_dir_cross:    cross cp_addr, cp_write;
        addr_device_cross: cross cp_addr, cp_device;
    endgroup
`endif

    // ---------------- constructor ----------------
    function new(string name = "uart_coverage", uvm_component parent = null);
        super.new(name, parent);

        monitor_d1_imp = new("monitor_d1_imp", this);
        monitor_d2_imp = new("monitor_d2_imp", this);

`ifndef VERILATOR
        frame_cg     = new();
        direction_cg = new();
        flow_cg      = new();
        error_cg     = new();
        irq_cg       = new();
        apb_cg       = new();
`endif
    endfunction

    // ---------------- build ----------------
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_resource_db#(virtual uart_if)::read_by_name(
                get_full_name(), "vif_d1", vif_d1))
            `uvm_fatal("COV_VIF_D1", "d1 virtual interface not found")

        if (!uvm_resource_db#(virtual uart_if)::read_by_name(
                get_full_name(), "vif_d2", vif_d2))
            `uvm_fatal("COV_VIF_D2", "d2 virtual interface not found")
    endfunction

    // ---------------- shared decode ----------------
    // A function, not a task: it has no blocking statements (no
    // @, #, or wait -- just assignments and covergroup .sample()
    // calls, which are themselves functions). It has to be a
    // function because write_d1/write_d2 below are
    // uvm_analysis_imp write() callbacks, and that signature is
    // fixed as a function -- a function cannot call a task.
    function void decode_common(uart_seq_item tr, bit is_d1);

        last_addr  = tr.paddr;
        last_write = tr.pwrite;
        last_is_d1 = is_d1;
`ifndef VERILATOR
        apb_cg.sample();
`endif

        if (tr.pwrite && tr.paddr == ADDR_FRAME) begin
            stop_2      = tr.pwdata[7];
            parity_mode = tr.pwdata[6:5];
            parity_en   = tr.pwdata[4];
            data_bits   = tr.pwdata[3:0];
`ifndef VERILATOR
            frame_cg.sample();
`endif
        end

        if (tr.pwrite && tr.paddr == ADDR_FLOW) begin
            flow_en = tr.pwdata[0];
`ifndef VERILATOR
            flow_cg.sample();
`endif
        end

        if (!tr.pwrite && tr.paddr == ADDR_STATUS) begin
            frame_err   = tr.prdata[14];
            parity_err  = tr.prdata[15];
            overrun_err = tr.prdata[16];
            break_err   = tr.prdata[17];
`ifndef VERILATOR
            error_cg.sample();
`endif
        end

        if (tr.pwrite && tr.paddr == ADDR_TXDATA) begin
            if (is_d1) d1_tx = 1'b1; else d2_tx = 1'b1;
        end
        if (!tr.pwrite && tr.paddr == ADDR_RXDATA) begin
            if (is_d1) d1_rx = 1'b1; else d2_rx = 1'b1;
        end

        if (tr.paddr == ADDR_TXDATA || tr.paddr == ADDR_RXDATA) begin
`ifndef VERILATOR
            direction_cg.sample();
`endif
            d1_tx = 1'b0;
            d1_rx = 1'b0;
            d2_tx = 1'b0;
            d2_rx = 1'b0;
        end

    endfunction

    // ---------------- monitor d1 ----------------
    virtual function void write_d1(uart_seq_item tr);
        decode_common(tr, 1'b1);
    endfunction

    // ---------------- monitor d2 ----------------
    virtual function void write_d2(uart_seq_item tr);
        decode_common(tr, 1'b0);
    endfunction

    // ---------------- ongoing IRQ sampling ----------------
    // irq_o is a live pin on both devices, not something that
    // only changes at a TXDATA/RXDATA event, so it gets its own
    // periodic sample rather than piggybacking on decode_common.
    virtual task run_phase(uvm_phase phase);
        forever begin
            @(posedge vif_d1.pclk);
`ifndef VERILATOR
            irq_cg.sample();
`endif
        end
    endtask

    // ---------------- report ----------------
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
`ifndef VERILATOR
        $display("\n========================================");
        $display("      FUNCTIONAL COVERAGE SUMMARY");
        $display("========================================");
        $display("  Frame coverage        : %0.2f %%", frame_cg.get_coverage());
        $display("  Direction coverage    : %0.2f %%", direction_cg.get_coverage());
        $display("  Error coverage        : %0.2f %%", error_cg.get_coverage());
        $display("  Flow-control coverage : %0.2f %%", flow_cg.get_coverage());
        $display("  IRQ coverage          : %0.2f %%", irq_cg.get_coverage());
        $display("  APB coverage          : %0.2f %%", apb_cg.get_coverage());
        $display("----------------------------------------");
        $display("  TOTAL COVERAGE        : %0.2f %%", $get_coverage());
        $display("========================================\n");
`else
        $display("\n[VERILATOR] Coverage collection is not supported by this tool");
`endif
    endfunction

endclass
