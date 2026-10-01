


`timescale 1ns/1ps

module NoC_4x4_tb;

    // =========================================================
    // PARAMETERS
    // =========================================================

    localparam int FLIT_SIZE  = 18;
    localparam int NOC_WIDTH  = 4;
    localparam int NOC_LENGTH = 4;

    localparam int NUM_NODES = 16;


    // =========================================================
    // CLOCK / RESET
    // =========================================================

    logic clk;
    logic rst_n;
    logic router_id;


    // =========================================================
    // LOCAL INTERFACES
    //
    // One local input/output for each node.
    // =========================================================

  ReqAckIO local_in  [0:15] ();
  ReqAckIO local_out [0:15] ();


    // =========================================================
    // INTERNAL MESH CONNECTIONS
    //
    // north_in/out
    // south_in/out
    // east_in/out
    // west_in/out
    //
    // Each node gets five interfaces.
    // =========================================================

  ReqAckIO north_in  [0:15] ();
  ReqAckIO north_out [0:15] ();

  ReqAckIO south_in  [0:15] ();
  ReqAckIO south_out [0:15] ();

  ReqAckIO east_in   [0:15] ();
  ReqAckIO east_out  [0:15] ();

  ReqAckIO west_in   [0:15] ();
  ReqAckIO west_out  [0:15] ();


    // =========================================================
    // NODE GENERATION
    // =========================================================

    genvar i;

    generate

        for (i = 0; i < NUM_NODES; i = i + 1) begin : NODE_GEN

            Node #(
                .FLIT_SIZE  (FLIT_SIZE),
                .NOC_WIDTH  (NOC_WIDTH),
                .NOC_LENGTH (NOC_LENGTH),
                .NODE_ID    (i)
            ) node_inst (

                .clk       (clk),
                .rst_n     (rst_n),

                .local_in  (local_in[i]),
                .local_out (local_out[i]),

                .north_in  (north_in[i]),
                .north_out (north_out[i]),

                .south_in  (south_in[i]),
                .south_out (south_out[i]),

                .east_in   (east_in[i]),
                .east_out  (east_out[i]),

                .west_in   (west_in[i]),
                .west_out  (west_out[i])
            );

        end

    endgenerate 

//============================================================
// 4x4 NoC MESH CONNECTIONS
//
//        0 ---- 1 ---- 2 ---- 3
//        |      |      |      |
//        4 ---- 5 ---- 6 ---- 7
//        |      |      |      |
//        8 ---- 9 ---- 10 --- 11
//        |      |      |      |
//       12 --- 13 ---- 14 --- 15
//
// EAST_OUT  -> neighbor WEST_IN
// WEST_OUT  -> neighbor EAST_IN
// NORTH_OUT -> neighbor SOUTH_IN
// SOUTH_OUT -> neighbor NORTH_IN
//============================================================


//============================================================
// ROW 0 : 0 <-> 1 <-> 2 <-> 3
//============================================================

// Node 0 <-> Node 1
assign west_in[1].valid = east_out[0].valid;
assign west_in[1].data  = east_out[0].data;

assign east_in[0].valid = west_out[1].valid;
assign east_in[0].data  = west_out[1].data;


// Node 1 <-> Node 2
assign west_in[2].valid = east_out[1].valid;
assign west_in[2].data  = east_out[1].data;

assign east_in[1].valid = west_out[2].valid;
assign east_in[1].data  = west_out[2].data;


// Node 2 <-> Node 3
assign west_in[3].valid = east_out[2].valid;
assign west_in[3].data  = east_out[2].data;

assign east_in[2].valid = west_out[3].valid;
assign east_in[2].data  = west_out[3].data;


//============================================================
// ROW 1 : 4 <-> 5 <-> 6 <-> 7
//============================================================

// Node 4 <-> Node 5
assign west_in[5].valid = east_out[4].valid;
assign west_in[5].data  = east_out[4].data;

assign east_in[4].valid = west_out[5].valid;
assign east_in[4].data  = west_out[5].data;


// Node 5 <-> Node 6
assign west_in[6].valid = east_out[5].valid;
assign west_in[6].data  = east_out[5].data;

assign east_in[5].valid = west_out[6].valid;
assign east_in[5].data  = west_out[6].data;


// Node 6 <-> Node 7
assign west_in[7].valid = east_out[6].valid;
assign west_in[7].data  = east_out[6].data;

assign east_in[6].valid = west_out[7].valid;
assign east_in[6].data  = west_out[7].data;


//============================================================
// ROW 2 : 8 <-> 9 <-> 10 <-> 11
//============================================================

// Node 8 <-> Node 9
assign west_in[9].valid = east_out[8].valid;
assign west_in[9].data  = east_out[8].data;

assign east_in[8].valid = west_out[9].valid;
assign east_in[8].data  = west_out[9].data;


// Node 9 <-> Node 10
assign west_in[10].valid = east_out[9].valid;
assign west_in[10].data  = east_out[9].data;

assign east_in[9].valid = west_out[10].valid;
assign east_in[9].data  = west_out[10].data;


// Node 10 <-> Node 11
assign west_in[11].valid = east_out[10].valid;
assign west_in[11].data  = east_out[10].data;

assign east_in[10].valid = west_out[11].valid;
assign east_in[10].data  = west_out[11].data;


//============================================================
// ROW 3 : 12 <-> 13 <-> 14 <-> 15
//============================================================

// Node 12 <-> Node 13
assign west_in[13].valid = east_out[12].valid;
assign west_in[13].data  = east_out[12].data;

assign east_in[12].valid = west_out[13].valid;
assign east_in[12].data  = west_out[13].data;


// Node 13 <-> Node 14
assign west_in[14].valid = east_out[13].valid;
assign west_in[14].data  = east_out[13].data;

assign east_in[13].valid = west_out[14].valid;
assign east_in[13].data  = west_out[14].data;


// Node 14 <-> Node 15
assign west_in[15].valid = east_out[14].valid;
assign west_in[15].data  = east_out[14].data;

assign east_in[14].valid = west_out[15].valid;
assign east_in[14].data  = west_out[15].data;


//============================================================
// COLUMN 0 : 0 <-> 4 <-> 8 <-> 12
//============================================================

  assign north_in[4].valid = south_out[0].valid;
  assign north_in[4].data = south_out[0].data;
  
  assign north_in[8].valid = south_out[4].valid;
  assign north_in[8].data = south_out[4].data;
  
  assign north_in[12].valid = south_out[8].valid;
  assign north_in[12].data = south_out[8].data;
  
  assign south_in[0].valid = north_out[4].valid;
  assign south_in[0].data = north_out[4].data;
      
  assign south_in[4].valid = north_out[8].valid;
  assign south_in[4].data = north_out[8].data;
      
  assign south_in[8].valid = north_out[12].valid;
  assign south_in[8].data = north_out[12].data;
  

//============================================================
// COLUMN 1 : 1 <-> 5 <-> 9 <-> 13
//============================================================

  assign north_in[5].valid = south_out[1].valid;
  assign north_in[5].data = south_out[1].data;
  
  assign north_in[9].valid = south_out[5].valid;
  assign north_in[9].data = south_out[5].data;
  
  assign north_in[13].valid = south_out[9].valid;
  assign north_in[13].data = south_out[9].data;
  
  assign south_in[1].valid = north_out[5].valid;
  assign south_in[1].data = north_out[5].data;
      
  assign south_in[5].valid = north_out[9].valid;
  assign south_in[5].data = north_out[9].data;
      
  assign south_in[9].valid = north_out[13].valid;
  assign south_in[9].data = north_out[13].data;

//============================================================
// COLUMN 2 : 2 <-> 6 <-> 10 <-> 14
//============================================================

  assign north_in[6].valid = south_out[2].valid;
  assign north_in[6].data = south_out[2].data;
  
  assign north_in[10].valid = south_out[6].valid;
  assign north_in[10].data = south_out[6].data;
  
  assign north_in[14].valid = south_out[10].valid;
  assign north_in[14].data = south_out[10].data;
  
  assign south_in[2].valid = north_out[6].valid;
  assign south_in[2].data = north_out[6].data;
      
  assign south_in[6].valid = north_out[10].valid;
  assign south_in[6].data = north_out[10].data;
      
  assign south_in[10].valid = north_out[14].valid;
  assign south_in[10].data = north_out[14].data;


//============================================================
// COLUMN 3 : 3 <-> 7 <-> 11 <-> 15
//============================================================

  assign north_in[7].valid = south_out[3].valid;
  assign north_in[7].data = south_out[3].data;
  
  assign north_in[11].valid = south_out[7].valid;
  assign north_in[11].data = south_out[7].data;
  
  assign north_in[15].valid = south_out[11].valid;
  assign north_in[15].data = south_out[11].data;
  
  assign south_in[3].valid = north_out[7].valid;
  assign south_in[3].data = north_out[7].data;
      
  assign south_in[7].valid = north_out[11].valid;
  assign south_in[7].data = north_out[11].data;
      
  assign south_in[11].valid = north_out[15].valid;
  assign south_in[11].data = north_out[15].data;
  
    // =========================================================
    // CLOCK
    // =========================================================

    initial begin

        clk = 1'b0;

        forever #5 clk = ~clk;

    end


    // =========================================================
    // RESET
    // =========================================================

    task automatic reset_noc();

    begin

        rst_n = 1'b0;

        local_in[0].valid  = 1'b0;
        local_in[1].valid  = 1'b0;
        local_in[2].valid  = 1'b0;
        local_in[3].valid  = 1'b0;
        local_in[4].valid  = 1'b0;
        local_in[5].valid  = 1'b0;
        local_in[6].valid  = 1'b0;
        local_in[7].valid  = 1'b0;
        local_in[8].valid  = 1'b0;
        local_in[9].valid  = 1'b0;
        local_in[10].valid = 1'b0;
        local_in[11].valid = 1'b0;
        local_in[12].valid = 1'b0;
        local_in[13].valid = 1'b0;
        local_in[14].valid = 1'b0;
        local_in[15].valid = 1'b0;

        local_in[0].data  = '0;
        local_in[1].data  = '0;
        local_in[2].data  = '0;
        local_in[3].data  = '0;
        local_in[4].data  = '0;
        local_in[5].data  = '0;
        local_in[6].data  = '0;
        local_in[7].data  = '0;
        local_in[8].data  = '0;
        local_in[9].data  = '0;
        local_in[10].data = '0;
        local_in[11].data = '0;
        local_in[12].data = '0;
        local_in[13].data = '0;
        local_in[14].data = '0;
        local_in[15].data = '0;

        repeat (5)
            @(posedge clk);

        rst_n = 1'b1;

        repeat (2)
            @(posedge clk);

        $display("");
        $display("==========================================");
        $display("4x4 NoC RESET COMPLETE");
        $display("==========================================");
        $display("");

    end

endtask


    // =========================================================
    // CREATE FLIT
    //
    // FLIT[3:0] = destination
    // FLIT[17:4] = payload
    // =========================================================

    function automatic logic [FLIT_SIZE-1:0]
        make_flit(
            input logic [3:0] destination,
            input logic [13:0] payload
        );

        begin

            make_flit = {
                payload,
                destination
            };

        end

    endfunction


    // =========================================================
    // SEND PACKET FROM LOCAL NODE
    // =========================================================

   task automatic send_packet(
    input int source_node,
    input logic [3:0] destination,
    input logic [13:0] payload
);

    logic [FLIT_SIZE-1:0] flit;

    begin

        flit = make_flit(destination, payload);

      @(posedge clk);

        case (source_node)

            0: begin
                local_in[0].data  = flit;
                local_in[0].valid = 1'b1;
            end

            1: begin
                local_in[1].data  = flit;
                local_in[1].valid = 1'b1;
            end

            2: begin
                local_in[2].data  = flit;
                local_in[2].valid = 1'b1;
            end

            3: begin
                local_in[3].data  = flit;
                local_in[3].valid = 1'b1;
            end

            4: begin
                local_in[4].data  = flit;
                local_in[4].valid = 1'b1;
            end

            5: begin
                local_in[5].data  = flit;
                local_in[5].valid = 1'b1;
            end

            6: begin
                local_in[6].data  = flit;
                local_in[6].valid = 1'b1;
            end

            7: begin
                local_in[7].data  = flit;
                local_in[7].valid = 1'b1;
            end

            8: begin
                local_in[8].data  = flit;
                local_in[8].valid = 1'b1;
            end

            9: begin
                local_in[9].data  = flit;
                local_in[9].valid = 1'b1;
            end

            10: begin
                local_in[10].data  = flit;
                local_in[10].valid = 1'b1;
            end

            11: begin
                local_in[11].data  = flit;
                local_in[11].valid = 1'b1;
            end

            12: begin
                local_in[12].data  = flit;
                local_in[12].valid = 1'b1;
            end

            13: begin
                local_in[13].data  = flit;
                local_in[13].valid = 1'b1;
            end

            14: begin
                local_in[14].data  = flit;
                local_in[14].valid = 1'b1;
            end

            15: begin
                local_in[15].data  = flit;
                local_in[15].valid = 1'b1;
            end 

            default: begin
                $error("Invalid source node %0d", source_node);
            end

        endcase


        $display(
            "[TB] SEND: Node %0d -> Node %0d | FLIT=%h",
            source_node,
            destination,
            flit
        );


      @(posedge clk);

        // Deassert the selected interface

        case (source_node)

            0:  local_in[0].valid  = 1'b0;
            1:  local_in[1].valid  = 1'b0;
            2:  local_in[2].valid  = 1'b0;
            3:  local_in[3].valid  = 1'b0;
            4:  local_in[4].valid  = 1'b0;
            5:  local_in[5].valid  = 1'b0;
            6:  local_in[6].valid  = 1'b0;
            7:  local_in[7].valid  = 1'b0;
            8:  local_in[8].valid  = 1'b0;
            9:  local_in[9].valid  = 1'b0;
            10: local_in[10].valid = 1'b0;
            11: local_in[11].valid = 1'b0;
            12: local_in[12].valid = 1'b0;
            13: local_in[13].valid = 1'b0;
            14: local_in[14].valid = 1'b0;
            15: local_in[15].valid = 1'b0;

        endcase

    end

endtask

    // =========================================================
    // WAIT FOR LOCAL DESTINATION
    // =========================================================

   task automatic wait_for_local(
    input int destination_node,
    input logic [FLIT_SIZE-1:0] expected_flit
);

    int timeout;

    begin

        timeout = 0;

        while (timeout < 100) begin

            @(posedge clk);

            case (destination_node)

                0: begin
                    if (local_out[0].valid) begin
                        if (local_out[0].data === expected_flit)
                            $display("[PASS] Node 0 received %h", local_out[0].data);
                        else
                            $error("[FAIL] Node 0 expected=%h got=%h",
                                   expected_flit, local_out[0].data);
                        return;
                    end
                end

                1: begin
                    if (local_out[1].valid) begin
                        if (local_out[1].data === expected_flit)
                            $display("[PASS] Node 1 received %h", local_out[1].data);
                        else
                            $error("[FAIL] Node 1 expected=%h got=%h",
                                   expected_flit, local_out[1].data);
                        return;
                    end
                end

                2: begin
                    if (local_out[2].valid) begin
                        if (local_out[2].data === expected_flit)
                            $display("[PASS] Node 2 received %h", local_out[2].data);
                        else
                            $error("[FAIL] Node 2 expected=%h got=%h",
                                   expected_flit, local_out[2].data);
                        return;
                    end
                end

                3: begin
                    if (local_out[3].valid) begin
                        if (local_out[3].data === expected_flit)
                            $display("[PASS] Node 3 received %h", local_out[3].data);
                        else
                            $error("[FAIL] Node 3 expected=%h got=%h",
                                   expected_flit, local_out[3].data);
                        return;
                    end
                end

                4: begin
                    if (local_out[4].valid) begin
                        if (local_out[4].data === expected_flit)
                            $display("[PASS] Node 4 received %h", local_out[4].data);
                        else
                            $error("[FAIL] Node 4 expected=%h got=%h",
                                   expected_flit, local_out[4].data);
                        return;
                    end
                end

                5: begin
                    if (local_out[5].valid) begin
                        if (local_out[5].data === expected_flit)
                            $display("[PASS] Node 5 received %h", local_out[5].data);
                        else
                            $error("[FAIL] Node 5 expected=%h got=%h",
                                   expected_flit, local_out[5].data);
                        return;
                    end
                end

                6: begin
                    if (local_out[6].valid) begin
                        if (local_out[6].data === expected_flit)
                            $display("[PASS] Node 6 received %h", local_out[6].data);
                        else
                            $error("[FAIL] Node 6 expected=%h got=%h",
                                   expected_flit, local_out[6].data);
                        return;
                    end
                end

                7: begin
                    if (local_out[7].valid) begin
                        if (local_out[7].data === expected_flit)
                            $display("[PASS] Node 7 received %h", local_out[7].data);
                        else
                            $error("[FAIL] Node 7 expected=%h got=%h",
                                   expected_flit, local_out[7].data);
                        return;
                    end
                end

                8: begin
                    if (local_out[8].valid) begin
                        if (local_out[8].data === expected_flit)
                            $display("[PASS] Node 8 received %h", local_out[8].data);
                        else
                            $error("[FAIL] Node 8 expected=%h got=%h",
                                   expected_flit, local_out[8].data);
                        return;
                    end
                end

                9: begin
                    if (local_out[9].valid) begin
                        if (local_out[9].data === expected_flit)
                            $display("[PASS] Node 9 received %h", local_out[9].data);
                        else
                            $error("[FAIL] Node 9 expected=%h got=%h",
                                   expected_flit, local_out[9].data);
                        return;
                    end
                end

                10: begin
                    if (local_out[10].valid) begin
                        if (local_out[10].data === expected_flit)
                            $display("[PASS] Node 10 received %h", local_out[10].data);
                        else
                            $error("[FAIL] Node 10 expected=%h got=%h",
                                   expected_flit, local_out[10].data);
                        return;
                    end
                end

                11: begin
                    if (local_out[11].valid) begin
                        if (local_out[11].data === expected_flit)
                            $display("[PASS] Node 11 received %h", local_out[11].data);
                        else
                            $error("[FAIL] Node 11 expected=%h got=%h",
                                   expected_flit, local_out[11].data);
                        return;
                    end
                end

                12: begin
                    if (local_out[12].valid) begin
                        if (local_out[12].data === expected_flit)
                            $display("[PASS] Node 12 received %h", local_out[12].data);
                        else
                            $error("[FAIL] Node 12 expected=%h got=%h",
                                   expected_flit, local_out[12].data);
                        return;
                    end
                end

                13: begin
                    if (local_out[13].valid) begin
                        if (local_out[13].data === expected_flit)
                            $display("[PASS] Node 13 received %h", local_out[13].data);
                        else
                            $error("[FAIL] Node 13 expected=%h got=%h",
                                   expected_flit, local_out[13].data);
                        return;
                    end
                end

                14: begin
                    if (local_out[14].valid) begin
                        if (local_out[14].data === expected_flit)
                            $display("[PASS] Node 14 received %h", local_out[14].data);
                        else
                            $error("[FAIL] Node 14 expected=%h got=%h",
                                   expected_flit, local_out[14].data);
                        return;
                    end
                end

                15: begin
                    if (local_out[15].valid) begin
                        if (local_out[15].data === expected_flit)
                            $display("[PASS] Node 15 received %h", local_out[15].data);
                        else
                            $error("[FAIL] Node 15 expected=%h got=%h",
                                   expected_flit, local_out[15].data);
                        return;
                    end
                end

            endcase

            timeout++;

        end

        $error(
            "[FAIL] Timeout waiting for destination Node %0d",
            destination_node
        );

    end

endtask


    // =========================================================
    // TEST 1
    //
    // Node 0 -> Node 15
    //
    // 0 = (0,0)
    // 15 = (3,3)
    //
    // Expected route:
    //
    // 0 -> 1 -> 2 -> 3
    //                |
    //                v
    //                7
    //                |
    //                v
    //                11
    //                |
    //                v
    //                15
    // =========================================================

    task automatic test_0_to_15();

        logic [FLIT_SIZE-1:0] flit;

        begin

            $display("");
            $display("==========================================");
            $display("TEST 1 : NODE 0 -> NODE 15");
            $display("==========================================");


            flit = make_flit(
                4'd15,
                14'h111
            );


            send_packet(
                0,
                4'd15,
                14'h111
            );


            wait_for_local(
                15,
                flit
            );

        end

    endtask


    // =========================================================
    // TEST 2
    //
    // Node 15 -> Node 0
    //
    // 15=(3,3)
    // 0 =(0,0)
    //
    // Expected:
    //
    // WEST WEST WEST
    // then SOUTH SOUTH SOUTH
    // =========================================================

    task automatic test_15_to_0();

        logic [FLIT_SIZE-1:0] flit;

        begin

            $display("");
            $display("==========================================");
            $display("TEST 2 : NODE 15 -> NODE 0");
            $display("==========================================");


            flit = make_flit(
                4'd0,
                14'h222
            );


            send_packet(
                15,
                4'd0,
                14'h222
            );


            wait_for_local(
                0,
                flit
            );

        end

    endtask


    // =========================================================
    // TEST 3
    //
    // Node 3 -> Node 12
    //
    // 3 =(3,0)
    // 12=(0,3)
    //
    // Expected:
    //
    // WEST WEST WEST
    // NORTH NORTH NORTH
    // =========================================================

    task automatic test_3_to_12();

        logic [FLIT_SIZE-1:0] flit;

        begin

            $display("");
            $display("==========================================");
            $display("TEST 3 : NODE 3 -> NODE 12");
            $display("==========================================");


            flit = make_flit(
                4'd12,
                14'h333
            );


            send_packet(
                3,
                4'd12,
                14'h333
            );


            wait_for_local(
                12,
                flit
            );

        end

    endtask


    // =========================================================
    // TEST 4
    //
    // Node 5 -> Node 10
    //
    // 5 =(1,1)
    // 10=(2,2)
    //
    // Expected:
    //
    // EAST
    // NORTH
    // =========================================================

    task automatic test_5_to_10();

        logic [FLIT_SIZE-1:0] flit;

        begin

            $display("");
            $display("==========================================");
            $display("TEST 4 : NODE 5 -> NODE 10");
            $display("==========================================");


            flit = make_flit(
                4'd10,
                14'h444
            );


            send_packet(
                5,
                4'd10,
                14'h444
            );


            wait_for_local(
                10,
                flit
            );

        end

    endtask


    // =========================================================
    // TEST 5
    //
    // Node 6 -> Node 9
    //
    // 6=(2,1)
    // 9=(1,2)
    //
    // Expected:
    //
    // WEST
    // NORTH
    // =========================================================

    task automatic test_6_to_9();

        logic [FLIT_SIZE-1:0] flit;

        begin

            $display("");
            $display("==========================================");
            $display("TEST 5 : NODE 6 -> NODE 9");
            $display("==========================================");


            flit = make_flit(
                4'd9,
                14'h555
            );


            send_packet(
                6,
                4'd9,
                14'h555
            );


            wait_for_local(
                9,
                flit
            );

        end

    endtask


    // =========================================================
    // TEST 6
    //
    // Same node destination
    //
    // Node 5 -> Node 5
    //
    // Expected LOCAL
    // =========================================================

    task automatic test_local();

        logic [FLIT_SIZE-1:0] flit;

        begin

            $display("");
            $display("==========================================");
            $display("TEST 6 : NODE 5 -> NODE 5");
            $display("==========================================");


            flit = make_flit(
                4'd5,
                14'h666
            );


            send_packet(
                5,
                4'd5,
                14'h666
            );


            wait_for_local(
                5,
                flit
            );

        end

    endtask


    // =========================================================
    // MONITOR ALL LOCAL OUTPUTS
    // =========================================================

    generate

        for (genvar m = 0; m < NUM_NODES; m++) begin : MONITOR

            always @(posedge clk) begin

                if (rst_n && local_out[m].valid) begin

                    $display(
                        "[MONITOR] Node %0d received FLIT=%h DEST=%0d",
                        m,
                        local_out[m].data,
                        local_out[m].data[3:0]
                    );

                end

            end

        end

    endgenerate


    // =========================================================
    // MAIN TEST
    // =========================================================

    initial begin

        $display("");
        $display("==========================================");
        $display("       4x4 NoC TESTBENCH START");
        $display("==========================================");
        $display("");

        reset_noc();
      
      
          


            send_packet(
                0,
                4'd15,
                14'h111
            );


            wait_for_local(
                15,
                make_flit(
                4'd15,
                14'h111
            )
            );


        // -----------------------------------------------------
        // Corner-to-corner
        // -----------------------------------------------------

 /*       test_0_to_15();

        repeat (5)
            @(posedge clk);
*/

        // -----------------------------------------------------
        // Reverse corner
        // -----------------------------------------------------

        test_15_to_0();

        repeat (5)
            @(posedge clk);


        // -----------------------------------------------------
        // Other corner
        // -----------------------------------------------------

        test_3_to_12();

        repeat (5)
            @(posedge clk);


        // -----------------------------------------------------
        // Center-to-center
        // -----------------------------------------------------

        test_5_to_10();

        repeat (5)
            @(posedge clk);


        // -----------------------------------------------------
        // Center reverse
        // -----------------------------------------------------

        test_6_to_9();

        repeat (5)
            @(posedge clk);


        // -----------------------------------------------------
        // LOCAL delivery
        // -----------------------------------------------------
/*
        test_local();
       
*/

      repeat (200)
            @(posedge clk);


        $display("");
        $display("==========================================");
        $display("       4x4 NoC TESTBENCH COMPLETE");
        $display("==========================================");

        $finish;

    end


    // =========================================================
    // WAVEFORM
    // =========================================================

    initial begin

        $dumpfile("noc_4x4_tb.vcd");
        $dumpvars(0, NoC_4x4_tb);

    end

endmodule

