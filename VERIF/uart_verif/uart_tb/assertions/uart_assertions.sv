
 // ------------------------------------------------------------
 // uart_assertions.sv
 //
 // Basic APB3 protocol checks against a device's uart_if,
 // instantiated in tb_top for both DUT1 and DUT2.
 //
 // Checks APB protocol timing and stability, not register data.
 //
 // PASS: Printed once when each check is actually exercised.
 // FAIL: Reported by the original assert property statements.
 // ------------------------------------------------------------

module uart_assertions (
    uart_if  vif,
    reset_if rst_vif
);

    // ============================================================
    // 1. SETUP must be followed by ACCESS
    // ============================================================

    property p_setup_then_access;
        @(posedge vif.pclk) disable iff (!rst_vif.rst_n)
        (vif.psel && !vif.penable) |=> vif.penable;
    endproperty

    assert_setup_then_access:
        assert property (p_setup_then_access)
        else
            $error("[ASSERT FAIL] %m : SETUP not followed by ACCESS");


    // ============================================================
    // 2. PADDR and PWRITE must remain stable during transfer
    // ============================================================

    property p_addr_stable;
        @(posedge vif.pclk) disable iff (!rst_vif.rst_n)
        (vif.psel && !(vif.penable && vif.pready)) |=>
            $stable(vif.paddr) &&
            $stable(vif.pwrite);
    endproperty

    assert_addr_stable:
        assert property (p_addr_stable)
        else
            $error("[ASSERT FAIL] %m : PADDR/PWRITE changed mid-transfer");


    // ============================================================
    // 3. PENABLE must not be asserted without PSEL
    // ============================================================

    property p_no_penable_without_psel;
        @(posedge vif.pclk) disable iff (!rst_vif.rst_n)
        vif.penable |-> vif.psel;
    endproperty

    assert_no_penable_without_psel:
        assert property (p_no_penable_without_psel)
        else
            $error("[ASSERT FAIL] %m : PENABLE asserted without PSEL");


    // ============================================================
    // 4. ACCESS must complete in one cycle
    // ============================================================

    property p_access_one_cycle;
        @(posedge vif.pclk) disable iff (!rst_vif.rst_n)
        (vif.psel && vif.penable && vif.pready)
            |=> !vif.penable;
    endproperty

    assert_access_one_cycle:
        assert property (p_access_one_cycle)
        else
            $error("[ASSERT FAIL] %m : ACCESS held longer than one cycle");


    // ============================================================
    // 5. No APB transfer during reset
    // ============================================================

    property p_no_transfer_during_reset;
        @(posedge vif.pclk)
        (!rst_vif.rst_n) |-> !(vif.psel && vif.penable);
    endproperty

    assert_no_transfer_during_reset:
        assert property (p_no_transfer_during_reset)
        else
            $error("[ASSERT FAIL] %m : APB transfer during reset");


    // ============================================================
    // ASSERTION PASS REPORTING
    //
    // Reports a successful non-vacuous observation once per
    // assertion instance.
    //
    // The assert property statements above remain responsible
    // for continuous checking and failure detection.
    // ============================================================

    bit seen_setup   = 0;
    bit seen_stable  = 0;
    bit seen_penable = 0;
    bit seen_access  = 0;
    bit seen_reset   = 0;

    bit pending_setup  = 0;
    bit pending_stable = 0;
    bit pending_access = 0;

    logic [31:0] saved_paddr;
    logic        saved_pwrite;

    always @(posedge vif.pclk) begin

        // --------------------------------------------------------
        // Check 5: Reset behavior
        // --------------------------------------------------------
        if (!rst_vif.rst_n) begin

            if (!seen_reset &&
                !(vif.psel && vif.penable)) begin

                seen_reset <= 1'b1;

                $display(
                    "[ASSERT PASS] %m : No APB transfer during reset @ %0t",
                    $time
                );
            end

            // Cancel pending checks across reset.
            pending_setup  <= 1'b0;
            pending_stable <= 1'b0;
            pending_access <= 1'b0;

        end
        else begin

            // ----------------------------------------------------
            // Check 1: SETUP -> ACCESS
            // ----------------------------------------------------
            if (pending_setup &&
                vif.penable &&
                !seen_setup) begin

                seen_setup <= 1'b1;

                $display(
                    "[ASSERT PASS] %m : SETUP followed by ACCESS @ %0t",
                    $time
                );
            end


            // ----------------------------------------------------
            // Check 2: Address and write control stable
            // ----------------------------------------------------
            if (pending_stable &&
                (vif.paddr === saved_paddr) &&
                (vif.pwrite === saved_pwrite) &&
                !seen_stable) begin

                seen_stable <= 1'b1;

                $display(
                    "[ASSERT PASS] %m : PADDR/PWRITE stable during transfer @ %0t",
                    $time
                );
            end


            // ----------------------------------------------------
            // Check 3: PENABLE with PSEL
            // ----------------------------------------------------
            if (vif.penable &&
                vif.psel &&
                !seen_penable) begin

                seen_penable <= 1'b1;

                $display(
                    "[ASSERT PASS] %m : PENABLE asserted with PSEL @ %0t",
                    $time
                );
            end


            // ----------------------------------------------------
            // Check 4: ACCESS completed
            // ----------------------------------------------------
            if (pending_access &&
                !vif.penable &&
                !seen_access) begin

                seen_access <= 1'b1;

                $display(
                    "[ASSERT PASS] %m : ACCESS completed in one cycle @ %0t",
                    $time
                );
            end


            // ----------------------------------------------------
            // Save current sampled conditions for next cycle
            // ----------------------------------------------------
            pending_setup <=
                (vif.psel && !vif.penable);

            pending_stable <=
                (vif.psel &&
                !(vif.penable && vif.pready));

            pending_access <=
                (vif.psel && vif.penable && vif.pready);

            saved_paddr  <= vif.paddr;
            saved_pwrite <= vif.pwrite;

        end
    end

endmodule

