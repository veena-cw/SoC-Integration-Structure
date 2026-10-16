// ------------------------------------------------------------
// axi_assertions.sv
//
// AXI4 handshake rules on the s_axi_* port (IHI0022 A3.2):
//   * once VALID is high it stays high, with a stable payload,
//     until the READY handshake -- checked on all 5 channels
//     (AW/W/AR for the TB master, B/R for the DUT)
//   * DUT outputs never X/Z out of reset
// Data correctness is the scoreboard's job, not this module's.
// Failures go through `uvm_error so they are counted in the UVM
// report (Verilator would otherwise stop on $error).
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

module axi_assertions (axi_if vif);

    // ---- Master channels (TB driver) ----------------------------
    property p_aw_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.awvalid && !vif.awready) |=>
            vif.awvalid && $stable({vif.awid, vif.awaddr, vif.awlen, vif.awsize,
                                    vif.awburst, vif.awlock, vif.awcache,
                                    vif.awprot, vif.awqos});
    endproperty
    assert_aw_hold: assert property (p_aw_hold)
        else `uvm_error("AXI_ASSERT", "AW: AWVALID dropped or payload changed before AWREADY")

    property p_w_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.wvalid && !vif.wready) |=>
            vif.wvalid && $stable({vif.wdata, vif.wstrb, vif.wlast});
    endproperty
    assert_w_hold: assert property (p_w_hold)
        else `uvm_error("AXI_ASSERT", "W: WVALID dropped or payload changed before WREADY")

    property p_ar_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.arvalid && !vif.arready) |=>
            vif.arvalid && $stable({vif.arid, vif.araddr, vif.arlen, vif.arsize,
                                    vif.arburst, vif.arlock, vif.arcache,
                                    vif.arprot, vif.arqos});
    endproperty
    assert_ar_hold: assert property (p_ar_hold)
        else `uvm_error("AXI_ASSERT", "AR: ARVALID dropped or payload changed before ARREADY")

    // ---- Slave channels (DUT) -----------------------------------
    property p_b_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.bvalid && !vif.bready) |=>
            vif.bvalid && $stable({vif.bid, vif.bresp});
    endproperty
    assert_b_hold: assert property (p_b_hold)
        else `uvm_error("AXI_ASSERT", "B: BVALID dropped or BID/BRESP changed before BREADY")

    property p_r_hold;
        @(posedge vif.aclk) disable iff (!vif.aresetn)
        (vif.rvalid && !vif.rready) |=>
            vif.rvalid && $stable({vif.rid, vif.rdata, vif.rresp, vif.rlast});
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

endmodule
