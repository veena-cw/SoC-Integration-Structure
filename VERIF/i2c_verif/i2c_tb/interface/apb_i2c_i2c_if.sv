interface apb_i2c_i2c_if(
    input logic clk,
    input logic reset_n
);

logic [7:0] slave_address;
logic [7:0] wdata;
logic [7:0] rdata;
logic write;
logic slverr;
logic strb;


logic [7:0] pointer_reg;
logic [7:0] temp_reg;
wire i2c_sda;
logic i2c_scl;


// internal signals
logic sda_drive_low;
logic done;

 clocking driver_cb @(posedge clk);
  endclocking


  //------------------------------------------------
  // monitor clocking block
  //------------------------------------------------

  clocking monitor_cb @(posedge clk);
     input #0 wdata,rdata,write;
  endclocking



// assertion 
endinterface 
