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
//     Reads aborted by reset are only counted.
//   * Exclusive accesses (AxLOCK=1, only when the agent config
//     enables them), A7.2:
//       cfg.slave_exclusive=0 (sram_top): the slave has no
//         exclusive monitor -> OKAY, the write updates memory.
//       cfg.slave_exclusive=1: per-ID exclusive monitor. Exclusive
//         read -> EXOKAY and arms the monitor for its ID; exclusive
//         write -> EXOKAY + memory update only if the monitor for
//         its ID is armed with the same addr/len/size and no write
//         to those bytes happened in between, else OKAY and memory
//         unchanged. Any successful write clears overlapping
//         monitors.
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

    axi_agent_config cfg;   // set by sram_env (exclusive-access model)

    axi_seq_item excl_mon [bit [`AXI_ID_WIDTH-1:0]];   // armed exclusive reads

    bit [7:0] mem     [bit [`AXI_ADDR_WIDTH-1:0]];   // absent byte = 0
    bit       unknown [bit [`AXI_ADDR_WIDTH-1:0]];

    bit          in_sram_reset;

    int unsigned wr_count, rd_count, aborted_count;
    int unsigned beats_checked, bytes_checked;
    int unsigned decerr_count;
    int unsigned excl_ok_count, excl_fail_count, aborted_rd_count;
    int unsigned err_count;
    int unsigned max_errors_printed = 20;

    // UVM constructor; creates both analysis imps.
    function new(string name = "sram_scoreboard", uvm_component parent = null);
        super.new(name, parent);
        axi_imp      = new("axi_imp", this);
        sram_rst_imp = new("sram_rst_imp", this);
    endfunction

    // 1 if byte address a is inside the 1 MB SRAM window.
    function bit in_range(bit [`AXI_ADDR_WIDTH-1:0] a);
        return (a >= `SRAM_BASE_ADDR) && (a <= `SRAM_END_ADDR);
    endfunction

    // Address of the 128-bit word that contains byte a.
    function bit [`AXI_ADDR_WIDTH-1:0] word_base(bit [`AXI_ADDR_WIDTH-1:0] a);
        return a & ~(`AXI_ADDR_WIDTH'(`AXI_STRB_WIDTH - 1));
    endfunction

    // Count a mismatch and print it, up to max_errors_printed.
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
            excl_mon.delete();
            in_sram_reset = 1'b1;
        end
        else begin
            in_sram_reset = 1'b0;
        end
    endfunction

    // ---- AXI bursts ---------------------------------------------
    function void write_axi(axi_seq_item tr);
        if (tr.aborted && tr.write) mark_unknown(tr);
        else if (tr.aborted)        aborted_rd_count++;
        else if (tr.write)          check_write(tr);
        else                        check_read(tr);
    endfunction

    // 1 if the slave is modelled with an exclusive monitor.
    function bit slave_exclusive();
        return (cfg != null) && cfg.slave_exclusive;
    endfunction

    // 1 if every beat of the burst is inside the SRAM window.
    function bit burst_in_range(axi_seq_item tr);
        for (int unsigned i = 0; i <= tr.len; i++)
            if (!in_range(tr.beat_addr(i))) return 1'b0;
        return 1'b1;
    endfunction

    // A completed write to these bytes disarms every overlapping monitor.
    function void clear_excl_monitors(axi_seq_item tr);
        bit [`AXI_ID_WIDTH-1:0] ids[$];
        foreach (excl_mon[id])
            if (excl_mon[id].overlaps(tr)) ids.push_back(id);
        foreach (ids[i]) excl_mon.delete(ids[i]);
    endfunction

    // Exclusive write outcome against the armed monitor of its ID.
    function bit excl_write_passes(axi_seq_item tr);
        axi_seq_item r;
        if (!excl_mon.exists(tr.id)) return 1'b0;
        r = excl_mon[tr.id];
        return r.addr == tr.addr && r.len == tr.len && r.size == tr.size && r.burst == tr.burst;
    endfunction

    // Write aborted by reset: its bytes may or may not be in the SRAM, so
    // stop checking them until they are written again.
    function void mark_unknown(axi_seq_item tr);
        bit [`AXI_ADDR_WIDTH-1:0] base;
        aborted_count++;
        clear_excl_monitors(tr);
        for (int unsigned i = 0; i <= tr.len; i++) begin
            base = word_base(tr.beat_addr(i));
            for (int l = 0; l < `AXI_STRB_WIDTH; l++)
                if (in_range(base + l)) unknown[base + l] = 1'b1;
        end
    endfunction

    // Apply a completed write to the model (only strobed, in-range bytes;
    // exclusive rules) and check BRESP.
    function void check_write(axi_seq_item tr);
        bit [1:0]                 exp_resp;
        bit [`AXI_ADDR_WIDTH-1:0] a, base;

        bit                       update;

        wr_count++;
        exp_resp = AXI_OKAY;
        update   = 1'b1;
        if (tr.is_exclusive() && slave_exclusive() && burst_in_range(tr)) begin
            if (excl_write_passes(tr)) begin
                exp_resp = AXI_EXOKAY;
                excl_ok_count++;
            end
            else begin
                update = 1'b0;      // failed exclusive write: memory unchanged
                excl_fail_count++;
            end
            excl_mon.delete(tr.id);
        end
        if (update) clear_excl_monitors(tr);

        // One entry per W beat the slave actually accepted (normally
        // AWLEN+1; fewer / more when WLAST was early / late, which the
        // monitor reports as AXI_WLAST). The model writes exactly those
        // beats, at the burst's beat addresses.
        for (int unsigned i = 0; i < tr.data.size(); i++) begin
            a = tr.beat_addr(i);
            if (!in_range(a)) begin
                exp_resp = AXI_DECERR;
            end
            else if (update) begin
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

    // Check RRESP for every beat and the data of every in-range beat.
    function void check_read(axi_seq_item tr);
        bit [1:0]                 exp_resp;
        bit [`AXI_ADDR_WIDTH-1:0] a;

        bit [1:0]                 ok_resp;

        rd_count++;
        ok_resp = AXI_OKAY;
        if (tr.is_exclusive() && slave_exclusive() && burst_in_range(tr)) begin
            ok_resp = AXI_EXOKAY;
            excl_mon[tr.id] = tr;
        end
        for (int unsigned i = 0; i <= tr.len; i++) begin
            a        = tr.beat_addr(i);
            exp_resp = in_range(a) ? ok_resp : AXI_DECERR;
            if (exp_resp == AXI_DECERR) decerr_count++;

            if (tr.rresp[i] != exp_resp)
                report_err("SB_RRESP", $sformatf("beat %0d addr=0x%08h RRESP=%0d expected %0d: %s",
                                                 i, a, tr.rresp[i], exp_resp, tr.convert2string()));
            if (exp_resp != AXI_DECERR) check_beat(tr, i, a);
        end
    endfunction

    // Compare the valid byte lanes of read beat i against the model.
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

    // Print the scoreboard totals.
    function void report_phase(uvm_phase phase);
        `uvm_info(get_type_name(), $sformatf({"\n",
            "---------------- SRAM scoreboard ----------------\n",
            "  write bursts checked : %0d\n",
            "  read bursts checked  : %0d\n",
            "  read beats checked   : %0d\n",
            "  read bytes compared  : %0d\n",
            "  DECERR responses     : %0d\n",
            "  aborted by reset     : %0d write / %0d read\n",
            "  exclusive writes     : %0d EXOKAY / %0d failed\n",
            "  mismatches           : %0d\n",
            "-------------------------------------------------"},
            wr_count, rd_count, beats_checked, bytes_checked,
            decerr_count, aborted_count, aborted_rd_count,
            excl_ok_count, excl_fail_count, err_count), UVM_NONE)
    endfunction

endclass
