module Port_Decoder #(
    parameter int NOC_WIDTH  = 4,
    parameter int NOC_LENGTH = 4,
    parameter int ROUTER_ID  = 0
) (
  input  logic [3:0] dest_address,
    output logic [2:0] port_address
);

    localparam int X_ADDRESS_WIDTH = $clog2(NOC_WIDTH);
    localparam int Y_ADDRESS_WIDTH = $clog2(NOC_LENGTH);
  

    // Port encoding
    localparam logic [2:0] LOCAL_PORT_ID = 3'd0;
    localparam logic [2:0] NORTH_PORT_ID = 3'd1;
    localparam logic [2:0] SOUTH_PORT_ID = 3'd2;
    localparam logic [2:0] EAST_PORT_ID  = 3'd3;
    localparam logic [2:0] WEST_PORT_ID  = 3'd4;

    logic [X_ADDRESS_WIDTH-1:0] router_x;
    logic [Y_ADDRESS_WIDTH-1:0] router_y;

    logic [X_ADDRESS_WIDTH-1:0] dest_x;
    logic [Y_ADDRESS_WIDTH-1:0] dest_y;
  logic [3:0] id = ROUTER_ID;

    // ---------------------------------------------------------
    // Convert ROUTER_ID into X/Y coordinates
    //
    // ROUTER_ID = Y * NOC_WIDTH + X
    // ---------------------------------------------------------
    always_comb begin

        router_x = ROUTER_ID % NOC_WIDTH;
        router_y = ROUTER_ID / NOC_WIDTH;

        dest_x = dest_address % NOC_WIDTH;
        dest_y = dest_address / NOC_WIDTH;

    end

    // ---------------------------------------------------------
    // XY Routing
    // First route in X direction.
    // Once X matches, route in Y direction.
    // ---------------------------------------------------------
    always_comb begin

        port_address = 3'd5;

        // Destination is this router
        if (dest_address == ROUTER_ID) begin

            port_address = LOCAL_PORT_ID;

        end

        // X direction
        else if (dest_x > router_x) begin

            port_address = EAST_PORT_ID;

        end

        else if (dest_x < router_x) begin

            port_address = WEST_PORT_ID;

        end

        // X is already aligned -> route in Y
        else if (dest_y > router_y) begin

            port_address = SOUTH_PORT_ID;

        end

        else if (dest_y < router_y) begin

            port_address = NORTH_PORT_ID;

        end

        else begin

            port_address = 3'd5;
        end

    end

endmodule