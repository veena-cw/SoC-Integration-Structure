/*`timescale 1ns / 1ps

module ODDR_p(
  input logic reset,
  input logic clock,
  input logic [7:0] d1_wire,
  input logic [7:0] d2_wire,
  output logic  [7:0] oq
  );

 
  ODDR  #(
  .DDR_CLK_EDGE ( "SAME_EDGE" ),           // "SAME_EDGE" or "OPPOSITE_EDGE"
  .INIT         ( 1'b0 ),                  // Initial value of    Q:1'b0 or 1'b1
  .SRTYPE       ( "SYNC" )                 // Set/Reset type: "SYNC" or "ASYNC"
  ) ODDR_inst0 (
  .Q(oq[0]),                               // 1-bit DDR output logic 
  .C(clock),                               // 1-bit clock input
  .CE(1'b1),                               // 1-bit clock enable input
  .D1(d1_wire[0]),                         // 1-bit data  input logic (positive edge)
  .D2(d2_wire[0]),                         // 1-bit data  input logic (negative edge)
  .R(reset),                               // 1-bit reset
  .S(1'b0)                                 // 1-bit set
  );
  
  ODDR  #(
  .DDR_CLK_EDGE ( "SAME_EDGE" ),           // "SAME_EDGE" or "OPPOSITE_EDGE"
  .INIT         ( 1'b0 ),                  // Initial value of    Q:1'b0 or 1'b1
  .SRTYPE       ( "SYNC" )                 // Set/Reset type: "SYNC" or "ASYNC"
  ) ODDR_inst1 (
  .Q(oq[1]),                               // 1-bit DDR output logic 
  .C(clock),                               // 1-bit clock input
  .CE(1'b1),                               // 1-bit clock enable input
  .D1(d1_wire[1]),                         // 1-bit data  input logic (positive edge)
  .D2(d2_wire[1]),                         // 1-bit data  input logic (negative edge)
  .R(reset),                               // 1-bit reset
  .S(1'b0)                                 // 1-bit set
  );

  ODDR  #(
  .DDR_CLK_EDGE ( "SAME_EDGE" ),           // "SAME_EDGE" or "OPPOSITE_EDGE"
  .INIT         ( 1'b0 ),                  // Initial value of    Q:1'b0 or 1'b1
  .SRTYPE       ( "SYNC" )                 // Set/Reset type: "SYNC" or "ASYNC"
  ) ODDR_inst2 (
  .Q(oq[2]),                               // 1-bit DDR output logic 
  .C(clock),                               // 1-bit clock input
  .CE(1'b1),                               // 1-bit clock enable input
  .D1(d1_wire[2]),                         // 1-bit data  input logic (positive edge)
  .D2(d2_wire[2]),                         // 1-bit data  input logic (negative edge)
  .R(reset),                               // 1-bit reset
  .S(1'b0)                                 // 1-bit set
  );

  ODDR  #(
  .DDR_CLK_EDGE ( "SAME_EDGE" ),           // "SAME_EDGE" or "OPPOSITE_EDGE"
  .INIT         ( 1'b0 ),                  // Initial value of    Q:1'b0 or 1'b1
  .SRTYPE       ( "SYNC" )                 // Set/Reset type: "SYNC" or "ASYNC"
  ) ODDR_inst3 (
  .Q(oq[3]),                               // 1-bit DDR output logic 
  .C(clock),                               // 1-bit clock input
  .CE(1'b1),                               // 1-bit clock enable input
  .D1(d1_wire[3]),                         // 1-bit data  input logic (positive edge)
  .D2(d2_wire[3]),                         // 1-bit data  input logic (negative edge)
  .R(reset),                               // 1-bit reset
  .S(1'b0)                                 // 1-bit set
  );

  ODDR  #(
  .DDR_CLK_EDGE ( "SAME_EDGE" ),           // "SAME_EDGE" or "OPPOSITE_EDGE"
  .INIT         ( 1'b0 ),                  // Initial value of    Q:1'b0 or 1'b1
  .SRTYPE       ( "SYNC" )                 // Set/Reset type: "SYNC" or "ASYNC"
  ) ODDR_inst4 (
  .Q(oq[4]),                               // 1-bit DDR output logic 
  .C(clock),                               // 1-bit clock input
  .CE(1'b1),                               // 1-bit clock enable input
  .D1(d1_wire[4]),                         // 1-bit data  input logic (positive edge)
  .D2(d2_wire[4]),                         // 1-bit data  input logic (negative edge)
  .R(reset),                               // 1-bit reset
  .S(1'b0)                                 // 1-bit set
  );

  ODDR  #(
  .DDR_CLK_EDGE ( "SAME_EDGE" ),           // "SAME_EDGE" or "OPPOSITE_EDGE"
  .INIT         ( 1'b0 ),                  // Initial value of    Q:1'b0 or 1'b1
  .SRTYPE       ( "SYNC" )                 // Set/Reset type: "SYNC" or "ASYNC"
  ) ODDR_inst5 (
  .Q(oq[5]),                               // 1-bit DDR output logic 
  .C(clock),                               // 1-bit clock input
  .CE(1'b1),                               // 1-bit clock enable input
  .D1(d1_wire[5]),                         // 1-bit data  input logic (positive edge)
  .D2(d2_wire[5]),                         // 1-bit data  input logic (negative edge)
  .R(reset),                               // 1-bit reset
  .S(1'b0)                                 // 1-bit set
  );

  ODDR  #(
  .DDR_CLK_EDGE ( "SAME_EDGE" ),           // "SAME_EDGE" or "OPPOSITE_EDGE"
  .INIT         ( 1'b0 ),                  // Initial value of    Q:1'b0 or 1'b1
  .SRTYPE       ( "SYNC" )                 // Set/Reset type: "SYNC" or "ASYNC"
  ) ODDR_inst6 (
  .Q(oq[6]),                               // 1-bit DDR output logic 
  .C(clock),                               // 1-bit clock input
  .CE(1'b1),                               // 1-bit clock enable input
  .D1(d1_wire[6]),                         // 1-bit data  input logic (positive edge)
  .D2(d2_wire[6]),                         // 1-bit data  input logic (negative edge)
  .R(reset),                               // 1-bit reset
  .S(1'b0)                                 // 1-bit set
  );

  ODDR  #(
  .DDR_CLK_EDGE ( "SAME_EDGE" ),           // "SAME_EDGE" or "OPPOSITE_EDGE"
  .INIT         ( 1'b0 ),                  // Initial value of    Q:1'b0 or 1'b1
  .SRTYPE       ( "SYNC" )                 // Set/Reset type: "SYNC" or "ASYNC"
  ) ODDR_inst7 (
  .Q(oq[7]),                               // 1-bit DDR output logic 
  .C(clock),                               // 1-bit clock input
  .CE(1'b1),                               // 1-bit clock enable input
  .D1(d1_wire[7]),                         // 1-bit data  input logic (positive edge)
  .D2(d2_wire[7]),                         // 1-bit data  input logic (negative edge)
  .R(reset),                               // 1-bit reset
  .S(1'b0)                                 // 1-bit set
  );

endmodule*/



`timescale 1ns / 1ps

module ODDR_p(
  input logic reset,
  input logic clock,
  input logic [7:0] d1_wire,
  input logic [7:0] d2_wire,
  output logic [7:0] oq
  );

  logic [7:0] q1_reg, q2_reg;

  // SAME_EDGE: both D1 and D2 are sampled on the rising edge of clock,
  // internally re-timed so D2 aligns with D1 at the output mux
  always_ff @(posedge clock or posedge reset) begin
    if (reset) begin
      q1_reg <= 8'b0;
      q2_reg <= 8'b0;
    end else begin
      q1_reg <= d1_wire;
      q2_reg <= d2_wire;
    end
  end

  // Output mux: D1 half during clock-high, D2 half during clock-low
  assign oq = clock ? q1_reg : q2_reg;

endmodule
