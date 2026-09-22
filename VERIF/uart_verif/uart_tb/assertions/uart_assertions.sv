// ------------------------------------------------------------
// uart_assertions.sv
//
// Basic APB3 protocol checks against a device's uart_if, bound
// in tb_top for both d1 and d2. These check the BUS PROTOCOL
// itself (timing/stability), not register content -- content
// correctness is the scoreboard's and the RAL model's job.
// ------------------------------------------------------------

module uart_assertions (
    uart_if   vif,
    reset_if  rst_vif
);

    // -----------------------------------------------------------
    // SETUP is always followed by ACCESS on the very next cycle.
    // This DUT never extends SETUP, so PSEL asserted with PENABLE
    // low must have PENABLE go high one cycle later.
    // -----------------------------------------------------------
    property p_setup_then_access;
        @(posedge vif.pclk) disable iff (!rst_vif.rst_n)
        (vif.psel && !vif.penable) |=> vif.penable;
    endproperty

    assert_setup_then_access: assert property (p_setup_then_access)
        else $error("[uart_assertions] SETUP not followed by ACCESS on next cycle");

    // -----------------------------------------------------------
    // PADDR/PWRITE/PWDATA must stay stable through SETUP+ACCESS,
    // i.e. while PSEL is high and PENABLE has not yet completed
    // the transfer.
    // -----------------------------------------------------------
    property p_addr_stable;
        @(posedge vif.pclk) disable iff (!rst_vif.rst_n)
        (vif.psel && !(vif.penable && vif.pready)) |=>
            $stable(vif.paddr) && $stable(vif.pwrite);
    endproperty

    assert_addr_stable: assert property (p_addr_stable)
        else $error("[uart_assertions] PADDR/PWRITE changed mid-transfer");

    // -----------------------------------------------------------
    // PENABLE must not be asserted without PSEL.
    // -----------------------------------------------------------
    property p_no_penable_without_psel;
        @(posedge vif.pclk) disable iff (!rst_vif.rst_n)
        vif.penable |-> vif.psel;
    endproperty

    assert_no_penable_without_psel: assert property (p_no_penable_without_psel)
        else $error("[uart_assertions] PENABLE asserted without PSEL");

    // -----------------------------------------------------------
    // PENABLE deasserts the cycle after a completed transfer
    // (PSEL && PENABLE && PREADY) -- this DUT never holds ACCESS
    // for more than one cycle.
    // -----------------------------------------------------------
    property p_access_one_cycle;
        @(posedge vif.pclk) disable iff (!rst_vif.rst_n)
        (vif.psel && vif.penable && vif.pready) |=> !vif.penable;
    endproperty

    assert_access_one_cycle: assert property (p_access_one_cycle)
        else $error("[uart_assertions] ACCESS phase held longer than one cycle");

    // -----------------------------------------------------------
    // No new transfer starts while reset is active.
    // -----------------------------------------------------------
    property p_no_transfer_during_reset;
        @(posedge vif.pclk)
        (!rst_vif.rst_n) |-> !(vif.psel && vif.penable);
    endproperty

    assert_no_transfer_during_reset: assert property (p_no_transfer_during_reset)
        else $error("[uart_assertions] APB transfer observed while in reset");

endmodule
