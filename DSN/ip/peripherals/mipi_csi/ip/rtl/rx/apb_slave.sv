
  `define addrWidth 32 //APB Address width parameter
  `define dataWidth 32 //APB DATA width parameter


module apb_slave
(
  input                        		pclk, //APB Global clock
  input                        		prst_n, //APB Global reset
  input        [`addrWidth-1:0] 		paddr, // 
  input                        		pwrite,
  input                        		psel,
  input                        		penable,
  input        [`dataWidth-1:0] 		pwdata,
  input        [(`dataWidth/8)-1:0]	pstrb,
  input        [2:0]				pprot,
  input                             slave_err,
  input                             reg_rdata_vld,
  input        [`dataWidth-1:0] 		reg_rdata,
  output logic [`addrWidth-1:0] 		reg_addr,
  output logic [`dataWidth-1:0] 		reg_data,
  output logic 						reg_req_vld,
  output logic [`dataWidth-1:0] 		prdata,
  output logic 						pready,
  output logic						pslverr
);

logic [`dataWidth-1:0] s_pwdata,s_paddr;
//logic [`dataWidth-1:0] mem [0:4095];
logic [1:0] apb_present_state,apb_next_state;

parameter [1:0] IDLE = 0;
parameter [1:0] SETUP = 1;
parameter [1:0] W_ACCESS = 2;
parameter [1:0] R_ACCESS = 3;


always_ff @(posedge pclk or negedge prst_n)
	if(!prst_n) apb_present_state <= IDLE;
	else		apb_present_state <= apb_next_state;
	
	
always_comb
	case(apb_present_state)
	
		IDLE 	:apb_next_state = (psel)? SETUP :IDLE;
		SETUP	:apb_next_state =  (psel && pwrite && penable)? W_ACCESS:(psel && !pwrite && penable)?R_ACCESS : IDLE;
		W_ACCESS:apb_next_state =  (!psel || pslverr)? IDLE :(pready)? SETUP :  W_ACCESS;
		R_ACCESS:apb_next_state = (!psel || pslverr)? IDLE :(pready)? SETUP :  R_ACCESS;
		default : apb_next_state = IDLE;
	endcase
	
always_ff @(posedge pclk or negedge prst_n)
	if(!prst_n) pready <= 0;
	else 		pready <= ((psel & pwrite) | ((psel & (!pwrite)) & (apb_next_state == R_ACCESS)  
	& reg_rdata_vld)) ; //psel;



assign prdata = ((apb_present_state == R_ACCESS) & ~pslverr & pready & reg_rdata_vld)? reg_rdata : 32'h0;
 
  always_latch 
    if(!prst_n) begin s_paddr <= 0; s_pwdata <= 0; end
	else 		begin
    s_paddr  <= (apb_present_state == SETUP)? paddr :s_paddr;
    s_pwdata <= (apb_present_state == SETUP)? pwdata:s_pwdata;
	end
	
always_ff @(posedge pclk or negedge prst_n)
	if (!prst_n) begin reg_addr <= 32'h0; reg_data <= 32'h0; end
	else if( ((apb_next_state == W_ACCESS) | (apb_next_state == R_ACCESS) )& ~pslverr & penable)
	begin reg_addr <= paddr; 
	reg_data <= pwdata; end


always_ff @(posedge pclk or negedge prst_n)
	if (!prst_n) reg_req_vld <= 1'b0;
	else if( ((apb_next_state == W_ACCESS) | (apb_next_state == R_ACCESS) ) & ~pslverr & penable) reg_req_vld <= 1'b1;
	else reg_req_vld <= 1'b0;
  
/*always_comb
	if ((paddr < 32'h0) || (paddr > 32'h11fff) || paddr[0]) pslverr = 1'b1;
	else if( (apb_present_state == IDLE) && (penable)) pslverr = 1'b1;
	else if (((apb_present_state == W_ACCESS) ||(apb_present_state == R_ACCESS)) &&((s_paddr != paddr) || (!penable))) pslverr = 1'b1;
	else pslverr = 1'b0;*/
	
assign pslverr = (((apb_present_state == IDLE) & (penable)) | slave_err |
				 (((apb_present_state == W_ACCESS) | (apb_present_state == R_ACCESS)) & ((s_paddr != paddr))));
endmodule