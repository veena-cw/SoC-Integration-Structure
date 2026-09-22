// ------------------------------------------------------------
// uart_ral_block.sv
//
// The top-level register block. Base address 0x0. 4-byte stride.
// Endianness little. This is what the predictor + adapter will
// operate on, and what env.register_db exposes to sequences.
// ------------------------------------------------------------
`include "uvm_macros.svh"


import uvm_pkg::*;

    class uart_ral_block extends uvm_reg_block;
        `uvm_object_utils(uart_ral_block)

        rand divisor_reg DIVISOR;
        rand frame_reg   FRAME;
        rand flow_reg    FLOW;
        rand txdata_reg  TXDATA;
        rand rxdata_reg  RXDATA;
        rand status_reg  STATUS;
        rand irq_reg     IRQ;
        rand clear_reg   CLEAR;

        uvm_reg_map default_map;

        function new(string name = "uart_ral_block");
            super.new(name, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            default_map = create_map("default_map", 'h0, 4, UVM_LITTLE_ENDIAN, 0);

            DIVISOR = divisor_reg::type_id::create("DIVISOR");
            DIVISOR.configure(this, null, "");
            DIVISOR.build();
            default_map.add_reg(DIVISOR, 'h00, "RW");

            FRAME = frame_reg::type_id::create("FRAME");
            FRAME.configure(this, null, "");
            FRAME.build();
            default_map.add_reg(FRAME, 'h04, "RW");

            FLOW = flow_reg::type_id::create("FLOW");
            FLOW.configure(this, null, "");
            FLOW.build();
            default_map.add_reg(FLOW, 'h08, "RW");

            TXDATA = txdata_reg::type_id::create("TXDATA");
            TXDATA.configure(this, null, "");
            TXDATA.build();
            default_map.add_reg(TXDATA, 'h0C, "WO");

            RXDATA = rxdata_reg::type_id::create("RXDATA");
            RXDATA.configure(this, null, "");
            RXDATA.build();
            default_map.add_reg(RXDATA, 'h10, "RO");

            STATUS = status_reg::type_id::create("STATUS");
            STATUS.configure(this, null, "");
            STATUS.build();
            default_map.add_reg(STATUS, 'h14, "RO");

            IRQ = irq_reg::type_id::create("IRQ");
            IRQ.configure(this, null, "");
            IRQ.build();
            default_map.add_reg(IRQ, 'h18, "RW");

            CLEAR = clear_reg::type_id::create("CLEAR");
            CLEAR.configure(this, null, "");
            CLEAR.build();
            default_map.add_reg(CLEAR, 'h1C, "WO");

            lock_model();
        endfunction

    endclass
