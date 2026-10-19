// ------------------------------------------------------------
// axi_driver.sv
//
// AXI4 master driver. Two modes, picked from axi_agent_config:
//
// Serial (max_outstanding_wr = max_outstanding_rd = 1, default --
// what sram_top needs, its axi4_slave serializes reads and writes
// anyway). One burst per item:
//   Write : AW and W run in parallel (W may lead AW when
//           cfg.w_before_aw_en=1), then B is collected.
//   Read  : AR, then len+1 R beats are collected into item.data
//           and item.rresp.
//   item_done() is called when the burst has completed.
//
// Pipelined (either max_outstanding_* > 1). Up to that many write /
// read bursts in flight. Independent AW, W, AR, B and R engines:
//   * AW and W are issued in item order (AXI4 has no write data
//     interleaving), W may lead its AW
//   * B and R are routed to the oldest in-flight burst with the
//     same ID, so responses may return out of order across IDs
//   * R beats of different IDs may interleave only when
//     cfg.rd_interleave_ok=1, otherwise AXI_RINTERLEAVE error
//   * cfg.hazard_guard holds a burst while an in-flight burst that
//     it conflicts with (write/any, read/write) overlaps its bytes
//   item_done() is called as soon as the burst is queued; the
//   item's 'completed' flag is set when its response is in.
//
// Random wvalid gaps and bready/rready back-pressure come from
// axi_agent_config. AxREGION / AxUSER / WUSER come from the item
// (0 unless region_en / user_en).
//
// All master outputs are driven with NBAs immediately after an
// tick() (one mst_cb edge); slave outputs are read through mst_cb.
//
// Reset handshake: if aresetn drops mid-transfer the burst(s) are
// abandoned, the bus is parked and item.aborted is set. A
// per-transaction watchdog does the same (plus a UVM_ERROR) so a
// hung DUT fails the test instead of hanging the simulation.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_driver extends uvm_driver #(axi_seq_item);

    `uvm_component_utils(axi_driver)

    virtual axi_if   vif;
    virtual reset_if rst_vif;
    axi_agent_config cfg;

    // ---- Pipelined-mode state ------------------------------------
    axi_seq_item aw_pend[$];   // waiting for the AW engine
    axi_seq_item w_pend[$];    // waiting for the W engine (AW order)
    axi_seq_item ar_pend[$];   // waiting for the AR engine
    axi_seq_item wr_fly[$];    // queued writes, not completed (issue order)
    axi_seq_item rd_fly[$];    // queued reads,  not completed (issue order)
    event        abort_ev;     // watchdog: restart the channel engines

    // UVM constructor.
    function new(string name = "axi_driver", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Get vif, rst_vif and the agent config (default config if none).
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_resource_db#(virtual axi_if)::read_by_name(
                get_full_name(), "vif", vif))
            `uvm_fatal(get_type_name(), "axi_if vif not set")
        if (!uvm_resource_db#(virtual reset_if)::read_by_name(
                get_full_name(), "rst_vif", rst_vif))
            `uvm_fatal(get_type_name(), "reset_if rst_vif not set")
        if (!uvm_resource_db#(axi_agent_config)::read_by_name(
                get_full_name(), "cfg", cfg))
            cfg = axi_agent_config::type_id::create("cfg");
    endfunction

    // Park all master outputs.
    task park();
        vif.awvalid  <= 1'b0;
        vif.wvalid   <= 1'b0;
        vif.wlast    <= 1'b0;
        vif.bready   <= 1'b0;
        vif.arvalid  <= 1'b0;
        vif.rready   <= 1'b0;
        vif.awid     <= '0;
        vif.awaddr   <= '0;
        vif.awlen    <= '0;
        vif.awsize   <= '0;
        vif.awburst  <= '0;
        vif.awlock   <= '0;
        vif.awcache  <= '0;
        vif.awprot   <= '0;
        vif.awqos    <= '0;
        vif.awregion <= '0;
        vif.awuser   <= '0;
        vif.wdata    <= '0;
        vif.wstrb    <= '0;
        vif.wuser    <= '0;
        vif.arid     <= '0;
        vif.araddr   <= '0;
        vif.arlen    <= '0;
        vif.arsize   <= '0;
        vif.arburst  <= '0;
        vif.arlock   <= '0;
        vif.arcache  <= '0;
        vif.arprot   <= '0;
        vif.arqos    <= '0;
        vif.arregion <= '0;
        vif.aruser   <= '0;
    endtask

    // Advance to the NEXT aclk edge. Waits 1 ps first because
    // Under Verilator, @(vif.mst_cb) can resume a second time inside the
    // timestep of the edge that just woke this process, which would
    // sample READY before this driver's own VALID took effect.
    task tick();
        #1ps;
        @(vif.mst_cb);
    endtask

    // Channel snapshot for hang reports.
    function string bus_state();
        return $sformatf("AW v/r=%b%b W v/r/last=%b%b%b B v/r=%b%b AR v/r=%b%b R v/r/last=%b%b%b",
                         vif.awvalid, vif.awready, vif.wvalid, vif.wready, vif.wlast,
                         vif.bvalid, vif.bready, vif.arvalid, vif.arready,
                         vif.rvalid, vif.rready, vif.rlast);
    endfunction

    // Watchdog limit for one burst: timeout_base + timeout_per_beat * beats.
    function int unsigned timeout_of(axi_seq_item tr);
        return cfg.timeout_base + cfg.timeout_per_beat * (32'(tr.len) + 1);
    endfunction

    // Reset the item's status flags before it is driven.
    function void clear_status(axi_seq_item tr);
        tr.aborted   = 1'b0;
        tr.timed_out = 1'b0;
        tr.aw_done   = 1'b0;
        tr.w_done    = 1'b0;
        tr.completed = 1'b0;
    endfunction

    // Park the bus, then run the serial or pipelined driver loop forever.
    task run_phase(uvm_phase phase);
        park();
        `uvm_info(get_type_name(), {"AXI4 options: ", cfg.convert2string()}, UVM_LOW)
        if (cfg.pipelined()) run_pipelined();
        else                 run_serial();
    endtask

    // =============================================================
    // Serial mode
    // =============================================================
    task run_serial();
        forever begin
            seq_item_port.get_next_item(req);
            if (rst_vif.rst_n !== 1'b1)
                wait (rst_vif.rst_n === 1'b1);
            tick();
            drive_item(req);
            seq_item_port.item_done();
        end
    endtask

    // Serial mode: drive one burst to completion, racing it against reset
    // (aborts it) and the watchdog (aborts it with AXI_TIMEOUT). Parks the
    // bus after an abort and sets tr.completed.
    task drive_item(axi_seq_item tr);
        int unsigned timeout;
        clear_status(tr);
        timeout = timeout_of(tr);

        `uvm_info(get_type_name(), {"START ", tr.convert2string()}, UVM_HIGH)

        fork begin
            fork
                begin
                    if (tr.write) do_write(tr);
                    else          do_read(tr);
                end
                begin
                    @(negedge rst_vif.rst_n);
                    tr.aborted = 1'b1;
                    `uvm_info(get_type_name(),
                        {"Reset asserted mid-transfer, aborted: ", tr.convert2string()},
                        UVM_LOW)
                end
                begin
                    repeat (timeout) tick();
                    tr.aborted   = 1'b1;
                    tr.timed_out = 1'b1;
                    `uvm_error("AXI_TIMEOUT",
                        $sformatf("No completion after %0d aclk cycles: %s | %s",
                                  timeout, tr.convert2string(), bus_state()))
                end
            join_any
            disable fork;
        end join

        if (tr.aborted) park();
        tr.completed = 1'b1;

        `uvm_info(get_type_name(), {"DONE  ", tr.convert2string()}, UVM_HIGH)
    endtask

    // -------------------------------------------------------------
    // Write
    // -------------------------------------------------------------
    task do_write(axi_seq_item tr);
        fork
            drive_aw(tr);
            begin
                if (!cfg.w_before_aw_en || $urandom_range(0, 1))
                    wait (tr.aw_done);
                drive_w(tr);
            end
        join
        collect_b(tr);
    endtask

    // Drive one AW and wait for its handshake (shared by both modes).
    task drive_aw(axi_seq_item tr);
        repeat ($urandom_range(0, cfg.max_addr_delay)) tick();
        vif.awid     <= tr.id;
        vif.awaddr   <= tr.addr;
        vif.awlen    <= tr.len;
        vif.awsize   <= tr.size;
        vif.awburst  <= tr.burst;
        vif.awlock   <= tr.lock;
        vif.awcache  <= tr.cache;
        vif.awprot   <= tr.prot;
        vif.awqos    <= tr.qos;
        vif.awregion <= tr.region;
        vif.awuser   <= tr.auser;
        vif.awvalid  <= 1'b1;
        do tick(); while (vif.mst_cb.awready !== 1'b1);
        vif.awvalid  <= 1'b0;
        tr.aw_done = 1'b1;
    endtask

    // Drive all W beats of one burst (shared by both modes).
    task drive_w(axi_seq_item tr);
        int unsigned gap;
        for (int unsigned i = 0; i <= tr.len; i++) begin
            gap = $urandom_range(0, cfg.max_wvalid_gap);
            if (gap > 0) begin
                vif.wvalid <= 1'b0;
                vif.wlast  <= 1'b0;
                repeat (gap) tick();
            end
            vif.wdata  <= tr.data[i];
            vif.wstrb  <= tr.strb[i];
            vif.wuser  <= (i < tr.wuser.size()) ? tr.wuser[i] : '0;
            vif.wlast  <= (i == tr.len);
            vif.wvalid <= 1'b1;
            do tick(); while (vif.mst_cb.wready !== 1'b1);
        end
        vif.wvalid <= 1'b0;
        vif.wlast  <= 1'b0;
        tr.w_done = 1'b1;
    endtask

    // Serial mode: assert BREADY after a random delay, wait for the B
    // handshake, store BRESP/BUSER and check BID == AWID (AXI_BID).
    task collect_b(axi_seq_item tr);
        int unsigned dly = $urandom_range(0, cfg.max_bready_delay);
        if (dly > 0) begin
            vif.bready <= 1'b0;
            repeat (dly) tick();
        end
        vif.bready <= 1'b1;
        do tick(); while (vif.mst_cb.bvalid !== 1'b1);
        tr.bresp = vif.mst_cb.bresp;
        tr.buser = vif.mst_cb.buser;
        if (vif.mst_cb.bid !== tr.id)
            `uvm_error("AXI_BID", $sformatf("BID=%0h expected AWID=%0h", vif.mst_cb.bid, tr.id))
        vif.bready <= 1'b0;
    endtask

    // -------------------------------------------------------------
    // Read
    // -------------------------------------------------------------
    // Drive one AR and wait for its handshake (shared by both modes).
    task drive_ar(axi_seq_item tr);
        repeat ($urandom_range(0, cfg.max_addr_delay)) tick();
        vif.arid     <= tr.id;
        vif.araddr   <= tr.addr;
        vif.arlen    <= tr.len;
        vif.arsize   <= tr.size;
        vif.arburst  <= tr.burst;
        vif.arlock   <= tr.lock;
        vif.arcache  <= tr.cache;
        vif.arprot   <= tr.prot;
        vif.arqos    <= tr.qos;
        vif.arregion <= tr.region;
        vif.aruser   <= tr.auser;
        vif.arvalid  <= 1'b1;
        do tick(); while (vif.mst_cb.arready !== 1'b1);
        vif.arvalid  <= 1'b0;
        tr.aw_done = 1'b1;
    endtask

    // Serial mode: drive AR, then collect len+1 R beats with random RREADY
    // back-pressure into tr.data/rresp/ruser, checking RID and RLAST per beat.
    task do_read(axi_seq_item tr);
        int unsigned dly;

        drive_ar(tr);

        tr.data  = new[32'(tr.len) + 1];
        tr.rresp = new[32'(tr.len) + 1];
        tr.ruser = new[32'(tr.len) + 1];

        for (int unsigned i = 0; i <= tr.len; i++) begin
            dly = $urandom_range(0, cfg.max_rready_delay);
            if (dly > 0) begin
                vif.rready <= 1'b0;
                repeat (dly) tick();
            end
            vif.rready <= 1'b1;
            do tick(); while (vif.mst_cb.rvalid !== 1'b1);
            tr.data[i]  = vif.mst_cb.rdata;
            tr.rresp[i] = vif.mst_cb.rresp;
            tr.ruser[i] = vif.mst_cb.ruser;
            if (vif.mst_cb.rid !== tr.id)
                `uvm_error("AXI_RID", $sformatf("beat %0d: RID=%0h expected ARID=%0h",
                                                i, vif.mst_cb.rid, tr.id))
            if (vif.mst_cb.rlast !== (i == tr.len))
                `uvm_error("AXI_RLAST", $sformatf("beat %0d of %0d: RLAST=%b",
                                                  i, tr.len, vif.mst_cb.rlast))
        end
        vif.rready <= 1'b0;
    endtask

    // =============================================================
    // Pipelined mode
    // =============================================================
    task run_pipelined();
        fork
            engine_supervisor();
            issue_loop();
        join
    endtask

    // Runs the five channel engines while out of reset; on reset (or
    // a watchdog abort) kills them, aborts everything in flight and
    // parks the bus.
    task engine_supervisor();
        forever begin
            if (rst_vif.rst_n !== 1'b1)
                wait (rst_vif.rst_n === 1'b1);
            fork begin
                fork
                    aw_engine();
                    w_engine();
                    ar_engine();
                    b_engine();
                    r_engine();
                    @(negedge rst_vif.rst_n);
                    @(abort_ev);
                join_any
                disable fork;
            end join
            abort_all(rst_vif.rst_n !== 1'b1);
            park();
            tick();
        end
    endtask

    // Pipelined mode: abort every queued / in-flight burst and empty all
    // queues (reset or watchdog).
    function void abort_all(bit by_reset);
        foreach (wr_fly[i]) abort_one(wr_fly[i], by_reset);
        foreach (rd_fly[i]) abort_one(rd_fly[i], by_reset);
        wr_fly.delete();
        rd_fly.delete();
        aw_pend.delete();
        w_pend.delete();
        ar_pend.delete();
    endfunction

    // Mark one burst aborted + completed and log why.
    function void abort_one(axi_seq_item tr, bit by_reset);
        if (tr.completed) return;
        tr.aborted   = 1'b1;
        tr.completed = 1'b1;
        if (by_reset)
            `uvm_info(get_type_name(),
                {"Reset asserted mid-transfer, aborted: ", tr.convert2string()}, UVM_LOW)
        else
            `uvm_info(get_type_name(),
                {"Aborted after watchdog: ", tr.convert2string()}, UVM_LOW)
    endfunction

    // 1 if tr overlaps an in-flight write (any tr) or an in-flight read
    // (tr is a write) -- used by hazard_guard to keep ordering safe.
    function bit hazard(axi_seq_item tr);
        foreach (wr_fly[i])
            if (tr.overlaps(wr_fly[i])) return 1'b1;
        if (tr.write)
            foreach (rd_fly[i])
                if (tr.overlaps(rd_fly[i])) return 1'b1;
        return 1'b0;
    endfunction

    // Pipelined mode: take items from the sequencer, wait for an outstanding
    // slot (and no hazard), queue them on the AW/W or AR engines, start a
    // watchdog and return the item to the sequence at once.
    task issue_loop();
        axi_seq_item tr;
        forever begin
            seq_item_port.get_next_item(req);
            tr = req;
            clear_status(tr);
            if (rst_vif.rst_n !== 1'b1)
                wait (rst_vif.rst_n === 1'b1);
            if (tr.write) while (wr_fly.size() >= cfg.max_outstanding_wr) tick();
            else          while (rd_fly.size() >= cfg.max_outstanding_rd) tick();
            if (cfg.hazard_guard)
                while (hazard(tr)) tick();

            `uvm_info(get_type_name(), {"QUEUE ", tr.convert2string()}, UVM_HIGH)
            if (tr.write) begin
                wr_fly.push_back(tr);
                aw_pend.push_back(tr);
                w_pend.push_back(tr);
            end
            else begin
                tr.data  = new[0];
                tr.rresp = new[0];
                tr.ruser = new[0];
                rd_fly.push_back(tr);
                ar_pend.push_back(tr);
            end
            fork
                watchdog(tr);
            join_none
            seq_item_port.item_done();
        end
    endtask

    // Pipelined mode: error AXI_TIMEOUT and restart the engines if tr has
    // not completed within timeout_of(tr) cycles.
    task automatic watchdog(axi_seq_item tr);
        int unsigned timeout = timeout_of(tr);
        repeat (timeout) begin
            tick();
            if (tr.completed) return;
        end
        if (tr.completed) return;
        tr.timed_out = 1'b1;
        `uvm_error("AXI_TIMEOUT",
            $sformatf("No completion after %0d aclk cycles: %s | %s",
                      timeout, tr.convert2string(), bus_state()))
        ->abort_ev;
    endtask

    // Pipelined mode: drive queued AW requests, one at a time, in order.
    task aw_engine();
        axi_seq_item tr;
        forever begin
            while (aw_pend.size() == 0) tick();
            tr = aw_pend.pop_front();
            drive_aw(tr);
        end
    endtask

    // Pipelined mode: drive W bursts in AW order; a burst may start before
    // its AW (w_before_aw_en) or wait for it.
    task w_engine();
        axi_seq_item tr;
        forever begin
            while (w_pend.size() == 0) tick();
            tr = w_pend[0];
            if (!cfg.w_before_aw_en || $urandom_range(0, 1))
                while (!tr.aw_done) tick();
            drive_w(tr);
            void'(w_pend.pop_front());
        end
    endtask

    // Pipelined mode: drive queued AR requests, one at a time, in order.
    task ar_engine();
        axi_seq_item tr;
        forever begin
            while (ar_pend.size() == 0) tick();
            tr = ar_pend.pop_front();
            drive_ar(tr);
        end
    endtask

    // Pipelined mode: accept B responses (random BREADY delay) and complete
    // the oldest in-flight write with that BID.
    task b_engine();
        int unsigned dly;
        int          idx[$];
        axi_seq_item tr;
        forever begin
            dly = $urandom_range(0, cfg.max_bready_delay);
            if (dly > 0) begin
                vif.bready <= 1'b0;
                repeat (dly) tick();
            end
            vif.bready <= 1'b1;
            do tick(); while (vif.mst_cb.bvalid !== 1'b1);
            vif.bready <= 1'b0;

            idx = wr_fly.find_first_index(t) with (t.id == vif.mst_cb.bid && t.aw_done);
            if (idx.size() == 0) begin
                `uvm_error("AXI_BID", $sformatf("BID=%0h matches no outstanding write",
                                                vif.mst_cb.bid))
                continue;
            end
            tr = wr_fly[idx[0]];
            if (!tr.w_done)
                `uvm_error("AXI_BRESP_EARLY", {"B response before the last W beat: ",
                                               tr.convert2string()})
            tr.bresp     = vif.mst_cb.bresp;
            tr.buser     = vif.mst_cb.buser;
            tr.completed = 1'b1;
            wr_fly.delete(idx[0]);
            `uvm_info(get_type_name(), {"DONE  ", tr.convert2string()}, UVM_HIGH)
        end
    endtask

    // Pipelined mode: accept R beats (random RREADY delay), append them to
    // the oldest in-flight read with that RID, check interleaving / RLAST,
    // and complete the read on its last beat.
    task r_engine();
        int unsigned dly;
        int          idx[$], busy[$];
        int          n;
        axi_seq_item tr;
        forever begin
            dly = $urandom_range(0, cfg.max_rready_delay);
            if (dly > 0) begin
                vif.rready <= 1'b0;
                repeat (dly) tick();
            end
            vif.rready <= 1'b1;
            do tick(); while (vif.mst_cb.rvalid !== 1'b1);
            vif.rready <= 1'b0;

            idx = rd_fly.find_first_index(t) with (t.id == vif.mst_cb.rid && t.aw_done);
            if (idx.size() == 0) begin
                `uvm_error("AXI_RID", $sformatf("RID=%0h matches no outstanding read",
                                                vif.mst_cb.rid))
                continue;
            end
            tr = rd_fly[idx[0]];

            if (!cfg.rd_interleave_ok) begin
                busy = rd_fly.find_index(t) with (t.data.size() > 0 && t != tr);
                if (busy.size() > 0)
                    `uvm_error("AXI_RINTERLEAVE",
                        $sformatf("RID=%0h beat while burst RID=%0h is incomplete (interleaving not enabled)",
                                  vif.mst_cb.rid, rd_fly[busy[0]].id))
            end

            n = tr.data.size();
            tr.data  = new[n + 1](tr.data);
            tr.rresp = new[n + 1](tr.rresp);
            tr.ruser = new[n + 1](tr.ruser);
            tr.data[n]  = vif.mst_cb.rdata;
            tr.rresp[n] = vif.mst_cb.rresp;
            tr.ruser[n] = vif.mst_cb.ruser;

            if (vif.mst_cb.rlast !== (n == 32'(tr.len)))
                `uvm_error("AXI_RLAST", $sformatf("beat %0d of %0d: RLAST=%b",
                                                  n, tr.len, vif.mst_cb.rlast))
            if (vif.mst_cb.rlast === 1'b1 || n == 32'(tr.len)) begin
                tr.completed = 1'b1;
                rd_fly.delete(idx[0]);
                `uvm_info(get_type_name(), {"DONE  ", tr.convert2string()}, UVM_HIGH)
            end
        end
    endtask

endclass
