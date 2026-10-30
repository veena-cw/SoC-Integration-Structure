// ------------------------------------------------------------
// sram_wlast_err_test.sv
//
// WLAST error injection (test plan PROT_001). Exactly three write
// transactions, each a 4-beat full-width INCR burst (AWLEN=3) to
// its own address:
//
//   1. early   : 2 W beats, WLAST on beat 1  (AWLEN promises 4)
//   2. correct : 4 W beats, WLAST on beat 3  (legal reference)
//   3. late    : 5 W beats, WLAST on beat 4  (one extra beat)
//
// Checks
//   * the monitor reports each wrong WLAST as AXI_WLAST: early 1x
//     ("WLAST after 2 W beats"), late 2x ("no WLAST on W beat 3",
//     "WLAST after 5 W beats"), correct 0x. A report catcher counts
//     them and demotes them to info; the count must be exactly 3
//     (check_phase)
//   * BRESP (SOC-86, design behaviour agreed with the designer):
//     early SLVERR, correct OKAY, late SLVERR
//   * each burst is read back (5 beats, one past the burst): the
//     scoreboard expects only the received beats up to AWLEN+1 to be
//     written -- early: beats 0-1, late: beats 0-3, beat 4 untouched
// Any other error fails the test.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

// Counts the expected AXI_WLAST errors and demotes them to UVM_INFO.
class sram_wlast_err_catcher extends uvm_report_catcher;

    int unsigned n_wlast;

    // UVM constructor.
    function new(string name = "sram_wlast_err_catcher");
        super.new(name);
    endfunction

    // Demote and count AXI_WLAST errors; pass everything else through.
    function action_e catch();
        if (get_severity() == UVM_ERROR && get_id() == "AXI_WLAST") begin
            n_wlast++;
            set_severity(UVM_INFO);
            set_message({"[expected] ", get_message()});
        end
        return THROW;
    endfunction

endclass

// One 4-beat write (AWLEN=3) driving n W beats with WLAST on beat
// wlast_beat (-1 = last driven beat): set a / n / wlast_beat,
// start it; afterwards tr holds the sent item (BRESP, aborted, ...).
class sram_wlast_err_seq extends axi_base_sequence;

    `uvm_object_utils(sram_wlast_err_seq)

    bit [`AXI_ADDR_WIDTH-1:0] a;
    int unsigned              n;
    int                       wlast_beat;
    axi_seq_item              tr;

    // UVM constructor.
    function new(string name = "sram_wlast_err_seq");
        super.new(name);
    endfunction

    // 4-beat INCR full-width write at 'a' driving n W beats with WLAST
    // on beat 'wlast_beat' (-2 = never). Extra beats beyond AWLEN+1 get
    // random data and full strobes. Waits for the burst to finish.
    task bad_wlast_write(bit [`AXI_ADDR_WIDTH-1:0] a, int unsigned n, int wlast_beat,
                         output axi_seq_item tr);
        bit [`AXI_DATA_WIDTH-1:0] d;
        tr = axi_seq_item::type_id::create("bad_wr");
        apply_cfg(tr);
        start_item(tr);
        if (!tr.randomize() with {
                write     == 1'b1;
                addr      == local::a;
                len       == 3;
                size      == 4;
                burst     == AXI_INCR;
                strb_mode == STRB_FULL;
                lock      == 1'b0;
            })
            `uvm_fatal(get_type_name(), "bad_wlast_write: randomize failed")
        if (n > tr.data.size()) begin
            int unsigned old_n = tr.data.size();
            tr.data  = new[n](tr.data);
            tr.strb  = new[n](tr.strb);
            tr.wuser = new[n](tr.wuser);
            for (int unsigned i = old_n; i < n; i++) begin
                for (int w = 0; w < `AXI_DATA_WIDTH / 32; w++)
                    d[32*w +: 32] = $urandom();
                tr.data[i] = d;
                tr.strb[i] = tr.lane_mask(i);
            end
        end
        tr.n_wbeats   = n;
        tr.wlast_beat = wlast_beat;
        finish_item(tr);
        wait_done(tr);
    endtask

    // Send the one bad write.
    virtual task body();
        bad_wlast_write(a, n, wlast_beat, tr);
    endtask

endclass

class sram_wlast_err_test extends sram_base_test;

    `uvm_component_utils(sram_wlast_err_test)

    sram_wlast_err_catcher catcher;
    int unsigned           exp_wlast;   // expected AXI_WLAST count

    // UVM constructor.
    function new(string name = "sram_wlast_err_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Install the report catcher for the expected AXI_WLAST errors.
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        catcher = new("wlast_err_catcher");
        uvm_report_cb::add(null, catcher);
    endfunction

    // Send one 4-beat write with n W beats and WLAST on beat wlast_beat,
    // check its BRESP against exp_resp, then read 5 beats back from 'a'
    // (the scoreboard checks which beats were written).
    task wlast_write(string what, bit [`AXI_ADDR_WIDTH-1:0] a, int unsigned n, int wlast_beat,
                     axi_resp_e exp_resp);
        axi_seq_item       rd;
        sram_wlast_err_seq s = sram_wlast_err_seq::type_id::create("wlast_wr");
        `uvm_info(get_type_name(), $sformatf("%s WLAST: AWLEN=3, %0d W beats, WLAST on beat %0d @0x%08h",
                                             what, n, (wlast_beat < 0) ? n - 1 : wlast_beat, a), UVM_LOW)
        s.a = a; s.n = n; s.wlast_beat = wlast_beat;
        s.start(env.axi_agt.sequencer);
        if (s.tr.aborted)
            `uvm_error(get_type_name(), {what, " WLAST: no B response (write aborted / timed out)"})
        else if (s.tr.bresp != exp_resp)
            `uvm_error(get_type_name(), $sformatf("%s WLAST: BRESP=%0d, expected %s",
                                                  what, s.tr.bresp, exp_resp.name()))
        read_burst(a, 4, 4, AXI_INCR, rd);
    endtask

    // The three transactions: early, correct, late.
    virtual task run_main();
        wlast_write("early",   `SRAM_BASE_ADDR + 32'h3_0000, 2,  1, AXI_SLVERR);  exp_wlast += 1;
        wlast_write("correct", `SRAM_BASE_ADDR + 32'h3_1000, 4, -1, AXI_OKAY);
        wlast_write("late",    `SRAM_BASE_ADDR + 32'h3_2000, 5,  4, AXI_SLVERR);  exp_wlast += 2;
    endtask

    // Exactly the injected WLAST errors must have been reported.
    function void check_phase(uvm_phase phase);
        super.check_phase(phase);
        if (catcher.n_wlast != exp_wlast)
            `uvm_error(get_type_name(), $sformatf("AXI_WLAST reported %0d times, expected %0d",
                                                  catcher.n_wlast, exp_wlast))
        `uvm_info(get_type_name(), $sformatf("expected AXI_WLAST errors seen: %0d/%0d",
                                             catcher.n_wlast, exp_wlast), UVM_NONE)
    endfunction

endclass
