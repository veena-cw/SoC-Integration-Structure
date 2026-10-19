// ------------------------------------------------------------
// axi_assertions.sv
//
// AXI4 handshake rules on the s_axi_* port (IHI0022 A3.2):
//   * once VALID is high it stays high, with a stable payload,
//     until the READY handshake -- checked on all 5 channels
//     (AW/W/AR for the TB master, B/R for the DUT)
//   * DUT outputs never X/Z out of reset
//   * master control/payload never X/Z out of reset
//   * VALID low while in reset, all channels (A3.1.2)
//   * AW/AR payload is AXI4 legal (A3.4): AxBURST != reserved,
//     AxSIZE <= bus width, WRAP length 2/4/8/16 and aligned start,
//     INCR does not cross 4 KB, AxCACHE not reserved (A4.4),
//     exclusive rules when AxLOCK=1 (A7.2.4)
// cover properties (type "user" in the coverage database) record
// the channel orderings named in the test plan: W before AW, AW and
// AR together, AW while the slave is busy, B / R back-pressure.
// Data correctness is the scoreboard's job, not this module's.
// Failures go through `uvm_error so they are counted in the UVM
// report (Verilator would otherwise stop on $error).
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

// COVER_EN=0 drops the cover properties (used for the extra agent
// interfaces in tb_top, which have no slave yet -- their covers could
// never be hit and would only add holes to the coverage database).
module axi_assertions #(parameter bit COVER_EN = 1'b1) (axi_if vif);

    localparam int MAX_SIZE = $clog2(`AXI_STRB_WIDTH);

    // Why an AW/AR payload is illegal ("" = legal).
    function automatic string ax_violation(logic [`AXI_ADDR_WIDTH-1:0] addr, logic [7:0] len,
                                           logic [2:0] size, logic [1:0] burst,
                                           logic lock, logic [3:0] cache);
        int unsigned beats = 32'(len) + 1;
        int unsigned total = beats << size;
        if (burst == 2'b11)    return "reserved AxBURST=2'b11";
        if (size > MAX_SIZE)   return "AxSIZE wider than the data bus";
        if (burst == 2'b10) begin
            if (!(len inside {8'd1, 8'd3, 8'd7, 8'd15})) return "WRAP length not 2/4/8/16";
            if ((addr & ((32'd1 << size) - 1)) != 0)     return "WRAP start not aligned to AxSIZE";
        end
        if (burst == 2'b01 && ((32'(addr[11:0]) >> size) + beats) > (32'd4096 >> size))
            return "INCR burst crosses a 4 KB boundary";
        if (cache inside {4'b0100, 4'b0101, 4'b1000, 4'b1001, 4'b1100, 4'b1101})
            return "reserved AxCACHE encoding";
        if (lock) begin
            if (beats > 16)                     return "exclusive burst longer than 16 beats";
            if (total > 128)                    return "exclusive burst larger than 128 bytes";
            if (!(beats inside {1, 2, 4, 8, 16})) return "exclusive byte count not a power of 2";
            if ((addr % total) != 0)            return "exclusive address not aligned to its size";
        end
        return "";
    endfunction

    // ---- Master channels (TB driver) ----------------------------
    property p_aw_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.awvalid && !vif.awready) |=>
            vif.awvalid && $stable({vif.awid, vif.awaddr, vif.awlen, vif.awsize,
                                    vif.awburst, vif.awlock, vif.awcache,
                                    vif.awprot, vif.awqos, vif.awregion, vif.awuser});
    endproperty
    assert_aw_hold: assert property (p_aw_hold)
        else `uvm_error("AXI_ASSERT", "AW: AWVALID dropped or payload changed before AWREADY")

    property p_w_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.wvalid && !vif.wready) |=>
            vif.wvalid && $stable({vif.wdata, vif.wstrb, vif.wlast, vif.wuser});
    endproperty
    assert_w_hold: assert property (p_w_hold)
        else `uvm_error("AXI_ASSERT", "W: WVALID dropped or payload changed before WREADY")

    property p_ar_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.arvalid && !vif.arready) |=>
            vif.arvalid && $stable({vif.arid, vif.araddr, vif.arlen, vif.arsize,
                                    vif.arburst, vif.arlock, vif.arcache,
                                    vif.arprot, vif.arqos, vif.arregion, vif.aruser});
    endproperty
    assert_ar_hold: assert property (p_ar_hold)
        else `uvm_error("AXI_ASSERT", "AR: ARVALID dropped or payload changed before ARREADY")

    // ---- Slave channels (DUT) -----------------------------------
    property p_b_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.bvalid && !vif.bready) |=>
            vif.bvalid && $stable({vif.bid, vif.bresp, vif.buser});
    endproperty
    assert_b_hold: assert property (p_b_hold)
        else `uvm_error("AXI_ASSERT", "B: BVALID dropped or BID/BRESP changed before BREADY")

    property p_r_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.rvalid && !vif.rready) |=>
            vif.rvalid && $stable({vif.rid, vif.rdata, vif.rresp, vif.rlast, vif.ruser});
    endproperty
    assert_r_hold: assert property (p_r_hold)
        else `uvm_error("AXI_ASSERT", "R: RVALID dropped or payload changed before RREADY")

    // ---- No X on DUT outputs ------------------------------------
    property p_no_x_ctrl;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        !$isunknown({vif.awready, vif.wready, vif.bvalid, vif.arready, vif.rvalid});
    endproperty
    assert_no_x_ctrl: assert property (p_no_x_ctrl)
        else `uvm_error("AXI_ASSERT", "X/Z on AWREADY/WREADY/BVALID/ARREADY/RVALID")

    property p_no_x_b;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        vif.bvalid |-> !$isunknown({vif.bid, vif.bresp});
    endproperty
    assert_no_x_b: assert property (p_no_x_b)
        else `uvm_error("AXI_ASSERT", "X/Z on BID/BRESP while BVALID")

    property p_no_x_r;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        vif.rvalid |-> !$isunknown({vif.rid, vif.rresp, vif.rlast, vif.rdata});
    endproperty
    assert_no_x_r: assert property (p_no_x_r)
        else `uvm_error("AXI_ASSERT", "X/Z on RID/RRESP/RLAST/RDATA while RVALID")

    // ---- No X on master (TB) outputs ------------------------------
    property p_no_x_mst_ctrl;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        !$isunknown({vif.awvalid, vif.wvalid, vif.bready, vif.arvalid, vif.rready});
    endproperty
    assert_no_x_mst_ctrl: assert property (p_no_x_mst_ctrl)
        else `uvm_error("AXI_ASSERT", "X/Z on AWVALID/WVALID/BREADY/ARVALID/RREADY")

    property p_no_x_aw;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        vif.awvalid |-> !$isunknown({vif.awid, vif.awaddr, vif.awlen, vif.awsize, vif.awburst,
                                     vif.awlock, vif.awcache, vif.awprot, vif.awqos,
                                     vif.awregion, vif.awuser});
    endproperty
    assert_no_x_aw: assert property (p_no_x_aw)
        else `uvm_error("AXI_ASSERT", "X/Z on AW payload while AWVALID")

    property p_no_x_w;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        vif.wvalid |-> !$isunknown({vif.wdata, vif.wstrb, vif.wlast, vif.wuser});
    endproperty
    assert_no_x_w: assert property (p_no_x_w)
        else `uvm_error("AXI_ASSERT", "X/Z on W payload while WVALID")

    property p_no_x_ar;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        vif.arvalid |-> !$isunknown({vif.arid, vif.araddr, vif.arlen, vif.arsize, vif.arburst,
                                     vif.arlock, vif.arcache, vif.arprot, vif.arqos,
                                     vif.arregion, vif.aruser});
    endproperty
    assert_no_x_ar: assert property (p_no_x_ar)
        else `uvm_error("AXI_ASSERT", "X/Z on AR payload while ARVALID")

    // ---- VALID low during reset (A3.1.2) -----------------------------
    property p_valid_low_in_reset;
        @(posedge vif.aclk)
        !vif.aresetn |-> !(vif.awvalid === 1'b1 || vif.wvalid === 1'b1 || vif.arvalid === 1'b1 ||
                           vif.bvalid  === 1'b1 || vif.rvalid === 1'b1);
    endproperty
    assert_valid_low_in_reset: assert property (p_valid_low_in_reset)
        else `uvm_error("AXI_ASSERT", "a VALID signal is high while ARESETn is low")

    // ---- AW / AR payload legality (TB master) ------------------------
    property p_aw_legal;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        vif.awvalid |-> ax_violation(vif.awaddr, vif.awlen, vif.awsize, vif.awburst,
                                     vif.awlock, vif.awcache) == "";
    endproperty
    assert_aw_legal: assert property (p_aw_legal)
        else `uvm_error("AXI_ASSERT", $sformatf("AW: %s (AWADDR=0x%08h AWLEN=%0d AWSIZE=%0d AWBURST=%0d AWLOCK=%0b AWCACHE=%04b)",
                        ax_violation(vif.awaddr, vif.awlen, vif.awsize, vif.awburst, vif.awlock, vif.awcache),
                        vif.awaddr, vif.awlen, vif.awsize, vif.awburst, vif.awlock, vif.awcache))

    property p_ar_legal;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        vif.arvalid |-> ax_violation(vif.araddr, vif.arlen, vif.arsize, vif.arburst,
                                     vif.arlock, vif.arcache) == "";
    endproperty
    assert_ar_legal: assert property (p_ar_legal)
        else `uvm_error("AXI_ASSERT", $sformatf("AR: %s (ARADDR=0x%08h ARLEN=%0d ARSIZE=%0d ARBURST=%0d ARLOCK=%0b ARCACHE=%04b)",
                        ax_violation(vif.araddr, vif.arlen, vif.arsize, vif.arburst, vif.arlock, vif.arcache),
                        vif.araddr, vif.arlen, vif.arsize, vif.arburst, vif.arlock, vif.arcache))

    // ---- Channel-ordering cover points (test plan) -------------------
    if (COVER_EN) begin : g_cover
        cover_w_before_aw:      cover property (@(posedge vif.aclk) disable iff (!vif.aresetn)
                                                $rose(vif.wvalid) && !vif.awvalid);
        cover_aw_w_same_cycle:  cover property (@(posedge vif.aclk) disable iff (!vif.aresetn)
                                                $rose(vif.awvalid) && $rose(vif.wvalid));
        cover_aw_ar_same_cycle: cover property (@(posedge vif.aclk) disable iff (!vif.aresetn)
                                                vif.awvalid && vif.arvalid);
        cover_aw_while_busy:    cover property (@(posedge vif.aclk) disable iff (!vif.aresetn)
                                                vif.awvalid && !vif.awready);
        cover_ar_while_busy:    cover property (@(posedge vif.aclk) disable iff (!vif.aresetn)
                                                vif.arvalid && !vif.arready);
        cover_b_backpressure:   cover property (@(posedge vif.aclk) disable iff (!vif.aresetn)
                                                vif.bvalid && !vif.bready ##1 vif.bvalid && vif.bready);
        cover_r_backpressure:   cover property (@(posedge vif.aclk) disable iff (!vif.aresetn)
                                                vif.rvalid && !vif.rready ##1 vif.rvalid && vif.rready);
        cover_w_gap_in_burst:   cover property (@(posedge vif.aclk) disable iff (!vif.aresetn)
                                                vif.wvalid && vif.wready && !vif.wlast ##1 !vif.wvalid);
    end

endmodule
