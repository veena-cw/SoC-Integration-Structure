//      // verilator_coverage annotation
        //==================================================================================
        //  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
        //  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
        //  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
        //  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
        //
        //  Chipweave Technologies Confidential
        //==================================================================================
        //  Project           				: 
        //  Module            				: 
        //  Primary Unit Owner                         	: 
        //  Secondary Contact                           : 
        //  Source [SystemVerilog|Verilog|VHDL|Other]   : 
        //=================================================================================
        //  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
        //=================================================================================
        
        // Generated Reset Interface for APB_to_I2C_Controller - no modports, resource_db only
        // Waveform dump is in test_top; this interface is pure logic rst_n
        interface apb_i2c_reset_if;
%000001     logic rst_n;
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.RST_vif
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.RST_vif
        endinterface
        
