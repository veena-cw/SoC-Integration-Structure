//      // verilator_coverage annotation
        module apb_slave #(
        
           parameter DW = 32,
        
           parameter AW = 32,
         
           // Derived Parameter
        
           localparam SW = int'($ceil(DW/8))
        
        )
        
        (
        
 250712    input  logic          pclk,
+250712  point: type=toggle comment=pclk:0->1 hier=test_top.dut.apbs
+250711  point: type=toggle comment=pclk:1->0 hier=test_top.dut.apbs
        
%000001    input  logic          presetn,
-000001  point: type=toggle comment=presetn:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=presetn:1->0 hier=test_top.dut.apbs
        
~000175    input  logic [AW-1:0] i_paddr,
-000000  point: type=toggle comment=i_paddr[0]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[0]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[10]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[10]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[11]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[11]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[12]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[12]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[13]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[13]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[14]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[14]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[15]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[15]:1->0 hier=test_top.dut.apbs
+000175  point: type=toggle comment=i_paddr[16]:0->1 hier=test_top.dut.apbs
+000174  point: type=toggle comment=i_paddr[16]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[17]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[17]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[18]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[18]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[19]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[19]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[1]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[1]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[20]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[20]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[21]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[21]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[22]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[22]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[23]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[23]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[24]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[24]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[25]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[25]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[26]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[26]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[27]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[27]:1->0 hier=test_top.dut.apbs
+000175  point: type=toggle comment=i_paddr[28]:0->1 hier=test_top.dut.apbs
+000174  point: type=toggle comment=i_paddr[28]:1->0 hier=test_top.dut.apbs
+000175  point: type=toggle comment=i_paddr[29]:0->1 hier=test_top.dut.apbs
+000174  point: type=toggle comment=i_paddr[29]:1->0 hier=test_top.dut.apbs
+000125  point: type=toggle comment=i_paddr[2]:0->1 hier=test_top.dut.apbs
+000124  point: type=toggle comment=i_paddr[2]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[30]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[30]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[31]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[31]:1->0 hier=test_top.dut.apbs
+000025  point: type=toggle comment=i_paddr[3]:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=i_paddr[3]:1->0 hier=test_top.dut.apbs
+000175  point: type=toggle comment=i_paddr[4]:0->1 hier=test_top.dut.apbs
+000174  point: type=toggle comment=i_paddr[4]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[5]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[5]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[6]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[6]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[7]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[7]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[8]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[8]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[9]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_paddr[9]:1->0 hier=test_top.dut.apbs
        
 000050    input  logic          i_pwrite,
+000050  point: type=toggle comment=i_pwrite:0->1 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pwrite:1->0 hier=test_top.dut.apbs
        
 000175    input  logic          i_psel,
+000175  point: type=toggle comment=i_psel:0->1 hier=test_top.dut.apbs
+000175  point: type=toggle comment=i_psel:1->0 hier=test_top.dut.apbs
        
 000175    input  logic          i_penable,
+000175  point: type=toggle comment=i_penable:0->1 hier=test_top.dut.apbs
+000175  point: type=toggle comment=i_penable:1->0 hier=test_top.dut.apbs
        
~000050    input  logic [DW-1:0] i_pwdata,
+000012  point: type=toggle comment=i_pwdata[0]:0->1 hier=test_top.dut.apbs
+000012  point: type=toggle comment=i_pwdata[0]:1->0 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pwdata[10]:0->1 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pwdata[10]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[11]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[11]:1->0 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pwdata[12]:0->1 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pwdata[12]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[13]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[13]:1->0 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pwdata[14]:0->1 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pwdata[14]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[15]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[15]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[16]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[16]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[17]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[17]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[18]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[18]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[19]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[19]:1->0 hier=test_top.dut.apbs
+000015  point: type=toggle comment=i_pwdata[1]:0->1 hier=test_top.dut.apbs
+000015  point: type=toggle comment=i_pwdata[1]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[20]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[20]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[21]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[21]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[22]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[22]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[23]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[23]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[24]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[24]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[25]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[25]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[26]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[26]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[27]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[27]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[28]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[28]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[29]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[29]:1->0 hier=test_top.dut.apbs
+000013  point: type=toggle comment=i_pwdata[2]:0->1 hier=test_top.dut.apbs
+000013  point: type=toggle comment=i_pwdata[2]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[30]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[30]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[31]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[31]:1->0 hier=test_top.dut.apbs
+000015  point: type=toggle comment=i_pwdata[3]:0->1 hier=test_top.dut.apbs
+000015  point: type=toggle comment=i_pwdata[3]:1->0 hier=test_top.dut.apbs
+000011  point: type=toggle comment=i_pwdata[4]:0->1 hier=test_top.dut.apbs
+000011  point: type=toggle comment=i_pwdata[4]:1->0 hier=test_top.dut.apbs
+000015  point: type=toggle comment=i_pwdata[5]:0->1 hier=test_top.dut.apbs
+000015  point: type=toggle comment=i_pwdata[5]:1->0 hier=test_top.dut.apbs
+000011  point: type=toggle comment=i_pwdata[6]:0->1 hier=test_top.dut.apbs
+000011  point: type=toggle comment=i_pwdata[6]:1->0 hier=test_top.dut.apbs
+000012  point: type=toggle comment=i_pwdata[7]:0->1 hier=test_top.dut.apbs
+000012  point: type=toggle comment=i_pwdata[7]:1->0 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pwdata[8]:0->1 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pwdata[8]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[9]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_pwdata[9]:1->0 hier=test_top.dut.apbs
        
 000050    input  logic [SW-1:0] i_pstrb,
+000025  point: type=toggle comment=i_pstrb[0]:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=i_pstrb[0]:1->0 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pstrb[1]:0->1 hier=test_top.dut.apbs
+000050  point: type=toggle comment=i_pstrb[1]:1->0 hier=test_top.dut.apbs
+000025  point: type=toggle comment=i_pstrb[2]:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=i_pstrb[2]:1->0 hier=test_top.dut.apbs
+000025  point: type=toggle comment=i_pstrb[3]:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=i_pstrb[3]:1->0 hier=test_top.dut.apbs
        
~000025    output logic [DW-1:0] o_prdata,
-000000  point: type=toggle comment=o_prdata[0]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[0]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[10]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[10]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[11]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[11]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[12]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[12]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[13]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[13]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[14]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[14]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[15]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[15]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[16]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[16]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[17]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[17]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[18]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[18]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[19]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[19]:1->0 hier=test_top.dut.apbs
+000025  point: type=toggle comment=o_prdata[1]:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=o_prdata[1]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[20]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[20]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[21]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[21]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[22]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[22]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[23]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[23]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[24]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[24]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[25]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[25]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[26]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[26]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[27]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[27]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[28]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[28]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[29]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[29]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[2]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[2]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[30]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[30]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[31]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[31]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[3]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[3]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[4]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[4]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[5]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[5]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[6]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[6]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[7]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[7]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[8]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[8]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[9]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_prdata[9]:1->0 hier=test_top.dut.apbs
        
%000000    output logic          o_pslverr,
-000000  point: type=toggle comment=o_pslverr:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=o_pslverr:1->0 hier=test_top.dut.apbs
        
 000175    output logic          o_pready,
+000175  point: type=toggle comment=o_pready:0->1 hier=test_top.dut.apbs
+000175  point: type=toggle comment=o_pready:1->0 hier=test_top.dut.apbs
         
 000025    input  logic          i2c_busy,
+000025  point: type=toggle comment=i2c_busy:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=i2c_busy:1->0 hier=test_top.dut.apbs
        
 000025    input  logic          i2c_done,
+000025  point: type=toggle comment=i2c_done:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=i2c_done:1->0 hier=test_top.dut.apbs
        
 000025    output logic          fifo_wr_en,
+000025  point: type=toggle comment=fifo_wr_en:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=fifo_wr_en:1->0 hier=test_top.dut.apbs
        
%000008    output logic [DW-1:0] fifo_wr_data,
-000007  point: type=toggle comment=fifo_wr_data[0]:0->1 hier=test_top.dut.apbs
-000006  point: type=toggle comment=fifo_wr_data[0]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=fifo_wr_data[10]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[10]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[11]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[11]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=fifo_wr_data[12]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[12]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[13]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[13]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=fifo_wr_data[14]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[14]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[15]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[15]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[16]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[16]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[17]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[17]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[18]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[18]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[19]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[19]:1->0 hier=test_top.dut.apbs
-000005  point: type=toggle comment=fifo_wr_data[1]:0->1 hier=test_top.dut.apbs
-000004  point: type=toggle comment=fifo_wr_data[1]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[20]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[20]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[21]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[21]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[22]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[22]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[23]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[23]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[24]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[24]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[25]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[25]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[26]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[26]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[27]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[27]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[28]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[28]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[29]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[29]:1->0 hier=test_top.dut.apbs
-000007  point: type=toggle comment=fifo_wr_data[2]:0->1 hier=test_top.dut.apbs
-000006  point: type=toggle comment=fifo_wr_data[2]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[30]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[30]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[31]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[31]:1->0 hier=test_top.dut.apbs
-000008  point: type=toggle comment=fifo_wr_data[3]:0->1 hier=test_top.dut.apbs
-000008  point: type=toggle comment=fifo_wr_data[3]:1->0 hier=test_top.dut.apbs
-000007  point: type=toggle comment=fifo_wr_data[4]:0->1 hier=test_top.dut.apbs
-000007  point: type=toggle comment=fifo_wr_data[4]:1->0 hier=test_top.dut.apbs
-000008  point: type=toggle comment=fifo_wr_data[5]:0->1 hier=test_top.dut.apbs
-000007  point: type=toggle comment=fifo_wr_data[5]:1->0 hier=test_top.dut.apbs
-000005  point: type=toggle comment=fifo_wr_data[6]:0->1 hier=test_top.dut.apbs
-000004  point: type=toggle comment=fifo_wr_data[6]:1->0 hier=test_top.dut.apbs
-000007  point: type=toggle comment=fifo_wr_data[7]:0->1 hier=test_top.dut.apbs
-000007  point: type=toggle comment=fifo_wr_data[7]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=fifo_wr_data[8]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[8]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[9]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_wr_data[9]:1->0 hier=test_top.dut.apbs
        
%000000    input  logic          fifo_full,
-000000  point: type=toggle comment=fifo_full:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=fifo_full:1->0 hier=test_top.dut.apbs
         
%000000    input  logic [7:0]    i_rd_data,
-000000  point: type=toggle comment=i_rd_data[0]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[0]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[1]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[1]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[2]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[2]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[3]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[3]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[4]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[4]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[5]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[5]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[6]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[6]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[7]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data[7]:1->0 hier=test_top.dut.apbs
        
%000000    input  logic          i_rd_data_valid,
-000000  point: type=toggle comment=i_rd_data_valid:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i_rd_data_valid:1->0 hier=test_top.dut.apbs
        
%000000    input  logic          i2c_nack
-000000  point: type=toggle comment=i2c_nack:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=i2c_nack:1->0 hier=test_top.dut.apbs
        
        );
         
           typedef enum logic [1:0]
        
           {
        
              IDLE     = 2'b00,
        
              W_ACCESS = 2'b01,
        
              R_ACCESS = 2'b10,
        
              R_FINISH = 2'b11
        
           } state_t;
         
~000075    state_t state_ff;
+000075  point: type=toggle comment=state_ff[0]:0->1 hier=test_top.dut.apbs
+000075  point: type=toggle comment=state_ff[0]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=state_ff[1]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=state_ff[1]:1->0 hier=test_top.dut.apbs
         
           localparam ADDR_LSB = $clog2(DW/8);
        
           localparam N_REG    = 2**(AW-ADDR_LSB);
         
           localparam CTRL_OFFSET   = 8'h10;
        
           localparam STATUS_OFFSET = 8'h14;
        
           localparam TXDATA_OFFSET = 8'h18;
        
           localparam RXDATA_OFFSET = 8'h1C;
         
%000001    logic [DW-1:0] ctrl_reg;
-000001  point: type=toggle comment=ctrl_reg[0]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[0]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[10]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[10]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[11]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[11]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[12]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[12]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[13]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[13]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[14]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[14]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[15]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[15]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[16]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[16]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[17]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[17]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[18]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[18]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[19]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[19]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[1]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[1]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[20]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[20]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[21]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[21]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[22]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[22]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[23]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[23]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[24]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[24]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[25]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[25]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[26]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[26]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[27]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[27]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[28]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[28]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[29]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[29]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=ctrl_reg[2]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[2]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[30]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[30]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[31]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[31]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[3]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[3]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=ctrl_reg[4]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[4]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[5]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[5]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=ctrl_reg[6]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[6]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[7]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[7]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[8]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[8]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[9]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_reg[9]:1->0 hier=test_top.dut.apbs
        
%000008    logic [DW-1:0] txdata_reg;
-000007  point: type=toggle comment=txdata_reg[0]:0->1 hier=test_top.dut.apbs
-000006  point: type=toggle comment=txdata_reg[0]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=txdata_reg[10]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[10]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[11]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[11]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=txdata_reg[12]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[12]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[13]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[13]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=txdata_reg[14]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[14]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[15]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[15]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[16]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[16]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[17]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[17]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[18]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[18]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[19]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[19]:1->0 hier=test_top.dut.apbs
-000005  point: type=toggle comment=txdata_reg[1]:0->1 hier=test_top.dut.apbs
-000004  point: type=toggle comment=txdata_reg[1]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[20]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[20]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[21]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[21]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[22]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[22]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[23]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[23]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[24]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[24]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[25]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[25]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[26]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[26]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[27]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[27]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[28]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[28]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[29]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[29]:1->0 hier=test_top.dut.apbs
-000007  point: type=toggle comment=txdata_reg[2]:0->1 hier=test_top.dut.apbs
-000006  point: type=toggle comment=txdata_reg[2]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[30]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[30]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[31]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[31]:1->0 hier=test_top.dut.apbs
-000008  point: type=toggle comment=txdata_reg[3]:0->1 hier=test_top.dut.apbs
-000008  point: type=toggle comment=txdata_reg[3]:1->0 hier=test_top.dut.apbs
-000007  point: type=toggle comment=txdata_reg[4]:0->1 hier=test_top.dut.apbs
-000007  point: type=toggle comment=txdata_reg[4]:1->0 hier=test_top.dut.apbs
-000008  point: type=toggle comment=txdata_reg[5]:0->1 hier=test_top.dut.apbs
-000007  point: type=toggle comment=txdata_reg[5]:1->0 hier=test_top.dut.apbs
-000005  point: type=toggle comment=txdata_reg[6]:0->1 hier=test_top.dut.apbs
-000004  point: type=toggle comment=txdata_reg[6]:1->0 hier=test_top.dut.apbs
-000007  point: type=toggle comment=txdata_reg[7]:0->1 hier=test_top.dut.apbs
-000007  point: type=toggle comment=txdata_reg[7]:1->0 hier=test_top.dut.apbs
-000001  point: type=toggle comment=txdata_reg[8]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[8]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[9]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=txdata_reg[9]:1->0 hier=test_top.dut.apbs
        
~000025    logic [DW-1:0] status_reg;
+000025  point: type=toggle comment=status_reg[0]:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=status_reg[0]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[10]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[10]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[11]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[11]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[12]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[12]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[13]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[13]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[14]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[14]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[15]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[15]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[16]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[16]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[17]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[17]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[18]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[18]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[19]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[19]:1->0 hier=test_top.dut.apbs
+000025  point: type=toggle comment=status_reg[1]:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=status_reg[1]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[20]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[20]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[21]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[21]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[22]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[22]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[23]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[23]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[24]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[24]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[25]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[25]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[26]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[26]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[27]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[27]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[28]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[28]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[29]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[29]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[2]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[2]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[30]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[30]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[31]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[31]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[3]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[3]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[4]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[4]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[5]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[5]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[6]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[6]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[7]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[7]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[8]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[8]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[9]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=status_reg[9]:1->0 hier=test_top.dut.apbs
        
%000000    logic [DW-1:0] rxdata_reg;
-000000  point: type=toggle comment=rxdata_reg[0]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[0]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[10]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[10]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[11]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[11]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[12]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[12]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[13]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[13]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[14]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[14]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[15]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[15]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[16]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[16]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[17]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[17]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[18]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[18]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[19]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[19]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[1]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[1]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[20]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[20]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[21]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[21]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[22]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[22]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[23]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[23]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[24]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[24]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[25]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[25]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[26]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[26]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[27]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[27]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[28]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[28]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[29]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[29]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[2]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[2]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[30]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[30]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[31]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[31]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[3]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[3]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[4]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[4]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[5]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[5]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[6]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[6]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[7]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[7]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[8]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[8]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[9]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=rxdata_reg[9]:1->0 hier=test_top.dut.apbs
         
~000175    logic [7:0] reg_addr;
-000000  point: type=toggle comment=reg_addr[0]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=reg_addr[0]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=reg_addr[1]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=reg_addr[1]:1->0 hier=test_top.dut.apbs
+000125  point: type=toggle comment=reg_addr[2]:0->1 hier=test_top.dut.apbs
+000124  point: type=toggle comment=reg_addr[2]:1->0 hier=test_top.dut.apbs
+000025  point: type=toggle comment=reg_addr[3]:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=reg_addr[3]:1->0 hier=test_top.dut.apbs
+000175  point: type=toggle comment=reg_addr[4]:0->1 hier=test_top.dut.apbs
+000174  point: type=toggle comment=reg_addr[4]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=reg_addr[5]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=reg_addr[5]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=reg_addr[6]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=reg_addr[6]:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=reg_addr[7]:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=reg_addr[7]:1->0 hier=test_top.dut.apbs
         
 000125    logic req_rd;
+000125  point: type=toggle comment=req_rd:0->1 hier=test_top.dut.apbs
+000125  point: type=toggle comment=req_rd:1->0 hier=test_top.dut.apbs
        
 000050    logic req_wr;
+000050  point: type=toggle comment=req_wr:0->1 hier=test_top.dut.apbs
+000050  point: type=toggle comment=req_wr:1->0 hier=test_top.dut.apbs
         
 000025    logic done_sticky;
+000025  point: type=toggle comment=done_sticky:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=done_sticky:1->0 hier=test_top.dut.apbs
        
%000000    logic nack_sticky;
-000000  point: type=toggle comment=nack_sticky:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=nack_sticky:1->0 hier=test_top.dut.apbs
         
 000025    logic ctrl_valid;
+000025  point: type=toggle comment=ctrl_valid:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=ctrl_valid:1->0 hier=test_top.dut.apbs
        
 000025    logic tx_valid;
+000025  point: type=toggle comment=tx_valid:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=tx_valid:1->0 hier=test_top.dut.apbs
         
 000025    logic ctrl_write_blocked;
+000025  point: type=toggle comment=ctrl_write_blocked:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=ctrl_write_blocked:1->0 hier=test_top.dut.apbs
        
 000025    logic tx_write_blocked;
+000025  point: type=toggle comment=tx_write_blocked:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=tx_write_blocked:1->0 hier=test_top.dut.apbs
         
           // Declared here (moved up) because the clear logic below uses both_valid
        
 000025    logic both_valid, both_valid_d, fifo_wr_pulse;
+000025  point: type=toggle comment=both_valid:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=both_valid:1->0 hier=test_top.dut.apbs
+000025  point: type=toggle comment=both_valid_d:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=both_valid_d:1->0 hier=test_top.dut.apbs
+000025  point: type=toggle comment=fifo_wr_pulse:0->1 hier=test_top.dut.apbs
+000025  point: type=toggle comment=fifo_wr_pulse:1->0 hier=test_top.dut.apbs
         
 000125    logic reg_rd_done;
+000125  point: type=toggle comment=reg_rd_done:0->1 hier=test_top.dut.apbs
+000125  point: type=toggle comment=reg_rd_done:1->0 hier=test_top.dut.apbs
        
%000000    logic tx_valid_clr, ctrl_valid_clr;
-000000  point: type=toggle comment=tx_valid_clr:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=tx_valid_clr:1->0 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_valid_clr:0->1 hier=test_top.dut.apbs
-000000  point: type=toggle comment=ctrl_valid_clr:1->0 hier=test_top.dut.apbs
         
 000400    assign req_rd = i_psel && !i_pwrite;
+000400  point: type=expr comment=(i_psel==0) => 0 hier=test_top.dut.apbs
+000250  point: type=expr comment=(i_psel==1 && i_pwrite==0) => 1 hier=test_top.dut.apbs
+000150  point: type=expr comment=(i_pwrite==1) => 0 hier=test_top.dut.apbs
        
 000600    assign req_wr = i_psel &&  i_pwrite;
+000400  point: type=expr comment=(i_psel==0) => 0 hier=test_top.dut.apbs
+000100  point: type=expr comment=(i_psel==1 && i_pwrite==1) => 1 hier=test_top.dut.apbs
+000600  point: type=expr comment=(i_pwrite==0) => 0 hier=test_top.dut.apbs
         
           //--------------------------------------------------------------------
        
           // Address latch (setup phase -> access phase)
        
           //--------------------------------------------------------------------
        
 250712    always_ff @(posedge pclk or negedge presetn) begin
+250712  point: type=line comment=block hier=test_top.dut.apbs
        
~250708       if (!presetn)
-000004  point: type=expr comment=(presetn==0) => 1 hier=test_top.dut.apbs
+250708  point: type=expr comment=(presetn==1) => 0 hier=test_top.dut.apbs
-000004  point: type=branch comment=if hier=test_top.dut.apbs
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
%000004          reg_addr <= 8'b0;
-000004  point: type=branch comment=if hier=test_top.dut.apbs
        
              else
        
 250708          reg_addr <= i_paddr[7:0];
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
           end
         
           //--------------------------------------------------------------------
        
           // STATUS sticky bits
        
           //--------------------------------------------------------------------
        
 000125    logic status_read_fire;
+000125  point: type=toggle comment=status_read_fire:0->1 hier=test_top.dut.apbs
+000125  point: type=toggle comment=status_read_fire:1->0 hier=test_top.dut.apbs
        
 251562    assign status_read_fire = req_rd && o_pready && i_penable &&
+001213  point: type=expr comment=((reg_addr == STATUS_OFFSET)==0) => 0 hier=test_top.dut.apbs
+251462  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
+251562  point: type=expr comment=(o_pready==0) => 0 hier=test_top.dut.apbs
+251212  point: type=expr comment=(req_rd==0) => 0 hier=test_top.dut.apbs
+000625  point: type=expr comment=(req_rd==1 && o_pready==1 && i_penable==1 && (reg_addr == STATUS_OFFSET)==1) => 1 hier=test_top.dut.apbs
        
                                     (reg_addr == STATUS_OFFSET);
         
 250712    always_ff @(posedge pclk or negedge presetn) begin
+250712  point: type=line comment=block hier=test_top.dut.apbs
        
~250708       if (!presetn) begin
-000004  point: type=expr comment=(presetn==0) => 1 hier=test_top.dut.apbs
+250708  point: type=expr comment=(presetn==1) => 0 hier=test_top.dut.apbs
-000004  point: type=branch comment=if hier=test_top.dut.apbs
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
%000004          done_sticky <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.apbs
        
%000004          nack_sticky <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.apbs
        
 250708       end else begin
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
                 // Clear on a completed read of STATUS ...
        
 250458          if (status_read_fire) begin
+000250  point: type=branch comment=if hier=test_top.dut.apbs
+250458  point: type=branch comment=else hier=test_top.dut.apbs
        
 000250             done_sticky <= 1'b0;
+000250  point: type=branch comment=if hier=test_top.dut.apbs
        
 000250             nack_sticky <= 1'b0;
+000250  point: type=branch comment=if hier=test_top.dut.apbs
        
                 end
        
                 // ... but a new event in the same cycle wins
        
 250658          if (i2c_done) done_sticky <= 1'b1;
+000050  point: type=branch comment=if hier=test_top.dut.apbs
+250658  point: type=branch comment=else hier=test_top.dut.apbs
        
~250708          if (i2c_nack) nack_sticky <= 1'b1;
-000000  point: type=branch comment=if hier=test_top.dut.apbs
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
              end
        
           end
         
           assign status_reg = {29'b0, nack_sticky, done_sticky, i2c_busy};
         
           //--------------------------------------------------------------------
        
           // RX register captures i_rd_data when I2C finishes
        
           //--------------------------------------------------------------------
        
 250712    always_ff @(posedge pclk or negedge presetn) begin
+250712  point: type=line comment=block hier=test_top.dut.apbs
        
~250708       if (!presetn) rxdata_reg <= '0;
-000004  point: type=expr comment=(presetn==0) => 1 hier=test_top.dut.apbs
+250708  point: type=expr comment=(presetn==1) => 0 hier=test_top.dut.apbs
-000004  point: type=line comment=elsif hier=test_top.dut.apbs
        
 250658       else if (i2c_done) rxdata_reg <= {{(DW-8){1'b0}}, i_rd_data};
+000050  point: type=branch comment=if hier=test_top.dut.apbs
+250658  point: type=branch comment=else hier=test_top.dut.apbs
        
           end
         
           //--------------------------------------------------------------------
        
           // Write-blocked decode (uses registered address, same as the write case)
        
           //--------------------------------------------------------------------
        
 250638    assign ctrl_write_blocked = (reg_addr == CTRL_OFFSET)   && ctrl_valid;
+250638  point: type=expr comment=((reg_addr == CTRL_OFFSET)==0) => 0 hier=test_top.dut.apbs
+000050  point: type=expr comment=((reg_addr == CTRL_OFFSET)==1 && ctrl_valid==1) => 1 hier=test_top.dut.apbs
+246338  point: type=expr comment=(ctrl_valid==0) => 0 hier=test_top.dut.apbs
        
 250638    assign tx_write_blocked   = (reg_addr == TXDATA_OFFSET) && tx_valid;
+250638  point: type=expr comment=((reg_addr == TXDATA_OFFSET)==0) => 0 hier=test_top.dut.apbs
+000050  point: type=expr comment=((reg_addr == TXDATA_OFFSET)==1 && tx_valid==1) => 1 hier=test_top.dut.apbs
+246438  point: type=expr comment=(tx_valid==0) => 0 hier=test_top.dut.apbs
         
           //--------------------------------------------------------------------
        
           // PREADY generation
        
           //--------------------------------------------------------------------
        
 252337    always_comb begin
+252337  point: type=line comment=block hier=test_top.dut.apbs
        
 252337       o_pready = 1'b0;
+252337  point: type=line comment=block hier=test_top.dut.apbs
        
 252337       case (state_ff)
+252337  point: type=line comment=block hier=test_top.dut.apbs
        
 251587          IDLE: begin
+251587  point: type=line comment=case hier=test_top.dut.apbs
        
                    // WRITE
        
~251587             if (req_wr &&
-000000  point: type=branch comment=if hier=test_top.dut.apbs
+251587  point: type=branch comment=else hier=test_top.dut.apbs
        
                        i_penable &&
        
                        !fifo_full &&
        
                        !i2c_busy &&
        
~251462                 !ctrl_write_blocked &&
+000025  point: type=expr comment=(ctrl_write_blocked==1) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(fifo_full==1) => 0 hier=test_top.dut.apbs
+003950  point: type=expr comment=(i2c_busy==1) => 0 hier=test_top.dut.apbs
+250987  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
+251462  point: type=expr comment=(req_wr==0) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(req_wr==1 && i_penable==1 && fifo_full==0 && i2c_busy==0 && ctrl_write_blocked==0 && tx_write_blocked==0) => 1 hier=test_top.dut.apbs
+000025  point: type=expr comment=(tx_write_blocked==1) => 0 hier=test_top.dut.apbs
        
%000000                 !tx_write_blocked) begin
-000000  point: type=branch comment=if hier=test_top.dut.apbs
        
%000000                o_pready = 1'b1;
-000000  point: type=branch comment=if hier=test_top.dut.apbs
        
                    end
        
                    // READ
        
 251037             if (req_rd && i_penable) begin
+000550  point: type=branch comment=if hier=test_top.dut.apbs
+251037  point: type=branch comment=else hier=test_top.dut.apbs
+250987  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
+250637  point: type=expr comment=(req_rd==0) => 0 hier=test_top.dut.apbs
+000550  point: type=expr comment=(req_rd==1 && i_penable==1) => 1 hier=test_top.dut.apbs
        
 000550                o_pready = 1'b1;
+000550  point: type=branch comment=if hier=test_top.dut.apbs
        
                    end
        
                    // I2C NACK error
        
~251587             if (i2c_nack && i_psel && i_penable) begin
-000000  point: type=branch comment=if hier=test_top.dut.apbs
+251587  point: type=branch comment=else hier=test_top.dut.apbs
+251587  point: type=expr comment=(i2c_nack==0) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(i2c_nack==1 && i_psel==1 && i_penable==1) => 1 hier=test_top.dut.apbs
+250987  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
+250512  point: type=expr comment=(i_psel==0) => 0 hier=test_top.dut.apbs
        
%000000                o_pready = 1'b1;
-000000  point: type=branch comment=if hier=test_top.dut.apbs
        
                    end
        
                 end
         
 000750          W_ACCESS: begin
+000750  point: type=line comment=case hier=test_top.dut.apbs
        
 000600             if (req_wr &&
+000150  point: type=branch comment=if hier=test_top.dut.apbs
+000600  point: type=branch comment=else hier=test_top.dut.apbs
        
                        i_penable &&
        
                        !fifo_full &&
        
                        !i2c_busy &&
        
~000475                 !ctrl_write_blocked &&
+000125  point: type=expr comment=(ctrl_write_blocked==1) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(fifo_full==1) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(i2c_busy==1) => 0 hier=test_top.dut.apbs
+000475  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
+000425  point: type=expr comment=(req_wr==0) => 0 hier=test_top.dut.apbs
+000150  point: type=expr comment=(req_wr==1 && i_penable==1 && fifo_full==0 && i2c_busy==0 && ctrl_write_blocked==0 && tx_write_blocked==0) => 1 hier=test_top.dut.apbs
+000125  point: type=expr comment=(tx_write_blocked==1) => 0 hier=test_top.dut.apbs
        
 000150                 !tx_write_blocked) begin
+000150  point: type=branch comment=if hier=test_top.dut.apbs
        
 000150                o_pready = 1'b1;
+000150  point: type=branch comment=if hier=test_top.dut.apbs
        
                    end
        
 000675             if (req_rd && i_penable)
+000075  point: type=branch comment=if hier=test_top.dut.apbs
+000675  point: type=branch comment=else hier=test_top.dut.apbs
+000475  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
+000575  point: type=expr comment=(req_rd==0) => 0 hier=test_top.dut.apbs
+000075  point: type=expr comment=(req_rd==1 && i_penable==1) => 1 hier=test_top.dut.apbs
        
 000075                o_pready = 1'b1;
+000075  point: type=branch comment=if hier=test_top.dut.apbs
        
                 end
         
%000000          R_ACCESS: begin
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
                    // READ completes when data is valid
        
%000000             if (req_rd && i_penable && i_rd_data_valid) begin
-000000  point: type=branch comment=if hier=test_top.dut.apbs
-000000  point: type=branch comment=else hier=test_top.dut.apbs
-000000  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(i_rd_data_valid==0) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(req_rd==0) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(req_rd==1 && i_penable==1 && i_rd_data_valid==1) => 1 hier=test_top.dut.apbs
        
%000000                o_pready = 1'b1;
-000000  point: type=branch comment=if hier=test_top.dut.apbs
        
                    end
        
                 end
         
%000000          default: begin
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
%000000             o_pready = 1'b0;
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
                 end
        
              endcase
        
           end
         
           //--------------------------------------------------------------------
        
           // Combinational clear for register-only accesses
        
           //   Once a register readback completes, drop that register's valid.
        
           //   !both_valid keeps a real APB->I2C transfer (CTRL+TX both pending)
        
           //   alive until i2c_done.
        
           //--------------------------------------------------------------------
        
 251562    assign reg_rd_done = req_rd && i_penable && o_pready;
+251462  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
+251562  point: type=expr comment=(o_pready==0) => 0 hier=test_top.dut.apbs
+251212  point: type=expr comment=(req_rd==0) => 0 hier=test_top.dut.apbs
+000625  point: type=expr comment=(req_rd==1 && i_penable==1 && o_pready==1) => 1 hier=test_top.dut.apbs
         
 252337    always_comb begin
+252337  point: type=line comment=block hier=test_top.dut.apbs
        
 252337       tx_valid_clr   = 1'b0;
+252337  point: type=line comment=block hier=test_top.dut.apbs
        
 252337       ctrl_valid_clr = 1'b0;
+252337  point: type=line comment=block hier=test_top.dut.apbs
         
 251837       if (reg_rd_done && !both_valid) begin
+004600  point: type=expr comment=(both_valid==1) => 0 hier=test_top.dut.apbs
+251712  point: type=expr comment=(reg_rd_done==0) => 0 hier=test_top.dut.apbs
+000500  point: type=expr comment=(reg_rd_done==1 && both_valid==0) => 1 hier=test_top.dut.apbs
+000500  point: type=branch comment=if hier=test_top.dut.apbs
+251837  point: type=branch comment=else hier=test_top.dut.apbs
        
 000500          case (reg_addr)
+000500  point: type=branch comment=if hier=test_top.dut.apbs
        
%000000             TXDATA_OFFSET: tx_valid_clr   = 1'b1;
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
%000000             CTRL_OFFSET:   ctrl_valid_clr = 1'b1;
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
 000500             default: ;
+000500  point: type=line comment=case hier=test_top.dut.apbs
        
                 endcase
        
              end
        
           end
         
           //--------------------------------------------------------------------
        
           // Register writes and valid flags
        
           //--------------------------------------------------------------------
        
 250712    always_ff @(posedge pclk or negedge presetn) begin
+250712  point: type=line comment=block hier=test_top.dut.apbs
        
~250708       if (!presetn) begin
-000004  point: type=expr comment=(presetn==0) => 1 hier=test_top.dut.apbs
+250708  point: type=expr comment=(presetn==1) => 0 hier=test_top.dut.apbs
-000004  point: type=branch comment=if hier=test_top.dut.apbs
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
%000004          ctrl_reg   <= '0;
-000004  point: type=branch comment=if hier=test_top.dut.apbs
        
%000004          txdata_reg <= '0;
-000004  point: type=branch comment=if hier=test_top.dut.apbs
        
%000004          tx_valid   <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.apbs
        
%000004          ctrl_valid <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.apbs
        
 250708       end else begin
+250708  point: type=branch comment=else hier=test_top.dut.apbs
         
 250658          if (o_pready && i_psel && i_pwrite && i_penable) begin
+000050  point: type=branch comment=if hier=test_top.dut.apbs
+250658  point: type=branch comment=else hier=test_top.dut.apbs
+250358  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
+250183  point: type=expr comment=(i_psel==0) => 0 hier=test_top.dut.apbs
+250558  point: type=expr comment=(i_pwrite==0) => 0 hier=test_top.dut.apbs
+250408  point: type=expr comment=(o_pready==0) => 0 hier=test_top.dut.apbs
+000050  point: type=expr comment=(o_pready==1 && i_psel==1 && i_pwrite==1 && i_penable==1) => 1 hier=test_top.dut.apbs
        
 000050             case (reg_addr)
+000050  point: type=branch comment=if hier=test_top.dut.apbs
        
 000025                CTRL_OFFSET: begin
+000025  point: type=line comment=case hier=test_top.dut.apbs
        
~000025                   if (i_pstrb[1]) begin
+000025  point: type=branch comment=if hier=test_top.dut.apbs
-000000  point: type=branch comment=else hier=test_top.dut.apbs
        
 000025                      ctrl_reg   <= {24'b0, i_pwdata[15:8]}; // [14:8]=slave_addr, [15]=r/w
+000025  point: type=branch comment=if hier=test_top.dut.apbs
        
 000025                      ctrl_valid <= 1'b1;
+000025  point: type=branch comment=if hier=test_top.dut.apbs
        
                          end
        
                       end
        
 000025                TXDATA_OFFSET: begin
+000025  point: type=line comment=case hier=test_top.dut.apbs
        
~000025                   if (i_pstrb[0]) txdata_reg[7:0]   <= i_pwdata[7:0];
+000025  point: type=branch comment=if hier=test_top.dut.apbs
-000000  point: type=branch comment=else hier=test_top.dut.apbs
        
~000025                   if (i_pstrb[1]) txdata_reg[15:8]  <= i_pwdata[15:8];
+000025  point: type=branch comment=if hier=test_top.dut.apbs
-000000  point: type=branch comment=else hier=test_top.dut.apbs
        
~000025                   if (i_pstrb[2]) txdata_reg[23:16] <= i_pwdata[23:16];
+000025  point: type=branch comment=if hier=test_top.dut.apbs
-000000  point: type=branch comment=else hier=test_top.dut.apbs
        
~000025                   if (i_pstrb[3]) txdata_reg[31:24] <= i_pwdata[31:24];
+000025  point: type=branch comment=if hier=test_top.dut.apbs
-000000  point: type=branch comment=else hier=test_top.dut.apbs
        
~000025                   if (i_pstrb != '0) tx_valid <= 1'b1;
+000025  point: type=branch comment=if hier=test_top.dut.apbs
-000000  point: type=branch comment=else hier=test_top.dut.apbs
        
                       end
        
%000000                default: ;   // writes to other addresses no longer kill a pending valid
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
                    endcase
        
                 end
         
                 // Whole-transfer clear (APB -> I2C): I2C consumed the transaction
        
 250658          if (i2c_done) begin
+000050  point: type=branch comment=if hier=test_top.dut.apbs
+250658  point: type=branch comment=else hier=test_top.dut.apbs
        
 000050             ctrl_valid <= 1'b0;
+000050  point: type=branch comment=if hier=test_top.dut.apbs
        
 000050             tx_valid   <= 1'b0;
+000050  point: type=branch comment=if hier=test_top.dut.apbs
        
                 end
         
                 // Register-only clear: readback finished
        
~250708          if (tx_valid_clr)   tx_valid   <= 1'b0;
-000000  point: type=branch comment=if hier=test_top.dut.apbs
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
~250708          if (ctrl_valid_clr) ctrl_valid <= 1'b0;
-000000  point: type=branch comment=if hier=test_top.dut.apbs
+250708  point: type=branch comment=else hier=test_top.dut.apbs
         
              end
        
           end
         
           //--------------------------------------------------------------------
        
           // FIFO write trigger
        
           //--------------------------------------------------------------------
        
 246438    assign both_valid = (ctrl_valid == 1'b1) && (tx_valid == 1'b1);
+246338  point: type=expr comment=((ctrl_valid == 1'h1)==0) => 0 hier=test_top.dut.apbs
+004275  point: type=expr comment=((ctrl_valid == 1'h1)==1 && (tx_valid == 1'h1)==1) => 1 hier=test_top.dut.apbs
+246438  point: type=expr comment=((tx_valid == 1'h1)==0) => 0 hier=test_top.dut.apbs
         
 250712    always_ff @(posedge pclk or negedge presetn) begin
+250712  point: type=line comment=block hier=test_top.dut.apbs
        
~250708       if (!presetn)
-000004  point: type=expr comment=(presetn==0) => 1 hier=test_top.dut.apbs
+250708  point: type=expr comment=(presetn==1) => 0 hier=test_top.dut.apbs
-000004  point: type=branch comment=if hier=test_top.dut.apbs
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
%000004          both_valid_d <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.apbs
        
              else
        
 250708          both_valid_d <= both_valid;
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
           end
         
 246438    assign fifo_wr_pulse = both_valid & ~both_valid_d;
+246438  point: type=expr comment=(both_valid==0) => 0 hier=test_top.dut.apbs
+000025  point: type=expr comment=(both_valid==1 && both_valid_d==0) => 1 hier=test_top.dut.apbs
+004275  point: type=expr comment=(both_valid_d==1) => 0 hier=test_top.dut.apbs
         
           assign fifo_wr_data = txdata_reg;
        
~250688    assign fifo_wr_en   = fifo_wr_pulse & ~fifo_full;
-000000  point: type=expr comment=(fifo_full==1) => 0 hier=test_top.dut.apbs
+250688  point: type=expr comment=(fifo_wr_pulse==0) => 0 hier=test_top.dut.apbs
+000025  point: type=expr comment=(fifo_wr_pulse==1 && fifo_full==0) => 1 hier=test_top.dut.apbs
         
           //--------------------------------------------------------------------
        
           // PSLVERR
        
           //--------------------------------------------------------------------
        
~252337    assign o_pslverr = (i2c_nack && i_psel && i_penable && o_pready) ? 1'b1 : 1'b0;
+252337  point: type=expr comment=(i2c_nack==0) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(i2c_nack==1 && i_psel==1 && i_penable==1 && o_pready==1) => 1 hier=test_top.dut.apbs
+251462  point: type=expr comment=(i_penable==0) => 0 hier=test_top.dut.apbs
+250762  point: type=expr comment=(i_psel==0) => 0 hier=test_top.dut.apbs
+251562  point: type=expr comment=(o_pready==0) => 0 hier=test_top.dut.apbs
-000000  point: type=branch comment=cond_then hier=test_top.dut.apbs
+252337  point: type=branch comment=cond_else hier=test_top.dut.apbs
         
           //--------------------------------------------------------------------
        
           // Read data mux
        
           //--------------------------------------------------------------------
        
 251462    always_comb begin
+251462  point: type=line comment=block hier=test_top.dut.apbs
        
 251462       o_prdata = '0;
+251462  point: type=line comment=block hier=test_top.dut.apbs
        
 250837       if (req_rd) begin
+000625  point: type=branch comment=if hier=test_top.dut.apbs
+250837  point: type=branch comment=else hier=test_top.dut.apbs
        
 000625          case (reg_addr)
+000625  point: type=branch comment=if hier=test_top.dut.apbs
        
%000000             CTRL_OFFSET:   o_prdata = ctrl_reg;
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
 000375             STATUS_OFFSET: o_prdata = status_reg;
+000375  point: type=line comment=case hier=test_top.dut.apbs
        
%000000             TXDATA_OFFSET: o_prdata = txdata_reg;
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
%000000             RXDATA_OFFSET: o_prdata = rxdata_reg;
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
 000250             default:       o_prdata = '0;
+000250  point: type=line comment=case hier=test_top.dut.apbs
        
                 endcase
        
              end
        
           end
         
           //--------------------------------------------------------------------
        
           // State machine
        
           //--------------------------------------------------------------------
        
 250712    always_ff @(posedge pclk or negedge presetn) begin
+250712  point: type=line comment=block hier=test_top.dut.apbs
        
~250708       if (!presetn) begin
-000004  point: type=expr comment=(presetn==0) => 1 hier=test_top.dut.apbs
+250708  point: type=expr comment=(presetn==1) => 0 hier=test_top.dut.apbs
-000004  point: type=branch comment=if hier=test_top.dut.apbs
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
%000004          state_ff <= IDLE;
-000004  point: type=branch comment=if hier=test_top.dut.apbs
        
 250708       end else begin
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
 250708          case (state_ff)
+250708  point: type=branch comment=else hier=test_top.dut.apbs
        
 250533             IDLE: begin
+250533  point: type=line comment=case hier=test_top.dut.apbs
        
 000075                if (req_wr)
+000075  point: type=line comment=elsif hier=test_top.dut.apbs
        
 000075                   state_ff <= W_ACCESS;
+000075  point: type=line comment=elsif hier=test_top.dut.apbs
        
~250458                else if (req_rd && i_rd_data_valid)
-000000  point: type=line comment=if hier=test_top.dut.apbs
+250458  point: type=line comment=else hier=test_top.dut.apbs
+250458  point: type=expr comment=(i_rd_data_valid==0) => 0 hier=test_top.dut.apbs
+250133  point: type=expr comment=(req_rd==0) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(req_rd==1 && i_rd_data_valid==1) => 1 hier=test_top.dut.apbs
        
%000000                   state_ff <= R_ACCESS;
-000000  point: type=line comment=if hier=test_top.dut.apbs
        
                       else
        
 250458                   state_ff <= IDLE;
+250458  point: type=line comment=else hier=test_top.dut.apbs
        
                    end
         
 000175             W_ACCESS: begin
+000175  point: type=line comment=case hier=test_top.dut.apbs
        
 000075                if (o_pready)
+000075  point: type=line comment=elsif hier=test_top.dut.apbs
        
 000075                   state_ff <= IDLE;
+000075  point: type=line comment=elsif hier=test_top.dut.apbs
        
~000100                else if (req_rd && i_rd_data_valid)
-000000  point: type=line comment=if hier=test_top.dut.apbs
+000100  point: type=line comment=else hier=test_top.dut.apbs
+000100  point: type=expr comment=(i_rd_data_valid==0) => 0 hier=test_top.dut.apbs
+000075  point: type=expr comment=(req_rd==0) => 0 hier=test_top.dut.apbs
-000000  point: type=expr comment=(req_rd==1 && i_rd_data_valid==1) => 1 hier=test_top.dut.apbs
        
%000000                   state_ff <= R_ACCESS;
-000000  point: type=line comment=if hier=test_top.dut.apbs
        
                       else
        
 000100                   state_ff <= W_ACCESS;
+000100  point: type=line comment=else hier=test_top.dut.apbs
        
                    end
         
%000000             R_ACCESS: begin
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
%000000                if (req_rd)
-000000  point: type=branch comment=if hier=test_top.dut.apbs
-000000  point: type=branch comment=else hier=test_top.dut.apbs
        
%000000                   state_ff <= R_FINISH;
-000000  point: type=branch comment=if hier=test_top.dut.apbs
        
                       else
        
%000000                   state_ff <= R_ACCESS;
-000000  point: type=branch comment=else hier=test_top.dut.apbs
        
                    end
         
%000000             R_FINISH: begin
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
%000000                state_ff <= IDLE;
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
                    end
         
%000000             default: begin
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
%000000                state_ff <= IDLE;
-000000  point: type=line comment=case hier=test_top.dut.apbs
        
                    end
        
                 endcase
        
              end
        
           end
         
        endmodule
         
        
