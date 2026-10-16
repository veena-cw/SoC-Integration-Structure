// ------------------------------------------------------------
// sram_scoreboard.sv
//
// Byte-addressed reference model of the 1 MB SRAM, fed by
// axi_monitor (every completed burst) and by the SRAM-domain
// reset_monitor.
//
// Model rules (match sram_top):
//   * Beat addresses / valid byte lanes follow the AXI4 spec
//     (axi_seq_item.beat_addr / lane_mask) -- FIXED, INCR, WRAP,
//     aligned and unaligned, every AxSIZE.
//   * A write updates only lanes with WSTRB=1, only for beats
//     inside [SRAM_BASE_ADDR : SRAM_END_ADDR].
//   * Expected BRESP = DECERR if any beat is outside the window,
//     else OKAY. Expected RRESP per beat = DECERR outside the
//     window, else OKAY.
//   * Read data is compared on the valid lanes of each beat.
//   * tc_sram is built with SimInit="zeros": its array is
//     reloaded with zeros on every sram_resetn assertion, so the
//     model is cleared on SRAM reset (not on AXI reset).
//   * A write aborted by aresetn may have partly reached the
//     SRAM: its bytes become "unknown" and are not checked until
//     written again. The same applies to writes that complete
//     while sram_resetn is low (they may be lost or land after
//     release, depending on reset skew between the domains).
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

`uvm_analysis_imp_decl(_axi)
`uvm_analysis_imp_decl(_sram_rst)

class sram_scoreboard extends uvm_scoreboard;

    `uvm_component_utils(sram_scoreboard)

    uvm_analysis_imp_axi      #(axi_seq_item,   sram_scoreboard) axi_imp;
    uvm_analysis_imp_sram_rst #(reset_seq_item, sram_scoreboard) sram_rst_imp;

    bit [7:0] mem     [bit [`AXI_ADDR_WIDTH-1:0]];   // absent byte = 0
    bit       unknown [bit [`AXI_ADDR_WIDTH-1:0]];

    bit          in_sram_reset;

    int unsigned wr_count, rd_count, aborted_count;
    int unsigned beats_checked, bytes_checked;
    int unsigned decerr_count;
    int unsigned err_count;
    int unsigned max_errors_printed = 20;

    function new(string name = "sram_scoreboard", uvm_component parent = null);
        super.new(name, parent);
        axi_imp      = new("axi_imp", this);
        sram_rst_imp = new("sram_rst_imp", this);
    endfunction

    function bit in_range(bit [`AXI_ADDR_WIDTH-1:0] a);
        return (a >= `SRAM_BASE_ADDR) && (a <= `SRAM_END_ADDR);
    endfunction

    function bit [`AXI_ADDR_WIDTH-1:0] word_base(bit [`AXI_ADDR_WIDTH-1:0] a);
        return a & ~(`AXI_ADDR_WIDTH'(`AXI_STRB_WIDTH - 1));
    endfunction

    function void report_err(string id, string msg);
        err_count++;
        if (err_count <= max_errors_printed)
            `uvm_error(id, msg)
        else if (err_count == max_errors_printed + 1)
            `uvm_error(id, "Further scoreboard mismatches suppressed")
    endfunction

    // ---- SRAM-domain reset: tc_sram reloads zeros --------------
    function void write_sram_rst(reset_seq_item t);
        if (t.pulse_cycles == 0) begin
            `uvm_info(get_type_name(), "sram_resetn asserted -- memory model cleared", UVM_MEDIUM)
            mem.delete();
            unknown.delete();
            in_sram_reset = 1'b1;
        end
        else begin
            in_sram_reset = 1'b0;
        end
    endfunction

    // ---- AXI bursts ---------------------------------------------
    function void write_axi(axi_seq_item tr);
        if (tr.aborted)    mark_unknown(tr);
        else if (tr.write) check_write(tr);
        else               check_read(tr);
    endfunction

    function void mark_unknown(axi_seq_item tr);
        bit [`AXI_ADDR_WIDTH-1:0] base;
        aborted_count++;
        for (int unsigned i = 0; i <= tr.len; i++) begin
            base = word_base(tr.beat_addr(i));
            for (int l = 0; l < `AXI_STRB_WIDTH; l++)
                if (in_range(base + l)) unknown[base + l] = 1'b1;
        end
    endfunction

    function void check_write(axi_seq_item tr);
        bit [1:0]                 exp_resp;
        bit [`AXI_ADDR_WIDTH-1:0] a, base;

        wr_count++;
        exp_resp = AXI_OKAY;
        for (int unsigned i = 0; i <= tr.len; i++) begin
            a = tr.beat_addr(i);
            if ((tr.strb[i] & ~tr.lane_mask(i)) != 0)
                `uvm_warning("SB_STRB", $sformatf("beat %0d WSTRB=%h has lanes outside %h: %s",
                             i, tr.strb[i], tr.lane_mask(i), tr.convert2string()))
            if (!in_range(a)) begin
                exp_resp = AXI_DECERR;
            end
            else begin
                base = word_base(a);
                for (int l = 0; l < `AXI_STRB_WIDTH; l++) begin
                    if (tr.strb[i][l]) begin
                        if (in_sram_reset) begin
                            unknown[base + l] = 1'b1;
                        end
                        else begin
                            mem[base + l] = tr.data[i][8*l +: 8];
                            if (unknown.exists(base + l)) unknown.delete(base + l);
                        end
                    end
                end
            end
        end

        if (exp_resp == AXI_DECERR) decerr_count++;
        if (tr.bresp != exp_resp)
            report_err("SB_BRESP", $sformatf("BRESP=%0d expected %0d: %s",
                                             tr.bresp, exp_resp, tr.convert2string()));
    endfunction

    function void check_read(axi_seq_item tr);
        bit [1:0]                 exp_resp;
        bit [`AXI_ADDR_WIDTH-1:0] a;

        rd_count++;
        for (int unsigned i = 0; i <= tr.len; i++) begin
            a        = tr.beat_addr(i);
            exp_resp = in_range(a) ? AXI_OKAY : AXI_DECERR;
            if (exp_resp == AXI_DECERR) decerr_count++;

            if (tr.rresp[i] != exp_resp)
                report_err("SB_RRESP", $sformatf("beat %0d addr=0x%08h RRESP=%0d expected %0d: %s",
                                                 i, a, tr.rresp[i], exp_resp, tr.convert2string()));
            if (exp_resp == AXI_OKAY) check_beat(tr, i, a);
        end
    endfunction

    function void check_beat(axi_seq_item tr, int unsigned i, bit [`AXI_ADDR_WIDTH-1:0] a);
        bit [`AXI_ADDR_WIDTH-1:0] base;
        bit [`AXI_STRB_WIDTH-1:0] mask;
        bit [7:0]                 exp_b, act_b;
        int unsigned              bad_lanes;
        string                    detail;
        begin
            base      = word_base(a);
            mask      = tr.lane_mask(i);
            bad_lanes = 0;
            detail    = "";
            for (int l = 0; l < `AXI_STRB_WIDTH; l++) begin
                if (mask[l] && !unknown.exists(base + l)) begin
                    exp_b = mem.exists(base + l) ? mem[base + l] : 8'h00;
                    act_b = tr.data[i][8*l +: 8];
                    bytes_checked++;
                    if (act_b !== exp_b) begin
                        bad_lanes++;
                        detail = {detail, $sformatf(" [lane%0d @0x%08h exp=%02h act=%02h]",
                                                    l, base + l, exp_b, act_b)};
                    end
                end
            end
            beats_checked++;
            if (bad_lanes)
                report_err("SB_RDATA", $sformatf("beat %0d addr=0x%08h: %0d byte(s) wrong%s | %s",
                                                 i, a, bad_lanes, detail, tr.convert2string()));
        end
    endfunction

    function void report_phase(uvm_phase phase);
        `uvm_info(get_type_name(), $sformatf({"\n",
            "---------------- SRAM scoreboard ----------------\n",
            "  write bursts checked : %0d\n",
            "  read bursts checked  : %0d\n",
            "  read beats checked   : %0d\n",
            "  read bytes compared  : %0d\n",
            "  DECERR responses     : %0d\n",
            "  aborted by reset     : %0d\n",
            "  mismatches           : %0d\n",
            "-------------------------------------------------"},
            wr_count, rd_count, beats_checked, bytes_checked,
            decerr_count, aborted_count, err_count), UVM_NONE)
    endfunction

endclass
