// ------------------------------------------------------------
// sram_4kb_cross_test.sv
//
// Error injection: INCR bursts that cross a 4 KB boundary, which
// AXI forbids (A3.4.1). The original test-plan wording of
// AXI_ADDR_007 asked for exactly this burst; the item was reworded
// to legal stimulus, and this test records what sram_top does when
// a master breaks the rule anyway.
//
// Illegal burst: 4 beats x 16 B INCR from 0x107F_FFE0
//   beats 0x107F_FFE0, 0x107F_FFF0 (last SRAM words, in range)
//         0x1080_0000, 0x1080_0010 (next 4 KB page, out of range)
//
//   1. illegal write  -> expected: AXI_ASSERT "AW: INCR burst crosses
//                        a 4 KB boundary" (TB master flagged); the
//                        scoreboard expects BRESP=DECERR, beats 0-1
//                        written, beats 2-3 dropped
//   2. legal reads    -> 2-beat INCR from 0x107F_FFE0 (the two
//                        in-range words), single beat at 0x1080_0000
//                        (DECERR), single beat at word 0 (no aliasing)
//   3. illegal read   -> expected: AXI_ASSERT "AR: ... 4 KB ...";
//                        the read is allowed to hang (AXI_TIMEOUT
//                        expected only here) -- the slave is then
//                        recovered with a reset of both domains
//   4. one clean write + read back after the reset
//
// The expected messages are counted by a report catcher and demoted
// to info; check_phase requires each to have been seen. Any other
// error (scoreboard data / response mismatch included) fails the test.
// The observed DUT behaviour is printed at the end.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

// Counts and demotes the expected errors: the 4 KB legality assertion
// (AW / AR separately) and, only while expect_timeout is set, the
// driver watchdog.
class sram_4kb_catcher extends uvm_report_catcher;

    int unsigned n_aw_4kb, n_ar_4kb, n_timeout;
    bit          expect_timeout;

    // UVM constructor.
    function new(string name = "sram_4kb_catcher");
        super.new(name);
    endfunction

    // Demote AXI_ASSERT 4 KB messages and (when expected) AXI_TIMEOUT.
    function action_e catch();
        string msg = get_message();
        bit    hit = 1'b0;
        if (get_severity() != UVM_ERROR) return THROW;
        if (get_id() == "AXI_ASSERT" && msg.len() >= 3) begin
            for (int i = 0; i + 11 <= msg.len(); i++)
                if (msg.substr(i, i + 10) == "4 KB bounda") hit = 1'b1;
            if (hit && msg.substr(0, 2) == "AW:") n_aw_4kb++;
            else if (hit && msg.substr(0, 2) == "AR:") n_ar_4kb++;
            else hit = 1'b0;
        end
        else if (get_id() == "AXI_TIMEOUT" && expect_timeout) begin
            n_timeout++;
            hit = 1'b1;
        end
        if (hit) begin
            set_severity(UVM_INFO);
            set_message({"[expected] ", msg});
        end
        return THROW;
    endfunction

endclass

// One INCR burst with the 4 KB constraint switched off: set wr / a /
// l / sz and start it; tr holds the sent item afterwards.
class sram_4kb_cross_seq extends axi_base_sequence;

    `uvm_object_utils(sram_4kb_cross_seq)

    bit                       wr;
    bit [`AXI_ADDR_WIDTH-1:0] a;
    bit [7:0]                 l;
    bit [2:0]                 sz;
    axi_seq_item              tr;

    // UVM constructor.
    function new(string name = "sram_4kb_cross_seq");
        super.new(name);
    endfunction

    // Randomize the burst without c_4kb, send it, wait for it to finish.
    virtual task body();
        tr = axi_seq_item::type_id::create(wr ? "wr_4kb" : "rd_4kb");
        apply_cfg(tr);
        tr.c_4kb.constraint_mode(0);
        start_item(tr);
        if (!tr.randomize() with {
                write     == local::wr;
                addr      == local::a;
                len       == local::l;
                size      == local::sz;
                burst     == AXI_INCR;
                strb_mode == STRB_FULL;
                lock      == 1'b0;
            })
            `uvm_fatal(get_type_name(), "4 KB-crossing burst: randomize failed")
        finish_item(tr);
        wait_done(tr);
    endtask

endclass

class sram_4kb_cross_test extends sram_base_test;

    `uvm_component_utils(sram_4kb_cross_test)

    localparam bit [`AXI_ADDR_WIDTH-1:0] A_CROSS = `SRAM_END_ADDR - 32'h1F;   // 0x107F_FFE0

    sram_4kb_catcher catcher;
    axi_seq_item     ill_wr, ill_rd, rd_in, rd_oor;

    // UVM constructor.
    function new(string name = "sram_4kb_cross_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Short watchdog: the illegal read is allowed to hang.
    virtual function void configure_axi(axi_agent_config cfg);
        cfg.timeout_base     = 400;
        cfg.timeout_per_beat = 50;
    endfunction

    // Install the report catcher for the expected errors.
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        catcher = new("sram_4kb_catcher");
        uvm_report_cb::add(null, catcher);
    endfunction

    // Send one 4-beat 16 B INCR burst that crosses the 4 KB boundary.
    task illegal_burst(bit wr, output axi_seq_item tr);
        sram_4kb_cross_seq s = sram_4kb_cross_seq::type_id::create("cross_4kb");
        s.wr = wr; s.a = A_CROSS; s.l = 3; s.sz = 4;
        s.start(env.axi_agt.sequencer);
        tr = s.tr;
    endtask

    // Illegal write, legal read-backs, illegal read, reset, clean traffic.
    virtual task run_main();
        axi_seq_item tr, rd;

        `uvm_info(get_type_name(), $sformatf("1. illegal WRITE: 4 x 16 B INCR from 0x%08h (crosses 0x1080_0000)", A_CROSS), UVM_LOW)
        illegal_burst(1'b1, ill_wr);

        `uvm_info(get_type_name(), "2. legal read-backs: the 2 in-range words, 0x1080_0000, word 0", UVM_LOW)
        read_burst(A_CROSS, 1, 4, AXI_INCR, rd_in);
        read_burst(`SRAM_END_ADDR + 32'h1, 0, 4, AXI_INCR, rd_oor);
        read_burst(`SRAM_BASE_ADDR, 0, 4, AXI_INCR, rd);

        `uvm_info(get_type_name(), $sformatf("3. illegal READ: 4 x 16 B INCR from 0x%08h", A_CROSS), UVM_LOW)
        catcher.expect_timeout = 1'b1;
        illegal_burst(1'b0, ill_rd);
        catcher.expect_timeout = 1'b0;
        if (ill_rd.timed_out) begin
            `uvm_info(get_type_name(), "illegal read hung -- recovering with a reset of both domains", UVM_LOW)
            reset_dut();
        end

        `uvm_info(get_type_name(), "4. clean write + read back", UVM_LOW)
        write_burst(`SRAM_BASE_ADDR + 32'h4_0000, 3, 4, AXI_INCR, STRB_FULL, tr);
        read_back(tr, rd);
    endtask

    // Expected checker messages seen; print what the DUT did.
    function void check_phase(uvm_phase phase);
        string r, resp;
        super.check_phase(phase);
        if (catcher.n_aw_4kb == 0)
            `uvm_error(get_type_name(), "AXI_ASSERT did not flag the 4 KB-crossing AW")
        if (catcher.n_ar_4kb == 0)
            `uvm_error(get_type_name(), "AXI_ASSERT did not flag the 4 KB-crossing AR")
        if (ill_rd != null && ill_rd.timed_out && catcher.n_timeout != 1)
            `uvm_error(get_type_name(), $sformatf("AXI_TIMEOUT seen %0d times, expected 1", catcher.n_timeout))

        r = "\n  DUT behaviour for the 4 KB-crossing bursts:";
        if (ill_wr != null) begin
            if (ill_wr.aborted)                 resp = "no B response";
            else if (ill_wr.bresp == AXI_DECERR) resp = "B received, BRESP=DECERR";
            else                                resp = $sformatf("B received, BRESP=%0d (not DECERR)", ill_wr.bresp);
            r = {r, "\n    write : ", resp};
        end
        if (rd_in != null)
            r = {r, "\n    read-back of the 2 in-range words: checked by the scoreboard (beats 0-1 written)"};
        if (ill_rd != null)
            if (ill_rd.timed_out)
                r = {r, $sformatf("\n    read  : HUNG -- %0d of 4 R beats returned, then no more", ill_rd.r_beats)};
            else
                r = {r, $sformatf("\n    read  : completed, %0d of 4 R beats", ill_rd.r_beats)};
        r = {r, $sformatf("\n    checker: AW 4 KB flagged %0d cycle(s), AR %0d cycle(s), AXI_TIMEOUT %0d",
                          catcher.n_aw_4kb, catcher.n_ar_4kb, catcher.n_timeout)};
        `uvm_info(get_type_name(), r, UVM_NONE)
    endfunction

endclass
