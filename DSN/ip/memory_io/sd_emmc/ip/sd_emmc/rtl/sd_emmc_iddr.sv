/*`timescale 1ns / 1ps

module IDDR_p(
    input logic reset,
    input logic clock,
    input logic [7:0] in_ddr,
    output logic [7:0] iddr_Q1,
    output logic [7:0] iddr_Q2
    );
    
    
    
    
          
 IDDR #(
  .DDR_CLK_EDGE("OPPOSITE_EDGE")   // "OPPOSITE_EDGE", "SAME_EDGE"
                                    //  or "SAME_EDGE_PIPELINED"
//  .INIT_Q1(1'b0),                   // Initial value of Q1: 1'b0 or 1'b1
//  .INIT_Q2(1'b0),                   // Initial value of Q2: 1'b0 or 1'b1
//  .SRTYPE("SYNC")                   // Set/Reset type: "SYNC" or "ASYNC"
  ) IDDR_inst0 (
  .Q1(iddr_Q1[0]),                          // 1-bit output for positive edge of clock
  .Q2(iddr_Q2[0]),                          // 1-bit output for negative edge of clock
  .C(clock),
  .CE(1'b1),                          // 1-bit clock enable input
  .D(in_ddr[0]),
  .R(reset),
  .S(1'b0)
  );
  
    IDDR #(
  .DDR_CLK_EDGE("OPPOSITE_EDGE")   // "OPPOSITE_EDGE", "SAME_EDGE"
                                    //  or "SAME_EDGE_PIPELINED"
//  .INIT_Q1(1'b0),                   // Initial value of Q1: 1'b0 or 1'b1
//  .INIT_Q2(1'b0),                   // Initial value of Q2: 1'b0 or 1'b1
//  .SRTYPE("SYNC")                   // Set/Reset type: "SYNC" or "ASYNC"
  ) IDDR_inst1 (
  .Q1(iddr_Q1[1]),                          // 1-bit output for positive edge of clock
  .Q2(iddr_Q2[1]),                          // 1-bit output for negative edge of clock
  .C(clock),
  .CE(1'b1),                          // 1-bit clock enable input
  .D(in_ddr[1]),
  .R(reset),
  .S(1'b0)
  );

  IDDR #(
  .DDR_CLK_EDGE("OPPOSITE_EDGE")   // "OPPOSITE_EDGE", "SAME_EDGE"
                                    //  or "SAME_EDGE_PIPELINED"
//  .INIT_Q1(1'b0),                   // Initial value of Q1: 1'b0 or 1'b1
//  .INIT_Q2(1'b0),                   // Initial value of Q2: 1'b0 or 1'b1
//  .SRTYPE("SYNC")                   // Set/Reset type: "SYNC" or "ASYNC"
  ) IDDR_inst2 (
  .Q1(iddr_Q1[2]),                          // 1-bit output for positive edge of clock
  .Q2(iddr_Q2[2]),                          // 1-bit output for negative edge of clock
  .C(clock),
  .CE(1'b1),                          // 1-bit clock enable input
  .D(in_ddr[2]),
  .R(reset),
  .S(1'b0)
  );

  IDDR #(
  .DDR_CLK_EDGE("OPPOSITE_EDGE")   // "OPPOSITE_EDGE", "SAME_EDGE"
                                    //  or "SAME_EDGE_PIPELINED"
//  .INIT_Q1(1'b0),                   // Initial value of Q1: 1'b0 or 1'b1
//  .INIT_Q2(1'b0),                   // Initial value of Q2: 1'b0 or 1'b1
//  .SRTYPE("SYNC")                   // Set/Reset type: "SYNC" or "ASYNC"
  ) IDDR_inst3 (
  .Q1(iddr_Q1[3]),                          // 1-bit output for positive edge of clock
  .Q2(iddr_Q2[3]),                          // 1-bit output for negative edge of clock
  .C(clock),
  .CE(1'b1),                          // 1-bit clock enable input
  .D(in_ddr[3]),
  .R(reset),
  .S(1'b0)
  );

  IDDR #(
  .DDR_CLK_EDGE("OPPOSITE_EDGE")   // "OPPOSITE_EDGE", "SAME_EDGE"
                                    //  or "SAME_EDGE_PIPELINED"
//  .INIT_Q1(1'b0),                   // Initial value of Q1: 1'b0 or 1'b1
//  .INIT_Q2(1'b0),                   // Initial value of Q2: 1'b0 or 1'b1
//  .SRTYPE("SYNC")                   // Set/Reset type: "SYNC" or "ASYNC"
  ) IDDR_inst4 (
  .Q1(iddr_Q1[4]),                          // 1-bit output for positive edge of clock
  .Q2(iddr_Q2[4]),                          // 1-bit output for negative edge of clock
  .C(clock),
  .CE(1'b1),                          // 1-bit clock enable input
  .D(in_ddr[4]),
  .R(reset),
  .S(1'b0)
  );

  IDDR #(
  .DDR_CLK_EDGE("OPPOSITE_EDGE")   // "OPPOSITE_EDGE", "SAME_EDGE"
                                    //  or "SAME_EDGE_PIPELINED"
//  .INIT_Q1(1'b0),                   // Initial value of Q1: 1'b0 or 1'b1
//  .INIT_Q2(1'b0),                   // Initial value of Q2: 1'b0 or 1'b1
//  .SRTYPE("SYNC")                   // Set/Reset type: "SYNC" or "ASYNC"
  ) IDDR_inst5 (
  .Q1(iddr_Q1[5]),                          // 1-bit output for positive edge of clock
  .Q2(iddr_Q2[5]),                          // 1-bit output for negative edge of clock
  .C(clock),
  .CE(1'b1),                          // 1-bit clock enable input
  .D(in_ddr[5]),
  .R(reset),
  .S(1'b0)
  );

  IDDR #(
  .DDR_CLK_EDGE("OPPOSITE_EDGE")   // "OPPOSITE_EDGE", "SAME_EDGE"
                                    //  or "SAME_EDGE_PIPELINED"
//  .INIT_Q1(1'b0),                   // Initial value of Q1: 1'b0 or 1'b1
//  .INIT_Q2(1'b0),                   // Initial value of Q2: 1'b0 or 1'b1
//  .SRTYPE("SYNC")                   // Set/Reset type: "SYNC" or "ASYNC"
  ) IDDR_inst6 (
  .Q1(iddr_Q1[6]),                          // 1-bit output for positive edge of clock
  .Q2(iddr_Q2[6]),                          // 1-bit output for negative edge of clock
  .C(clock),
  .CE(1'b1),                          // 1-bit clock enable input
  .D(in_ddr[6]),
  .R(reset),
  .S(1'b0)
  );

  IDDR #(
  .DDR_CLK_EDGE("OPPOSITE_EDGE")   // "OPPOSITE_EDGE", "SAME_EDGE"
                                    //  or "SAME_EDGE_PIPELINED"
//  .INIT_Q1(1'b0),                   // Initial value of Q1: 1'b0 or 1'b1
//  .INIT_Q2(1'b0),                   // Initial value of Q2: 1'b0 or 1'b1
//  .SRTYPE("SYNC")                   // Set/Reset type: "SYNC" or "ASYNC"
  ) IDDR_inst7 (
  .Q1(iddr_Q1[7]),                          // 1-bit output for positive edge of clock
  .Q2(iddr_Q2[7]),                          // 1-bit output for negative edge of clock
  .C(clock),
  .CE(1'b1),                          // 1-bit clock enable input
  .D(in_ddr[7]),
  .R(reset),
  .S(1'b0)
  ); 

endmodule*/




`timescale 1ns / 1ps

module IDDR_p(
    input logic reset,
    input logic clock,
    input logic [7:0] in_ddr,
    output logic [7:0] iddr_Q1,
    output logic [7:0] iddr_Q2
    );

  // Q1 captures in_ddr on the rising edge of clock
  always_ff @(posedge clock or posedge reset) begin
    if (reset)
      iddr_Q1 <= 8'b0;
    else
      iddr_Q1 <= in_ddr;
  end

  // Q2 captures in_ddr on the falling edge of clock (OPPOSITE_EDGE)
  always_ff @(negedge clock or posedge reset) begin
    if (reset)
      iddr_Q2 <= 8'b0;
    else
      iddr_Q2 <= in_ddr;
  end

endmodule
