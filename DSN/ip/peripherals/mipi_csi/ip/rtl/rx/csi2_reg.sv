


//`define CXS_ADDR 32'h3000_0000

`define CSI2_ADDR 32'h0000_0000 //32'h0/4/8

module csi2_rx_reg (
//input rd_clk2,                              //read clock 2 (2 GHz clock)
input rst_n,                                //reset signal
input pclk,                                 //apb clock
input prst_n,                               //apb reset
input axim_err,                             //error from axi master of CSI2 Rx Controller
input rx_lane_sts_reg7,                     //start of transmission detection indication from PPI Interface
input rx_lane_sts_reg4,                     //end of transmission detection indication from PPI Interface
input lane_err,                             //lane error indication from lane merging of CSI2 Rx Controller
input llp_err_vld,                          //error valid from low level protocol of CSI2 Rx Controller
//input [31:0] lane_configuration,            //32'h0 ---> 1 lane, 32'h1 ----> 2 lanes, 32'h2 ---> 4 lanes update from APB Master
//input [31:0] mode_selection,                //32'h0 ---> c-phy, 32'h1 ---> d-phy update from APB Master
input [1:0] axim_sts,                       //status from axi master of CSI2 Rx Controller
input [2:0] llp_err,                        //error from low level protocol layer of CSI2 Rx Controller
input [5:0] dtype_sts_reg,                  //data type status register from low level protocol layer of CSI2 Rx Controller
//input lp_linkerror,                         //linkerror from protocol layer (cxs)
//input cxs_state_mach_sts,                   //cxs state machine status (downstream)
input pwrite,                               //apb write
input psel,                                 //apb select signal
input penable,                              //apb enable signal

input [2:0] pprot,                          //Indicates the normal, privileged, or secure protection level of the transaction. 
input [3:0]	pstrb,                          //apb strobe
//input [3:0] fdi_pl_state_sts,               //state status from Adapter to CXS (protocol layer) via FDI
input [31:0] paddr,                         //apb address
input [31:0] pwdata,                        //apb write data
input [15:0] rxalpnibble_reg,
input [15:0] rxalpcode_reg,
input      rxerrcalhs_reg,
input [1:0] rxcalibrationformat_reg,

output logic 		pready,                 //apb ready signal
output logic		pslverr,                //apb slave error
//output logic [3:0]  req_reg,                //request register
output logic [31:0] prdata                 //apb read data
);

//Instatntiation of APB Slave
/*apb_slave apb_slave_inst(.pclk(pclk),.prst_n(prst_n),.paddr(paddr),.pwrite(pwrite),.psel(psel),.penable(penable),.pwdata(pwdata),.pstrb(pstrb),.pprot(pprot),
.slave_err(cxs_slve_err),.reg_rdata_vld(csi2_reg_rdata_vld),.reg_rdata(cxs_reg_rdata),.reg_addr(reg_addr),.reg_data(reg_data),.reg_req_vld(reg_req_vld),
.prdata(prdata),.pready(pready),.pslverr(pslverr));*/

apb_slave apb_slave_inst(.pclk(pclk),.prst_n(prst_n),.paddr(paddr),.pwrite(pwrite),.psel(psel),.penable(penable),.pwdata(pwdata),.pstrb(pstrb),.pprot(pprot),
.slave_err(csi2_slve_err),.reg_rdata_vld(csi2_reg_rdata_vld),.reg_rdata(csi2_reg_rdata),.reg_addr(reg_addr),.prdata(prdata),.pready(pready),.pslverr(pslverr), .reg_req_vld(reg_req_vld), .reg_data(reg_data));
/*
`ifdef RGB888
apb_slave apb_slave_inst(.pclk(pclk),.prst_n(prst_n),.paddr(paddr),.pwrite(pwrite),.psel(psel),.penable(penable),.pwdata(pwdata),.pstrb(pstrb),.pprot(pprot),
.slave_err(csi2_slve_err),.reg_rdata_vld(csi2_reg_rdata_vld),.reg_rdata(csi2_reg_rdata),.reg_addr(reg_addr),.reg_data(reg_data),.reg_req_vld(reg_req_vld),
.prdata(prdata),.pready(pready),.pslverr(pslverr));
`elsif RGB666
apb_slave apb_slave_inst(.pclk(pclk),.prst_n(prst_n),.paddr(paddr),.pwrite(pwrite),.psel(psel),.penable(penable),.pwdata(pwdata),.pstrb(pstrb),.pprot(pprot),
.slave_err(csi2_slve_err),.reg_rdata_vld(csi2_reg_rdata_vld),.reg_rdata(csi2_reg_rdata),.reg_addr(reg_addr),.reg_data(reg_data),.reg_req_vld(reg_req_vld),
.prdata(prdata),.pready(pready),.pslverr(pslverr));*/

//Declaration of Internal Signals
logic reg_req_vld;                          //register request valid
//logic cxs_reg_rdata_vld;                    //cxs register read data valid
logic csi2_slve_err;                         //cxs slave error
//logic csi2_reg_wdata_vld;                    //cxs register write data valid
logic csi2_addr_vld;                         //cxs address valid
logic pwrite_vld;                           //apb write valid
logic csi2_reg_rdata_vld1;
logic [31:0] csi2_reg_rdata1;

logic [1:0]  reg_req_vld_r;                 //register request valid delay
logic [3:0]  cxs_fdi_bridge_cfg_reg;        //cxs fdi bridge configuration register
logic [11:0] cxs_fdi_bridge_reg;            //cxs fdi bridge register
logic [31:0] csi2_addr_range;               //cxs address range
logic [31:0] csi2_reg_rdata;                 //cxs register read data
logic [31:0] csi2_reg_wdata;                 //cxs register write data
logic [31:0] paddr_vld;                     //apb address valid
logic [31:0] pwdata_vld;                    //apb write data valid
//logic [31:0] lane_cfg_reg;
//logic [31:0] mode_sel_reg;
logic [31:0] pwdata_reg;
logic [31:0] reg_addr;
logic [31:0] reg_data;

//cxs address range
//assign csi2_addr_range[31:0] = ((paddr == 32'h0) | () (paddr < 32'h9)); // `CXS_ADDR; //>32'h0 & <=32'h8;
//assign csi2_addr = `CSI2_ADDR;

//assign cxs_addr_range[15:0] = `CXS_ADDR; //>32'h0 & <=32'h8;

//apb address valid
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) paddr_vld <= 32'h0;
  else paddr_vld <= paddr;

//apb write valid
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) pwrite_vld <= 1'b0;
  else pwrite_vld <= pwrite;

//apb write data valid
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) pwdata_reg <= 32'h0;
  else       pwdata_reg <= pwdata;
  //reg1 -0th

//reg request valid delay
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) reg_req_vld_r <= 2'b00;
  else reg_req_vld_r <= {reg_req_vld_r[0],reg_req_vld};

  
logic csi2_rx_err_reg;
logic [5:0] dtype_reg;
logic [1:0] axim_rsp_sts_reg;

//csi2 rx error register
//addr = 32'hc
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) csi2_rx_err_reg <= 1'b0;
  else if(rx_lane_sts_reg7) csi2_rx_err_reg <= 1'b0;
  else if(axim_err | lane_err | llp_err_vld | (|(llp_err[2:0])))  csi2_rx_err_reg <= 1'b1;
  //addr = 32'h10
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) dtype_reg <= 6'hf;
  else if(rx_lane_sts_reg7)  dtype_reg <= 6'hf; 
  else dtype_reg <= dtype_sts_reg[5:0];  
 
//addr = 32'h8 
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) axim_rsp_sts_reg <= 2'h0;
  else       axim_rsp_sts_reg <= axim_sts[1:0];
 
logic csi2_reg_rdata_vld;
//logic [31:0] csi2_reg_rdata;
//csi2 register read data valid and read data

logic csi2_reg_wdata_vld1;
logic csi2_reg_wdata_vld;
//logic [31:0] csi2_reg_wdata;
logic [31:0] csi2_reg_wdata1;
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) {csi2_reg_wdata_vld1, csi2_reg_wdata1} <= {1'b0,32'h0};
  else {csi2_reg_wdata_vld1, csi2_reg_wdata1} <= ((pwrite) & reg_req_vld & (paddr[31:0] == 32'h0)) ? 
                                             {1'b1,{pwdata[31:0]}} :      //7 - start of transmission
											 ((pwrite) & reg_req_vld & (paddr[31:0] == 32'h4)) ? 
                                             {1'b1,{pwdata[31:0]}} :      //4 - end of transmission
											 33'h0;
											 
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) {csi2_reg_wdata_vld, csi2_reg_wdata} <=	{1'b0,32'h0};
  else {csi2_reg_wdata_vld, csi2_reg_wdata} <= 	{csi2_reg_wdata_vld1, csi2_reg_wdata1};											 

always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) {csi2_reg_rdata_vld1, csi2_reg_rdata1} <= {1'b0,32'h0};
  else {csi2_reg_rdata_vld1, csi2_reg_rdata1} <= /*((!pwrite) & (paddr[31:0] == 32'h0)) ? 
                                             {1'b1,{lane_cfg_reg[31:0]}} :      //lane configuration
											 ((!pwrite)  & (paddr[31:0] == 32'h4)) ? 
                                             {1'b1,{mode_sel_reg[31:0]}} :      //mode selection */
											 ((!pwrite)  & (paddr[31:0] == 32'h8)) ? 
                                             {1'b1,{30'h0,axim_rsp_sts_reg[1:0]}} : 
                                             ((!pwrite) & (paddr[31:0] == 32'hc)) ? 
											 {1'b1,{31'h0,csi2_rx_err_reg}} : 
											 ((!pwrite)  & (paddr[31:0] == 32'h10)) ?
											 {1'b1,{26'h0, dtype_reg[5:0]}} :
											 
											 ((!pwrite) & (paddr[31:0] == 32'h14)) ?
											 {1'b1,{16'h0, rxalpcode_reg[15:0]}} :    //alpcode
											 ((!pwrite)  & (paddr[31:0] == 32'h18)) ?
											 {1'b1,{16'h0, rxalpnibble_reg[15:0]}} :  //alpnibble
											 ((!pwrite)  & (paddr[31:0] == 32'h1c)) ?
											 {1'b1,{30'h0, rxcalibrationformat_reg[1:0]}} : //rxcalibration format
											 ((!pwrite)  & (paddr[31:0] == 32'h20)) ?
											 {1'b1,{31'h0, rxerrcalhs_reg}} :       //rxerror calibration
											 33'h0;
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) {csi2_reg_rdata_vld, csi2_reg_rdata} <=	{1'b0,32'h0};
  else {csi2_reg_rdata_vld, csi2_reg_rdata} <= 	{csi2_reg_rdata_vld1, csi2_reg_rdata1};
	
//always_ff @(posedge  pclk or negedge rst_n)
  //if(~rst_n) lane_cfg_reg <= 32'h0;
  //else   lane_cfg_reg <= ((pwrite) & reg_req_vld_r[0] & ((paddr[31:0] == 32'h0))) ? pwdata[31:0] : 32'h0;
  
//always_ff @(posedge  pclk or negedge rst_n)
  //if(~rst_n) mode_sel_reg <= 32'h0;
  //else   mode_sel_reg <= ((pwrite) & reg_req_vld_r[0] & ((paddr[31:0] == 32'h4))) ? pwdata[31:0] : 32'h0;  
										 
/*
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) {cxs_reg_rdata_vld, cxs_reg_rdata} <= {1'b0,32'h0};
  else {cxs_reg_rdata_vld, cxs_reg_rdata} <= ((!pwrite) & reg_req_vld & (paddr[15:0] == 16'h0) &  (paddr[31:28] == 4'h3)) ? 
                                             {1'b1,{30'h0,cxs_fdi_bridge_reg[1:0]}} : 
                                             ((!pwrite) & reg_req_vld & (paddr[15:0] == 16'h18) &  (paddr[31:28] == 4'h3)) ? 
											 {1'b1,{30'h0,cxs_fdi_bridge_reg[1:0]}} : 33'h0;*/
/*
//cxs register write data valid and write data
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) {cxs_reg_wdata_vld, cxs_reg_wdata} <= {1'b0,32'h0};
  else {cxs_reg_wdata_vld, cxs_reg_wdata} <= ((pwrite) & reg_req_vld_r[0] & (paddr[15:0] == 16'h4) &  
                                             (paddr[31:28] == 4'h3)) ? {1'b1,{28'h0, cxs_fdi_bridge_cfg_reg}} : 33'h0;*/

/*//request register
always_ff @(posedge  pclk or negedge rst_n)
  if(~rst_n) req_reg <= 4'hf;
  else req_reg <= cxs_fdi_bridge_cfg_reg[3:0]; //((pwrite) & reg_req_vld_r[1] & ((paddr[15:0] == 16'h4) ) &  (paddr[31:28] == 4'h3)) ? cxs_reg_wdata[3:0] : 
                                                                   //  (cxs_fdi_bridge_cfg_reg == 4'h0) ? 4'h0 :
                                                                    // (cxs_fdi_bridge_cfg_reg == 4'hf) ? 4'hf : req_reg;*/

//cxs slave error
always_ff @(posedge pclk or negedge prst_n)
  if(~prst_n) csi2_slve_err <= 1'b0;
  else        csi2_slve_err <= 
  (/*(!reg_req_vld_r[0]) &*/ (psel & penable) & 
  ((paddr[31:0] != 32'h0) & (paddr[31:0] != 32'h4) &
             (paddr[31:0] != 32'h8) & (paddr[31:0] != 32'hc)));

//cxs address valid
/*always_ff @(posedge pclk or negedge prst_n)
  if(~prst_n) cxs_addr_vld <= 1'b0;
  else        cxs_addr_vld <= ((cxs_addr_range[31:28] == 4'h3) & (!(&(cxs_addr_range[15:0])))) ; //cxs_addr_range < 16'hffff*/

always_ff @(posedge pclk or negedge prst_n)
  if(~prst_n) csi2_addr_vld <= 1'b0;
  else        csi2_addr_vld <= ((paddr[31:0] == 32'h0) | (paddr[31:0] == 32'h4) | (paddr[31:0] == 32'h8) | (paddr[31:0] == 32'hc)); 

//always_ff @(posedge pclk or negedge prst_n)
  //if(~prst_n) csi2_addr_vld <= 1'b0;
  //else        csi2_addr_vld <= (|(csi2_addr_range[31:0]));
  
  //(!(&(cxs_addr_range[7:0])))) ; //cxs_addr_rang

endmodule

