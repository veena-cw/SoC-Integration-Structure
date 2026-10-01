//ifndef __FIFO_N_SV__
//define __FIFO_N_SV__
`define FIFO_DEPTH 16 //FIFO DEPTH
`define DATA_WIDTH 18  //Data width
`define PTR_SIZE 4   //Pointer size

module FIFO_N (
    input clk,
    input rst_n,
    input rd,
    input wr,
    input [`DATA_WIDTH-1:0] data_in,
    output reg [`DATA_WIDTH-1:0] data_out,
    output reg Empty,
    output reg over_flow,
    output reg [`PTR_SIZE-1:0] FIFO_Status_out
  );
   //Status Flags
  reg Full,under_flow;
//FIFO MEMORY
  reg [`DATA_WIDTH-1:0] FIFO_MEM [`FIFO_DEPTH-1:0];
//FIFO Status track
  reg [`PTR_SIZE-1:0] FIFO_Status;
  reg [`PTR_SIZE-1:0] Rd_ptr;
  reg [`PTR_SIZE-1:0] Wr_ptr;
  reg [`DATA_WIDTH-1:0] data_in_tmp;
  
  assign stop = (FIFO_Status >= `FIFO_DEPTH-1);
  
  always @(posedge clk or negedge rst_n)
    begin
      if (~rst_n) 
        begin
          under_flow <= 1'b1;
          over_flow  <= 1'b0;
          data_out <= `DATA_WIDTH'h0;
          data_in_tmp <=`DATA_WIDTH'h0 ;
        end
      else
        begin
         // data_in_tmp <= data_in;
          if(rd)
            if(~Empty)
              begin
                data_out <= FIFO_MEM[Rd_ptr];
                over_flow <= 1'b0;
              end
            else
              begin
                under_flow <= 1'b1;
                data_out <= `DATA_WIDTH'h0;
              //  $display("ERROR:FIFO IS EMPTY at time = %0t",$time);
              end
          else if(!rd & Empty) under_flow <= 1'b1;
          if(wr)
            if(~Full)
              begin
                FIFO_MEM[Wr_ptr] <= data_in;               
                under_flow <= 1'b0;
              end
             else
               begin
                 over_flow <= 1'b1;
               //  $display("ERROR:FIFO IS FULL at time = %0t",$time);
               end
          //else over_flow 			<= 1'b0;
        end
    end
  
  
//pointers update read and write
  always @(posedge clk or negedge rst_n)
    begin
      if (~rst_n) 
        begin
          Rd_ptr					<= `PTR_SIZE'b0;
          Wr_ptr 					<= `PTR_SIZE'b0;
        end
      else
		begin
        if(rd && ~Empty)
          if(Rd_ptr == `FIFO_DEPTH-1)
            Rd_ptr <= `PTR_SIZE'b0;
      	  else
            Rd_ptr <= Rd_ptr + 1;
      	if(wr && ~Full)
          if(Wr_ptr == `FIFO_DEPTH-1)
            Wr_ptr <= `PTR_SIZE'b0;
      	  else
            Wr_ptr <= Wr_ptr + 1;
			end
    end
//FIFO STATUS
  always @(posedge clk or negedge rst_n)
    begin 
      if (~rst_n)
        FIFO_Status <= `PTR_SIZE'b0;
      else if((FIFO_Status == `FIFO_DEPTH-1)&& wr)
        FIFO_Status <= `FIFO_DEPTH-1;
      else if((FIFO_Status == `PTR_SIZE'b0) && rd )
        FIFO_Status <= `PTR_SIZE'b0;
      else if( wr ==1'b1 && rd == 1'b0 && Full == 1'b0)
        FIFO_Status <= FIFO_Status+1;
      else if( wr ==1'b0 && rd == 1'b1 && Empty == 1'b0)
        FIFO_Status <= FIFO_Status-1;
      FIFO_Status_out = FIFO_Status;
    end
//Flags Updation
 // always @(posedge clk,negedge rst_n)
 // always @( FIFO_Status or negedge rst_n)
  always_comb 
        begin
          if(FIFO_Status == `FIFO_DEPTH-1)
            begin 
            Full = 1'b1;
            end
          else  Full = 1'b0;
          if(FIFO_Status == `PTR_SIZE'b0)
            begin
            Empty =1'b1;
            end
          else  Empty = 1'b0;
        end
   // end
endmodule
        

