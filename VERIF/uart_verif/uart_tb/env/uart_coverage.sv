`include "uvm_macros.svh"
import uvm_pkg::*;

// APB monitor transaction coverage for both UART instances, plus live IRQ
// and actual simultaneous serial transmit activity.  Only supported UART
// data widths (7/8/9) are counted in frame coverage.
class uart_coverage extends uvm_component;
    `uvm_component_utils(uart_coverage)
    `uvm_analysis_imp_decl(_d1)
    `uvm_analysis_imp_decl(_d2)

    uvm_analysis_imp_d1 #(uart_seq_item, uart_coverage) monitor_d1_imp;
    uvm_analysis_imp_d2 #(uart_seq_item, uart_coverage) monitor_d2_imp;

    virtual uart_if vif_d1;
    virtual uart_if vif_d2;

    localparam bit [31:0] ADDR_THR  = 32'h00;
    localparam bit [31:0] ADDR_RHR  = 32'h04;
    localparam bit [31:0] ADDR_SR   = 32'h08;
    localparam bit [31:0] ADDR_CR   = 32'h0c;
    localparam bit [31:0] ADDR_BRDR = 32'h10;
    localparam bit [31:0] ADDR_IER  = 32'h14;
    localparam bit [31:0] ADDR_ISR  = 32'h18;

    bit [3:0]  data_bits;
    bit        parity_en;
    bit [1:0]  parity_mode;
    bit        stop_2;
    bit        flow_en;
    bit [4:0]  rts_thresh;

    // 1 = D1 transmit; 2 = D2 transmit; 3 = real overlapping TX activity.
    bit [1:0] direction;
    bit d1_tx_seen, d2_tx_seen;

    bit frame_err, parity_err, overrun_err, break_err;
    bit [31:0] last_addr;
    bit last_write, last_is_d1, last_slverr;
    bit irq_d1_prev, irq_d2_prev, irq_sampled;

`ifdef VERILATOR
    covergroup frame_cg;
        option.per_instance = 1;
        cp_data_bits: coverpoint data_bits {
            bins bits_7 = {7};
            bins bits_8 = {8};
            bins bits_9 = {9};
        }
        cp_parity_en: coverpoint parity_en {
            bins disabled = {0}; bins enabled = {1};
        }
        // When parity is disabled, its mode is not exercised.
        cp_parity_mode: coverpoint parity_mode iff (parity_en) {
            bins even  = {0};
            bins odd   = {1};
            bins mark  = {2};
            bins space = {3};
        }
        cp_stop: coverpoint stop_2 {
            bins one_stop = {0}; bins two_stop = {1};
        }
        cp_flow_en: coverpoint flow_en {
            bins off = {0}; bins on = {1};
        }
        cp_rts_threshold: coverpoint rts_thresh iff (flow_en) {
            bins zero = {0};
            bins upto_14 = {[1:14]};
            //bins fourteen = {14};
            //bins above_14 = {[15:31]};
        }
        data_parity_cross: cross cp_data_bits, cp_parity_en;
        data_stop_cross:   cross cp_data_bits, cp_stop;
    endgroup

    covergroup direction_cg;
        option.per_instance = 1;
        cp_direction: coverpoint direction {
            bins d1_to_d2    = {2'd1};
            bins d2_to_d1    = {2'd2};
            bins full_duplex = {2'd3};
        }
    endgroup

    covergroup error_cg;
        option.per_instance = 1;
        cp_frame_err: coverpoint frame_err {
            bins no_error = {0}; bins error = {1};
        }
        cp_parity_err: coverpoint parity_err {
            bins no_error = {0}; bins error = {1};
        }
        cp_overrun: coverpoint overrun_err {
            bins no_error = {0}; bins error = {1};
        }
        cp_break: coverpoint break_err {
            bins no_break = {0}; bins break_detected = {1};
        }
    endgroup

    covergroup irq_cg;
        option.per_instance = 1;
        cp_irq_d1: coverpoint vif_d1.irq_o {
            bins inactive = {0}; bins active = {1};
        }
        cp_irq_d2: coverpoint vif_d2.irq_o {
            bins inactive = {0}; bins active = {1};
        }
    endgroup

    covergroup apb_cg;
        option.per_instance = 1;
        cp_addr: coverpoint last_addr {
            bins thr = {ADDR_THR};   bins rhr = {ADDR_RHR};
            bins sr = {ADDR_SR};     bins cr = {ADDR_CR};
            bins brdr = {ADDR_BRDR}; bins ier = {ADDR_IER};
            bins isr = {ADDR_ISR};
            bins unmapped = default;
        }
        cp_write: coverpoint last_write {
            bins rd = {0}; bins wr = {1};
        }
        cp_device: coverpoint last_is_d1 {
            bins d1 = {1}; bins d2 = {0};
        }
        cp_slverr: coverpoint last_slverr {
            bins ok = {0}; bins error = {1};
        }
        // Exclude directions disallowed by the UART register specification.
        addr_dir_cross: cross cp_addr, cp_write {
            ignore_bins thr_read = binsof(cp_addr.thr) && binsof(cp_write.rd);
            ignore_bins rhr_write = binsof(cp_addr.rhr) && binsof(cp_write.wr);
            ignore_bins sr_write  = binsof(cp_addr.sr)  && binsof(cp_write.wr);
            ignore_bins isr_write = binsof(cp_addr.isr) && binsof(cp_write.wr);
        }
        addr_device_cross: cross cp_addr, cp_device;
    endgroup
`endif

    function new(string name = "uart_coverage", uvm_component parent = null);
        super.new(name, parent);
        monitor_d1_imp = new("monitor_d1_imp", this);
        monitor_d2_imp = new("monitor_d2_imp", this);
`ifdef VERILATOR
        frame_cg = new();
        direction_cg = new();
        error_cg = new();
        irq_cg = new();
        apb_cg = new();
`endif
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_resource_db#(virtual uart_if)::read_by_name(
                 get_full_name(), "vif_d1", vif_d1))
            `uvm_fatal("COV_VIF_D1", "d1 virtual interface not found")
        if (!uvm_resource_db#(virtual uart_if)::read_by_name(
                 get_full_name(), "vif_d2", vif_d2))
            `uvm_fatal("COV_VIF_D2", "d2 virtual interface not found")
    endfunction

    function void decode_common(uart_seq_item tr, bit is_d1);
        if (tr == null || tr.aborted_by_reset)
            return;

        last_addr   = tr.paddr;
        last_write  = tr.pwrite;
        last_is_d1  = is_d1;
        last_slverr = tr.pslverr;
`ifdef VERILATOR
        apb_cg.sample();
`endif

        if (tr.pslverr)
            return;

        if (tr.pwrite && tr.paddr == ADDR_CR) begin
            stop_2      = tr.pwdata[5];
            parity_mode = tr.pwdata[4:3];
            parity_en   = tr.pwdata[2];
            flow_en     = tr.pwdata[8];
            rts_thresh  = tr.pwdata[13:9];
            case (tr.pwdata[7:6])
                2'b00: data_bits = 7;
                2'b01: data_bits = 8;
                2'b10: data_bits = 9;
                2'b11: data_bits = 8;
            endcase
`ifdef VERILATOR
            frame_cg.sample();
`endif
        end

        // ISR bit[7:4] = break, overrun, frame, parity; sampled on
        // completed reads before the register's read-to-clear effect.
        if (!tr.pwrite && tr.paddr == ADDR_ISR) begin
            break_err   = tr.prdata[7];
            overrun_err = tr.prdata[6];
            frame_err   = tr.prdata[5];
            parity_err  = tr.prdata[4];
`ifdef VERILATOR
            error_cg.sample();
`endif
        end

        if (tr.pwrite && tr.paddr == ADDR_THR) begin
            if (is_d1) begin
                d1_tx_seen = 1;
                direction = 2'd1;
            end else begin
                d2_tx_seen = 1;
                direction = 2'd2;
            end
`ifdef VERILATOR
            direction_cg.sample();
`endif
        end
    endfunction

    virtual function void write_d1(uart_seq_item tr);
        decode_common(tr, 1'b1);
    endfunction

    virtual function void write_d2(uart_seq_item tr);
        decode_common(tr, 1'b0);
    endfunction

    virtual task run_phase(uvm_phase phase);
        forever begin
            @(posedge vif_d1.pclk);
`ifdef VERILATOR
            // Both serial TX pins low at the same time means both sides
            // are physically transmitting overlapping UART bits.
            if (d1_tx_seen && d2_tx_seen &&
                vif_d1.tx_o === 1'b0 && vif_d2.tx_o === 1'b0) begin
                direction = 2'd3;
                direction_cg.sample();
            end

            if (!irq_sampled || vif_d1.irq_o != irq_d1_prev ||
                                vif_d2.irq_o != irq_d2_prev) begin
                irq_cg.sample();
                irq_sampled = 1;
                irq_d1_prev = vif_d1.irq_o;
                irq_d2_prev = vif_d2.irq_o;
            end
`endif
        end
    endtask

    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
`ifdef VERILATOR
        $display("\n========================================");
        $display("   UART FUNCTIONAL COVERAGE (THIS TEST)");
        $display("========================================");
        $display("  Frame coverage      : %0.2f %%", frame_cg.get_inst_coverage());
        $display("  Direction coverage  : %0.2f %%", direction_cg.get_inst_coverage());
        $display("  Error coverage      : %0.2f %%", error_cg.get_inst_coverage());
        $display("  IRQ coverage        : %0.2f %%", irq_cg.get_inst_coverage());
        $display("  APB coverage        : %0.2f %%", apb_cg.get_inst_coverage());
        $display("========================================\n");
`endif
    endfunction
endclass
