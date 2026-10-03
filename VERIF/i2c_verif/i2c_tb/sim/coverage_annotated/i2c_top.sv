//      // verilator_coverage annotation
        module i2c_top #(
            parameter DW = 32,
            parameter AW = 32,
            localparam SW = int'($ceil(DW/8))
        )(
        // APB / FIFO WRITE CLOCK DOMAIN
 250712     input  logic pclk,          // 100 MHz
+250712  point: type=toggle comment=pclk:0->1 hier=test_top.dut
+250711  point: type=toggle comment=pclk:1->0 hier=test_top.dut
%000001     input  logic presetn,       // ACTIVE LOW
-000001  point: type=toggle comment=presetn:0->1 hier=test_top.dut
-000000  point: type=toggle comment=presetn:1->0 hier=test_top.dut
        
            // I2C / FIFO READ CLOCK DOMAIN
 125356     input  logic i2c_clk,       // 50 MHz
+125356  point: type=toggle comment=i2c_clk:0->1 hier=test_top.dut
+125355  point: type=toggle comment=i2c_clk:1->0 hier=test_top.dut
%000001     input  logic i2c_rst_n,     // ACTIVE LOW  (was: i2c_rst, active high)
-000001  point: type=toggle comment=i2c_rst_n:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_rst_n:1->0 hier=test_top.dut
        
~000175     input  logic [AW-1:0] t_paddr,
-000000  point: type=toggle comment=t_paddr[0]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[0]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[10]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[10]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[11]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[11]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[12]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[12]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[13]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[13]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[14]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[14]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[15]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[15]:1->0 hier=test_top.dut
+000175  point: type=toggle comment=t_paddr[16]:0->1 hier=test_top.dut
+000174  point: type=toggle comment=t_paddr[16]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[17]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[17]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[18]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[18]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[19]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[19]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[1]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[20]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[20]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[21]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[21]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[22]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[22]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[23]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[23]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[24]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[24]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[25]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[25]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[26]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[26]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[27]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[27]:1->0 hier=test_top.dut
+000175  point: type=toggle comment=t_paddr[28]:0->1 hier=test_top.dut
+000174  point: type=toggle comment=t_paddr[28]:1->0 hier=test_top.dut
+000175  point: type=toggle comment=t_paddr[29]:0->1 hier=test_top.dut
+000174  point: type=toggle comment=t_paddr[29]:1->0 hier=test_top.dut
+000125  point: type=toggle comment=t_paddr[2]:0->1 hier=test_top.dut
+000124  point: type=toggle comment=t_paddr[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[30]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[30]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[31]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[31]:1->0 hier=test_top.dut
+000025  point: type=toggle comment=t_paddr[3]:0->1 hier=test_top.dut
+000025  point: type=toggle comment=t_paddr[3]:1->0 hier=test_top.dut
+000175  point: type=toggle comment=t_paddr[4]:0->1 hier=test_top.dut
+000174  point: type=toggle comment=t_paddr[4]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[5]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[5]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[6]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[6]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[7]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[7]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[8]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[8]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[9]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_paddr[9]:1->0 hier=test_top.dut
 000050     input  logic          t_pwrite,
+000050  point: type=toggle comment=t_pwrite:0->1 hier=test_top.dut
+000050  point: type=toggle comment=t_pwrite:1->0 hier=test_top.dut
 000175     input  logic          t_psel,
+000175  point: type=toggle comment=t_psel:0->1 hier=test_top.dut
+000175  point: type=toggle comment=t_psel:1->0 hier=test_top.dut
 000175     input  logic          t_penable,
+000175  point: type=toggle comment=t_penable:0->1 hier=test_top.dut
+000175  point: type=toggle comment=t_penable:1->0 hier=test_top.dut
~000050     input  logic [DW-1:0] t_pwdata,
+000012  point: type=toggle comment=t_pwdata[0]:0->1 hier=test_top.dut
+000012  point: type=toggle comment=t_pwdata[0]:1->0 hier=test_top.dut
+000050  point: type=toggle comment=t_pwdata[10]:0->1 hier=test_top.dut
+000050  point: type=toggle comment=t_pwdata[10]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[11]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[11]:1->0 hier=test_top.dut
+000050  point: type=toggle comment=t_pwdata[12]:0->1 hier=test_top.dut
+000050  point: type=toggle comment=t_pwdata[12]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[13]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[13]:1->0 hier=test_top.dut
+000050  point: type=toggle comment=t_pwdata[14]:0->1 hier=test_top.dut
+000050  point: type=toggle comment=t_pwdata[14]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[15]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[15]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[16]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[16]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[17]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[17]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[18]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[18]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[19]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[19]:1->0 hier=test_top.dut
+000015  point: type=toggle comment=t_pwdata[1]:0->1 hier=test_top.dut
+000015  point: type=toggle comment=t_pwdata[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[20]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[20]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[21]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[21]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[22]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[22]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[23]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[23]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[24]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[24]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[25]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[25]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[26]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[26]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[27]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[27]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[28]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[28]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[29]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[29]:1->0 hier=test_top.dut
+000013  point: type=toggle comment=t_pwdata[2]:0->1 hier=test_top.dut
+000013  point: type=toggle comment=t_pwdata[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[30]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[30]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[31]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[31]:1->0 hier=test_top.dut
+000015  point: type=toggle comment=t_pwdata[3]:0->1 hier=test_top.dut
+000015  point: type=toggle comment=t_pwdata[3]:1->0 hier=test_top.dut
+000011  point: type=toggle comment=t_pwdata[4]:0->1 hier=test_top.dut
+000011  point: type=toggle comment=t_pwdata[4]:1->0 hier=test_top.dut
+000015  point: type=toggle comment=t_pwdata[5]:0->1 hier=test_top.dut
+000015  point: type=toggle comment=t_pwdata[5]:1->0 hier=test_top.dut
+000011  point: type=toggle comment=t_pwdata[6]:0->1 hier=test_top.dut
+000011  point: type=toggle comment=t_pwdata[6]:1->0 hier=test_top.dut
+000012  point: type=toggle comment=t_pwdata[7]:0->1 hier=test_top.dut
+000012  point: type=toggle comment=t_pwdata[7]:1->0 hier=test_top.dut
+000050  point: type=toggle comment=t_pwdata[8]:0->1 hier=test_top.dut
+000050  point: type=toggle comment=t_pwdata[8]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[9]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_pwdata[9]:1->0 hier=test_top.dut
 000050     input  logic [SW-1:0] t_pstrb,
+000025  point: type=toggle comment=t_pstrb[0]:0->1 hier=test_top.dut
+000025  point: type=toggle comment=t_pstrb[0]:1->0 hier=test_top.dut
+000050  point: type=toggle comment=t_pstrb[1]:0->1 hier=test_top.dut
+000050  point: type=toggle comment=t_pstrb[1]:1->0 hier=test_top.dut
+000025  point: type=toggle comment=t_pstrb[2]:0->1 hier=test_top.dut
+000025  point: type=toggle comment=t_pstrb[2]:1->0 hier=test_top.dut
+000025  point: type=toggle comment=t_pstrb[3]:0->1 hier=test_top.dut
+000025  point: type=toggle comment=t_pstrb[3]:1->0 hier=test_top.dut
        
~000025     output logic [DW-1:0] t_o_prdata,
-000000  point: type=toggle comment=t_o_prdata[0]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[0]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[10]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[10]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[11]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[11]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[12]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[12]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[13]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[13]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[14]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[14]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[15]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[15]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[16]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[16]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[17]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[17]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[18]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[18]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[19]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[19]:1->0 hier=test_top.dut
+000025  point: type=toggle comment=t_o_prdata[1]:0->1 hier=test_top.dut
+000025  point: type=toggle comment=t_o_prdata[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[20]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[20]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[21]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[21]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[22]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[22]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[23]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[23]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[24]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[24]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[25]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[25]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[26]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[26]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[27]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[27]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[28]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[28]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[29]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[29]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[2]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[30]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[30]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[31]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[31]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[3]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[3]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[4]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[4]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[5]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[5]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[6]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[6]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[7]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[7]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[8]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[8]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[9]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_prdata[9]:1->0 hier=test_top.dut
%000000     output logic          t_o_pslverr,
-000000  point: type=toggle comment=t_o_pslverr:0->1 hier=test_top.dut
-000000  point: type=toggle comment=t_o_pslverr:1->0 hier=test_top.dut
 000175     output logic          t_o_pready,
+000175  point: type=toggle comment=t_o_pready:0->1 hier=test_top.dut
+000175  point: type=toggle comment=t_o_pready:1->0 hier=test_top.dut
        
 000026     output logic i2c_irq,
+000026  point: type=toggle comment=i2c_irq:0->1 hier=test_top.dut
+000025  point: type=toggle comment=i2c_irq:1->0 hier=test_top.dut
        
 000476     output logic       i2c_scl,
+000476  point: type=toggle comment=i2c_scl:0->1 hier=test_top.dut
+000475  point: type=toggle comment=i2c_scl:1->0 hier=test_top.dut
 000217     inout  logic       i2c_sda
+000217  point: type=toggle comment=i2c_sda:0->1 hier=test_top.dut
+000216  point: type=toggle comment=i2c_sda:1->0 hier=test_top.dut
        );
        
          pullup(i2c_sda);
        
 000175 logic i2c_sel ;
+000175  point: type=toggle comment=i2c_sel:0->1 hier=test_top.dut
+000174  point: type=toggle comment=i2c_sel:1->0 hier=test_top.dut
        
        localparam I2C_BASE_ADDR = 32'h3001_0000;
        localparam I2C_END_ADDR  = 32'h3001_FFFF;
        
~000350    assign i2c_sel = (t_paddr >= 32'h3001_0000) &&
-000000  point: type=expr comment=((t_paddr <= 32'h3001ffff)==0) => 0 hier=test_top.dut
+000349  point: type=expr comment=((t_paddr >= 32'h30010000)==0) => 0 hier=test_top.dut
+000350  point: type=expr comment=((t_paddr >= 32'h30010000)==1 && (t_paddr <= 32'h3001ffff)==1) => 1 hier=test_top.dut
                         (t_paddr <= 32'h3001_FFFF);
        
            //logic [7 :0]    i_rd_data;
        
        //-----------------------------------------------------
 000026     logic ready;
+000026  point: type=toggle comment=ready:0->1 hier=test_top.dut
+000025  point: type=toggle comment=ready:1->0 hier=test_top.dut
%000000     logic ack_error;
-000000  point: type=toggle comment=ack_error:0->1 hier=test_top.dut
-000000  point: type=toggle comment=ack_error:1->0 hier=test_top.dut
 000025     logic busy;
+000025  point: type=toggle comment=busy:0->1 hier=test_top.dut
+000025  point: type=toggle comment=busy:1->0 hier=test_top.dut
 000025     logic done;
+000025  point: type=toggle comment=done:0->1 hier=test_top.dut
+000025  point: type=toggle comment=done:1->0 hier=test_top.dut
%000000     logic [7:0] data_out;
-000000  point: type=toggle comment=data_out[0]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=data_out[0]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=data_out[1]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=data_out[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=data_out[2]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=data_out[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=data_out[3]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=data_out[3]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=data_out[4]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=data_out[4]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=data_out[5]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=data_out[5]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=data_out[6]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=data_out[6]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=data_out[7]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=data_out[7]:1->0 hier=test_top.dut
         //---------------------------------------------------
        
%000008     logic [31:0] fifo_wr_data_apb;
-000007  point: type=toggle comment=fifo_wr_data_apb[0]:0->1 hier=test_top.dut
-000006  point: type=toggle comment=fifo_wr_data_apb[0]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=fifo_wr_data_apb[10]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[10]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[11]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[11]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=fifo_wr_data_apb[12]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[12]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[13]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[13]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=fifo_wr_data_apb[14]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[14]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[15]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[15]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[16]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[16]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[17]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[17]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[18]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[18]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[19]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[19]:1->0 hier=test_top.dut
-000005  point: type=toggle comment=fifo_wr_data_apb[1]:0->1 hier=test_top.dut
-000004  point: type=toggle comment=fifo_wr_data_apb[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[20]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[20]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[21]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[21]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[22]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[22]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[23]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[23]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[24]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[24]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[25]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[25]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[26]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[26]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[27]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[27]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[28]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[28]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[29]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[29]:1->0 hier=test_top.dut
-000007  point: type=toggle comment=fifo_wr_data_apb[2]:0->1 hier=test_top.dut
-000006  point: type=toggle comment=fifo_wr_data_apb[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[30]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[30]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[31]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[31]:1->0 hier=test_top.dut
-000008  point: type=toggle comment=fifo_wr_data_apb[3]:0->1 hier=test_top.dut
-000008  point: type=toggle comment=fifo_wr_data_apb[3]:1->0 hier=test_top.dut
-000007  point: type=toggle comment=fifo_wr_data_apb[4]:0->1 hier=test_top.dut
-000007  point: type=toggle comment=fifo_wr_data_apb[4]:1->0 hier=test_top.dut
-000008  point: type=toggle comment=fifo_wr_data_apb[5]:0->1 hier=test_top.dut
-000007  point: type=toggle comment=fifo_wr_data_apb[5]:1->0 hier=test_top.dut
-000005  point: type=toggle comment=fifo_wr_data_apb[6]:0->1 hier=test_top.dut
-000004  point: type=toggle comment=fifo_wr_data_apb[6]:1->0 hier=test_top.dut
-000007  point: type=toggle comment=fifo_wr_data_apb[7]:0->1 hier=test_top.dut
-000007  point: type=toggle comment=fifo_wr_data_apb[7]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=fifo_wr_data_apb[8]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[8]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[9]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_apb[9]:1->0 hier=test_top.dut
%000000     logic [7:0] fifo_rd_data_apb;
-000000  point: type=toggle comment=fifo_rd_data_apb[0]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[0]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[1]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[2]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[3]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[3]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[4]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[4]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[5]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[5]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[6]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[6]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[7]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb[7]:1->0 hier=test_top.dut
        
 000025     logic        fifo_wr_en_apb;
+000025  point: type=toggle comment=fifo_wr_en_apb:0->1 hier=test_top.dut
+000025  point: type=toggle comment=fifo_wr_en_apb:1->0 hier=test_top.dut
%000001     logic        fifo_rd_en_apb;
-000001  point: type=toggle comment=fifo_rd_en_apb:0->1 hier=test_top.dut
-000001  point: type=toggle comment=fifo_rd_en_apb:1->0 hier=test_top.dut
        
%000000     logic        fifo_full_tx;
-000000  point: type=toggle comment=fifo_full_tx:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_full_tx:1->0 hier=test_top.dut
 000026     logic        fifo_empty_tx;
+000026  point: type=toggle comment=fifo_empty_tx:0->1 hier=test_top.dut
+000025  point: type=toggle comment=fifo_empty_tx:1->0 hier=test_top.dut
        //----------------------------------
%000000 	logic fifo_wr_en_i2c;
-000000  point: type=toggle comment=fifo_wr_en_i2c:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_en_i2c:1->0 hier=test_top.dut
 000026 	logic fifo_rd_en_i2c;
+000026  point: type=toggle comment=fifo_rd_en_i2c:0->1 hier=test_top.dut
+000026  point: type=toggle comment=fifo_rd_en_i2c:1->0 hier=test_top.dut
%000000 	logic [7:0] fifo_wr_data_i2c;
-000000  point: type=toggle comment=fifo_wr_data_i2c[0]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[0]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[1]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[2]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[3]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[3]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[4]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[4]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[5]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[5]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[6]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[6]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[7]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_wr_data_i2c[7]:1->0 hier=test_top.dut
~000025 	logic [31:0] fifo_rd_data_i2c;
+000012  point: type=toggle comment=fifo_rd_data_i2c[0]:0->1 hier=test_top.dut
+000012  point: type=toggle comment=fifo_rd_data_i2c[0]:1->0 hier=test_top.dut
+000025  point: type=toggle comment=fifo_rd_data_i2c[10]:0->1 hier=test_top.dut
+000025  point: type=toggle comment=fifo_rd_data_i2c[10]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[11]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[11]:1->0 hier=test_top.dut
+000025  point: type=toggle comment=fifo_rd_data_i2c[12]:0->1 hier=test_top.dut
+000025  point: type=toggle comment=fifo_rd_data_i2c[12]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[13]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[13]:1->0 hier=test_top.dut
+000025  point: type=toggle comment=fifo_rd_data_i2c[14]:0->1 hier=test_top.dut
+000025  point: type=toggle comment=fifo_rd_data_i2c[14]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[15]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[15]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[16]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[16]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[17]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[17]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[18]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[18]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[19]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[19]:1->0 hier=test_top.dut
+000015  point: type=toggle comment=fifo_rd_data_i2c[1]:0->1 hier=test_top.dut
+000015  point: type=toggle comment=fifo_rd_data_i2c[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[20]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[20]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[21]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[21]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[22]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[22]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[23]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[23]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[24]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[24]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[25]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[25]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[26]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[26]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[27]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[27]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[28]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[28]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[29]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[29]:1->0 hier=test_top.dut
+000013  point: type=toggle comment=fifo_rd_data_i2c[2]:0->1 hier=test_top.dut
+000013  point: type=toggle comment=fifo_rd_data_i2c[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[30]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[30]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[31]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[31]:1->0 hier=test_top.dut
+000015  point: type=toggle comment=fifo_rd_data_i2c[3]:0->1 hier=test_top.dut
+000015  point: type=toggle comment=fifo_rd_data_i2c[3]:1->0 hier=test_top.dut
+000011  point: type=toggle comment=fifo_rd_data_i2c[4]:0->1 hier=test_top.dut
+000011  point: type=toggle comment=fifo_rd_data_i2c[4]:1->0 hier=test_top.dut
+000015  point: type=toggle comment=fifo_rd_data_i2c[5]:0->1 hier=test_top.dut
+000015  point: type=toggle comment=fifo_rd_data_i2c[5]:1->0 hier=test_top.dut
+000011  point: type=toggle comment=fifo_rd_data_i2c[6]:0->1 hier=test_top.dut
+000011  point: type=toggle comment=fifo_rd_data_i2c[6]:1->0 hier=test_top.dut
+000012  point: type=toggle comment=fifo_rd_data_i2c[7]:0->1 hier=test_top.dut
+000012  point: type=toggle comment=fifo_rd_data_i2c[7]:1->0 hier=test_top.dut
+000025  point: type=toggle comment=fifo_rd_data_i2c[8]:0->1 hier=test_top.dut
+000025  point: type=toggle comment=fifo_rd_data_i2c[8]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[9]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_i2c[9]:1->0 hier=test_top.dut
        
%000000 	logic fifo_full_Rx;
-000000  point: type=toggle comment=fifo_full_Rx:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_full_Rx:1->0 hier=test_top.dut
%000001 	logic fifo_empty_Rx;
-000001  point: type=toggle comment=fifo_empty_Rx:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_empty_Rx:1->0 hier=test_top.dut
        //---------------------------------------
        
%000008     logic [31:0] i2c_cmd_reg;
-000007  point: type=toggle comment=i2c_cmd_reg[0]:0->1 hier=test_top.dut
-000006  point: type=toggle comment=i2c_cmd_reg[0]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=i2c_cmd_reg[10]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[10]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[11]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[11]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=i2c_cmd_reg[12]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[12]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[13]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[13]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=i2c_cmd_reg[14]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[14]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[15]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[15]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[16]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[16]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[17]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[17]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[18]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[18]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[19]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[19]:1->0 hier=test_top.dut
-000005  point: type=toggle comment=i2c_cmd_reg[1]:0->1 hier=test_top.dut
-000004  point: type=toggle comment=i2c_cmd_reg[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[20]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[20]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[21]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[21]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[22]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[22]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[23]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[23]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[24]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[24]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[25]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[25]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[26]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[26]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[27]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[27]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[28]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[28]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[29]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[29]:1->0 hier=test_top.dut
-000007  point: type=toggle comment=i2c_cmd_reg[2]:0->1 hier=test_top.dut
-000006  point: type=toggle comment=i2c_cmd_reg[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[30]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[30]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[31]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[31]:1->0 hier=test_top.dut
-000008  point: type=toggle comment=i2c_cmd_reg[3]:0->1 hier=test_top.dut
-000008  point: type=toggle comment=i2c_cmd_reg[3]:1->0 hier=test_top.dut
-000007  point: type=toggle comment=i2c_cmd_reg[4]:0->1 hier=test_top.dut
-000007  point: type=toggle comment=i2c_cmd_reg[4]:1->0 hier=test_top.dut
-000008  point: type=toggle comment=i2c_cmd_reg[5]:0->1 hier=test_top.dut
-000007  point: type=toggle comment=i2c_cmd_reg[5]:1->0 hier=test_top.dut
-000005  point: type=toggle comment=i2c_cmd_reg[6]:0->1 hier=test_top.dut
-000004  point: type=toggle comment=i2c_cmd_reg[6]:1->0 hier=test_top.dut
-000007  point: type=toggle comment=i2c_cmd_reg[7]:0->1 hier=test_top.dut
-000007  point: type=toggle comment=i2c_cmd_reg[7]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=i2c_cmd_reg[8]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[8]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[9]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_cmd_reg[9]:1->0 hier=test_top.dut
 000025     logic        i2c_cmd_valid;
+000025  point: type=toggle comment=i2c_cmd_valid:0->1 hier=test_top.dut
+000025  point: type=toggle comment=i2c_cmd_valid:1->0 hier=test_top.dut
        
        //--------------------------------------------
%000000     logic        i2c_fifo_rw;
-000000  point: type=toggle comment=i2c_fifo_rw:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_fifo_rw:1->0 hier=test_top.dut
%000000     logic [2:0]  i2c_fifo_device_sel;
-000000  point: type=toggle comment=i2c_fifo_device_sel[0]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_fifo_device_sel[0]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_fifo_device_sel[1]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_fifo_device_sel[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_fifo_device_sel[2]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_fifo_device_sel[2]:1->0 hier=test_top.dut
%000008     logic [7:0]  i2c_fifo_data;
-000007  point: type=toggle comment=i2c_fifo_data[0]:0->1 hier=test_top.dut
-000006  point: type=toggle comment=i2c_fifo_data[0]:1->0 hier=test_top.dut
-000005  point: type=toggle comment=i2c_fifo_data[1]:0->1 hier=test_top.dut
-000004  point: type=toggle comment=i2c_fifo_data[1]:1->0 hier=test_top.dut
-000007  point: type=toggle comment=i2c_fifo_data[2]:0->1 hier=test_top.dut
-000006  point: type=toggle comment=i2c_fifo_data[2]:1->0 hier=test_top.dut
-000008  point: type=toggle comment=i2c_fifo_data[3]:0->1 hier=test_top.dut
-000008  point: type=toggle comment=i2c_fifo_data[3]:1->0 hier=test_top.dut
-000007  point: type=toggle comment=i2c_fifo_data[4]:0->1 hier=test_top.dut
-000007  point: type=toggle comment=i2c_fifo_data[4]:1->0 hier=test_top.dut
-000008  point: type=toggle comment=i2c_fifo_data[5]:0->1 hier=test_top.dut
-000007  point: type=toggle comment=i2c_fifo_data[5]:1->0 hier=test_top.dut
-000005  point: type=toggle comment=i2c_fifo_data[6]:0->1 hier=test_top.dut
-000004  point: type=toggle comment=i2c_fifo_data[6]:1->0 hier=test_top.dut
-000007  point: type=toggle comment=i2c_fifo_data[7]:0->1 hier=test_top.dut
-000007  point: type=toggle comment=i2c_fifo_data[7]:1->0 hier=test_top.dut
        
%000001     logic [6:0]  i2c_slave_address;
-000001  point: type=toggle comment=i2c_slave_address[0]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[0]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[1]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[1]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=i2c_slave_address[2]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[3]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[3]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=i2c_slave_address[4]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[4]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[5]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[5]:1->0 hier=test_top.dut
-000001  point: type=toggle comment=i2c_slave_address[6]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_slave_address[6]:1->0 hier=test_top.dut
        
        
 000025 	logic i2c_apb_busy;
+000025  point: type=toggle comment=i2c_apb_busy:0->1 hier=test_top.dut
+000025  point: type=toggle comment=i2c_apb_busy:1->0 hier=test_top.dut
 000025 	logic i2c_apb_done;
+000025  point: type=toggle comment=i2c_apb_done:0->1 hier=test_top.dut
+000025  point: type=toggle comment=i2c_apb_done:1->0 hier=test_top.dut
        
%000000     logic slverr_sync;
-000000  point: type=toggle comment=slverr_sync:0->1 hier=test_top.dut
-000000  point: type=toggle comment=slverr_sync:1->0 hier=test_top.dut
        
%000000     logic in_pslverr;
-000000  point: type=toggle comment=in_pslverr:0->1 hier=test_top.dut
-000000  point: type=toggle comment=in_pslverr:1->0 hier=test_top.dut
        
 000175     logic in_pready;
+000175  point: type=toggle comment=in_pready:0->1 hier=test_top.dut
+000175  point: type=toggle comment=in_pready:1->0 hier=test_top.dut
%000000          logic [7:0] fifo_rd_data_apb_reg;
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[0]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[0]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[1]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[1]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[2]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[2]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[3]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[3]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[4]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[4]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[5]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[5]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[6]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[6]:1->0 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[7]:0->1 hier=test_top.dut
-000000  point: type=toggle comment=fifo_rd_data_apb_reg[7]:1->0 hier=test_top.dut
            //logic apb_pslverr;
%000000    logic i_rd_data_valid;
-000000  point: type=toggle comment=i_rd_data_valid:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i_rd_data_valid:1->0 hier=test_top.dut
        
        
            //==========================================================
            // I2C DOMAIN RESET SYNCHRONIZER
            //
            // Async assert, sync de-assert. Every flop in the i2c_clk
            // domain below uses i2c_rst_n_sync, never the raw pin.
            //==========================================================
        
%000001     logic i2c_rst_n_sync;
-000001  point: type=toggle comment=i2c_rst_n_sync:0->1 hier=test_top.dut
-000000  point: type=toggle comment=i2c_rst_n_sync:1->0 hier=test_top.dut
        
            reset_synchronizer u_i2c_rst_sync (
                .clk       (i2c_clk),
                .async_reset_n (i2c_rst_n),
                .sync_reset_n  (i2c_rst_n_sync)
            );
        
        
            apb_slave #(
                .DW(DW),
                .AW(AW)
            ) apbs (
                .pclk        (pclk),
                .presetn     (presetn),
                .i_paddr     (t_paddr),
                .i_pwrite    (t_pwrite),
                .i_psel      (t_psel),
                .i_penable   (t_penable),
                .i_pwdata    (t_pwdata),
                .i_pstrb     (t_pstrb),
                .o_prdata    (t_o_prdata),
                .o_pslverr   (in_pslverr),
                .o_pready    (in_pready),
        		.i2c_busy    (i2c_apb_busy),
        		.i2c_done    (i2c_apb_done),
                //======================================================
                // HW INTERFACE
                //======================================================
                .i2c_nack    (slverr_sync),
                .i_rd_data_valid (i_rd_data_valid),
        
                .fifo_wr_en  (fifo_wr_en_apb),
                .fifo_wr_data(fifo_wr_data_apb),
                .fifo_full   (fifo_full_tx),
                .i_rd_data   (fifo_rd_data_apb_reg)
            );
        
        
        
        asynchronous_fifo  #(
                .DEPTH(4),
                .DATA_WIDTH    (32)
            ) fifo_inst_write (
        
                //======================================================
                // TX FIFO : written by APB (pclk), read by I2C (i2c_clk)
                //======================================================
        
                .wclk      (pclk),
                .wrst_n    (presetn),
                .rclk      (i2c_clk),
                .rrst_n    (i2c_rst_n_sync),   // synchronized, active low
                .w_en      (fifo_wr_en_apb),
                .r_en      (fifo_rd_en_i2c),
                .data_in   (fifo_wr_data_apb),
                .data_out  (fifo_rd_data_i2c),
        
                .full      (fifo_full_tx),
                .empty     (fifo_empty_tx)
        
            );
        
        
            asynchronous_fifo  #(
                .DEPTH(4),
                .DATA_WIDTH    (8)
            ) fifo_inst_read (
        
                //======================================================
                // RX FIFO : written by I2C (i2c_clk), read by APB (pclk)
                //======================================================
        
                .wclk      (i2c_clk),
                .wrst_n    (i2c_rst_n_sync),   // synchronized, active low
                .rclk      (pclk),
                .rrst_n    (presetn),
                .w_en      (fifo_wr_en_i2c),
                .r_en      (fifo_rd_en_apb),
                .data_in   (fifo_wr_data_i2c),
                .data_out  (fifo_rd_data_apb),
                .full      (fifo_full_Rx),
                .empty     (fifo_empty_Rx)
        
            );
        
                //======================================================
                // READ CLOCK DOMAIN
                //=====================================================
                // tx fifo - i2c reads command from apb
 125331         assign fifo_rd_en_i2c = !fifo_empty_tx && !i2c_cmd_valid && !busy;
+001975  point: type=expr comment=(busy==1) => 0 hier=test_top.dut
+000026  point: type=expr comment=(fifo_empty_tx==0 && i2c_cmd_valid==0 && busy==0) => 1 hier=test_top.dut
+125331  point: type=expr comment=(fifo_empty_tx==1) => 0 hier=test_top.dut
+000025  point: type=expr comment=(i2c_cmd_valid==1) => 0 hier=test_top.dut
                // rx fifo - apb reads received byte from i2c
~250712         assign fifo_rd_en_apb = !fifo_empty_Rx;
-000001  point: type=expr comment=(fifo_empty_Rx==0) => 1 hier=test_top.dut
+250712  point: type=expr comment=(fifo_empty_Rx==1) => 0 hier=test_top.dut
        
 125356          always_ff @(posedge i2c_clk or negedge i2c_rst_n_sync) begin
+125356  point: type=line comment=block hier=test_top.dut
~125352             if (!i2c_rst_n_sync) begin           // ACTIVE LOW
-000004  point: type=branch comment=if hier=test_top.dut
+125352  point: type=branch comment=else hier=test_top.dut
-000004  point: type=expr comment=(i2c_rst_n_sync==0) => 1 hier=test_top.dut
+125352  point: type=expr comment=(i2c_rst_n_sync==1) => 0 hier=test_top.dut
%000004                 i2c_cmd_reg   <= '0;
-000004  point: type=branch comment=if hier=test_top.dut
%000004                 i2c_cmd_valid <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut
                    end
 125352             else begin
+125352  point: type=branch comment=else hier=test_top.dut
 000025                 if (fifo_rd_en_i2c) begin
+000025  point: type=line comment=elsif hier=test_top.dut
 000025                     i2c_cmd_reg   <= fifo_rd_data_i2c;
+000025  point: type=line comment=elsif hier=test_top.dut
 000025                     i2c_cmd_valid <= 1'b1;
+000025  point: type=line comment=elsif hier=test_top.dut
                        end
        
 125302                 else if (i2c_cmd_valid && !busy) begin
+000025  point: type=branch comment=if hier=test_top.dut
+125302  point: type=branch comment=else hier=test_top.dut
+001975  point: type=expr comment=(busy==1) => 0 hier=test_top.dut
+125302  point: type=expr comment=(i2c_cmd_valid==0) => 0 hier=test_top.dut
+000025  point: type=expr comment=(i2c_cmd_valid==1 && busy==0) => 1 hier=test_top.dut
 000025                     i2c_cmd_valid <= 1'b0;
+000025  point: type=branch comment=if hier=test_top.dut
                        end
                    end
                end
        
        
        // tx -- 32 bit : slave address / r-w / data bits
        
            assign i2c_fifo_rw = i2c_cmd_reg[15];
        
            assign i2c_slave_address =
                i2c_cmd_reg[14:8];
        
            assign i2c_fifo_data =
                i2c_cmd_reg[7:0];
        
        
 000025   logic i2c_start;
+000025  point: type=toggle comment=i2c_start:0->1 hier=test_top.dut
+000025  point: type=toggle comment=i2c_start:1->0 hier=test_top.dut
        
        //    assign i2c_start =
        //             (fifo_rd_en_i2c || fifo_wr_en_i2c)&& !busy;
        
        assign i2c_start =
~125332 (i2c_cmd_valid && !busy) || (fifo_wr_en_i2c && !busy);
+001975  point: type=expr comment=(busy==1 && fifo_wr_en_i2c==0) => 0 hier=test_top.dut
+001975  point: type=expr comment=(busy==1) => 0 hier=test_top.dut
-000000  point: type=expr comment=(fifo_wr_en_i2c==1 && busy==0) => 1 hier=test_top.dut
+001975  point: type=expr comment=(i2c_cmd_valid==0 && busy==1) => 0 hier=test_top.dut
+125332  point: type=expr comment=(i2c_cmd_valid==0 && fifo_wr_en_i2c==0) => 0 hier=test_top.dut
+000025  point: type=expr comment=(i2c_cmd_valid==1 && busy==0) => 1 hier=test_top.dut
        
        
            //==========================================================
            // i2c_master : ACTIVE LOW reset port (rst_n), driven by the
            // synchronized domain reset.
            //==========================================================
        
            i2c_master i2cm (
        
                .clk        (i2c_clk),
        
                .rst_n      (i2c_rst_n_sync),
        
                .start      (i2c_start),
        
                .rw         (i2c_fifo_rw),
        
                .addr       (i2c_slave_address),
        
                .data_in    (i2c_fifo_data),
        
                .data_out   (data_out),
        
                .i2c_scl    (i2c_scl),
        
                .i2c_sda    (i2c_sda),
        
                .ready      (ready),
        
                .ack_error  (ack_error),
        
                .i2c_irq    (i2c_irq),
        
                .busy       (busy),
        
                .done       (done),
        
        		.fifo_wr_en (fifo_wr_en_i2c),    // RX fifo
        
        		.fifo_wr_data(fifo_wr_data_i2c),
        
        		.fifo_full  (fifo_full_Rx)
            );
        
        
        //assign fifo_rd_data_apb_reg = fifo_rd_data_apb;
        
        
 250712    always_ff @(posedge pclk or negedge presetn) begin
+250712  point: type=line comment=block hier=test_top.dut
~250708     if (!presetn) begin
-000004  point: type=branch comment=if hier=test_top.dut
+250708  point: type=branch comment=else hier=test_top.dut
-000004  point: type=expr comment=(presetn==0) => 1 hier=test_top.dut
+250708  point: type=expr comment=(presetn==1) => 0 hier=test_top.dut
%000004         fifo_rd_data_apb_reg <= 8'h00;
-000004  point: type=branch comment=if hier=test_top.dut
%000004         i_rd_data_valid <= 0;
-000004  point: type=branch comment=if hier=test_top.dut
            end
 250708     else begin
+250708  point: type=branch comment=else hier=test_top.dut
~250708         if (fifo_rd_en_apb) begin
+250708  point: type=branch comment=else hier=test_top.dut
-000000  point: type=branch comment=if hier=test_top.dut
%000000             fifo_rd_data_apb_reg <= fifo_rd_data_apb;
-000000  point: type=branch comment=if hier=test_top.dut
%000000             i_rd_data_valid <= 1;
-000000  point: type=branch comment=if hier=test_top.dut
                end
            end
        end
        
        
        assign t_o_pslverr = in_pslverr;
        assign t_o_pready  = in_pready;
        
        
           //==========================================================
           // I2C -> APB status crossings (unchanged)
           // Destination domain is pclk, so these stay on presetn.
           //==========================================================
           synchronizer #(.WIDTH(1))  ff1 ( .clk (pclk),
        							.rst_n (presetn),
        							.d_in(busy),
        							.d_out(i2c_apb_busy));
        
        
           synchronizer #(.WIDTH(1))  ff2 ( .clk (pclk),
        							.rst_n (presetn),
        							.d_in(done),
        							.d_out(i2c_apb_done));
        
        
           synchronizer #(.WIDTH(1)) ff3 ( .clk (pclk),
        							.rst_n (presetn),
        							.d_in(ack_error),
        							.d_out(slverr_sync));
        
        
        endmodule
        
