// ------------------------------------------------------------
// sram_arb_fairness_test.sv
//
// Test plan ARB_002 -- simultaneous AW / AR fairness. AWVALID and
// ARVALID are both held high continuously and the acceptances are
// measured over a 1000-aclk window.
//
// Stimulus: pipelined master (4 write + 4 read bursts outstanding,
// zero delays) running two streams in parallel -- writes to the lower
// half of the SRAM, reads from the upper half (no address overlap, so
// the hazard guard never holds a burst back). Each burst is 1..4
// beats of 16 B, INCR, so the slave makes many arbitration decisions.
//
// Measured over the window (from the first cycle with both VALIDs):
//   both_valid  cycles with AWVALID && ARVALID
//   aw / ar     AW / AR handshakes
//   overlap     cycles where AW and AR were accepted together
//   max wait    longest AxVALID-without-AxREADY run per channel
// Pass (check_phase):
//   * both VALIDs high in >= 90 % of the window (stimulus really holds them)
//   * >= 50 acceptances in total (the slave keeps moving)
//   * each channel >= 25 % of the acceptances (neither is starved)
//   * no AW + AR accepted in the same cycle (single-port SRAM)
//
// Expected on the current RTL: FAIL. axi4_slave accepts AW and AR
// together when both arrive while idle (WB_RW_OVERLAP, see
// sram_rw_overlap_test), the read then hangs, and the window shows
// ~2 acceptances. With that fixed, this test checks the arbiter is fair.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

// Endless stream of random bursts in one direction until 'stop' is set;
// then waits for the bursts still in flight. A burst is only offered when
// the driver has a free outstanding slot for this direction, so the
// driver (which issues in order) never stalls one channel waiting for the
// other -- each VALID stays high on its own.
class sram_arb_stream_seq extends axi_base_sequence;

    `uvm_object_utils(sram_arb_stream_seq)

    bit        wr;      // 1 = writes, 0 = reads
    bit        stop;    // set by the test to end the stream
    axi_driver drv;     // for the outstanding-slot count

    // UVM constructor.
    function new(string name = "sram_arb_stream_seq");
        super.new(name);
    endfunction

    // Queue bursts back to back (pipelined driver: no wait per burst).
    virtual task body();
        axi_seq_item tr, sent[$];
        while (!stop) begin
            while (wr ? drv.wr_fly.size() >= drv.cfg.max_outstanding_wr
                      : drv.rd_fly.size() >= drv.cfg.max_outstanding_rd)
                @(drv.vif.mon_cb);
            if (stop) break;
            gen_and_send(wr, tr);
            sent.push_back(tr);
        end
        foreach (sent[i]) wait_done(sent[i]);
    endtask

endclass

class sram_arb_fairness_test extends sram_base_test;

    `uvm_component_utils(sram_arb_fairness_test)

    localparam int unsigned WINDOW = 1000;

    int unsigned both_valid, aw_acc, ar_acc, overlap, max_aw_wait, max_ar_wait;
    bit          measured;

    // UVM constructor.
    function new(string name = "sram_arb_fairness_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Pipelined, zero-delay master; short watchdog (the current RTL hangs).
    virtual function void configure_axi(axi_agent_config cfg);
        cfg.set_zero_delays();
        cfg.max_outstanding_wr = 4;
        cfg.max_outstanding_rd = 4;
        cfg.timeout_base       = 300;
        cfg.timeout_per_beat   = 50;
    endfunction

    // Configure one stream: INCR, 16 B beats, 1..4 beats, in [lo : hi].
    function sram_arb_stream_seq make_stream(bit wr, bit [`AXI_ADDR_WIDTH-1:0] lo,
                                             bit [`AXI_ADDR_WIDTH-1:0] hi);
        sram_arb_stream_seq s = sram_arb_stream_seq::type_id::create(wr ? "wr_stream" : "rd_stream");
        s.wr = wr;
        s.size_min = 4;  s.size_max = 4;
        s.len_min  = 0;  s.len_max  = 3;
        s.allow_fixed = 1'b0; s.allow_wrap = 1'b0; s.allow_incr = 1'b1;
        s.aligned_mode  = 1;
        s.strb_mode_sel = STRB_FULL;
        s.addr_lo = lo;  s.addr_hi = hi;
        s.drv     = env.axi_agt.driver;
        return s;
    endfunction

    // Count handshakes / waits for WINDOW cycles from the first cycle with
    // both VALIDs high (gives up after 2*WINDOW cycles without that).
    task measure();
        virtual axi_if vif = env.axi_agt.vif;
        int unsigned aw_wait, ar_wait, guard;
        bit aw_hs, ar_hs;
        while (!(vif.mon_cb.awvalid === 1'b1 && vif.mon_cb.arvalid === 1'b1) && guard < 2 * WINDOW) begin
            @(vif.mon_cb);
            guard++;
        end
        if (guard >= 2 * WINDOW) return;
        measured = 1'b1;
        repeat (WINDOW) begin
            aw_hs = vif.mon_cb.awvalid === 1'b1 && vif.mon_cb.awready === 1'b1;
            ar_hs = vif.mon_cb.arvalid === 1'b1 && vif.mon_cb.arready === 1'b1;
            if (vif.mon_cb.awvalid === 1'b1 && vif.mon_cb.arvalid === 1'b1) both_valid++;
            if (aw_hs) aw_acc++;
            if (ar_hs) ar_acc++;
            if (aw_hs && ar_hs) overlap++;
            aw_wait = (vif.mon_cb.awvalid === 1'b1 && !aw_hs) ? aw_wait + 1 : 0;
            ar_wait = (vif.mon_cb.arvalid === 1'b1 && !ar_hs) ? ar_wait + 1 : 0;
            if (aw_wait > max_aw_wait) max_aw_wait = aw_wait;
            if (ar_wait > max_ar_wait) max_ar_wait = ar_wait;
            @(vif.mon_cb);
        end
    endtask

    // Both streams in parallel; stop them after the measurement window.
    virtual task run_main();
        sram_arb_stream_seq w = make_stream(1'b1, `SRAM_BASE_ADDR,
                                            `SRAM_BASE_ADDR + 32'h7_FFC0);
        sram_arb_stream_seq r = make_stream(1'b0, `SRAM_BASE_ADDR + 32'h8_0000,
                                            `SRAM_END_ADDR - 32'h3F);
        fork
            w.start(env.axi_agt.sequencer);
            r.start(env.axi_agt.sequencer);
            begin
                measure();
                w.stop = 1'b1;
                r.stop = 1'b1;
            end
        join
    endtask

    // Fairness / liveness verdict and the measured numbers.
    function void check_phase(uvm_phase phase);
        int unsigned total = aw_acc + ar_acc;
        super.check_phase(phase);
        `uvm_info(get_type_name(), $sformatf({"\n  ARB_002 window: %0d aclk cycles",
            "\n    both VALIDs high : %0d cycles (%0d %%)",
            "\n    AW accepted      : %0d   (longest AWVALID wait %0d cycles)",
            "\n    AR accepted      : %0d   (longest ARVALID wait %0d cycles)",
            "\n    AW+AR same cycle : %0d"},
            WINDOW, both_valid, 100 * both_valid / WINDOW, aw_acc, max_aw_wait,
            ar_acc, max_ar_wait, overlap), UVM_NONE)
        if (!measured) begin
            `uvm_error(get_type_name(), "AWVALID and ARVALID were never high together -- stimulus problem")
            return;
        end
        if (both_valid * 10 < WINDOW * 9)
            `uvm_error(get_type_name(), $sformatf("both VALIDs high only %0d of %0d cycles (< 90 %%)", both_valid, WINDOW))
        if (total < 50)
            `uvm_error(get_type_name(), $sformatf("only %0d AW/AR acceptances in %0d cycles -- slave stalled", total, WINDOW))
        else if (aw_acc * 4 < total || ar_acc * 4 < total)
            `uvm_error(get_type_name(), $sformatf("unfair arbitration: AW %0d vs AR %0d acceptances (each needs >= 25 %%)",
                                                  aw_acc, ar_acc))
        if (overlap != 0)
            `uvm_error(get_type_name(), $sformatf("AW and AR accepted in the same cycle %0d times", overlap))
    endfunction

endclass
