// ------------------------------------------------------------
// axi_monitor.sv
//
// Passive AXI4 observer. Rebuilds complete bursts from the five
// channels and publishes one axi_seq_item per burst:
//   write : on the B handshake (AW + collected W beats + BRESP)
//   read  : on the RLAST handshake (AR + RDATA/RRESP per beat)
//
// W bursts are attached to AWs in order (AXI4 has no write data
// interleaving), independently of when each arrives, so
// W-before-AW is handled. B is matched to the oldest AW with the
// same BID, R beats to the oldest AR with the same RID, so
// out-of-order responses across IDs and interleaved read data are
// both rebuilt correctly.
//
// On aresetn assertion every burst that had its address accepted
// but no response yet is published with aborted=1 (writes with
// whatever W beats were seen), so the scoreboard can mark those
// bytes as unknown: some of the beats may already be in the SRAM.
//
// Per burst it also records the handshake timing used by
// sram_coverage (aclk cycles, see axi_seq_item): addr_wait,
// w_gap_cycles, w_lead, resp_stall, idle_before, and reports the
// read latency (AR handshake -> first R beat) in report_phase.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_monitor extends uvm_monitor;

    `uvm_component_utils(axi_monitor)

    virtual axi_if   vif;
    virtual reset_if rst_vif;

    uvm_analysis_port #(axi_seq_item) ap;

    axi_seq_item aw_q[$];   // AW accepted, waiting for B (W attached in order)
    axi_seq_item w_q[$];    // complete W bursts that arrived before their AW
    axi_seq_item ar_q[$];   // AR accepted, collecting R

    bit [`AXI_DATA_WIDTH-1:0] w_data_cur[$];
    bit [`AXI_STRB_WIDTH-1:0] w_strb_cur[$];
    bit [`AXI_USER_WIDTH-1:0] w_user_cur[$];

    // ---- timing state -------------------------------------------
    longint unsigned cyc;
    longint unsigned last_end;
    bit              aw_active, ar_active, w_active;
    longint unsigned aw_start,  ar_start,  w_start;
    int unsigned     aw_wait,   ar_wait,   w_gaps;
    int unsigned     b_stall;
    int unsigned     r_stall [bit [`AXI_ID_WIDTH-1:0]];

    int unsigned     num_writes, num_reads, num_aborted;
    longint unsigned rd_lat_min = '1, rd_lat_max, rd_lat_sum;

    function new(string name = "axi_monitor", uvm_component parent = null);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_resource_db#(virtual axi_if)::read_by_name(
                get_full_name(), "vif", vif))
            `uvm_fatal(get_type_name(), "axi_if vif not set")
        if (!uvm_resource_db#(virtual reset_if)::read_by_name(
                get_full_name(), "rst_vif", rst_vif))
            `uvm_fatal(get_type_name(), "reset_if rst_vif not set")
    endfunction

    task run_phase(uvm_phase phase);
        fork
            sample_loop();
            reset_loop();
        join
    endtask

    task reset_loop();
        forever begin
            @(negedge rst_vif.rst_n);
            flush_on_reset();
        end
    endtask

    function void flush_on_reset();
        foreach (aw_q[i]) begin
            if (aw_q[i].data.size() == 0) begin
                // W burst still in progress (or not started)
                aw_q[i].data  = new[w_data_cur.size()];
                aw_q[i].strb  = new[w_strb_cur.size()];
                aw_q[i].wuser = new[w_user_cur.size()];
                foreach (w_data_cur[j]) begin
                    aw_q[i].data[j]  = w_data_cur[j];
                    aw_q[i].strb[j]  = w_strb_cur[j];
                    aw_q[i].wuser[j] = w_user_cur[j];
                end
                w_data_cur.delete();
                w_strb_cur.delete();
                w_user_cur.delete();
            end
            publish_aborted(aw_q[i]);
        end
        foreach (ar_q[i]) publish_aborted(ar_q[i]);
        aw_q.delete();
        w_q.delete();
        ar_q.delete();
        w_data_cur.delete();
        w_strb_cur.delete();
        w_user_cur.delete();
        r_stall.delete();
        aw_active = 1'b0;
        ar_active = 1'b0;
        w_active  = 1'b0;
        b_stall   = 0;
    endfunction

    function void publish_aborted(axi_seq_item tr);
        tr.aborted   = 1'b1;
        tr.end_cycle = cyc;
        num_aborted++;
        `uvm_info(get_type_name(), {"Aborted by reset: ", tr.convert2string()}, UVM_LOW)
        ap.write(tr);
    endfunction

    task sample_loop();
        forever begin
            #1ps;            // never sample the same edge twice (see axi_driver.tick)
            @(vif.mon_cb);
            if (rst_vif.rst_n !== 1'b1) continue;
            cyc++;
            sample_aw();
            sample_w();
            sample_b();
            sample_ar();
            sample_r();
        end
    endtask

    function int unsigned idle_since_last(longint unsigned start);
        return (start > last_end + 1) ? int'(start - last_end - 1) : 0;
    endfunction

    // Pair a finished W burst with its AW and work out which VALID came first.
    function void attach_w(axi_seq_item aw, axi_seq_item w);
        aw.data         = w.data;
        aw.strb         = w.strb;
        aw.wuser        = w.wuser;
        aw.w_gap_cycles = w.w_gap_cycles;
        aw.w_lead       = int'(w.addr_cycle) - int'(aw.addr_cycle);
    endfunction

    function void sample_aw();
        axi_seq_item tr;
        int          idx[$];
        if (vif.mon_cb.awvalid !== 1'b1) return;
        if (!aw_active) begin
            aw_active = 1'b1;
            aw_start  = cyc;
            aw_wait   = 0;
        end
        if (vif.mon_cb.awready !== 1'b1) begin
            aw_wait++;
            return;
        end
        aw_active = 1'b0;

        tr = axi_seq_item::type_id::create("mon_wr");
        tr.write       = 1'b1;
        tr.id          = vif.mon_cb.awid;
        tr.addr        = vif.mon_cb.awaddr;
        tr.len         = vif.mon_cb.awlen;
        tr.size        = vif.mon_cb.awsize;
        tr.burst       = axi_burst_e'(vif.mon_cb.awburst);
        tr.lock        = vif.mon_cb.awlock;
        tr.cache       = vif.mon_cb.awcache;
        tr.prot        = vif.mon_cb.awprot;
        tr.qos         = vif.mon_cb.awqos;
        tr.region      = vif.mon_cb.awregion;
        tr.auser       = vif.mon_cb.awuser;
        tr.aligned     = tr.is_aligned();
        tr.addr_cycle  = aw_start;
        tr.addr_wait   = aw_wait;
        tr.idle_before = idle_since_last(aw_start);
        tr.inflight    = aw_q.size() + ar_q.size();
        tr.data        = new[0];

        // A W burst may already be complete (W before AW).
        if (w_q.size() > 0)
            attach_w(tr, w_q.pop_front());
        aw_q.push_back(tr);
    endfunction

    function void sample_w();
        axi_seq_item w;
        int          idx[$];
        if (vif.mon_cb.wvalid !== 1'b1) begin
            if (w_active) w_gaps++;
            return;
        end
        if (!w_active) begin
            w_active = 1'b1;
            w_start  = cyc;
            w_gaps   = 0;
        end
        if (vif.mon_cb.wready !== 1'b1) return;

        w_data_cur.push_back(vif.mon_cb.wdata);
        w_strb_cur.push_back(vif.mon_cb.wstrb);
        w_user_cur.push_back(vif.mon_cb.wuser);
        if (vif.mon_cb.wlast === 1'b1) begin
            w = axi_seq_item::type_id::create("mon_w");
            w.data  = new[w_data_cur.size()];
            w.strb  = new[w_strb_cur.size()];
            w.wuser = new[w_user_cur.size()];
            foreach (w_data_cur[j]) begin
                w.data[j]  = w_data_cur[j];
                w.strb[j]  = w_strb_cur[j];
                w.wuser[j] = w_user_cur[j];
            end
            w.addr_cycle   = w_start;
            w.w_gap_cycles = w_gaps;
            w_data_cur.delete();
            w_strb_cur.delete();
            w_user_cur.delete();
            w_active = 1'b0;

            // Oldest AW without data gets this burst.
            idx = aw_q.find_first_index(t) with (t.data.size() == 0);
            if (idx.size() > 0) attach_w(aw_q[idx[0]], w);
            else                w_q.push_back(w);
        end
    endfunction

    function void sample_b();
        axi_seq_item tr;
        int idx[$];
        if (vif.mon_cb.bvalid !== 1'b1) return;
        if (vif.mon_cb.bready !== 1'b1) begin
            b_stall++;
            return;
        end

        idx = aw_q.find_first_index(t) with (t.id == vif.mon_cb.bid);
        if (idx.size() == 0) begin
            `uvm_error("AXI_MON", $sformatf("B handshake with BID=%0h but no matching AW",
                                            vif.mon_cb.bid))
            b_stall = 0;
            return;
        end
        tr = aw_q[idx[0]];
        if (tr.data.size() == 0) begin
            `uvm_error("AXI_MON", "B handshake before WLAST was seen")
            b_stall = 0;
            return;
        end
        aw_q.delete(idx[0]);
        tr.out_of_order = (idx[0] != 0);
        tr.bresp      = vif.mon_cb.bresp;
        tr.buser      = vif.mon_cb.buser;
        tr.resp_stall = b_stall;
        tr.end_cycle  = cyc;
        b_stall  = 0;
        last_end = cyc;

        if (tr.data.size() != 32'(tr.len) + 1)
            `uvm_error("AXI_MON", $sformatf("Write burst has %0d W beats, AWLEN+1=%0d",
                                            tr.data.size(), 32'(tr.len) + 1))
        num_writes++;
        `uvm_info(get_type_name(), tr.convert2string(), UVM_HIGH)
        ap.write(tr);
    endfunction

    function void sample_ar();
        axi_seq_item tr;
        if (vif.mon_cb.arvalid !== 1'b1) return;
        if (!ar_active) begin
            ar_active = 1'b1;
            ar_start  = cyc;
            ar_wait   = 0;
        end
        if (vif.mon_cb.arready !== 1'b1) begin
            ar_wait++;
            return;
        end
        ar_active = 1'b0;

        tr = axi_seq_item::type_id::create("mon_rd");
        tr.write       = 1'b0;
        tr.id          = vif.mon_cb.arid;
        tr.addr        = vif.mon_cb.araddr;
        tr.len         = vif.mon_cb.arlen;
        tr.size        = vif.mon_cb.arsize;
        tr.burst       = axi_burst_e'(vif.mon_cb.arburst);
        tr.lock        = vif.mon_cb.arlock;
        tr.cache       = vif.mon_cb.arcache;
        tr.prot        = vif.mon_cb.arprot;
        tr.qos         = vif.mon_cb.arqos;
        tr.region      = vif.mon_cb.arregion;
        tr.auser       = vif.mon_cb.aruser;
        tr.aligned     = tr.is_aligned();
        tr.addr_cycle  = ar_start;
        tr.addr_wait   = ar_wait;
        tr.idle_before = idle_since_last(ar_start);
        tr.inflight    = aw_q.size() + ar_q.size();
        tr.data        = new[0];
        tr.rresp       = new[0];
        tr.ruser       = new[0];
        ar_q.push_back(tr);
    endfunction

    function void sample_r();
        axi_seq_item     tr;
        int              idx[$];
        int              n;
        longint unsigned lat;
        if (vif.mon_cb.rvalid !== 1'b1) return;
        if (vif.mon_cb.rready !== 1'b1) begin
            if (r_stall.exists(vif.mon_cb.rid)) r_stall[vif.mon_cb.rid]++;
            else                                r_stall[vif.mon_cb.rid] = 1;
            return;
        end

        idx = ar_q.find_first_index(t) with (t.id == vif.mon_cb.rid);
        if (idx.size() == 0) begin
            `uvm_error("AXI_MON", $sformatf("R beat with RID=%0h but no matching AR",
                                            vif.mon_cb.rid))
            return;
        end
        tr = ar_q[idx[0]];
        n  = tr.data.size();
        if (n == 0) begin
            tr.first_data_cycle = cyc;
            lat = cyc - (tr.addr_cycle + tr.addr_wait);
            if (lat < rd_lat_min) rd_lat_min = lat;
            if (lat > rd_lat_max) rd_lat_max = lat;
            rd_lat_sum += lat;
        end
        tr.data  = new[n + 1](tr.data);
        tr.rresp = new[n + 1](tr.rresp);
        tr.ruser = new[n + 1](tr.ruser);
        tr.data[n]  = vif.mon_cb.rdata;
        tr.rresp[n] = vif.mon_cb.rresp;
        tr.ruser[n] = vif.mon_cb.ruser;

        if (vif.mon_cb.rlast === 1'b1) begin
            if (n + 1 != 32'(tr.len) + 1)
                `uvm_error("AXI_MON", $sformatf("RLAST on beat %0d, ARLEN+1=%0d",
                                                n + 1, 32'(tr.len) + 1))
            ar_q.delete(idx[0]);
            tr.out_of_order = (idx[0] != 0);
            if (r_stall.exists(tr.id)) begin
                tr.resp_stall = r_stall[tr.id];
                r_stall.delete(tr.id);
            end
            tr.end_cycle = cyc;
            last_end     = cyc;
            num_reads++;
            `uvm_info(get_type_name(), tr.convert2string(), UVM_HIGH)
            ap.write(tr);
        end
    endfunction

    function void report_phase(uvm_phase phase);
        `uvm_info(get_type_name(),
            $sformatf("Observed %0d write bursts, %0d read bursts, %0d aborted",
                      num_writes, num_reads, num_aborted), UVM_LOW)
        if (num_reads > 0)
            `uvm_info(get_type_name(),
                $sformatf("Read latency AR handshake -> first R beat (aclk): min=%0d max=%0d avg=%0.1f",
                          rd_lat_min, rd_lat_max, real'(rd_lat_sum) / num_reads), UVM_LOW)
    endfunction

endclass
