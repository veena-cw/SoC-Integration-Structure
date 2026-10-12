module wptr_handler #(parameter PTR_WIDTH=9) (
  input wclk, wrst_n, w_en,
  input [PTR_WIDTH:0] g_rptr_sync,
  output reg [PTR_WIDTH:0] b_wptr, g_wptr,
  output reg full
);

  wire [PTR_WIDTH:0] b_wptr_next;
  wire [PTR_WIDTH:0] g_wptr_next;
   
  reg wrap_around;
  wire wfull;
  
  assign b_wptr_next = b_wptr+(w_en & !full);
  assign g_wptr_next = (b_wptr_next >>1)^b_wptr_next;
  
  always@(posedge wclk or negedge wrst_n) begin
    if(!wrst_n) begin
      b_wptr <= 0; // set default value
      g_wptr <= 0;
    end
    else begin
      b_wptr <= b_wptr_next; // incr binary write pointer
      g_wptr <= g_wptr_next; // incr gray write pointer
    end
  end
  
  always@(posedge wclk or negedge wrst_n) begin
    if(!wrst_n) full <= 0;
    else        full <= wfull;
  end

  //--------------------------------------------------------------------------
  // FULL detection (gray code)
  //
  // PTR_WIDTH >= 2 : FIFO is full when the next write pointer equals the
  //                  synchronized read pointer with its TOP TWO bits inverted
  //                  and the remaining bits equal.
  //
  // PTR_WIDTH <= 1 : there are no "remaining" bits ([PTR_WIDTH-2:0] would be
  //                  an invalid range), and for PTR_WIDTH = 0 there is not even
  //                  a second bit to invert. The pointers are only 1 or 2 bits
  //                  wide, so the full condition is simply "next write pointer
  //                  equals the inverted read pointer":
  //                     PTR_WIDTH = 0 (DEPTH 1) : 1-bit pointers, wrap bit only
  //                     PTR_WIDTH = 1 (DEPTH 2) : 2-bit gray pointers, both
  //                                               bits inverted
  //
  // A generate-if is used instead of `ifdef because `ifdef only sees
  // preprocessor macros, not module parameters like PTR_WIDTH.
  //--------------------------------------------------------------------------
  generate
    if (PTR_WIDTH >= 2) begin : g_full_wide
      assign wfull = (g_wptr_next == {~g_rptr_sync[PTR_WIDTH:PTR_WIDTH-1],
                                       g_rptr_sync[PTR_WIDTH-2:0]});
    end
    else begin : g_full_narrow
      assign wfull = (g_wptr_next == ~g_rptr_sync);
    end
  endgenerate

endmodule
