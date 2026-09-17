module fifo_mem #(parameter DEPTH=8, DATA_WIDTH=128, PTR_WIDTH=3) (
  input wclk, w_en, rclk, r_en,
  input [PTR_WIDTH:0] b_wptr, b_rptr,
  input [DATA_WIDTH-1:0] data_in,
  input full, empty,
  output logic [DATA_WIDTH-1:0] data_out
  //output reg [DATA_WIDTH-1:0] data_out
);
  logic [DATA_WIDTH-1:0] fifo[0:DEPTH-1];
  //logic [DATA_WIDTH-1:0] fifo [0:DEPTH-1];
integer i;
initial begin
    for (int i = 0; i < DEPTH; i++) begin
        fifo[i] = '0;
    end
end
  
  always_ff@(posedge wclk) begin
    if(w_en & !full) begin
      fifo[b_wptr[PTR_WIDTH-1:0]] <= data_in;
    end
  end
  /*
  always@(posedge rclk) begin
    if(r_en & !empty) begin
      data_out <= fifo[b_rptr[PTR_WIDTH-1:0]];
    end
  end
  */
  assign data_out = r_en ? fifo[b_rptr[PTR_WIDTH-1:0]] : 'h0 ;
  
endmodule
