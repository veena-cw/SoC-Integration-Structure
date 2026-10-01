module Node #(
    parameter int FLIT_SIZE  = 18,
    parameter int NOC_WIDTH  = 4,
    parameter int NOC_LENGTH = 4,
    parameter int NODE_ID    = 0
)(
    input logic clk,
    input logic rst_n,
    output logic [3:0] router_id,

    ReqAckIO local_in,
    ReqAckIO local_out,

    ReqAckIO north_in,
    ReqAckIO north_out,

    ReqAckIO south_in,
    ReqAckIO south_out,

    ReqAckIO east_in,
    ReqAckIO east_out,

    ReqAckIO west_in,
    ReqAckIO west_out
);

  assign router_id=NODE_ID;
    Router #(
        .FLIT_SIZE  (FLIT_SIZE),
        .NOC_WIDTH  (NOC_WIDTH),
        .NOC_LENGTH (NOC_LENGTH),
        .ROUTER_ID  (NODE_ID)
    ) router (
        .clk              (clk),
        .rst_n            (rst_n),

        .in_ports_local   (local_in),
        .in_ports_north   (north_in),
        .in_ports_south   (south_in),
        .in_ports_east    (east_in),
        .in_ports_west    (west_in),

        .out_ports_local  (local_out),
        .out_ports_north  (north_out),
        .out_ports_south  (south_out),
        .out_ports_east   (east_out),
        .out_ports_west   (west_out)
    );

endmodule