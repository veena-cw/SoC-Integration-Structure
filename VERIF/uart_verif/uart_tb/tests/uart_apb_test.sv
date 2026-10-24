
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
    // Read IER using valid SETUP -> ACCESS
    // ------------------------------------------------------------
    task read_ier(output logic [31:0] read_data);

        @(negedge apb_vif.pclk);
        apb_vif.psel    = 1'b1;
        apb_vif.penable = 1'b0;
        apb_vif.pwrite  = 1'b0;
        apb_vif.paddr   = IER_ADDR;
        apb_vif.pwdata  = '0;
        apb_vif.pstrb   = 4'hF;

        @(posedge apb_vif.pclk);

        @(negedge apb_vif.pclk);
        apb_vif.penable = 1'b1;

        @(posedge apb_vif.pclk);

        if (apb_vif.pready !== 1'b1)
            `uvm_error("APB_READ", "PREADY was not asserted")

        if (apb_vif.pslverr !== 1'b0)
            `uvm_error("APB_READ", "PSLVERR asserted during IER read")

        read_data = apb_vif.prdata;

        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);
    endtask

    // ------------------------------------------------------------
    // CASE 1: Illegal ACCESS without SETUP
    // ------------------------------------------------------------
    task illegal_ier_write(input logic [31:0] write_data);

        @(negedge apb_vif.pclk);

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

        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);
    endtask

    // ------------------------------------------------------------
    // CASE 2: Legal IER write
    // ------------------------------------------------------------
    task legal_ier_write(input logic [31:0] write_data);

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

        @(posedge apb_vif.pclk);

        @(negedge apb_vif.pclk);
        apb_vif.penable = 1'b1;

        $display("[APB TEST] ACCESS: PSEL=%0b PENABLE=%0b PWRITE=%0b",
                 apb_vif.psel, apb_vif.penable, apb_vif.pwrite);

        @(posedge apb_vif.pclk);

        $display("[APB TEST] PREADY=%0b PSLVERR=%0b",
                 apb_vif.pready, apb_vif.pslverr);

        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);
    endtask

    // ------------------------------------------------------------
    // CASE 3: Unmapped APB address read
    // ------------------------------------------------------------
    task unmapped_address_read(
        output logic [31:0] read_data,
        output logic        ready,
        output logic        slverr
    );

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
                 apb_vif.paddr,
                 apb_vif.psel,
                 apb_vif.penable,
                 apb_vif.pwrite);

        @(posedge apb_vif.pclk);

        @(negedge apb_vif.pclk);
        apb_vif.penable = 1'b1;

        @(posedge apb_vif.pclk);

        ready     = apb_vif.pready;
        slverr    = apb_vif.pslverr;
        read_data = apb_vif.prdata;

        $display("[APB TEST] ACCESS: PREADY=%0b PSLVERR=%0b PRDATA=0x%08h",
                 ready, slverr, read_data);

        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);
    endtask

    // ------------------------------------------------------------
    // Generic APB read
    // ------------------------------------------------------------
    task read_apb_reg(
        input  logic [31:0] reg_addr,
        output logic [31:0] read_data,
        output logic        ready,
        output logic        slverr
    );

        @(negedge apb_vif.pclk);

        apb_vif.psel    = 1'b1;
        apb_vif.penable = 1'b0;
        apb_vif.pwrite  = 1'b0;
        apb_vif.paddr   = reg_addr;
        apb_vif.pwdata  = '0;
        apb_vif.pstrb   = 4'hF;

        @(posedge apb_vif.pclk);

        @(negedge apb_vif.pclk);
        apb_vif.penable = 1'b1;

        @(posedge apb_vif.pclk);

        ready     = apb_vif.pready;
        slverr    = apb_vif.pslverr;
        read_data = apb_vif.prdata;

        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);
    endtask

    // ------------------------------------------------------------
    // Generic APB write
    // ------------------------------------------------------------
    task write_apb_reg(
        input  logic [31:0] reg_addr,
        input  logic [31:0] write_data,
        output logic        ready,
        output logic        slverr
    );

        @(negedge apb_vif.pclk);

        apb_vif.psel    = 1'b1;
        apb_vif.penable = 1'b0;
        apb_vif.pwrite  = 1'b1;
        apb_vif.paddr   = reg_addr;
        apb_vif.pwdata  = write_data;
        apb_vif.pstrb   = 4'hF;

        @(posedge apb_vif.pclk);

        @(negedge apb_vif.pclk);
        apb_vif.penable = 1'b1;

        @(posedge apb_vif.pclk);

        ready  = apb_vif.pready;
        slverr = apb_vif.pslverr;

        @(negedge apb_vif.pclk);
        drive_idle();

        @(posedge apb_vif.pclk);
    endtask

    // ------------------------------------------------------------
    // CASE 4, 5, 6:
    // Check writes to read-only registers
    // ------------------------------------------------------------
    task check_read_only_write(
        input  int          case_num,
        input  string       reg_name,
        input  logic [31:0] reg_addr,
        input  logic [31:0] write_data,
        output bit          case_pass
    );

        logic [31:0] before_data, after_data;
        logic before_ready, before_err;
        logic write_ready, write_err;
        logic after_ready, after_err;

        // Read original value
        read_apb_reg(reg_addr,
                     before_data,
                     before_ready,
                     before_err);

        // Attempt write to read-only register
        write_apb_reg(reg_addr,
                      write_data,
                      write_ready,
                      write_err);

        // Read value after attempted write
        read_apb_reg(reg_addr,
                     after_data,
                     after_ready,
                     after_err);

        // CASE 4 requires empty RX FIFO reads to return zero.
        // CASE 5 and 6 require status to remain unchanged.
        case_pass =
            (before_ready === 1'b1) &&
            (before_err   === 1'b0) &&
            (write_ready  === 1'b1) &&
            (write_err    === 1'b0) &&
            (after_ready  === 1'b1) &&
            (after_err    === 1'b0) &&
            (after_data   === before_data) &&
            ((reg_addr != 32'h0000_0004) ||
             ((before_data === 32'h0000_0000) &&
              (after_data  === 32'h0000_0000)));

        $display("");
        $display("[CASE %0d] Attempt write to RO %s, address 0x%08h",
                 case_num, reg_name, reg_addr);

        $display("[CASE %0d] Before=0x%08h Write=0x%08h After=0x%08h",
                 case_num, before_data, write_data, after_data);

        $display("[CASE %0d] Write response PREADY=%0b PSLVERR=%0b",
                 case_num, write_ready, write_err);

        if (reg_addr == 32'h0000_0004)
            $display("[CASE %0d] Expected empty-FIFO RHR before/after: 0x00000000",
                     case_num);

        $display("[CASE %0d] %s: RO register remains unchanged",
                 case_num, case_pass ? "PASS" : "FAIL");

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
        logic unmapped_ready;
        logic unmapped_slverr;

        bit case3_pass;
        bit case4_pass;
        bit case5_pass;
        bit case6_pass;

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
        $display("CASE 2: ACCESS after valid SETUP");
        $display("CASE 3: Unmapped-address read");
        $display("CASE 4: Negative write to RO RHR");
        $display("CASE 5: Negative write to RO SR");
        $display("CASE 6: Negative write to RO ISR");
        $display("================================================");

        // Reset DUT
        rst = reset_sequence::type_id::create("rst");
        rst.delay       = 0;
        rst.pulse_width = 100;
        rst.start(env.virt_seqr.reset_seqr);

        @(posedge apb_vif.pclk);

        // ========================================================
        // CASE 1: Illegal ACCESS without SETUP
        // ========================================================

        read_ier(ier_before);

        $display("");
        $display("[CASE 1] IER before illegal access = 0x%08h",
                 ier_before);

        illegal_ier_write(32'h0000_000F);

        read_ier(ier_after_illegal);

        $display("[CASE 1] IER after illegal access = 0x%08h",
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
        $display("[CASE 2] Expected IER value = 0x0000000A");

        $display("[CASE 2] IER after valid access = 0x%08h",
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
        // CASE 3: Unmapped-address read
        // ========================================================

        unmapped_address_read(
            unmapped_data,
            unmapped_ready,
            unmapped_slverr
        );

        read_ier(ier_after_unmapped);

        case3_pass =
            (unmapped_ready === 1'b1) &&
            (unmapped_slverr === 1'b1) &&
            (unmapped_data === 32'h0000_0000) &&
            (ier_after_unmapped === ier_after_legal);

        $display("[CASE 3] IER before invalid read = 0x%08h",
                 ier_after_legal);

        $display("[CASE 3] IER after invalid read = 0x%08h",
                 ier_after_unmapped);

        if (case3_pass) begin

            $display("[CASE 3] PASS: APB error asserted; IER unchanged.");
            pass_count++;

        end
        else begin

            $display("[CASE 3] FAIL: Invalid-address response.");

            `uvm_error("APB_CASE3",
                "Unmapped address response or IER integrity check failed")

            fail_count++;
        end

        // ========================================================
        // CASE 4: Negative write to RHR
        // ========================================================

        // No D2->D1 UART data is sent during this test.
        // Therefore both RHR reads are intentional empty FIFO reads.
        env.scoreboard.allow_empty_d2_to_d1_read = 1'b1;

        check_read_only_write(
            4,
            "RHR",
            32'h0000_0004,
            32'h0000_01A5,
            case4_pass
        );

        // Restore strict scoreboard behavior after CASE 4.
        env.scoreboard.allow_empty_d2_to_d1_read = 1'b0;

        if (case4_pass)
            pass_count++;
        else begin
            fail_count++;
            `uvm_error("APB_CASE4",
                       "RHR changed after read-only write")
        end

        // ========================================================
        // CASE 5: Negative write to SR
        // ========================================================

        check_read_only_write(
            5,
            "SR",
            32'h0000_0008,
            32'hFFFF_FFFF,
            case5_pass
        );

        if (case5_pass)
            pass_count++;
        else begin
            fail_count++;
            `uvm_error("APB_CASE5",
                       "SR changed after read-only write")
        end

        // ========================================================
        // CASE 6: Negative write to ISR
        // ========================================================

        check_read_only_write(
            6,
            "ISR",
            32'h0000_0018,
            32'hFFFF_FFFF,
            case6_pass
        );

        if (case6_pass)
            pass_count++;
        else begin
            fail_count++;
            `uvm_error("APB_CASE6",
                       "ISR changed after read-only write")
        end

        // ========================================================
        // Test summary
        // ========================================================

        $display("");
        $display("================================================");
        $display("           UART APB PROTOCOL TEST SUMMARY");
        $display("================================================");

        $display("Illegal ACCESS without SETUP : %s",
                 ((ier_after_illegal == ier_before) &&
                  (ier_before == 32'h0000_0000)) ? "PASS" : "FAIL");

        $display("Valid SETUP followed by ACCESS: %s",
                 (ier_after_legal[3:0] == 4'hA) ? "PASS" : "FAIL");

        $display("Unmapped address with PSLVERR : %s",
                 case3_pass ? "PASS" : "FAIL");

        $display("RO RHR write ignored          : %s",
                 case4_pass ? "PASS" : "FAIL");

        $display("RO SR write ignored           : %s",
                 case5_pass ? "PASS" : "FAIL");

        $display("RO ISR write ignored          : %s",
                 case6_pass ? "PASS" : "FAIL");

        $display("-----------------------------------------------");

        $display("TOTAL PASS = %0d", pass_count);
        $display("TOTAL FAIL = %0d", fail_count);

        $display("================================================");
        $display("");

        phase.drop_objection(this);

    endtask

endclass

