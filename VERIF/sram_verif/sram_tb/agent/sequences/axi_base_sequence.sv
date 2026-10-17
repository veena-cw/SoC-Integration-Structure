// ------------------------------------------------------------
// axi_base_sequence.sv
//
// Common knobs + helpers for every AXI sequence.
//
// Knobs (set by the test before start()):
//   size_min/size_max   : AxSIZE range (0..4)
//   len_min/len_max     : AxLEN  range (0..255)
//   allow_fixed/incr/wrap : burst types that may be picked
//   aligned_mode        : -1 random, 1 aligned only, 0 unaligned only
//   strb_mode_sel       : -1 random, else an axi_strb_mode_e value
//   addr_lo/addr_hi     : start address window
//   allow_out_of_range  : drop the SRAM-window constraint
//   excl_pct            : % of random bursts made exclusive when the
//                         agent config has exclusive_en=1
//
// Optional AXI4 features follow the agent's axi_agent_config
// (looked up from the sequencer scope): exclusive_en, region_en,
// user_en switch the matching axi_seq_item constraints. All off
// by default, so items are exactly the original stimulus.
//
// Helpers:
//   gen_and_send(write, tr)   : randomize with the knobs, send
//   write_burst(...)/read_burst(...) : fully directed burst
//   read_back(wr, tr)         : read the same burst shape back
//
// With more than one outstanding burst the driver returns an item
// before its response is in: directed() and read_back() wait for
// 'completed', gen_and_send() does not (that is what keeps several
// bursts in flight).
//
// Data checking is done by sram_scoreboard from the monitor, so
// sequences never compare read data themselves.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class axi_base_sequence extends uvm_sequence #(axi_seq_item);

    `uvm_object_utils(axi_base_sequence)

    int unsigned num_txn       = 1;

    bit [2:0]    size_min      = 0;
    bit [2:0]    size_max      = 4;
    bit [7:0]    len_min       = 0;
    bit [7:0]    len_max       = 255;
    bit          allow_fixed   = 1'b1;
    bit          allow_incr    = 1'b1;
    bit          allow_wrap    = 1'b1;
    int          aligned_mode  = -1;
    int          strb_mode_sel = -1;
    bit [`AXI_ADDR_WIDTH-1:0] addr_lo = `SRAM_BASE_ADDR;
    bit [`AXI_ADDR_WIDTH-1:0] addr_hi = `SRAM_END_ADDR;
    bit          allow_out_of_range = 1'b0;
    int unsigned excl_pct      = 12;

    axi_agent_config cfg;

    function new(string name = "axi_base_sequence");
        super.new(name);
    endfunction

    function axi_agent_config get_cfg();
        if (cfg == null) begin
            if (m_sequencer == null ||
                !uvm_resource_db#(axi_agent_config)::read_by_name(
                    m_sequencer.get_full_name(), "cfg", cfg))
                cfg = axi_agent_config::type_id::create("cfg");
        end
        return cfg;
    endfunction

    // Switch the item's optional-feature constraints from the config.
    function void apply_cfg(axi_seq_item tr);
        axi_agent_config c = get_cfg();
        tr.c_no_excl.constraint_mode(!c.exclusive_en);
        tr.c_region_off.constraint_mode(!c.region_en);
        tr.c_user_off.constraint_mode(!c.user_en);
        tr.user_en = c.user_en;
    endfunction

    task wait_done(axi_seq_item tr);
        if (!tr.completed) wait (tr.completed);
    endtask

    task send(axi_seq_item tr);
        start_item(tr);
        finish_item(tr);
    endtask

    // Randomize one burst within the knobs and send it.
    //
    // Weighting (done here, see axi_seq_item header):
    //   burst  : INCR 60%, FIXED 20%, WRAP 20% (allowed types only)
    //   len    : 1 beat 20%, 2..16 beats 60%, 17..256 beats 20%
    //            (clipped to [len_min:len_max] and the burst's
    //            legal lengths)
    //   strobe : FULL 8/11, RANDOM 2/11, ZERO 1/11 when not forced
    task gen_and_send(bit wr, output axi_seq_item tr);
        axi_burst_e     b;
        axi_strb_mode_e sm;
        int unsigned    lo, hi;
        bit             lk;

        pick_burst(b);
        pick_len_range(b, lo, hi);
        if (strb_mode_sel >= 0) sm = axi_strb_mode_e'(strb_mode_sel);
        else                    sm = pick_strb_mode();

        // Exclusive: at most 16 beats, aligned start (A7.2.4).
        lk = get_cfg().exclusive_en && aligned_mode != 0 &&
             len_min <= 15 && $urandom_range(1, 100) <= excl_pct;
        if (lk) begin
            lo = len_min;
            hi = (len_max > 15) ? 15 : len_max;
        end

        tr = axi_seq_item::type_id::create(wr ? "wr" : "rd");
        apply_cfg(tr);
        if (allow_out_of_range) tr.c_in_range.constraint_mode(0);
        start_item(tr);
        if (!tr.randomize() with {
                write     == local::wr;
                burst     == local::b;
                lock      == local::lk;
                strb_mode == local::sm;
                size inside {[local::size_min : local::size_max]};
                len  inside {[local::lo : local::hi]};
                (local::aligned_mode >= 0) -> (aligned == local::aligned_mode);
                addr inside {[local::addr_lo : local::addr_hi]};
            })
            `uvm_fatal(get_type_name(),
                $sformatf("gen_and_send: randomize failed (burst=%s len=[%0d:%0d] size=[%0d:%0d] aligned_mode=%0d excl=%0b)",
                          b.name(), lo, hi, size_min, size_max, aligned_mode, lk))
        finish_item(tr);
    endtask

    // Weighted pick among the allowed burst types. WRAP is never
    // picked when unaligned starts are requested, FIXED/WRAP never
    // when their legal lengths miss [len_min:len_max].
    task pick_burst(output axi_burst_e b);
        int unsigned w_fixed, w_incr, w_wrap, r;
        w_incr  = allow_incr  ? 6 : 0;
        w_fixed = (allow_fixed && len_min <= 15) ? 2 : 0;
        w_wrap  = (allow_wrap && aligned_mode != 0 && wrap_len_ok()) ? 2 : 0;
        if (w_incr + w_fixed + w_wrap == 0)
            `uvm_fatal(get_type_name(), "pick_burst: no burst type fits the knobs")
        r = $urandom_range(1, w_incr + w_fixed + w_wrap);
        if      (r <= w_incr)           b = AXI_INCR;
        else if (r <= w_incr + w_fixed) b = AXI_FIXED;
        else                            b = AXI_WRAP;
    endtask

    function bit wrap_len_ok();
        for (int k = 0; k < 4; k++)
            if (((2 << k) - 1) >= len_min && ((2 << k) - 1) <= len_max) return 1'b1;
        return 1'b0;
    endfunction

    task pick_len_range(axi_burst_e b, output int unsigned lo, output int unsigned hi);
        int unsigned cls_lo[3] = '{0, 1, 16};
        int unsigned cls_hi[3] = '{0, 15, 255};
        int unsigned w[3]      = '{2, 6, 2};
        int unsigned max_len, tot, r, c;
        int unsigned wl[$];

        if (b == AXI_WRAP) begin
            for (int k = 0; k < 4; k++)
                if (((2 << k) - 1) >= len_min && ((2 << k) - 1) <= len_max) wl.push_back((2 << k) - 1);
            lo = wl[$urandom_range(0, wl.size() - 1)];
            hi = lo;
            return;
        end

        max_len = (b == AXI_FIXED && len_max > 15) ? 15 : len_max;
        tot = 0;
        for (int i = 0; i < 3; i++) begin
            if (cls_hi[i] < len_min || cls_lo[i] > max_len) w[i] = 0;
            tot += w[i];
        end
        if (tot == 0) begin
            lo = len_min; hi = max_len;
            return;
        end
        r = $urandom_range(1, tot);
        c = 0;
        while (r > w[c]) begin r -= w[c]; c++; end
        lo = (cls_lo[c] < len_min) ? len_min : cls_lo[c];
        hi = (cls_hi[c] > max_len) ? max_len : cls_hi[c];
    endtask

    function axi_strb_mode_e pick_strb_mode();
        int unsigned r = $urandom_range(1, 11);
        if (r <= 8)  return STRB_FULL;
        if (r <= 10) return STRB_RANDOM;
        return STRB_ZERO;
    endfunction

    // Fully directed burst. Data (writes) is random.
    task write_burst(bit [`AXI_ADDR_WIDTH-1:0] a, bit [7:0] l, bit [2:0] s,
                     axi_burst_e b, axi_strb_mode_e sm = STRB_FULL,
                     output axi_seq_item tr);
        directed(1'b1, a, l, s, b, sm, tr);
    endtask

    task read_burst(bit [`AXI_ADDR_WIDTH-1:0] a, bit [7:0] l, bit [2:0] s,
                    axi_burst_e b, output axi_seq_item tr);
        directed(1'b0, a, l, s, b, STRB_FULL, tr);
    endtask

    // Waits for the response; lk=1 makes it an exclusive access.
    task directed(bit wr, bit [`AXI_ADDR_WIDTH-1:0] a, bit [7:0] l, bit [2:0] s,
                  axi_burst_e b, axi_strb_mode_e sm, output axi_seq_item tr,
                  input bit [`AXI_ID_WIDTH-1:0] id = '0, input bit fix_id = 1'b0,
                  input bit lk = 1'b0);
        tr = axi_seq_item::type_id::create(wr ? "wr" : "rd");
        apply_cfg(tr);
        if (lk) tr.c_no_excl.constraint_mode(0);
        if (a < `SRAM_BASE_ADDR || a > `SRAM_END_ADDR)
            tr.c_in_range.constraint_mode(0);
        start_item(tr);
        if (!tr.randomize() with {
                write     == local::wr;
                addr      == local::a;
                len       == local::l;
                size      == local::s;
                burst     == local::b;
                strb_mode == local::sm;
                lock      == local::lk;
                local::fix_id -> (id == local::id);
            })
            `uvm_fatal(get_type_name(),
                $sformatf("directed burst is not AXI-legal: addr=0x%08h len=%0d size=%0d burst=%s excl=%0b",
                          a, l, s, b.name(), lk))
        finish_item(tr);
        wait_done(tr);
    endtask

    // Exclusive read followed by an exclusive write of the same
    // shape and ID (A7.2.2). intervene=1 puts a normal write to the
    // same bytes in between, so on an exclusive-capable slave the
    // exclusive write must fail. No-op unless exclusive_en.
    task excl_pair(bit intervene = 1'b0);
        axi_seq_item shape, rd, wr, mid;
        if (!get_cfg().exclusive_en) return;
        shape = axi_seq_item::type_id::create("excl_shape");
        shape.c_no_excl.constraint_mode(0);
        if (!shape.randomize() with {
                lock == 1'b1;
                write == 1'b0;
                size inside {[local::size_min : local::size_max]};
                addr inside {[local::addr_lo : local::addr_hi]};
            })
            `uvm_fatal(get_type_name(), "excl_pair: no legal exclusive shape for the knobs")
        directed(1'b0, shape.addr, shape.len, shape.size, shape.burst, STRB_FULL, rd,
                 shape.id, 1'b1, 1'b1);
        if (intervene)
            directed(1'b1, shape.addr, shape.len, shape.size, shape.burst, STRB_FULL, mid,
                     shape.id + 1'b1, 1'b1, 1'b0);
        directed(1'b1, shape.addr, shape.len, shape.size, shape.burst, STRB_FULL, wr,
                 shape.id, 1'b1, 1'b1);
    endtask

    // Read back the exact burst shape of a previous write.
    task read_back(axi_seq_item wr, output axi_seq_item tr);
        wait_done(wr);
        read_burst(wr.addr, wr.len, wr.size, wr.burst, tr);
    endtask

endclass
