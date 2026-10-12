// ------------------------------------------------------------
// uart_ral_pkg.sv
//
// Register model for the NEW uart_apb_top.sv (THR/RHR/SR/CR/
// BRDR/IER/ISR map -- classic-UART-style naming), replacing the
// old DIVISOR/FRAME/FLOW/TXDATA/RXDATA/STATUS/IRQ/CLEAR map.
// Field widths, LSB positions and reset values here are taken
// directly from the register always_ff blocks in the new RTL,
// not from the old map.
//
// IMPORTANT -- CR bits [1:0] (TX_WR_EN / RX_RD_EN) are stored in CR,
// but uart_apb_top edge-detects those bits and presents one-cycle
// pulses to the UART core. The virtual sequence writes the bit high
// and then restores the configuration word with both strobe bits low.
// ------------------------------------------------------------
`include "uvm_macros.svh"

import uvm_pkg::*;

    // ------------------------------------------------------------
    // uart_reg_field -- uvm_reg_field with a width-masking set()
    // (unchanged from the old map; still correct here)
    // ------------------------------------------------------------
    class uart_reg_field extends uvm_reg_field;
        `uvm_object_utils(uart_reg_field)

        function new(string name = "uart_reg_field");
            super.new(name);
        endfunction

        virtual function void set(uvm_reg_data_t value,
                                  string         fname = "",
                                  int            lineno = 0);
            uvm_reg_data_t masked;
            int unsigned   nbits;
            nbits  = get_n_bits();
            masked = (nbits >= 64) ? value
                                   : (value & ((64'h1 << nbits) - 1));
            super.set(masked, fname, lineno);
        endfunction
    endclass

    // ============================================================
    // THR  @ 0x00  -- TX Holding Register
    //   bits [31:0]  TX_DATA   RW   reset = 0
    //   Only bits [8:0] reach uart_top (tx_wr_data_i); the DUT
    //   stores and reads back the full 32 bits written (rtl/
    //   uart_apb_top.sv: "{thr_reg_vld,thr_reg} <= {1'b1,
    //   PWDATA[31:0]}"), so this is modeled as one full-width
    //   field rather than a 9-bit field over reserved-zero bits.
    //   Writing this alone does not send anything -- see CR's
    //   TX_WR_EN.
    // ============================================================
    class thr_reg extends uvm_reg;
        `uvm_object_utils(thr_reg)

        rand uvm_reg_field TX_DATA;

        function new(string name = "thr_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            TX_DATA = uart_reg_field::type_id::create("TX_DATA");
            TX_DATA.configure(this, 32, 0, "RW", 0, 32'h0, 1, 1, 1);
        endfunction
    endclass

    // ============================================================
    // RHR  @ 0x04  -- RX Holding Register
    //   bits [8:0]   RX_DATA   RO  volatile, reset = 0
    //   bits [31:9]  RESERVED  RO  0
    //   Populated automatically from the RX deserializer -- see
    //   the header note above and uart_virtual_sequence.sv for
    //   the known RTL gaps around when/whether this actually
    //   updates in the RTL as given.
    // ============================================================
    class rhr_reg extends uvm_reg;
        `uvm_object_utils(rhr_reg)

        rand uvm_reg_field RX_DATA;
        rand uvm_reg_field RESERVED;

        function new(string name = "rhr_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 23, 9, "RO", 1, 23'h0, 1, 0, 1);

            RX_DATA = uart_reg_field::type_id::create("RX_DATA");
            RX_DATA.configure(this, 9, 0, "RO", 1, 9'h0, 1, 0, 1);
        endfunction
    endclass

    // ============================================================
    // SR  @ 0x08  -- Status Register (RO, live -- updates every
    //   clock, not gated on being read)
    //   bit0 : TX_EMPTY
    //   bit1 : TX_FULL
    //   bit2 : RX_EMPTY
    //   bit3 : RX_FULL
    //   bit4 : PARITY_ERR
    //   bit5 : FRAME_ERR
    //   bit6 : DO_PUSH      -- one-clock pulse; see note below
    //   bits31:7 : RESERVED, read as 0
    //
    //   No RX_LEVEL/TX_LEVEL fields exist anywhere in the new
    //   map -- rtl/uart_apb_top.sv leaves uart_top's tx_level_o
    //   and rx_level_o outputs unconnected (.tx_level_o(),
    //   .rx_level_o()), so FIFO occupancy is not observable via
    //   any register in this DUT revision, only full/empty.
    //
    //   DO_PUSH is computed in the DUT as
    //   "tx_wr_en_i && !rx_full_o" -- gated on the *RX* FIFO's
    //   full flag despite being named/commented as a TX-side
    //   push indicator. Modeled here exactly as the RTL computes
    //   it (this RAL field is a read-only mirror of silicon, not
    //   an opinion about what the bit ought to mean).
    // ============================================================
    class sr_reg extends uvm_reg;
        `uvm_object_utils(sr_reg)

        rand uvm_reg_field RESERVED;
        rand uvm_reg_field DO_PUSH;
        rand uvm_reg_field FRAME_ERR;
        rand uvm_reg_field PARITY_ERR;
        rand uvm_reg_field RX_FULL;
        rand uvm_reg_field RX_EMPTY;
        rand uvm_reg_field TX_FULL;
        rand uvm_reg_field TX_EMPTY;

        function new(string name = "sr_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 25, 7, "RO", 1, 25'h0, 1, 0, 1);

            DO_PUSH     = uart_reg_field::type_id::create("DO_PUSH");
            DO_PUSH.configure    (this, 1, 6, "RO", 1, 1'b0, 1, 0, 1);
            FRAME_ERR   = uart_reg_field::type_id::create("FRAME_ERR");
            FRAME_ERR.configure  (this, 1, 5, "RO", 1, 1'b0, 1, 0, 1);
            PARITY_ERR  = uart_reg_field::type_id::create("PARITY_ERR");
            PARITY_ERR.configure (this, 1, 4, "RO", 1, 1'b0, 1, 0, 1);
            RX_FULL     = uart_reg_field::type_id::create("RX_FULL");
            RX_FULL.configure    (this, 1, 3, "RO", 1, 1'b0, 1, 0, 1);
            RX_EMPTY    = uart_reg_field::type_id::create("RX_EMPTY");
            RX_EMPTY.configure   (this, 1, 2, "RO", 1, 1'b0, 1, 0, 1);
            TX_FULL     = uart_reg_field::type_id::create("TX_FULL");
            TX_FULL.configure    (this, 1, 1, "RO", 1, 1'b0, 1, 0, 1);
            TX_EMPTY    = uart_reg_field::type_id::create("TX_EMPTY");
            TX_EMPTY.configure   (this, 1, 0, "RO", 1, 1'b0, 1, 0, 1);
            // Reset value is genuinely 0 for every bit here (rtl:
            // "if (!rst_n) {sr_reg_vld,sr_reg} <= 33'h0;"), even
            // though that momentarily reads TX_EMPTY/RX_EMPTY as 0
            // right at reset -- one clock after rst_n deasserts,
            // the live "else" branch takes over and these settle
            // to the real (empty) status. Not included in the d1
            // reset-value regression for the same reason STATUS
            // never was: it's a live register, not a real "reset
            // value" to check.
        endfunction
    endclass

    // ============================================================
    // CR  @ 0x0C  -- Control Register (RW)
    //   bit0   : TX_WR_EN     -- one-cycle software strobe generated by
    //            uart_apb_top edge detection
    //   bit1   : RX_RD_EN     -- one-cycle software strobe generated by
    //            uart_apb_top edge detection
    //   bit2   : PARITY_EN
    //   bit4:3 : PARITY_MODE  -- 00=even 01=odd 10=mark 11=space
    //   bit5   : STOP2        -- 0=1 stop bit, 1=2 stop bits
    //   bit7:6 : DATA_BITS    -- 00=7, 01=8, 10=9, 11=8 (5/6-bit
    //            frames are NOT representable in this 2-bit
    //            encoding -- see uart_virtual_sequence.sv's
    //            encode_data_bits())
    //   bit8   : FLOW_EN       -- hardware RTS/CTS flow-control enable
    //   bits13:9: RTS_THRESH  -- RX FIFO occupancy threshold
    //   bits31:14 : RESERVED, read as 0
    //   reset = 0 for every field
    // ============================================================
    class cr_reg extends uvm_reg;
        `uvm_object_utils(cr_reg)

        rand uvm_reg_field TX_WR_EN;
        rand uvm_reg_field RX_RD_EN;
        rand uvm_reg_field PARITY_EN;
        rand uvm_reg_field PARITY_MODE;
        rand uvm_reg_field STOP2;
        rand uvm_reg_field DATA_BITS;
        rand uvm_reg_field FLOW_EN;
        rand uvm_reg_field RTS_THRESH;
        rand uvm_reg_field RESERVED;

        function new(string name = "cr_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 18, 14, "RO", 1, 18'h0, 1, 0, 1);

            RTS_THRESH = uart_reg_field::type_id::create("RTS_THRESH");
            RTS_THRESH.configure(this, 5, 9, "RW", 0, 5'h0, 1, 1, 1);

            FLOW_EN = uart_reg_field::type_id::create("FLOW_EN");
            FLOW_EN.configure(this, 1, 8, "RW", 0, 1'b0, 1, 1, 1);

            DATA_BITS = uart_reg_field::type_id::create("DATA_BITS");
            DATA_BITS.configure(this, 2, 6, "RW", 0, 2'b00, 1, 1, 1);

            STOP2 = uart_reg_field::type_id::create("STOP2");
            STOP2.configure(this, 1, 5, "RW", 0, 1'b0, 1, 1, 1);

            PARITY_MODE = uart_reg_field::type_id::create("PARITY_MODE");
            PARITY_MODE.configure(this, 2, 3, "RW", 0, 2'b00, 1, 1, 1);

            PARITY_EN = uart_reg_field::type_id::create("PARITY_EN");
            PARITY_EN.configure(this, 1, 2, "RW", 0, 1'b0, 1, 1, 1);

            RX_RD_EN = uart_reg_field::type_id::create("RX_RD_EN");
            RX_RD_EN.configure(this, 1, 1, "RW", 0, 1'b0, 1, 1, 1);

            TX_WR_EN = uart_reg_field::type_id::create("TX_WR_EN");
            TX_WR_EN.configure(this, 1, 0, "RW", 0, 1'b0, 1, 1, 1);
        endfunction
    endclass

    // ============================================================
    // BRDR  @ 0x10  -- Baud Rate Divisor Register
    //   bits [15:0]  DIVISOR   RW   reset = 0
    //   bits [31:16] RESERVED RO   0
    //   Write is gated externally by the divisor_load_i *port*
    //   (not a register bit anymore -- see top/tb_top.sv, which
    //   ties it statically high so this behaves like an always-
    //   writable register, matching every existing sequence's
    //   assumption).
    // ============================================================
    class brdr_reg extends uvm_reg;
        `uvm_object_utils(brdr_reg)

        rand uvm_reg_field DIVISOR;
        rand uvm_reg_field RESERVED;

        function new(string name = "brdr_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 16, 16, "RO", 1, 16'h0, 1, 0, 1);

            DIVISOR = uart_reg_field::type_id::create("DIVISOR");
            DIVISOR.configure(this, 16, 0, "RW", 0, 16'h0, 1, 1, 1);
        endfunction
    endclass

    // ============================================================
    // IER  @ 0x14  -- Interrupt Enable Register
    //   bit0 : TX_EMPTY_IRQ_EN
    //   bit1 : RX_IRQ_EN
    //   bit2 : ERR_IRQ_EN
    //   bit3 : RX_FULL_IRQ_EN
    //   bits31:4 : RESERVED, read as 0
    //   reset = 0. Write gated externally by uart_irq_en *port*
    //   (tied high in tb_top.sv, same reasoning as BRDR above).
    // ============================================================
    class ier_reg extends uvm_reg;
        `uvm_object_utils(ier_reg)

        rand uvm_reg_field ERR_IRQ_EN;
        rand uvm_reg_field RX_IRQ_EN;
        rand uvm_reg_field TX_EMPTY_IRQ_EN;
        rand uvm_reg_field RX_FULL_IRQ_EN;
        rand uvm_reg_field RESERVED;

        function new(string name = "ier_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 28, 4, "RO", 1, 28'h0, 1, 0, 1);

            RX_FULL_IRQ_EN = uart_reg_field::type_id::create("RX_FULL_IRQ_EN");
            RX_FULL_IRQ_EN.configure(this, 1, 3, "RW", 0, 1'b0, 1, 1, 1);

            ERR_IRQ_EN = uart_reg_field::type_id::create("ERR_IRQ_EN");
            ERR_IRQ_EN.configure(this, 1, 2, "RW", 0, 1'b0, 1, 1, 1);

            RX_IRQ_EN = uart_reg_field::type_id::create("RX_IRQ_EN");
            RX_IRQ_EN.configure(this, 1, 1, "RW", 0, 1'b0, 1, 1, 1);

            TX_EMPTY_IRQ_EN = uart_reg_field::type_id::create("TX_EMPTY_IRQ_EN");
            TX_EMPTY_IRQ_EN.configure(this, 1, 0, "RW", 0, 1'b0, 1, 1, 1);
        endfunction
    endclass

    // ============================================================
    // ISR  @ 0x18  -- Interrupt Status Register (RO)
    //   bit0 : TX_EMPTY   bit1 : TX_FULL
    //   bit2 : RX_EMPTY   bit3 : RX_FULL
    //   bit4 : PARITY_ERR bit5 : FRAME_ERR
    //   bit6 : OVERRUN_ERR bit7 : BREAK_ERR
    //   bits31:8 : RESERVED, read as 0
    //   reset = 0.
    //
    //   No separate CLEAR register exists anymore -- reading ISR
    //   *is* the clear mechanism (rtl/uart_apb_top.sv: a CPU read
    //   of ADDR_ISR both returns the live value that cycle AND
    //   pulses clear_errors_i into uart_top, clearing the sticky
    //   frame/parity/overrun/break flags). uart_ral_sequences.sv
    //   and uart_virtual_sequence.sv read ISR where the old code
    //   used to write CLEAR.
    //
    //   There is no IRQ/mirror bit in this register at all -- the
    //   interrupt itself is only visible on the uart_irq top-level
    //   pin now, not through any register (uart_coverage.sv polls
    //   the pin directly, as it already did for the old irq_o).
    // ============================================================
    class isr_reg extends uvm_reg;
        `uvm_object_utils(isr_reg)

        rand uvm_reg_field RESERVED;
        rand uvm_reg_field BREAK_ERR;
        rand uvm_reg_field OVERRUN_ERR;
        rand uvm_reg_field FRAME_ERR;
        rand uvm_reg_field PARITY_ERR;
        rand uvm_reg_field RX_FULL;
        rand uvm_reg_field RX_EMPTY;
        rand uvm_reg_field TX_FULL;
        rand uvm_reg_field TX_EMPTY;

        function new(string name = "isr_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 24, 8, "RO", 1, 24'h0, 1, 0, 1);

            BREAK_ERR   = uart_reg_field::type_id::create("BREAK_ERR");
            BREAK_ERR.configure  (this, 1, 7, "RO", 1, 1'b0, 1, 0, 1);
            OVERRUN_ERR = uart_reg_field::type_id::create("OVERRUN_ERR");
            OVERRUN_ERR.configure(this, 1, 6, "RO", 1, 1'b0, 1, 0, 1);
            FRAME_ERR   = uart_reg_field::type_id::create("FRAME_ERR");
            FRAME_ERR.configure  (this, 1, 5, "RO", 1, 1'b0, 1, 0, 1);
            PARITY_ERR  = uart_reg_field::type_id::create("PARITY_ERR");
            PARITY_ERR.configure (this, 1, 4, "RO", 1, 1'b0, 1, 0, 1);
            RX_FULL     = uart_reg_field::type_id::create("RX_FULL");
            RX_FULL.configure    (this, 1, 3, "RO", 1, 1'b0, 1, 0, 1);
            RX_EMPTY    = uart_reg_field::type_id::create("RX_EMPTY");
            RX_EMPTY.configure   (this, 1, 2, "RO", 1, 1'b0, 1, 0, 1);
            TX_FULL     = uart_reg_field::type_id::create("TX_FULL");
            TX_FULL.configure    (this, 1, 1, "RO", 1, 1'b0, 1, 0, 1);
            TX_EMPTY    = uart_reg_field::type_id::create("TX_EMPTY");
            TX_EMPTY.configure   (this, 1, 0, "RO", 1, 1'b0, 1, 0, 1);
        endfunction
    endclass
