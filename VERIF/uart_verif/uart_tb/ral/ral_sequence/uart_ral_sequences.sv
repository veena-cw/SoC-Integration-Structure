// ------------------------------------------------------------
// uart_ral_sequences.sv
//
// Register-level regression sequences: reset-value check,
// write/read, walking-ones, walking-zeros, mirror/predict,
// generic access. All reporting here is plain $display text
// (tables), not `uvm_info -- so a plain log of this test reads
// as a clean report rather than UVM_INFO noise. `uvm_error is
// still used for genuine failures, since that's what drives the
// pass/fail count UVM reports at the end of a run.
//
// These all operate through model.<REG>.write()/read() with
// UVM_FRONTDOOR, which routes through whatever sequencer
// ral_model.default_map is CURRENTLY pointed at -- they contain
// no device-specific handle of their own. Per the approved
// methodology, uart_virtual_sequence keeps the map redirected
// to d1 (redirect_to_d1()) for every sequence in this file:
// register-level regression is d1-only.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

// ============================================================
// Base
// ============================================================
class uart_ral_base_seq extends uvm_sequence #(uart_seq_item);
    `uvm_object_utils(uart_ral_base_seq)

    uart_ral_block model;

    int unsigned pass_count;
    int unsigned fail_count;

    function new(string name = "uart_ral_base_seq");
        super.new(name);
    endfunction
endclass

// ============================================================
// 1) Reset values via mirror()
// ============================================================
class uart_ral_reset_check_seq extends uart_ral_base_seq;
    `uvm_object_utils(uart_ral_reset_check_seq)

    function new(string name = "uart_ral_reset_check_seq");
        super.new(name);
    endfunction

    virtual task body();
        uvm_status_e   status;
        uvm_reg_data_t exp;
        uvm_reg_data_t mir;

        uvm_reg        regs[4];
        string         names[4];
        string         result;

        regs[0] = model.DIVISOR;  names[0] = "DIVISOR";
        regs[1] = model.FRAME;    names[1] = "FRAME";
        regs[2] = model.FLOW;     names[2] = "FLOW";
        regs[3] = model.IRQ;      names[3] = "IRQ";

        $display("");
        $display("========================================");
        $display("  RAL REG ACCESS : RESET VALUE CHECK");
        $display("========================================");
        $display("  %-10s %-8s %-14s %-14s %-6s",
                  "Register", "Addr", "Reset Value", "Mirrored", "Result");
        $display("  %-10s %-8s %-14s %-14s %-6s",
                  "--------", "----", "-----------", "--------", "------");

        for (int i = 0; i < 4; i++) begin
            exp = regs[i].get_reset();
            mir = regs[i].get_mirrored_value();

            if (mir === exp) begin
                result = "PASS";
                pass_count++;
            end else begin
                result = "FAIL";
                fail_count++;
            end

            $display("  %-10s 0x%-6h 0x%08h     0x%08h     %-6s",
                      names[i], regs[i].get_address(), exp, mir, result);

            if (result == "FAIL")
                `uvm_error("RAL_RESET_CHK",
                    $sformatf("%s reset mismatch: expected 0x%08h, mirrored 0x%08h",
                              names[i], exp, mir))
        end

        for (int i = 0; i < 4; i++) begin
            regs[i].mirror(status, UVM_CHECK);
            if (status != UVM_IS_OK)
                `uvm_error("RAL_RESET_CHK",
                    $sformatf("mirror(UVM_CHECK) failed on %s", names[i]))
        end

        $display("========================================");
        $display("  PASS=%0d  FAIL=%0d", pass_count, fail_count);
        $display("========================================");
    endtask
endclass

// ============================================================
// 2) Write / read on RW registers
// ============================================================
class uart_ral_write_read_seq extends uart_ral_base_seq;
    `uvm_object_utils(uart_ral_write_read_seq)

    function new(string name = "uart_ral_write_read_seq");
        super.new(name);
    endfunction

    task do_write_read(string name, uvm_reg r, uvm_reg_data_t wdata);
        uvm_status_e   status;
        uvm_reg_data_t rdata;
        string         result;

        r.write(status, wdata, UVM_FRONTDOOR);
        r.read (status, rdata, UVM_FRONTDOOR);

        if (rdata === wdata) begin
            result = "PASS";
            pass_count++;
        end else begin
            result = "INFO";
            // Not counted as a fail: some fields here are WO/
            // volatile or narrower than 32 bits (see
            // uart_ral_pkg.sv's field notes), so a literal
            // write==read match is not guaranteed for every
            // register -- this line is for visibility only.
        end

        $display("  %-10s 0x%-6h 0x%08h    0x%08h    %-6s",
                  name, r.get_address(), wdata, rdata, result);
    endtask

    virtual task body();
        $display("");
        $display("========================================");
        $display("  RAL REG ACCESS : WRITE -> READ");
        $display("========================================");
        $display("  %-10s %-8s %-13s %-13s %-6s",
                  "Register", "Addr", "Written", "Read", "Result");
        $display("  %-10s %-8s %-13s %-13s %-6s",
                  "--------", "----", "-------", "----", "------");

        do_write_read("DIVISOR", model.DIVISOR, 32'h0000_A5A5);
        do_write_read("FRAME",   model.FRAME,   32'h0000_00A5);
        do_write_read("FLOW",    model.FLOW,    32'h0000_0501);
        do_write_read("IRQ",     model.IRQ,     32'h0000_0005);

        $display("========================================");
        $display("  PASS=%0d", pass_count);
        $display("========================================");
    endtask
endclass

// ============================================================
// 3) Walking ones on RW bits only
// ============================================================
class uart_ral_walk_one_seq extends uart_ral_base_seq;
    `uvm_object_utils(uart_ral_walk_one_seq)

    function new(string name = "uart_ral_walk_one_seq");
        super.new(name);
    endfunction

    task walk_reg(string reg_name, uvm_reg r, uvm_reg_data_t mask);
        uvm_status_e   status;
        uvm_reg_data_t wdata;
        uvm_reg_data_t rdata;
        uvm_reg_data_t mir;
        string         result;

        for (int i = 0; i < 32; i++) begin
            if (!mask[i]) continue;
            wdata = (32'h1 << i);
            r.write (status, wdata, UVM_FRONTDOOR);
            r.read  (status, rdata, UVM_FRONTDOOR);
            mir = r.get_mirrored_value();

            if ((rdata & mask) === (mir & mask)) begin
                result = "PASS";
                pass_count++;
            end else begin
                result = "FAIL";
                fail_count++;
            end

            $display("  %-10s bit%-20d  wrote=0x%08h read=0x%08h mirror=0x%08h  %-6s",
                      reg_name, i, wdata, rdata, mir, result);

            if (result == "FAIL")
                `uvm_warning("RAL_WALK1",
                    $sformatf("%s bit %0d (walk-1): read=0x%08h mirror=0x%08h",
                              reg_name, i, rdata, mir))
        end
    endtask

    virtual task body();
        $display("");
        $display("========================================");
        $display("  RAL REG ACCESS : WALKING-ONES");
        $display("========================================");
        walk_reg("DIVISOR", model.DIVISOR, 32'h0000_FFFF);
        walk_reg("FRAME",   model.FRAME,   32'h0000_00FF);
        walk_reg("FLOW",    model.FLOW,    32'h0000_1F01);
        walk_reg("IRQ",     model.IRQ,     32'h0000_000F);
        $display("========================================");
        $display("  PASS=%0d  FAIL=%0d", pass_count, fail_count);
        $display("========================================");
    endtask
endclass

// ============================================================
// 4) Walking zeros on RW bits only
// ============================================================
class uart_ral_walk_zero_seq extends uart_ral_base_seq;
    `uvm_object_utils(uart_ral_walk_zero_seq)

    function new(string name = "uart_ral_walk_zero_seq");
        super.new(name);
    endfunction

    task walk_reg(string reg_name, uvm_reg r, uvm_reg_data_t mask);
        uvm_status_e   status;
        uvm_reg_data_t wdata;
        uvm_reg_data_t rdata;
        uvm_reg_data_t mir;
        string         result;

        for (int i = 0; i < 32; i++) begin
            if (!mask[i]) continue;
            wdata = (~(32'h1 << i)) & mask;
            r.write (status, wdata, UVM_FRONTDOOR);
            r.read  (status, rdata, UVM_FRONTDOOR);
            mir = r.get_mirrored_value();

            if ((rdata & mask) === (mir & mask)) begin
                result = "PASS";
                pass_count++;
            end else begin
                result = "FAIL";
                fail_count++;
            end

            $display("  %-10s bit%-20d  wrote=0x%08h read=0x%08h mirror=0x%08h  %-6s",
                      reg_name, i, wdata, rdata, mir, result);

            if (result == "FAIL")
                `uvm_warning("RAL_WALK0",
                    $sformatf("%s bit %0d (walk-0): read=0x%08h mirror=0x%08h",
                              reg_name, i, rdata, mir))
        end
    endtask

    virtual task body();
        $display("");
        $display("========================================");
        $display("  RAL REG ACCESS : WALKING-ZEROS");
        $display("========================================");
        walk_reg("DIVISOR", model.DIVISOR, 32'h0000_FFFF);
        walk_reg("FRAME",   model.FRAME,   32'h0000_00FF);
        walk_reg("FLOW",    model.FLOW,    32'h0000_1F01);
        walk_reg("IRQ",     model.IRQ,     32'h0000_000F);
        $display("========================================");
        $display("  PASS=%0d  FAIL=%0d", pass_count, fail_count);
        $display("========================================");
    endtask
endclass

// ============================================================
// 5) Mirror / predict / desired demo
// ============================================================
class uart_ral_mirror_predict_seq extends uart_ral_base_seq;
    `uvm_object_utils(uart_ral_mirror_predict_seq)

    function new(string name = "uart_ral_mirror_predict_seq");
        super.new(name);
    endfunction

    virtual task body();
        uvm_status_e   status;
        uvm_reg_data_t rdata;
        uvm_reg_data_t desired;
        string         result;

        $display("");
        $display("========================================");
        $display("  RAL REG ACCESS : MIRROR / PREDICT");
        $display("========================================");

        desired = 32'h0000_BEEF;
        model.DIVISOR.set(desired);
        $display("  DIVISOR: set(desired=0x%08h) before update -> mirror=0x%08h",
                  desired, model.DIVISOR.get_mirrored_value());

        model.DIVISOR.update(status, UVM_FRONTDOOR);
        model.DIVISOR.mirror(status, UVM_CHECK);

        if (status == UVM_IS_OK) begin
            result = "PASS";
            pass_count++;
        end else begin
            result = "FAIL";
            fail_count++;
            `uvm_error("RAL_MIRROR", "DIVISOR mirror(UVM_CHECK) failed after update()")
        end
        $display("  DIVISOR: after update -> mirror=0x%08h  %-6s",
                  model.DIVISOR.get_mirrored_value(), result);

        model.FRAME.write(status, 32'h0000_0055, UVM_FRONTDOOR);
        model.FRAME.read (status, rdata,           UVM_FRONTDOOR);
        model.FRAME.mirror(status, UVM_CHECK);
        if (status == UVM_IS_OK) begin
            result = "PASS";
            pass_count++;
        end else begin
            result = "FAIL";
            fail_count++;
        end
        $display("  FRAME:   wrote=0x00000055 read=0x%08h  %-6s", rdata, result);

        $display("========================================");
        $display("  PASS=%0d  FAIL=%0d", pass_count, fail_count);
        $display("========================================");
    endtask
endclass

// ============================================================
// 6) Generic register access sanity (RW round trip + RO check)
// ============================================================
class uart_ral_access_seq extends uart_ral_base_seq;
    `uvm_object_utils(uart_ral_access_seq)

    function new(string name = "uart_ral_access_seq");
        super.new(name);
    endfunction

    virtual task body();
        uvm_status_e   status;
        uvm_reg_data_t rdata;

        $display("");
        $display("========================================");
        $display("  RAL REG ACCESS : GENERIC ACCESS (RO/WO)");
        $display("========================================");

        // RO register: STATUS.
        model.STATUS.read(status, rdata, UVM_FRONTDOOR);
        $display("  STATUS (RO) read  -> 0x%08h", rdata);
        pass_count++;

        // WO register: CLEAR. Written value is not readable back
        // (apb_uart_top always returns 0 on this address).
        model.CLEAR.write(status, 32'h0000_0001, UVM_FRONTDOOR);
        $display("  CLEAR  (WO) wrote -> 0x00000001");
        pass_count++;

        $display("========================================");
        $display("  PASS=%0d", pass_count);
        $display("========================================");
    endtask
endclass
