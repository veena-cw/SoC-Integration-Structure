
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

    localparam bit [31:0] ADDR_THR  = 32'h0000_0000;
    localparam bit [31:0] ADDR_RHR  = 32'h0000_0004;
    localparam bit [31:0] ADDR_SR   = 32'h0000_0008;
    localparam bit [31:0] ADDR_CR   = 32'h0000_000C;
    localparam bit [31:0] ADDR_BRDR = 32'h0000_0010;
    localparam bit [31:0] ADDR_IER  = 32'h0000_0014;
    localparam bit [31:0] ADDR_ISR  = 32'h0000_0018;

    // Kept as the old TXDATA/RXDATA names internally (rather than
    // renamed to THR/RHR) purely so the direction/APB decode logic
    // below reads the same as uart_scoreboard.sv's, which uses
    // the same names for the same two addresses.
    localparam bit [31:0] ADDR_TXDATA = ADDR_THR;
    localparam bit [31:0] ADDR_RXDATA = ADDR_RHR;

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

    // ---------------- error coverage variables ------------------
    bit frame_err;
    bit parity_err;
    bit overrun_err;
    bit break_err;

    // ---------------- APB coverage variables ----------------
    bit [31:0] last_addr;
    bit        last_write;
    bit        last_is_d1;

`ifdef VERILATOR
    // ---------------- frame covergroup ----------------
    covergroup frame_cg;
        cp_data_bits: coverpoint data_bits {
            bins bits_5 = {5};  // unreachable on this DUT -- see file header
            bins bits_6 = {6};  // unreachable on this DUT -- see file header
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
    // set together, i.e. d1 and d2 both had a THR write
    // in-flight in the same sampling window -- see
    // sample_direction()'s overlap-window handling below.
    covergroup direction_cg;
        cp_direction: coverpoint {d1_tx, d2_rx, d2_tx, d1_rx} {
            bins d1_to_d2    = {4'b1000};
            bins d2_to_d1    = {4'b0010};
            bins full_duplex = {4'b1010};
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
            bins thr  = {ADDR_THR};
            bins rhr  = {ADDR_RHR};
            bins sr   = {ADDR_SR};
            bins cr   = {ADDR_CR};
            bins brdr = {ADDR_BRDR};
            bins ier  = {ADDR_IER};
            bins isr  = {ADDR_ISR};
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

`ifdef VERILATOR
        frame_cg     = new();
        direction_cg = new();
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
`ifdef VERILATOR
        apb_cg.sample();
`endif

        // CR bits[7:6]=DATA_BITS(2-bit code), [5]=STOP2,
        // [4:3]=PARITY_MODE, [2]=PARITY_EN, [1:0]=TX_WR_EN/
        // RX_RD_EN (irrelevant to frame coverage, not decoded
        // here). Every send/receive pulse also writes CR, so this
        // re-samples the already-configured frame values on every
        // byte too -- harmless, just redundant.
        if (tr.pwrite && tr.paddr == ADDR_CR) begin
            stop_2      = tr.pwdata[5];
            parity_mode = tr.pwdata[4:3];
            parity_en   = tr.pwdata[2];
            case (tr.pwdata[7:6])
                2'b00: data_bits = 4'd7;
                2'b01: data_bits = 4'd8;
                2'b10: data_bits = 4'd9;
                2'b11: data_bits = 4'd8;
            endcase
`ifdef VERILATOR
            frame_cg.sample();
`endif
        end

        // Error flags: only ISR carries OVERRUN_ERR/BREAK_ERR (SR
        // does not -- see uart_ral_pkg.sv's sr_reg/isr_reg header
        // notes). Sampling here reads whatever ISR returned on
        // this transaction, i.e. the value observed *before* the
        // read-clears-on-read side effect takes it back to 0.
        if (!tr.pwrite && tr.paddr == ADDR_ISR) begin
            frame_err   = tr.prdata[5];
            parity_err  = tr.prdata[4];
            overrun_err = tr.prdata[6];
            break_err   = tr.prdata[7];
`ifdef VERILATOR
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
`ifdef VERILATOR
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
    // only changes at a THR/RHR event, so it gets its own
    // periodic sample rather than piggybacking on decode_common.
    virtual task run_phase(uvm_phase phase);
        forever begin
            @(posedge vif_d1.pclk);
`ifdef VERILATOR
            irq_cg.sample();
`endif
        end
    endtask

    // ---------------- report ----------------
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
`ifdef VERILATOR
        $display("\n========================================");
        $display("      FUNCTIONAL COVERAGE SUMMARY");
        $display("========================================");
        $display("  Frame coverage        : %0.2f %%", frame_cg.get_coverage());
        $display("  Direction coverage    : %0.2f %%", direction_cg.get_coverage());
        $display("  Error coverage        : %0.2f %%", error_cg.get_coverage());
        $display("  IRQ coverage          : %0.2f %%", irq_cg.get_coverage());
        $display("  APB coverage          : %0.2f %%", apb_cg.get_coverage());
        $display("----------------------------------------");
        //$display("  TOTAL COVERAGE        : %0.2f %%", $get_coverage());
        $display("========================================\n");
`else
        $display("\n[VERILATOR] Coverage collection is not supported by this tool");
`endif
    endfunction

endclass
