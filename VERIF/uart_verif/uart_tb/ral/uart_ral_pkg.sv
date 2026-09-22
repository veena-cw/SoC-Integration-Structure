`include "uvm_macros.svh"

import uvm_pkg::*;

    // ------------------------------------------------------------
    // uart_reg_field -- uvm_reg_field with a width-masking set()
    // ------------------------------------------------------------
    class uart_reg_field extends uvm_reg_field;
        `uvm_object_utils(uart_reg_field)

        function new(string name = "uart_reg_field");
            super.new(name);
        endfunction

        // Exact-match override of uvm_reg_field::set. Mask the incoming
        // value to this field's own width before delegating, so the
        // base-class "greater than field size" warning never fires.
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
    // DIVISOR  @ 0x00
    //   bits [15:0]  DIVISOR       RW    reset = 16'd434
    //   bit  [16]    DIVISOR_LOAD  WO    self-clearing pulse
    //   bits [31:17] RESERVED      RO    0
    // ============================================================
    class divisor_reg extends uvm_reg;
        `uvm_object_utils(divisor_reg)

        rand uvm_reg_field DIVISOR;
        rand uvm_reg_field DIVISOR_LOAD;
        rand uvm_reg_field RESERVED;

        function new(string name = "divisor_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 15, 17, "RO", 1, 15'h0, 1, 0, 1);

            DIVISOR_LOAD = uart_reg_field::type_id::create("DIVISOR_LOAD");
            DIVISOR_LOAD.configure(this, 1, 16, "WO", 1, 1'b0, 1, 0, 1);

            DIVISOR = uart_reg_field::type_id::create("DIVISOR");
            DIVISOR.configure(this, 16, 0, "RW", 0, 16'd434, 1, 1, 1);
        endfunction
    endclass

    // ============================================================
    // FRAME  @ 0x04
    //   bits [3:0]  DATA_BITS    RW   reset = 4'd8
    //   bit  [4]    PARITY_EN    RW   reset = 0
    //   bits [6:5]  PARITY_MODE  RW   reset = 0
    //   bit  [7]    STOP2        RW   reset = 0
    //   bits [31:8] RESERVED     RO   0
    // ============================================================
    class frame_reg extends uvm_reg;
        `uvm_object_utils(frame_reg)

        rand uvm_reg_field DATA_BITS;
        rand uvm_reg_field PARITY_EN;
        rand uvm_reg_field PARITY_MODE;
        rand uvm_reg_field STOP2;
        rand uvm_reg_field RESERVED;

        function new(string name = "frame_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 24, 8, "RO", 1, 24'h0, 1, 0, 1);

            STOP2 = uart_reg_field::type_id::create("STOP2");
            STOP2.configure(this, 1, 7, "RW", 0, 1'b0, 1, 1, 1);

            PARITY_MODE = uart_reg_field::type_id::create("PARITY_MODE");
            PARITY_MODE.configure(this, 2, 5, "RW", 0, 2'b00, 1, 1, 1);

            PARITY_EN = uart_reg_field::type_id::create("PARITY_EN");
            PARITY_EN.configure(this, 1, 4, "RW", 0, 1'b0, 1, 1, 1);

            DATA_BITS = uart_reg_field::type_id::create("DATA_BITS");
            DATA_BITS.configure(this, 4, 0, "RW", 0, 4'd8, 1, 1, 1);
        endfunction
    endclass

    // ============================================================
    // FLOW  @ 0x08
    //   bit  [0]     FLOW_EN      RW   reset = 0
    //   bits [7:1]   RESERVED_0   RO   0
    //   bits [12:8]  RTS_THRESH   RW   reset = 8
    //   bits [31:13] RESERVED_1   RO   0
    // ============================================================
    class flow_reg extends uvm_reg;
        `uvm_object_utils(flow_reg)

        rand uvm_reg_field FLOW_EN;
        rand uvm_reg_field RESERVED_0;
        rand uvm_reg_field RTS_THRESH;
        rand uvm_reg_field RESERVED_1;

        function new(string name = "flow_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED_1 = uart_reg_field::type_id::create("RESERVED_1");
            RESERVED_1.configure(this, 19, 13, "RO", 1, 19'h0, 1, 0, 1);

            RTS_THRESH = uart_reg_field::type_id::create("RTS_THRESH");
            RTS_THRESH.configure(this, 5, 8, "RW", 0, 5'd8, 1, 1, 1);

            RESERVED_0 = uart_reg_field::type_id::create("RESERVED_0");
            RESERVED_0.configure(this, 7, 1, "RO", 1, 7'h0, 1, 0, 1);

            FLOW_EN = uart_reg_field::type_id::create("FLOW_EN");
            FLOW_EN.configure(this, 1, 0, "RW", 0, 1'b0, 1, 1, 1);
        endfunction
    endclass

    // ============================================================
    // TXDATA  @ 0x0C  (WO pulse)
    //   bits [8:0]   TX_WR_DATA  WO   write pulse; reads 0
    //   bits [31:9]  RESERVED    RO   0
    // ============================================================
    class txdata_reg extends uvm_reg;
        `uvm_object_utils(txdata_reg)

        rand uvm_reg_field TX_WR_DATA;
        rand uvm_reg_field RESERVED;

        function new(string name = "txdata_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 23, 9, "RO", 1, 23'h0, 1, 0, 1);

            TX_WR_DATA = uart_reg_field::type_id::create("TX_WR_DATA");
            TX_WR_DATA.configure(this, 9, 0, "WO", 1, 9'h0, 1, 0, 1);
        endfunction
    endclass

    // ============================================================
    // RXDATA  @ 0x10  (RO; read has side effect of popping RX FIFO)
    //   bits [8:0]   RX_DATA   RO  volatile
    //   bits [31:9]  RESERVED  RO
    // ============================================================
    class rxdata_reg extends uvm_reg;
        `uvm_object_utils(rxdata_reg)

        rand uvm_reg_field RX_DATA;
        rand uvm_reg_field RESERVED;

        function new(string name = "rxdata_reg");
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
    // STATUS  @ 0x14  (RO, live)
    // ============================================================
    class status_reg extends uvm_reg;
        `uvm_object_utils(status_reg)

        rand uvm_reg_field RESERVED;
        rand uvm_reg_field IRQ;
        rand uvm_reg_field BREAK_ERR;
        rand uvm_reg_field OVERRUN_ERR;
        rand uvm_reg_field PARITY_ERR;
        rand uvm_reg_field FRAME_ERR;
        rand uvm_reg_field RX_LEVEL;
        rand uvm_reg_field TX_LEVEL;
        rand uvm_reg_field RX_EMPTY;
        rand uvm_reg_field RX_FULL;
        rand uvm_reg_field TX_EMPTY;
        rand uvm_reg_field TX_FULL;

        function new(string name = "status_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 13, 19, "RO", 1, 13'h0, 1, 0, 1);

            IRQ          = uart_reg_field::type_id::create("IRQ");
            IRQ.configure         (this, 1, 18, "RO", 1, 1'b0, 1, 0, 1);
            BREAK_ERR    = uart_reg_field::type_id::create("BREAK_ERR");
            BREAK_ERR.configure   (this, 1, 17, "RO", 1, 1'b0, 1, 0, 1);
            OVERRUN_ERR  = uart_reg_field::type_id::create("OVERRUN_ERR");
            OVERRUN_ERR.configure (this, 1, 16, "RO", 1, 1'b0, 1, 0, 1);
            PARITY_ERR   = uart_reg_field::type_id::create("PARITY_ERR");
            PARITY_ERR.configure  (this, 1, 15, "RO", 1, 1'b0, 1, 0, 1);
            FRAME_ERR    = uart_reg_field::type_id::create("FRAME_ERR");
            FRAME_ERR.configure   (this, 1, 14, "RO", 1, 1'b0, 1, 0, 1);
            RX_LEVEL     = uart_reg_field::type_id::create("RX_LEVEL");
            RX_LEVEL.configure    (this, 5,  9, "RO", 1, 5'h0, 1, 0, 1);
            TX_LEVEL     = uart_reg_field::type_id::create("TX_LEVEL");
            TX_LEVEL.configure    (this, 5,  4, "RO", 1, 5'h0, 1, 0, 1);
            RX_EMPTY     = uart_reg_field::type_id::create("RX_EMPTY");
            RX_EMPTY.configure    (this, 1,  3, "RO", 1, 1'b1, 1, 0, 1);
            RX_FULL      = uart_reg_field::type_id::create("RX_FULL");
            RX_FULL.configure     (this, 1,  2, "RO", 1, 1'b0, 1, 0, 1);
            TX_EMPTY     = uart_reg_field::type_id::create("TX_EMPTY");
            TX_EMPTY.configure    (this, 1,  1, "RO", 1, 1'b1, 1, 0, 1);
            TX_FULL      = uart_reg_field::type_id::create("TX_FULL");
            TX_FULL.configure     (this, 1,  0, "RO", 1, 1'b0, 1, 0, 1);
        endfunction
    endclass

    // ============================================================
    // IRQ  @ 0x18
    // ============================================================
    class irq_reg extends uvm_reg;
        `uvm_object_utils(irq_reg)

        rand uvm_reg_field RX_IRQ_EN;
        rand uvm_reg_field RX_FULL_IRQ_EN;
        rand uvm_reg_field TX_EMPTY_IRQ_EN;
        rand uvm_reg_field ERR_IRQ_EN;
        rand uvm_reg_field RESERVED;

        function new(string name = "irq_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 28, 4, "RO", 1, 28'h0, 1, 0, 1);

            ERR_IRQ_EN      = uart_reg_field::type_id::create("ERR_IRQ_EN");
            ERR_IRQ_EN.configure(this, 1, 3, "RW", 0, 1'b0, 1, 1, 1);

            TX_EMPTY_IRQ_EN = uart_reg_field::type_id::create("TX_EMPTY_IRQ_EN");
            TX_EMPTY_IRQ_EN.configure(this, 1, 2, "RW", 0, 1'b0, 1, 1, 1);

            RX_FULL_IRQ_EN  = uart_reg_field::type_id::create("RX_FULL_IRQ_EN");
            RX_FULL_IRQ_EN.configure(this, 1, 1, "RW", 0, 1'b0, 1, 1, 1);

            RX_IRQ_EN       = uart_reg_field::type_id::create("RX_IRQ_EN");
            RX_IRQ_EN.configure(this, 1, 0, "RW", 0, 1'b0, 1, 1, 1);
        endfunction
    endclass

    // ============================================================
    // CLEAR  @ 0x1C  (WO pulse)
    // ============================================================
    class clear_reg extends uvm_reg;
        `uvm_object_utils(clear_reg)

        rand uvm_reg_field CLEAR_ERRORS;
        rand uvm_reg_field RESERVED;

        function new(string name = "clear_reg");
            super.new(name, 32, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            CLEAR_ERRORS = uart_reg_field::type_id::create("CLEAR_ERRORS");
            CLEAR_ERRORS.configure(this, 1, 0, "WO", 1, 1'b0, 1, 0, 1);

            RESERVED = uart_reg_field::type_id::create("RESERVED");
            RESERVED.configure(this, 31, 1, "RO", 1, 31'h0, 1, 0, 1);
        endfunction
    endclass