// Code your design here

module Router #(
    parameter FLIT_SIZE = 18,
    parameter MAX_PACKET_SIZE = 64,
    parameter NOC_LENGTH = 4,
    parameter NOC_WIDTH = 4,
    parameter ROUTER_ID = 0
) (
    input logic clk,
    input logic rst_n,

  ReqAckIO in_ports_local ,
  ReqAckIO in_ports_east ,
  ReqAckIO in_ports_west ,
  ReqAckIO in_ports_north ,
  ReqAckIO in_ports_south ,
  ReqAckIO out_ports_local ,
  ReqAckIO out_ports_east ,
  ReqAckIO out_ports_west ,
  ReqAckIO out_ports_north ,
  ReqAckIO out_ports_south 
);

    localparam X_ADDRESS_WIDTH = $clog2(NOC_WIDTH);
    localparam Y_ADDRESS_WIDTH = $clog2(NOC_LENGTH);
    localparam TOTAL_ADDRESS_WIDTH = X_ADDRESS_WIDTH + Y_ADDRESS_WIDTH;

   localparam logic [2:0] LOCAL_PORT_ID = 3'd0;
    localparam logic [2:0] NORTH_PORT_ID = 3'd1;
    localparam logic [2:0] SOUTH_PORT_ID = 3'd2;
    localparam logic [2:0] EAST_PORT_ID  = 3'd3;
    localparam logic [2:0] WEST_PORT_ID  = 3'd4;



  ReqAckIO buffer_out_ports_local();
  ReqAckIO buffer_out_ports_east();
  ReqAckIO buffer_out_ports_west() ;
  ReqAckIO buffer_out_ports_north() ;
  ReqAckIO buffer_out_ports_south() ;
  
  
    logic [4:0] req;
    logic [4:0] grant;

    logic rd_local;
    logic rd_east;
    logic rd_west;
    logic rd_north;
    logic rd_south;

    logic under_flow_local;
    logic under_flow_east;
    logic under_flow_west;
    logic under_flow_north;
    logic under_flow_south;

    logic over_flow_local;
    logic over_flow_east;
    logic over_flow_west;
    logic over_flow_north;
    logic over_flow_south;

  logic [3:0] FIFO_Status_out_local;
  logic [3:0] FIFO_Status_out_east;
  logic [3:0] FIFO_Status_out_west;
  logic [3:0] FIFO_Status_out_north;
  logic [3:0] FIFO_Status_out_south;
  
   logic [FLIT_SIZE-1:0] selected_data;
 
  logic [3:0] destination;
    logic [2:0] selected_port;


    assign req = {!under_flow_west,!under_flow_east,!under_flow_south,!under_flow_north,!under_flow_local};
    assign {rd_west,rd_east,rd_south,rd_north,rd_local} = grant;
 
  always_ff @(posedge clk or negedge rst_n)
    if(!rst_n) {buffer_out_ports_west.valid,
                buffer_out_ports_east.valid,
                buffer_out_ports_south.valid,
                buffer_out_ports_north.valid,
                buffer_out_ports_local.valid} <= 5'h0;
  else {buffer_out_ports_west.valid,
                buffer_out_ports_east.valid,
                buffer_out_ports_south.valid,
                buffer_out_ports_north.valid,
                buffer_out_ports_local.valid} <= grant;

   FIFO_N local_1 (
    .clk(clk),
    .rst_n(rst_n),
    .rd(rd_local),
    .wr(in_ports_local.valid),
    .data_in(in_ports_local.data),
    .data_out(buffer_out_ports_local.data),
    .Empty(under_flow_local),
    .over_flow(over_flow_local) ,
    .FIFO_Status_out(FIFO_Status_out_local)
  );

  FIFO_N north (
    .clk(clk),
    .rst_n(rst_n),
    .rd(rd_north),
    .wr(in_ports_north.valid),
    .data_in(in_ports_north.data),
    .data_out(buffer_out_ports_north.data),
    .Empty(under_flow_north),
    .over_flow(over_flow_north) ,
    .FIFO_Status_out(FIFO_Status_out_north)
  );

  FIFO_N south (
    .clk(clk),
    .rst_n(rst_n),
    .rd(rd_south),
   .wr(in_ports_south.valid),
    .data_in(in_ports_south.data),
    .data_out(buffer_out_ports_south.data),
    .Empty(under_flow_south),
    .over_flow(over_flow_south) ,
    .FIFO_Status_out(FIFO_Status_out_south)
  );

  FIFO_N west (
    .clk(clk),
    .rst_n(rst_n),
    .rd(rd_west),
    .wr(in_ports_west.valid),
    .data_in(in_ports_west.data),
    .data_out(buffer_out_ports_west.data),
    .Empty(under_flow_west),
    .over_flow(over_flow_west) ,
    .FIFO_Status_out(FIFO_Status_out_west)
  );

  FIFO_N east (
    .clk(clk),
    .rst_n(rst_n),
    .rd(rd_east),
    .wr(in_ports_east.valid),
    .data_in(in_ports_east.data),
    .data_out(buffer_out_ports_east.data),
    .Empty(under_flow_east),
    .over_flow(over_flow_east) ,
    .FIFO_Status_out(FIFO_Status_out_east)
  );

 round_robin_arbiter_5to1 rra (
    .clk(clk),
    .rst_n(rst_n),
    .req(req),
    .grant(grant)
);
  
  
  // ========================================================
    // DATA SELECTOR
    //
    // Arbiter selects ONE FIFO.
    // The corresponding FIFO data is selected.
    // ========================================================

    always_comb begin
  
//  always_ff @(posedge clk) begin
  

        selected_data = '0;

        case ({buffer_out_ports_west.valid,
                buffer_out_ports_east.valid,
                buffer_out_ports_south.valid,
                buffer_out_ports_north.valid,
                buffer_out_ports_local.valid})

            5'b00001: begin
                selected_data = buffer_out_ports_local.data;
            end

            5'b00010: begin
                selected_data = buffer_out_ports_north.data;
            end

            5'b00100: begin
                selected_data = buffer_out_ports_south.data;
            end

            5'b01000: begin
                selected_data = buffer_out_ports_east.data;
            end

            5'b10000: begin
                selected_data = buffer_out_ports_west.data;
            end

            default: begin
                selected_data = '0;
            end

        endcase

    end
  
  assign destination = selected_data[3:0];
  
  Port_Decoder #(
        .NOC_WIDTH  (NOC_WIDTH),
        .NOC_LENGTH (NOC_LENGTH),
        .ROUTER_ID  (ROUTER_ID)
    ) port_decoder (
        .dest_address(destination),
        .port_address(selected_port)
    );

  
 
  always_comb begin

out_ports_local.valid = 1'b0;
out_ports_east.valid  = 1'b0;
out_ports_west.valid  = 1'b0;
out_ports_north.valid = 1'b0;
out_ports_south.valid = 1'b0;

out_ports_local.data = '0;
out_ports_east.data  = '0;
out_ports_west.data  = '0;
out_ports_north.data = '0;
out_ports_south.data = '0;

  if ({buffer_out_ports_west.valid, 
     buffer_out_ports_east.valid, 
     buffer_out_ports_south.valid, 
     buffer_out_ports_north.valid, 
     buffer_out_ports_local.valid} != 5'b00000) begin

    case (selected_port)

        LOCAL_PORT_ID: begin
            out_ports_local.valid = 1'b1;
            out_ports_local.data  = selected_data;
            $display("[%0t] NODE[%0d] -> LOCAL", $time, ROUTER_ID);
        end

        NORTH_PORT_ID: begin
            out_ports_north.valid = 1'b1;
            out_ports_north.data  = selected_data;
            $display("[%0t] NODE[%0d] -> NORTH", $time, ROUTER_ID);
        end

        SOUTH_PORT_ID: begin
            out_ports_south.valid = 1'b1;
            out_ports_south.data  = selected_data;
            $display("[%0t] NODE[%0d] -> SOUTH", $time, ROUTER_ID);
        end

        EAST_PORT_ID: begin
            out_ports_east.valid = 1'b1;
            out_ports_east.data  = selected_data;
            $display("[%0t] NODE[%0d] -> EAST", $time, ROUTER_ID);
        end

        WEST_PORT_ID: begin
            out_ports_west.valid = 1'b1;
            out_ports_west.data  = selected_data;
            $display("[%0t] NODE[%0d] -> WEST", $time, ROUTER_ID);
        end

        default: begin
            out_ports_local.valid = 1'b0;
            out_ports_east.valid  = 1'b0;
            out_ports_west.valid  = 1'b0;
            out_ports_north.valid = 1'b0;
            out_ports_south.valid = 1'b0;
        end

    endcase

end
  end

/*
 
  
  
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n) begin
      out_ports_local.valid <= 1'b0;
out_ports_east.valid  <= 1'b0;
out_ports_west.valid  <= 1'b0;
out_ports_north.valid <= 1'b0;
out_ports_south.valid <= 1'b0;

out_ports_local.data <= '0;
out_ports_east.data  <= '0;
out_ports_west.data  <= '0;
out_ports_north.data <= '0;
out_ports_south.data <= '0;
      
    end
  
  else begin
    
    if ({buffer_out_ports_west.valid, 
     buffer_out_ports_east.valid, 
     buffer_out_ports_south.valid, 
     buffer_out_ports_north.valid, 
     buffer_out_ports_local.valid} != 5'b00000) begin

    case (selected_port)

        LOCAL_PORT_ID: begin
            out_ports_local.valid <= 1'b1;
            out_ports_local.data  <= selected_data;
            $strobe("[%0t] NODE[%0d] -> LOCAL", $time, ROUTER_ID);
        end

        NORTH_PORT_ID: begin
            out_ports_north.valid <= 1'b1;
            out_ports_north.data  <= selected_data;
            $strobe("[%0t] NODE[%0d] -> NORTH", $time, ROUTER_ID);
        end

        SOUTH_PORT_ID: begin
            out_ports_south.valid <= 1'b1;
            out_ports_south.data  <= selected_data;
            $strobe("[%0t] NODE[%0d] -> SOUTH", $time, ROUTER_ID);
        end

        EAST_PORT_ID: begin
            out_ports_east.valid <= 1'b1;
            out_ports_east.data  <= selected_data;
            $strobe("[%0t] NODE[%0d] -> EAST", $time, ROUTER_ID);
        end

        WEST_PORT_ID: begin
            out_ports_west.valid <= 1'b1;
            out_ports_west.data  <= selected_data;
            $strobe("[%0t] NODE[%0d] -> WEST", $time, ROUTER_ID);
        end

        default: begin
            out_ports_local.valid <= 1'b0;
            out_ports_east.valid  <= 1'b0;
            out_ports_west.valid  <= 1'b0;
            out_ports_north.valid <= 1'b0;
            out_ports_south.valid <= 1'b0;
        end

    endcase

end
    
  end
  
   */

endmodule

