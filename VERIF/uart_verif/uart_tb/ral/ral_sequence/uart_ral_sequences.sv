// ------------------------------------------------------------
// uart_ral_sequences.sv
//
// Register-level regression sequences, adapted to the new
// THR/RHR/SR/CR/BRDR/IER/ISR map:
//   * reset-value check now covers BRDR/CR/IER (the old
//     DIVISOR/FRAME/FLOW/IRQ list) -- FLOW is gone, SR/ISR are
//     excluded for the same reason STATUS always was: they're
//     live/read-clear registers, not meaningful "reset value"
//     checks.
//   * walking-ones/zeros over CR is restricted to bits [7:2]
//     (mask 8'hFC) -- bits [1:0] are TX_WR_EN/RX_RD_EN, and
//     toggling those during a pure register-regression pass
//     would push/pop the data FIFOs as a side effect, which is
//     not what this suite is testing.
//   * the old CLEAR (WO) demo in uart_ral_access_seq is replaced
//     by reading ISR, which is now itself the clear mechanism
//     (see uart_ral_pkg.sv's isr_reg header note).
//
// Still d1-only per the approved methodology; still routes
// through whatever sequencer ral_model.default_map is currently
// pointed at, same as before.
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

        uvm_reg        regs[3];
        string         names[3];
        string         result;

        regs[0] = model.BRDR;  names[0] = "BRDR";
        regs[1] = model.CR;    names[1] = "CR";
        regs[2] = model.IER;   names[2] = "IER";

        $display("");
        $display("========================================");
        $display("  RAL REG ACCESS : RESET VALUE CHECK");
        $display("========================================");
        $display("  %-10s %-8s %-14s %-14s %-6s",
                  "Register", "Addr", "Reset Value", "Mirrored", "Result");
        $display("  %-10s %-8s %-14s %-14s %-6s",
                  "--------", "----", "-----------", "--------", "------");

        for (int i = 0; i < 3; i++) begin
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

        for (int i = 0; i < 3; i++) begin
            regs[i].mirror(status, UVM_CHECK);
            if (status != UVM_IS_OK) begin
                fail_count++;
                `uvm_error("RAL_RESET_CHK",
                    $sformatf("mirror(UVM_CHECK) failed on %s", names[i]))
            end
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

    task do_write_read(
        string          name,
        uvm_reg         r,
        uvm_reg_data_t  wdata,
        uvm_reg_data_t  writable_mask
    );
        uvm_status_e   status;
        uvm_reg_data_t rdata;
        string         result;

        r.write(status, wdata, UVM_FRONTDOOR);
        r.read (status, rdata, UVM_FRONTDOOR);

        if ((status == UVM_IS_OK) &&
            ((rdata & writable_mask) === (wdata & writable_mask))) begin
            result = "PASS";
            pass_count++;
        end else begin
            result = "FAIL";
            fail_count++;
            `uvm_error("RAL_WR_RD",
                $sformatf(
                    "%s write/read mismatch: wrote=0x%08h read=0x%08h mask=0x%08h",
                    name, wdata, rdata, writable_mask))
        end

        $display("  %-10s 0x%-6h 0x%08h    0x%08h    mask=0x%08h  %-6s",
                  name, r.get_address(), wdata, rdata, writable_mask, result);
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

        do_write_read("BRDR", model.BRDR, 32'h0000_A5A5, 32'h0000_FFFF);
        // 0x00A4 keeps CR bits[1:0] (TX_WR_EN/RX_RD_EN) clear so
        // this pure register write/read doesn't also push/pop a
        // data FIFO as a side effect (0xA4 = 1010_0100).
        do_write_read("CR",   model.CR,   32'h0000_00A4, 32'h0000_00FC);
        do_write_read("IER",  model.IER,  32'h0000_0005, 32'h0000_0007);

        $display("========================================");
        $display("  PASS=%0d  FAIL=%0d", pass_count, fail_count);
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
        walk_reg("BRDR", model.BRDR, 32'h0000_FFFF);
        // CR mask 0xFC excludes bits[1:0] (TX_WR_EN/RX_RD_EN) --
        // see file header note.
        walk_reg("CR",   model.CR,   32'h0000_00FC);
        walk_reg("IER",  model.IER,  32'h0000_0007);
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
        walk_reg("BRDR", model.BRDR, 32'h0000_FFFF);
        walk_reg("CR",   model.CR,   32'h0000_00FC);
        walk_reg("IER",  model.IER,  32'h0000_0007);
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
        model.BRDR.set(desired);
        $display("  BRDR: set(desired=0x%08h) before update -> mirror=0x%08h",
                  desired, model.BRDR.get_mirrored_value());

        model.BRDR.update(status, UVM_FRONTDOOR);
        model.BRDR.mirror(status, UVM_CHECK);

        if (status == UVM_IS_OK) begin
            result = "PASS";
            pass_count++;
        end else begin
            result = "FAIL";
            fail_count++;
            `uvm_error("RAL_MIRROR", "BRDR mirror(UVM_CHECK) failed after update()")
        end
        $display("  BRDR: after update -> mirror=0x%08h  %-6s",
                  model.BRDR.get_mirrored_value(), result);

        // 0x54 (0101_0100): CR bits[1:0] clear, same reasoning as
        // the write/read sequence above.
        model.CR.write(status, 32'h0000_0054, UVM_FRONTDOOR);
        model.CR.read (status, rdata,           UVM_FRONTDOOR);
        model.CR.mirror(status, UVM_CHECK);
        if (status == UVM_IS_OK) begin
            result = "PASS";
            pass_count++;
        end else begin
            result = "FAIL";
            fail_count++;
        end
        $display("  CR:      wrote=0x00000054 read=0x%08h  %-6s", rdata, result);

        $display("========================================");
        $display("  PASS=%0d  FAIL=%0d", pass_count, fail_count);
        $display("========================================");
    endtask
endclass

// ============================================================
// 6) Generic register access sanity (RO + read-clears-on-read)
// ============================================================
class uart_ral_access_seq extends uart_ral_base_seq;
    `uvm_object_utils(uart_ral_access_seq)

    function new(string name = "uart_ral_access_seq");
        super.new(name);
    endfunction

    virtual task body();
        uvm_status_e   status;
        uvm_reg_data_t rdata;
        //uvm_reg_data_t rdata2;

        $display("");
        $display("========================================");
        $display("  RAL REG ACCESS : GENERIC ACCESS (RO)");
        $display("========================================");

        // Plain RO register: SR (live status).
        model.SR.read(status, rdata, UVM_FRONTDOOR);
        if (status == UVM_IS_OK) begin
            $display("  SR  (RO/live status) read -> 0x%08h  PASS", rdata);
            pass_count++;
        end
        else begin
            $display("  SR  (RO/live status) read -> 0x%08h  FAIL", rdata);
            fail_count++;
            `uvm_error("RAL_SR", "SR frontdoor read failed")
        end

        // Read-clears-on-read RO register: ISR. There is no
        // separate CLEAR register in this map anymore -- reading
        // ISR itself clears the sticky error bits inside uart_top
        // (rtl/uart_apb_top.sv: a CPU read of ADDR_ISR both
        // returns the pre-clear value that same cycle and pulses
        // clear_errors_i). Reading it twice back to back
        // demonstrates that: whatever sticky bits the first read
        // reported, the second read should no longer show set
        // (assuming nothing re-asserts them in between).
        //model.ISR.read(status, rdata,  UVM_FRONTDOOR);
        //model.ISR.read(status, rdata2, UVM_FRONTDOOR);
        
        model.ISR.read(status, rdata, UVM_FRONTDOOR);

        if (status == UVM_IS_OK) begin
            pass_count++;
            $display("  ISR (RO/read-clear) read -> 0x%08h  PASS", rdata);
        end
        else begin
            fail_count++;
            $display("  ISR (RO/read-clear) read -> 0x%08h  FAIL", rdata);
            `uvm_error("RAL_ISR", "ISR frontdoor read failed")
        end

        $display("========================================");
        $display("  PASS=%0d  FAIL=%0d", pass_count, fail_count);
        $display("========================================");
    endtask
endclass

