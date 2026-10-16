// ------------------------------------------------------------
// axi_monitor.sv
//
// Passive AXI4 observer. Rebuilds complete bursts from the five
// channels and publishes one axi_seq_item per burst:
//   write : on the B handshake (AW + collected W beats + BRESP)
//   read  : on the RLAST handshake (AR + RDATA/RRESP per beat)
//
// W beats are collected independently of AW, so W-before-AW is
// handled. Reads are matched to their AR by RID.
//
// On aresetn assertion every write that had its AW accepted but
// no B yet is published with aborted=1 (with whatever W beats
// were seen), so the scoreboard can mark those bytes as unknown:
// some of the beats may already be in the SRAM.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_monitor extends uvm_monitor;

    `uvm_component_utils(axi_monitor)

    virtual axi_if   vif;
    virtual reset_if rst_vif;

    uvm_analysis_port #(axi_seq_item) ap;

    axi_seq_item aw_q[$];   // AW accepted, waiting for B
    axi_seq_item w_q[$];    // complete W bursts (data/strb only)
    axi_seq_item ar_q[$];   // AR accepted, collecting R

    bit [`AXI_DATA_WIDTH-1:0] w_data_cur[$];
    bit [`AXI_STRB_WIDTH-1:0] w_strb_cur[$];

    int unsigned num_writes, num_reads, num_aborted;

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
        axi_seq_item tr;
        foreach (aw_q[i]) begin
            tr = aw_q[i];
            tr.aborted = 1'b1;
            if (w_q.size() > 0) begin
                axi_seq_item w = w_q.pop_front();
                tr.data = w.data;
                tr.strb = w.strb;
            end
            else begin
                tr.data = new[w_data_cur.size()];
                tr.strb = new[w_strb_cur.size()];
                foreach (w_data_cur[j]) begin
                    tr.data[j] = w_data_cur[j];
                    tr.strb[j] = w_strb_cur[j];
                end
            end
            num_aborted++;
            `uvm_info(get_type_name(), {"Aborted by reset: ", tr.convert2string()}, UVM_LOW)
            ap.write(tr);
        end
        aw_q.delete();
        w_q.delete();
        ar_q.delete();
        w_data_cur.delete();
        w_strb_cur.delete();
    endfunction

    task sample_loop();
        forever begin
            #1ps;            // never sample the same edge twice (see axi_driver.tick)
            @(vif.mon_cb);
            if (rst_vif.rst_n !== 1'b1) continue;
            sample_aw();
            sample_w();
            sample_b();
            sample_ar();
            sample_r();
        end
    endtask

    function void sample_aw();
        axi_seq_item tr;
        if (!(vif.mon_cb.awvalid === 1'b1 && vif.mon_cb.awready === 1'b1)) return;
        tr = axi_seq_item::type_id::create("mon_wr");
        tr.write = 1'b1;
        tr.id    = vif.mon_cb.awid;
        tr.addr  = vif.mon_cb.awaddr;
        tr.len   = vif.mon_cb.awlen;
        tr.size  = vif.mon_cb.awsize;
        tr.burst = axi_burst_e'(vif.mon_cb.awburst);
        tr.lock  = vif.mon_cb.awlock;
        tr.cache = vif.mon_cb.awcache;
        tr.prot  = vif.mon_cb.awprot;
        tr.qos   = vif.mon_cb.awqos;
        tr.aligned = tr.is_aligned();
        aw_q.push_back(tr);
    endfunction

    function void sample_w();
        axi_seq_item w;
        if (!(vif.mon_cb.wvalid === 1'b1 && vif.mon_cb.wready === 1'b1)) return;
        w_data_cur.push_back(vif.mon_cb.wdata);
        w_strb_cur.push_back(vif.mon_cb.wstrb);
        if (vif.mon_cb.wlast === 1'b1) begin
            w = axi_seq_item::type_id::create("mon_w");
            w.data = new[w_data_cur.size()];
            w.strb = new[w_strb_cur.size()];
            foreach (w_data_cur[j]) begin
                w.data[j] = w_data_cur[j];
                w.strb[j] = w_strb_cur[j];
            end
            w_q.push_back(w);
            w_data_cur.delete();
            w_strb_cur.delete();
        end
    endfunction

    function void sample_b();
        axi_seq_item tr, w;
        int idx[$];
        if (!(vif.mon_cb.bvalid === 1'b1 && vif.mon_cb.bready === 1'b1)) return;

        idx = aw_q.find_first_index(t) with (t.id == vif.mon_cb.bid);
        if (idx.size() == 0) begin
            `uvm_error("AXI_MON", $sformatf("B handshake with BID=%0h but no matching AW",
                                            vif.mon_cb.bid))
            return;
        end
        if (w_q.size() == 0) begin
            `uvm_error("AXI_MON", "B handshake before WLAST was seen")
            return;
        end
        tr = aw_q[idx[0]];
        aw_q.delete(idx[0]);
        w = w_q.pop_front();
        tr.data  = w.data;
        tr.strb  = w.strb;
        tr.bresp = vif.mon_cb.bresp;

        if (tr.data.size() != 32'(tr.len) + 1)
            `uvm_error("AXI_MON", $sformatf("Write burst has %0d W beats, AWLEN+1=%0d",
                                            tr.data.size(), 32'(tr.len) + 1))
        num_writes++;
        `uvm_info(get_type_name(), tr.convert2string(), UVM_HIGH)
        ap.write(tr);
    endfunction

    function void sample_ar();
        axi_seq_item tr;
        if (!(vif.mon_cb.arvalid === 1'b1 && vif.mon_cb.arready === 1'b1)) return;
        tr = axi_seq_item::type_id::create("mon_rd");
        tr.write = 1'b0;
        tr.id    = vif.mon_cb.arid;
        tr.addr  = vif.mon_cb.araddr;
        tr.len   = vif.mon_cb.arlen;
        tr.size  = vif.mon_cb.arsize;
        tr.burst = axi_burst_e'(vif.mon_cb.arburst);
        tr.lock  = vif.mon_cb.arlock;
        tr.cache = vif.mon_cb.arcache;
        tr.prot  = vif.mon_cb.arprot;
        tr.qos   = vif.mon_cb.arqos;
        tr.aligned = tr.is_aligned();
        tr.data  = new[0];
        tr.rresp = new[0];
        ar_q.push_back(tr);
    endfunction

    function void sample_r();
        axi_seq_item tr;
        int idx[$];
        int n;
        if (!(vif.mon_cb.rvalid === 1'b1 && vif.mon_cb.rready === 1'b1)) return;

        idx = ar_q.find_first_index(t) with (t.id == vif.mon_cb.rid);
        if (idx.size() == 0) begin
            `uvm_error("AXI_MON", $sformatf("R beat with RID=%0h but no matching AR",
                                            vif.mon_cb.rid))
            return;
        end
        tr = ar_q[idx[0]];
        n  = tr.data.size();
        tr.data  = new[n + 1](tr.data);
        tr.rresp = new[n + 1](tr.rresp);
        tr.data[n]  = vif.mon_cb.rdata;
        tr.rresp[n] = vif.mon_cb.rresp;

        if (vif.mon_cb.rlast === 1'b1) begin
            if (n + 1 != 32'(tr.len) + 1)
                `uvm_error("AXI_MON", $sformatf("RLAST on beat %0d, ARLEN+1=%0d",
                                                n + 1, 32'(tr.len) + 1))
            ar_q.delete(idx[0]);
            num_reads++;
            `uvm_info(get_type_name(), tr.convert2string(), UVM_HIGH)
            ap.write(tr);
        end
    endfunction

    function void report_phase(uvm_phase phase);
        `uvm_info(get_type_name(),
            $sformatf("Observed %0d write bursts, %0d read bursts, %0d aborted",
                      num_writes, num_reads, num_aborted), UVM_LOW)
    endfunction

endclass
