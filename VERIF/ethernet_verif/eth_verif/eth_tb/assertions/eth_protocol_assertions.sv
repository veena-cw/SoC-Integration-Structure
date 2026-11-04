module eth_protocol_assertions(input logic clk,input logic rst_n,input logic valid,input logic ready,input logic last);
 property p_hold_valid;
 @(posedge clk) disable iff(!rst_n) valid&&!ready |=> valid;
 endproperty a_hold_valid:assert property(p_hold_valid);

endmodule

