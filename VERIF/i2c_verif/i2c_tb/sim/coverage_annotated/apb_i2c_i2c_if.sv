//      // verilator_coverage annotation
        interface apb_i2c_i2c_if(
 125356     input logic clk,
+125356  point: type=toggle comment=clk:0->1 hier=test_top.I2C_vif
+125355  point: type=toggle comment=clk:1->0 hier=test_top.I2C_vif
%000001     input logic reset_n
-000001  point: type=toggle comment=reset_n:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=reset_n:1->0 hier=test_top.I2C_vif
        );
        
%000001 logic [7:0] slave_address;
-000000  point: type=toggle comment=slave_address[0]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[0]:1->0 hier=test_top.I2C_vif
-000001  point: type=toggle comment=slave_address[1]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[1]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[2]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[2]:1->0 hier=test_top.I2C_vif
-000001  point: type=toggle comment=slave_address[3]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[3]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[4]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[4]:1->0 hier=test_top.I2C_vif
-000001  point: type=toggle comment=slave_address[5]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[5]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[6]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[6]:1->0 hier=test_top.I2C_vif
-000001  point: type=toggle comment=slave_address[7]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slave_address[7]:1->0 hier=test_top.I2C_vif
%000000 logic [7:0] wdata;
-000000  point: type=toggle comment=wdata[0]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[0]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[1]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[1]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[2]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[2]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[3]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[3]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[4]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[4]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[5]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[5]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[6]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[6]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[7]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=wdata[7]:1->0 hier=test_top.I2C_vif
%000000 logic [7:0] rdata;
-000000  point: type=toggle comment=rdata[0]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[0]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[1]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[1]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[2]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[2]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[3]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[3]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[4]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[4]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[5]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[5]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[6]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[6]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[7]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=rdata[7]:1->0 hier=test_top.I2C_vif
%000000 logic write;
-000000  point: type=toggle comment=write:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=write:1->0 hier=test_top.I2C_vif
%000000 logic slverr;
-000000  point: type=toggle comment=slverr:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=slverr:1->0 hier=test_top.I2C_vif
%000000 logic strb;
-000000  point: type=toggle comment=strb:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=strb:1->0 hier=test_top.I2C_vif
        
        
%000008 logic [7:0] pointer_reg;
-000007  point: type=toggle comment=pointer_reg[0]:0->1 hier=test_top.I2C_vif
-000006  point: type=toggle comment=pointer_reg[0]:1->0 hier=test_top.I2C_vif
-000005  point: type=toggle comment=pointer_reg[1]:0->1 hier=test_top.I2C_vif
-000004  point: type=toggle comment=pointer_reg[1]:1->0 hier=test_top.I2C_vif
-000007  point: type=toggle comment=pointer_reg[2]:0->1 hier=test_top.I2C_vif
-000006  point: type=toggle comment=pointer_reg[2]:1->0 hier=test_top.I2C_vif
-000008  point: type=toggle comment=pointer_reg[3]:0->1 hier=test_top.I2C_vif
-000008  point: type=toggle comment=pointer_reg[3]:1->0 hier=test_top.I2C_vif
-000007  point: type=toggle comment=pointer_reg[4]:0->1 hier=test_top.I2C_vif
-000007  point: type=toggle comment=pointer_reg[4]:1->0 hier=test_top.I2C_vif
-000008  point: type=toggle comment=pointer_reg[5]:0->1 hier=test_top.I2C_vif
-000007  point: type=toggle comment=pointer_reg[5]:1->0 hier=test_top.I2C_vif
-000005  point: type=toggle comment=pointer_reg[6]:0->1 hier=test_top.I2C_vif
-000004  point: type=toggle comment=pointer_reg[6]:1->0 hier=test_top.I2C_vif
-000007  point: type=toggle comment=pointer_reg[7]:0->1 hier=test_top.I2C_vif
-000007  point: type=toggle comment=pointer_reg[7]:1->0 hier=test_top.I2C_vif
%000000 logic [7:0] temp_reg;
-000000  point: type=toggle comment=temp_reg[0]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[0]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[1]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[1]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[2]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[2]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[3]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[3]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[4]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[4]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[5]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[5]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[6]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[6]:1->0 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[7]:0->1 hier=test_top.I2C_vif
-000000  point: type=toggle comment=temp_reg[7]:1->0 hier=test_top.I2C_vif
 000217 wire i2c_sda;
+000217  point: type=toggle comment=i2c_sda:0->1 hier=test_top.I2C_vif
+000216  point: type=toggle comment=i2c_sda:1->0 hier=test_top.I2C_vif
 000476 logic i2c_scl;
+000476  point: type=toggle comment=i2c_scl:0->1 hier=test_top.I2C_vif
+000475  point: type=toggle comment=i2c_scl:1->0 hier=test_top.I2C_vif
        
        
        // internal signals
 000050 logic sda_drive_low;
+000050  point: type=toggle comment=sda_drive_low:0->1 hier=test_top.I2C_vif
+000050  point: type=toggle comment=sda_drive_low:1->0 hier=test_top.I2C_vif
 000025 logic done;
+000025  point: type=toggle comment=done:0->1 hier=test_top.I2C_vif
+000025  point: type=toggle comment=done:1->0 hier=test_top.I2C_vif
        pullup(i2c_sda);
 125356  clocking driver_cb @(posedge clk);
+125356  point: type=line comment=block hier=test_top.I2C_vif
          endclocking
        
        
          //------------------------------------------------
          // monitor clocking block
          //------------------------------------------------
        
          clocking monitor_cb @(posedge clk);
             input #0 wdata,rdata,write;
          endclocking
        
        
        
        // assertion 
        
        
        // SDA pullup/pulldown
        
 000101  assign i2c_sda = sda_drive_low ? 1'b0 : 1'bz;
+000101  point: type=expr comment=(sda_drive_low==0) => 0 hier=test_top.I2C_vif
+000100  point: type=expr comment=(sda_drive_low==1) => 1 hier=test_top.I2C_vif
        endinterface 
        
