// ------------------------------------------------------------
// axi_driver.sv
//
// AXI4 master driver. One burst per item, one outstanding
// transaction at a time (sram_top's axi4_slave serializes
// reads and writes anyway).
//
// Write : AW and W run in parallel (W may lead AW when
//         cfg.w_before_aw_en=1), then B is collected.
// Read  : AR, then len+1 R beats are collected into item.data
//         and item.rresp.
//
// Random wvalid gaps and bready/rready back-pressure come from
// axi_agent_config.
//
// All master outputs are driven with NBAs immediately after an
// tick() (one mst_cb edge); slave outputs are read through mst_cb.
//
// Reset handshake: if aresetn drops mid-transfer the burst is
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

    function new(string name = "axi_driver", uvm_component parent = null);
        super.new(name, parent);
    endfunction

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
        vif.awvalid <= 1'b0;
        vif.wvalid  <= 1'b0;
        vif.wlast   <= 1'b0;
        vif.bready  <= 1'b0;
        vif.arvalid <= 1'b0;
        vif.rready  <= 1'b0;
        vif.awid    <= '0;
        vif.awaddr  <= '0;
        vif.awlen   <= '0;
        vif.awsize  <= '0;
        vif.awburst <= '0;
        vif.awlock  <= '0;
        vif.awcache <= '0;
        vif.awprot  <= '0;
        vif.awqos   <= '0;
        vif.wdata   <= '0;
        vif.wstrb   <= '0;
        vif.arid    <= '0;
        vif.araddr  <= '0;
        vif.arlen   <= '0;
        vif.arsize  <= '0;
        vif.arburst <= '0;
        vif.arlock  <= '0;
        vif.arcache <= '0;
        vif.arprot  <= '0;
        vif.arqos   <= '0;
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

    task run_phase(uvm_phase phase);
        park();
        forever begin
            seq_item_port.get_next_item(req);
            if (rst_vif.rst_n !== 1'b1)
                wait (rst_vif.rst_n === 1'b1);
            tick();
            drive_item(req);
            seq_item_port.item_done();
        end
    endtask

    task drive_item(axi_seq_item tr);
        int unsigned timeout;
        tr.aborted   = 1'b0;
        tr.timed_out = 1'b0;
        timeout = cfg.timeout_base + cfg.timeout_per_beat * (32'(tr.len) + 1);

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

        `uvm_info(get_type_name(), {"DONE  ", tr.convert2string()}, UVM_HIGH)
    endtask

    // -------------------------------------------------------------
    // Write
    // -------------------------------------------------------------
    task do_write(axi_seq_item tr);
        bit aw_done = 1'b0;
        fork
            begin
                drive_aw(tr);
                aw_done = 1'b1;
            end
            begin
                if (!cfg.w_before_aw_en || $urandom_range(0, 1))
                    wait (aw_done);
                drive_w(tr);
            end
        join
        collect_b(tr);
    endtask

    task drive_aw(axi_seq_item tr);
        repeat ($urandom_range(0, cfg.max_addr_delay)) tick();
        vif.awid    <= tr.id;
        vif.awaddr  <= tr.addr;
        vif.awlen   <= tr.len;
        vif.awsize  <= tr.size;
        vif.awburst <= tr.burst;
        vif.awlock  <= tr.lock;
        vif.awcache <= tr.cache;
        vif.awprot  <= tr.prot;
        vif.awqos   <= tr.qos;
        vif.awvalid <= 1'b1;
        do tick(); while (vif.mst_cb.awready !== 1'b1);
        vif.awvalid <= 1'b0;
    endtask

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
            vif.wlast  <= (i == tr.len);
            vif.wvalid <= 1'b1;
            do tick(); while (vif.mst_cb.wready !== 1'b1);
        end
        vif.wvalid <= 1'b0;
        vif.wlast  <= 1'b0;
    endtask

    task collect_b(axi_seq_item tr);
        int unsigned dly = $urandom_range(0, cfg.max_bready_delay);
        if (dly > 0) begin
            vif.bready <= 1'b0;
            repeat (dly) tick();
        end
        vif.bready <= 1'b1;
        do tick(); while (vif.mst_cb.bvalid !== 1'b1);
        tr.bresp = vif.mst_cb.bresp;
        if (vif.mst_cb.bid !== tr.id)
            `uvm_error("AXI_BID", $sformatf("BID=%0h expected AWID=%0h", vif.mst_cb.bid, tr.id))
        vif.bready <= 1'b0;
    endtask

    // -------------------------------------------------------------
    // Read
    // -------------------------------------------------------------
    task do_read(axi_seq_item tr);
        int unsigned dly;

        repeat ($urandom_range(0, cfg.max_addr_delay)) tick();
        vif.arid    <= tr.id;
        vif.araddr  <= tr.addr;
        vif.arlen   <= tr.len;
        vif.arsize  <= tr.size;
        vif.arburst <= tr.burst;
        vif.arlock  <= tr.lock;
        vif.arcache <= tr.cache;
        vif.arprot  <= tr.prot;
        vif.arqos   <= tr.qos;
        vif.arvalid <= 1'b1;
        do tick(); while (vif.mst_cb.arready !== 1'b1);
        vif.arvalid <= 1'b0;

        tr.data  = new[32'(tr.len) + 1];
        tr.rresp = new[32'(tr.len) + 1];

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
            if (vif.mst_cb.rid !== tr.id)
                `uvm_error("AXI_RID", $sformatf("beat %0d: RID=%0h expected ARID=%0h",
                                                i, vif.mst_cb.rid, tr.id))
            if (vif.mst_cb.rlast !== (i == tr.len))
                `uvm_error("AXI_RLAST", $sformatf("beat %0d of %0d: RLAST=%b",
                                                  i, tr.len, vif.mst_cb.rlast))
        end
        vif.rready <= 1'b0;
    endtask

endclass
