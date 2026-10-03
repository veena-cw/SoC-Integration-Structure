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
        
        // Generated APB Interface for APB_to_I2C_Controller (verification only, no RTL)
        import uvm_pkg::*;
        interface apb_i2c_apb_if (
 250712     input logic pclk,
+250712  point: type=toggle comment=pclk:0->1 hier=test_top.APB_vif
+250711  point: type=toggle comment=pclk:1->0 hier=test_top.APB_vif
%000001     input logic preset_n
-000001  point: type=toggle comment=preset_n:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=preset_n:1->0 hier=test_top.APB_vif
        );
 000175     logic                    psel;
+000175  point: type=toggle comment=psel:0->1 hier=test_top.APB_vif
+000175  point: type=toggle comment=psel:1->0 hier=test_top.APB_vif
 000175     logic                    penable;
+000175  point: type=toggle comment=penable:0->1 hier=test_top.APB_vif
+000175  point: type=toggle comment=penable:1->0 hier=test_top.APB_vif
 000050     logic                    pwrite;
+000050  point: type=toggle comment=pwrite:0->1 hier=test_top.APB_vif
+000050  point: type=toggle comment=pwrite:1->0 hier=test_top.APB_vif
~000175     logic [31:0]   paddr;
-000000  point: type=toggle comment=paddr[0]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[0]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[10]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[10]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[11]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[11]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[12]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[12]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[13]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[13]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[14]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[14]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[15]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[15]:1->0 hier=test_top.APB_vif
+000175  point: type=toggle comment=paddr[16]:0->1 hier=test_top.APB_vif
+000174  point: type=toggle comment=paddr[16]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[17]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[17]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[18]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[18]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[19]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[19]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[1]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[1]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[20]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[20]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[21]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[21]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[22]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[22]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[23]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[23]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[24]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[24]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[25]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[25]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[26]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[26]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[27]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[27]:1->0 hier=test_top.APB_vif
+000175  point: type=toggle comment=paddr[28]:0->1 hier=test_top.APB_vif
+000174  point: type=toggle comment=paddr[28]:1->0 hier=test_top.APB_vif
+000175  point: type=toggle comment=paddr[29]:0->1 hier=test_top.APB_vif
+000174  point: type=toggle comment=paddr[29]:1->0 hier=test_top.APB_vif
+000125  point: type=toggle comment=paddr[2]:0->1 hier=test_top.APB_vif
+000124  point: type=toggle comment=paddr[2]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[30]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[30]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[31]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[31]:1->0 hier=test_top.APB_vif
+000025  point: type=toggle comment=paddr[3]:0->1 hier=test_top.APB_vif
+000025  point: type=toggle comment=paddr[3]:1->0 hier=test_top.APB_vif
+000175  point: type=toggle comment=paddr[4]:0->1 hier=test_top.APB_vif
+000174  point: type=toggle comment=paddr[4]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[5]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[5]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[6]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[6]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[7]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[7]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[8]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[8]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[9]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=paddr[9]:1->0 hier=test_top.APB_vif
~000050     logic [31:0]   pwdata;
+000012  point: type=toggle comment=pwdata[0]:0->1 hier=test_top.APB_vif
+000012  point: type=toggle comment=pwdata[0]:1->0 hier=test_top.APB_vif
+000050  point: type=toggle comment=pwdata[10]:0->1 hier=test_top.APB_vif
+000050  point: type=toggle comment=pwdata[10]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[11]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[11]:1->0 hier=test_top.APB_vif
+000050  point: type=toggle comment=pwdata[12]:0->1 hier=test_top.APB_vif
+000050  point: type=toggle comment=pwdata[12]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[13]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[13]:1->0 hier=test_top.APB_vif
+000050  point: type=toggle comment=pwdata[14]:0->1 hier=test_top.APB_vif
+000050  point: type=toggle comment=pwdata[14]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[15]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[15]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[16]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[16]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[17]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[17]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[18]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[18]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[19]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[19]:1->0 hier=test_top.APB_vif
+000015  point: type=toggle comment=pwdata[1]:0->1 hier=test_top.APB_vif
+000015  point: type=toggle comment=pwdata[1]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[20]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[20]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[21]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[21]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[22]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[22]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[23]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[23]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[24]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[24]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[25]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[25]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[26]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[26]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[27]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[27]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[28]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[28]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[29]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[29]:1->0 hier=test_top.APB_vif
+000013  point: type=toggle comment=pwdata[2]:0->1 hier=test_top.APB_vif
+000013  point: type=toggle comment=pwdata[2]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[30]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[30]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[31]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[31]:1->0 hier=test_top.APB_vif
+000015  point: type=toggle comment=pwdata[3]:0->1 hier=test_top.APB_vif
+000015  point: type=toggle comment=pwdata[3]:1->0 hier=test_top.APB_vif
+000011  point: type=toggle comment=pwdata[4]:0->1 hier=test_top.APB_vif
+000011  point: type=toggle comment=pwdata[4]:1->0 hier=test_top.APB_vif
+000015  point: type=toggle comment=pwdata[5]:0->1 hier=test_top.APB_vif
+000015  point: type=toggle comment=pwdata[5]:1->0 hier=test_top.APB_vif
+000011  point: type=toggle comment=pwdata[6]:0->1 hier=test_top.APB_vif
+000011  point: type=toggle comment=pwdata[6]:1->0 hier=test_top.APB_vif
+000012  point: type=toggle comment=pwdata[7]:0->1 hier=test_top.APB_vif
+000012  point: type=toggle comment=pwdata[7]:1->0 hier=test_top.APB_vif
+000050  point: type=toggle comment=pwdata[8]:0->1 hier=test_top.APB_vif
+000050  point: type=toggle comment=pwdata[8]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[9]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pwdata[9]:1->0 hier=test_top.APB_vif
~000025     logic [31:0]   prdata;
-000000  point: type=toggle comment=prdata[0]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[0]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[10]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[10]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[11]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[11]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[12]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[12]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[13]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[13]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[14]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[14]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[15]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[15]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[16]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[16]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[17]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[17]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[18]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[18]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[19]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[19]:1->0 hier=test_top.APB_vif
+000025  point: type=toggle comment=prdata[1]:0->1 hier=test_top.APB_vif
+000025  point: type=toggle comment=prdata[1]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[20]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[20]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[21]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[21]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[22]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[22]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[23]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[23]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[24]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[24]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[25]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[25]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[26]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[26]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[27]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[27]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[28]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[28]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[29]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[29]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[2]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[2]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[30]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[30]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[31]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[31]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[3]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[3]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[4]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[4]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[5]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[5]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[6]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[6]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[7]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[7]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[8]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[8]:1->0 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[9]:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=prdata[9]:1->0 hier=test_top.APB_vif
 000175     logic                    pready;
+000175  point: type=toggle comment=pready:0->1 hier=test_top.APB_vif
+000175  point: type=toggle comment=pready:1->0 hier=test_top.APB_vif
%000000     logic                    pslverr;
-000000  point: type=toggle comment=pslverr:0->1 hier=test_top.APB_vif
-000000  point: type=toggle comment=pslverr:1->0 hier=test_top.APB_vif
 000050     logic [3:0] pstrb;
+000025  point: type=toggle comment=pstrb[0]:0->1 hier=test_top.APB_vif
+000025  point: type=toggle comment=pstrb[0]:1->0 hier=test_top.APB_vif
+000050  point: type=toggle comment=pstrb[1]:0->1 hier=test_top.APB_vif
+000050  point: type=toggle comment=pstrb[1]:1->0 hier=test_top.APB_vif
+000025  point: type=toggle comment=pstrb[2]:0->1 hier=test_top.APB_vif
+000025  point: type=toggle comment=pstrb[2]:1->0 hier=test_top.APB_vif
+000025  point: type=toggle comment=pstrb[3]:0->1 hier=test_top.APB_vif
+000025  point: type=toggle comment=pstrb[3]:1->0 hier=test_top.APB_vif
            
            
             //============================================================
            // Temporary PREADY generation
            //============================================================
        /*
            always @(posedge pclk) begin
        
                if (!preset_n) begin
                    pready <= 1'b0;
                end
        
                else if (psel && penable) begin
                    pready <= 1'b1;
                end
        
                else begin
                    pready <= 1'b0;
                end
        
            end*/
            /*
            property apb_reset_idle_check;
          @(posedge pclk)
          !preset_n |-> (!psel && !penable);
        endproperty
        
        assert property (apb_reset_idle_check)
          else `uvm_error("APB_ASSERT",
                          "APB is not IDLE after reset: PSEL/PENABLE must be LOW");
                          
                          
           property apb_setup_check;
          @(posedge pclk) disable iff (!preset_n)
          (!psel && penable==1'b0) |-> ##1
            (psel && penable==1'b0);
        endproperty
        
        assert property (apb_setup_check)
          else `uvm_error("APB_ASSERT",
                          "APB SETUP phase violation: PSEL must be HIGH and PENABLE LOW");
                          
          property apb_access_check;
          @(posedge pclk) disable iff(!preset_n)
          (psel && penable==1'b0) |=> (psel && penable);
        endproperty
        
        assert property (apb_access_check)
          else `uvm_error("APB_ASSERT",
                          "APB ACCESS violation: PSEL must remain HIGH and PENABLE must become HIGH");
                          
        property apb_access_stable_check;
          @(posedge pclk)
          (psel && penable && !pready) |=> 
            (psel && penable);
        endproperty
        
        assert property (apb_access_stable_check)
          else `uvm_error("APB_ASSERT",
                          "APB ACCESS violation: PSEL/PENABLE changed before PREADY");     */                                            
        endinterface
        
