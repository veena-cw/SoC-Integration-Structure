// ------------------------------------------------------------
// uart_ral_block.sv
//
// The top-level register block for the NEW uart_apb_top.sv map.
// Base address 0x0, 4-byte stride, little endian -- same
// mapping conventions as before, just different registers:
// THR(0x00) / RHR(0x04) / SR(0x08) / CR(0x0C) / BRDR(0x10) /
// IER(0x14) / ISR(0x18). Flow-control configuration is represented
// by CR[8] and CR[13:9], and RX-full IRQ enable by IER[3].
// ------------------------------------------------------------
`include "uvm_macros.svh"


import uvm_pkg::*;

    class uart_ral_block extends uvm_reg_block;
        `uvm_object_utils(uart_ral_block)

        rand thr_reg  THR;
        rand rhr_reg  RHR;
        rand sr_reg   SR;
        rand cr_reg   CR;
        rand brdr_reg BRDR;
        rand ier_reg  IER;
        rand isr_reg  ISR;

        uvm_reg_map default_map;

        function new(string name = "uart_ral_block");
            super.new(name, UVM_NO_COVERAGE);
        endfunction

        virtual function void build();
            default_map = create_map("default_map", 'h0, 4, UVM_LITTLE_ENDIAN, 0);

            THR = thr_reg::type_id::create("THR");
            THR.configure(this, null, "");
            THR.build();
            default_map.add_reg(THR, 'h00, "RW");

            RHR = rhr_reg::type_id::create("RHR");
            RHR.configure(this, null, "");
            RHR.build();
            default_map.add_reg(RHR, 'h04, "RO");

            SR = sr_reg::type_id::create("SR");
            SR.configure(this, null, "");
            SR.build();
            default_map.add_reg(SR, 'h08, "RO");

            CR = cr_reg::type_id::create("CR");
            CR.configure(this, null, "");
            CR.build();
            default_map.add_reg(CR, 'h0C, "RW");

            BRDR = brdr_reg::type_id::create("BRDR");
            BRDR.configure(this, null, "");
            BRDR.build();
            default_map.add_reg(BRDR, 'h10, "RW");

            IER = ier_reg::type_id::create("IER");
            IER.configure(this, null, "");
            IER.build();
            default_map.add_reg(IER, 'h14, "RW");

            ISR = isr_reg::type_id::create("ISR");
            ISR.configure(this, null, "");
            ISR.build();
            default_map.add_reg(ISR, 'h18, "RO");

            lock_model();
        endfunction

    endclass
