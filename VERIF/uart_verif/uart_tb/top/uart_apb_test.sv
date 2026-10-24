`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_apb_test extends uart_base_test;

    `uvm_component_utils(uart_apb_test)

    virtual uart_if apb_vif;

    localparam logic [31:0] IER_ADDR      = 32'h0000_0014;
    localparam logic [31:0] UNMAPPED_ADDR = 32'h0000_001C;

    function new(string name = "uart_apb_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // ------------------------------------------------------------
    // Drive APB IDLE
    // ------------------------------------------------------------
    task drive_idle();
        apb_vif.psel    = 1'b0;
        apb_vif.penable = 1'b0;
        apb_vif.pwrite  = 1'b0;
        apb_vif.paddr   = '0;
        apb_vif.pwdata  = '0;
        apb_vif.pstrb   = '0;
    endtask

    // ------------------------------------------------------------
    // Read IER using a valid SETUP -> ACCESS transfer
    // ------------------------------------------------------------
    task read_ier(output logic [31:0] read_data);

        // SETUP phase
        @(negedge apb_vif.pclk);
        apb_vif.psel    = 1'b1;
        apb_vif.penable = 1'b0;
        apb_vif.pwrite  = 1'b0;
        apb_vif.paddr   = IER_ADDR;
        apb_vif.pwdata  = '0;
        apb_vif.pstrb   = 4'hF;

        @(posedge apb_vif.pclk);

        // ACCESS phase
        @(negedge apb_vif.pclk);
        apb_vif.penable = 1'b1;

        @(posedge apb_vif.pclk);

        if (apb_vif.pready !== 1'b1)
            `uvm_error("APB_READ", "PREADY was not asserted during IER read")

        if (apb_vif.pslverr !== 1'b0)
            `uvm_error("APB_READ", "PSLVERR asserted during IER read")

        read_data = apb_vif.prdata;

        // Return the bus to IDLE after ACCESS
        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);

    endtask

    // ------------------------------------------------------------
    // CASE 1: Illegal ACCESS without a preceding SETUP phase
    // ------------------------------------------------------------
    task illegal_ier_write(
        input logic [31:0] write_data
    );

        @(negedge apb_vif.pclk);

        // Deliberately skip SETUP and assert ACCESS directly
        apb_vif.psel    = 1'b1;
        apb_vif.penable = 1'b1;
        apb_vif.pwrite  = 1'b1;
        apb_vif.paddr   = IER_ADDR;
        apb_vif.pwdata  = write_data;
        apb_vif.pstrb   = 4'hF;

        $display("");
        $display("[CASE 1] Illegal ACCESS without SETUP");
        $display("[APB TEST] PADDR=0x%08h PWDATA=0x%08h",
                 apb_vif.paddr, apb_vif.pwdata);

        @(posedge apb_vif.pclk);

        $display("[APB TEST] PSEL=%0b PENABLE=%0b PWRITE=%0b",
                 apb_vif.psel, apb_vif.penable, apb_vif.pwrite);
        $display("[APB TEST] PREADY=%0b PSLVERR=%0b",
                 apb_vif.pready, apb_vif.pslverr);

        // Deassert before the next rising edge to avoid holding
        // ACCESS for an additional cycle.
        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);

    endtask

    // ------------------------------------------------------------
    // CASE 2: Legal IER write with SETUP followed by ACCESS
    // ------------------------------------------------------------
    task legal_ier_write(
        input logic [31:0] write_data
    );

        // SETUP phase
        @(negedge apb_vif.pclk);
        apb_vif.psel    = 1'b1;
        apb_vif.penable = 1'b0;
        apb_vif.pwrite  = 1'b1;
        apb_vif.paddr   = IER_ADDR;
        apb_vif.pwdata  = write_data;
        apb_vif.pstrb   = 4'hF;

        $display("");
        $display("[CASE 2] Valid SETUP followed by ACCESS");
        $display("[APB TEST] SETUP: PSEL=%0b PENABLE=%0b PWRITE=%0b",
                 apb_vif.psel, apb_vif.penable, apb_vif.pwrite);
        $display("[APB TEST] PADDR=0x%08h PWDATA=0x%08h",
                 apb_vif.paddr, apb_vif.pwdata);

        // Allow DUT to sample SETUP
        @(posedge apb_vif.pclk);

        // ACCESS phase
        @(negedge apb_vif.pclk);
        apb_vif.penable = 1'b1;

        $display("[APB TEST] ACCESS: PSEL=%0b PENABLE=%0b PWRITE=%0b",
                 apb_vif.psel, apb_vif.penable, apb_vif.pwrite);

        @(posedge apb_vif.pclk);

        $display("[APB TEST] PREADY=%0b PSLVERR=%0b",
                 apb_vif.pready, apb_vif.pslverr);

        // End the transfer before the next rising edge
        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);

    endtask

    // ------------------------------------------------------------
    // CASE 3: Valid APB read to an unmapped address
    // Expected: PREADY=1, PSLVERR=1, PRDATA=0
    // ------------------------------------------------------------
    task unmapped_address_read(
        output logic [31:0] read_data,
        output logic        ready,
        output logic        slverr
    );
        // SETUP phase: a legal APB transfer to an invalid address
        @(negedge apb_vif.pclk);
        apb_vif.psel    = 1'b1;
        apb_vif.penable = 1'b0;
        apb_vif.pwrite  = 1'b0;
        apb_vif.paddr   = UNMAPPED_ADDR;
        apb_vif.pwdata  = '0;
        apb_vif.pstrb   = 4'hF;

        $display("");
        $display("[CASE 3] Unmapped address read using SETUP -> ACCESS");
        $display("[APB TEST] SETUP: PADDR=0x%08h PSEL=%0b PENABLE=%0b PWRITE=%0b",
                 apb_vif.paddr, apb_vif.psel, apb_vif.penable, apb_vif.pwrite);

        @(posedge apb_vif.pclk);

        // ACCESS phase
        @(negedge apb_vif.pclk);
        apb_vif.penable = 1'b1;

        @(posedge apb_vif.pclk);

        // Capture the stable APB response during ACCESS
        ready     = apb_vif.pready;
        slverr    = apb_vif.pslverr;
        read_data = apb_vif.prdata;

        $display("[APB TEST] ACCESS: PREADY=%0b PSLVERR=%0b PRDATA=0x%08h",
                 ready, slverr, read_data);

        // Return to IDLE after the completed transfer
        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);
    endtask

    // ------------------------------------------------------------
    // Main test
    // ------------------------------------------------------------
    virtual task run_phase(uvm_phase phase);

        reset_sequence rst;

        logic [31:0] ier_before;
        logic [31:0] ier_after_illegal;
        logic [31:0] ier_after_legal;
        logic [31:0] ier_after_unmapped;
        logic [31:0] unmapped_data;
        logic        unmapped_ready;
        logic        unmapped_slverr;
        bit          case3_pass;

        int pass_count;
        int fail_count;

        phase.raise_objection(this);

        pass_count = 0;
        fail_count = 0;

        apb_vif = env.d1_agent.vif;

        $display("");
        $display("================================================");
        $display("             UART APB PROTOCOL TEST");
        $display("================================================");
        $display("Register: IER at address 0x14");
        $display("CASE 1: ACCESS directly without SETUP");
        $display("CASE 2: ACCESS after a valid SETUP phase");
        $display("CASE 3: Unmapped-address read with APB error response");
        $display("================================================");

        // Reset DUT
        rst = reset_sequence::type_id::create("rst");
        rst.delay       = 0;
        rst.pulse_width = 100;
        rst.start(env.virt_seqr.reset_seqr);

        @(posedge apb_vif.pclk);

        // ========================================================
        // CASE 1: ACCESS without SETUP
        // ========================================================
        read_ier(ier_before);

        $display("");
        $display("[CASE 1] IER before illegal access = 0x%08h",
                 ier_before);

        illegal_ier_write(32'h0000_000F);

        read_ier(ier_after_illegal);

        $display("[CASE 1] IER after illegal access  = 0x%08h",
                 ier_after_illegal);

        if ((ier_before == 32'h0000_0000) &&
            (ier_after_illegal == ier_before)) begin

            $display("[CASE 1] PASS: IER remained unchanged.");
            pass_count++;

        end
        else begin

            $display("[CASE 1] FAIL: Unexpected IER value.");
            `uvm_error("APB_CASE1",
                $sformatf("IER before=0x%08h after=0x%08h",
                          ier_before, ier_after_illegal))
            fail_count++;

        end

        // ========================================================
        // CASE 2: Valid SETUP -> ACCESS
        // ========================================================
        legal_ier_write(32'h0000_000A);

        read_ier(ier_after_legal);

        $display("");
        $display("[CASE 2] Expected IER value        = 0x0000000A");
        $display("[CASE 2] IER after valid access    = 0x%08h",
                 ier_after_legal);

        if (ier_after_legal[3:0] == 4'hA) begin

            $display("[CASE 2] PASS: Valid write updated IER.");
            pass_count++;

        end
        else begin

            $display("[CASE 2] FAIL: Valid write did not update IER.");
            `uvm_error("APB_CASE2",
                $sformatf("Expected IER=0xA, observed IER=0x%08h",
                          ier_after_legal))
            fail_count++;

        end

        // ========================================================
        // CASE 3: Unmapped-address read (valid APB protocol)
        // ========================================================
        unmapped_address_read(unmapped_data, unmapped_ready, unmapped_slverr);

        // Verify that the rejected access does not alter a valid register.
        read_ier(ier_after_unmapped);

        case3_pass = (unmapped_ready  === 1'b1) &&
                     (unmapped_slverr === 1'b1) &&
                     (unmapped_data   === 32'h0000_0000) &&
                     (ier_after_unmapped === ier_after_legal);

        $display("[CASE 3] IER before invalid read = 0x%08h", ier_after_legal);
        $display("[CASE 3] IER after invalid read  = 0x%08h", ier_after_unmapped);

        if (case3_pass) begin
            $display("[CASE 3] PASS: APB error asserted; read data zero; IER unchanged.");
            pass_count++;
        end
        else begin
            $display("[CASE 3] FAIL: Invalid-address response or IER integrity check failed.");
            `uvm_error("APB_CASE3",
                $sformatf("PREADY=%0b PSLVERR=%0b PRDATA=0x%08h IER_before=0x%08h IER_after=0x%08h",
                          unmapped_ready, unmapped_slverr, unmapped_data,
                          ier_after_legal, ier_after_unmapped))
            fail_count++;
        end

        // ========================================================
        // Summary
        // ========================================================
        $display("");
        $display("================================================");
        $display("           UART APB PROTOCOL TEST SUMMARY");
        $display("================================================");
        $display("Illegal ACCESS without SETUP : %s",
                 (ier_after_illegal == ier_before &&
                  ier_before == 32'h0000_0000) ? "PASS" : "FAIL");
        $display("Valid SETUP followed by ACCESS: %s",
                 (ier_after_legal[3:0] == 4'hA) ? "PASS" : "FAIL");
        $display("Unmapped address with PSLVERR : %s",
                 case3_pass ? "PASS" : "FAIL");
        $display("-----------------------------------------------");
        $display("TOTAL PASS = %0d", pass_count);
        $display("TOTAL FAIL = %0d", fail_count);
        $display("================================================");
        $display("");

        phase.drop_objection(this);

    endtask

endclass

