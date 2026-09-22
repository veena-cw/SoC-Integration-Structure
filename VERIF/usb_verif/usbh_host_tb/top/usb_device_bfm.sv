`timescale 1ns/1ps

module usb_device_bfm #(
    parameter integer DEVICE_IFS_CLKS = 7,
    parameter integer MAX_IN_DATA     = 64
)(
    input  logic       clk_i,
    input  logic       rst_i,
    // ------------------------------------------------------------
    // DUT -> Device BFM
    // ------------------------------------------------------------
    input  logic [7:0] utmi_data_out_o,
    input  logic       utmi_txvalid_o,

    input  logic [1:0] utmi_op_mode_o,
    input  logic [1:0] utmi_xcvrselect_o,
    input  logic       utmi_termselect_o,
    input  logic       utmi_dppulldown_o,
    input  logic       utmi_dmpulldown_o,
    // ------------------------------------------------------------
    // Device BFM -> DUT
    // ------------------------------------------------------------
    output logic [7:0] utmi_data_in_i,
    output logic       utmi_txready_i,
    output logic       utmi_rxvalid_i,
    output logic       utmi_rxactive_i,
    output logic       utmi_rxerror_i,
    output logic [1:0] utmi_linestate_i
);
    // ============================================================
    // USB PID definitions
    // ============================================================
    localparam logic [7:0] PID_OUT   = 8'hE1;
    localparam logic [7:0] PID_IN    = 8'h69;
    localparam logic [7:0] PID_SOF   = 8'hA5;
    localparam logic [7:0] PID_SETUP = 8'h2D;

    localparam logic [7:0] PID_DATA0 = 8'hC3;
    localparam logic [7:0] PID_DATA1 = 8'h4B;

    localparam logic [7:0] PID_ACK   = 8'hD2;
    localparam logic [7:0] PID_NAK   = 8'h5A;
    localparam logic [7:0] PID_STALL = 8'h1E;
    // ============================================================
    // Response modes
    // ============================================================
    localparam integer RESP_NORMAL = 0;
    localparam integer RESP_NAK    = 1;
    localparam integer RESP_STALL  = 2;
    localparam integer RESP_TIMEOUT = 3;
    localparam integer RESP_CRC_ERROR = 4;

    integer response_mode;
    // USB device address
    logic [6:0] device_addr;
    // ============================================================
    // IN endpoint data:
    // For the first version we use one common IN buffer.
    // Later we can make this per-endpoint.
    // ============================================================
    logic [7:0] in_data [0:MAX_IN_DATA-1];
    integer in_data_len;
    // ============================================================
    // Packet capture
    // ============================================================
    logic [7:0] tx_pkt_q[$];
    logic       tx_packet_active;
    // ============================================================
    // Pending token information
    // ============================================================
    logic [7:0] pending_token_pid;
    logic [6:0] pending_addr;
    logic [3:0] pending_ep;

    logic       pending_data;
    // ============================================================
    // Data toggles
    // ============================================================
    logic in_toggle [0:15];
    logic out_toggle[0:15];
    
    // ============================================================
    // AXI4 Signals for DUT
    // ============================================================
    logic cfg_awvalid_i;
    logic cfg_awaddr_i;
    logic cfg_wvalid_i;
    logic cfg_wdata_i;
    logic cfg_wstrb_i;
    logic cfg_bready_i;
    logic cfg_arvalid_i;
    logic cfg_araddr_i;
    logic cfg_rready_i;
    
    logic cfg_awready_o;
    logic cfg_wready_o;
    logic cfg_bvalid_o;
    logic cfg_bresp_o;
    logic cfg_arready_o;
    logic cfg_rvalid_o;
    logic cfg_rdata_o;
    logic cfg_rresp_o;
    // ============================================================
    // DUT Instance
    // ============================================================    
    usbh_host dut (
         .clk_i(clk_i),
        .rst_i(rst_i),
        .cfg_awvalid_i(axi4_vif.cfg_awvalid_i),
        .cfg_awaddr_i(axi4_vif.cfg_awaddr_i),
        .cfg_wvalid_i(axi4_vif.cfg_wvalid_i),
        .cfg_wdata_i(axi4_vif.cfg_wdata_i),
        .cfg_wstrb_i(axi4_vif.cfg_wstrb_i),
        .cfg_bready_i(axi4_vif.cfg_bready_i),
        .cfg_arvalid_i(axi4_vif.cfg_arvalid_i),
        .cfg_araddr_i(axi4_vif.cfg_araddr_i),
        .cfg_rready_i(axi4_vif.cfg_rready_i),
        .utmi_data_in_i(utmi_vif.utmi_data_in_i),
        .utmi_txready_i(utmi_vif.utmi_txready_i),
        .utmi_rxvalid_i(utmi_vif.utmi_rxvalid_i),
        .utmi_rxactive_i(utmi_vif.utmi_rxactive_i),
        .utmi_rxerror_i(utmi_vif.utmi_rxerror_i),
        .utmi_linestate_i(utmi_vif.utmi_linestate_i),
        .cfg_awready_o(axi4_vif.cfg_awready_o),
        .cfg_wready_o(axi4_vif.cfg_wready_o),
        .cfg_bvalid_o(axi4_vif.cfg_bvalid_o),
        .cfg_bresp_o(axi4_vif.cfg_bresp_o),
        .cfg_arready_o(axi4_vif.cfg_arready_o),
        .cfg_rvalid_o(axi4_vif.cfg_rvalid_o),
        .cfg_rdata_o(axi4_vif.cfg_rdata_o),
        .cfg_rresp_o(axi4_vif.cfg_rresp_o),
        .intr_o(axi4_vif.intr_o),
        .utmi_data_out_o(utmi_vif.utmi_data_out_o),
        .utmi_txvalid_o(utmi_vif.utmi_txvalid_o),
        .utmi_op_mode_o(utmi_vif.utmi_op_mode_o),
        .utmi_xcvrselect_o(utmi_vif.utmi_xcvrselect_o),
        .utmi_termselect_o(utmi_vif.utmi_termselect_o),
        .utmi_dppulldown_o(utmi_vif.utmi_dppulldown_o),
        .utmi_dmpulldown_o(utmi_vif.utmi_dmpulldown_o)
   );
    
    
    // ============================================================
    // USB CRC16:
    //   polynomial = x^16 + x^15 + x^2 + 1
    //   reversed polynomial = 16'hA001
    //   initial value = 16'hFFFF
    // ============================================================
    function automatic [15:0] crc16_usb(
        input logic [7:0] data[$]
    );
        logic [15:0] crc;
        logic        mix;
        integer i;
        integer j;
        begin
            crc = 16'hFFFF;
            for (i = 0; i < data.size(); i = i + 1) begin
                for (j = 0; j < 8; j = j + 1) begin
                    mix = crc[0] ^ data[i][j];
                    crc = crc >> 1;
                    if (mix)
                        crc = crc ^ 16'hA001;
                end
            end
            crc16_usb = crc;
        end
    endfunction
    // ============================================================
    // PID validity
    // ============================================================
    function automatic bit valid_pid(
        input logic [7:0] pid
    );
        valid_pid = (pid[7:4] == ~pid[3:0]);
    endfunction
    // ============================================================
    // Reset / default values
    // ============================================================
    initial begin
        utmi_data_in_i  = 8'h00;
        utmi_txready_i  = 1'b0;

        utmi_rxvalid_i  = 1'b0;
        utmi_rxactive_i = 1'b0;
        utmi_rxerror_i  = 1'b0;
        // Full-Speed device idle J state.
        // DUT only checks for non-zero for device detection.
        utmi_linestate_i = 2'b01;
        device_addr = 7'd0;
        response_mode = RESP_NORMAL;
        in_data_len = 4;
        in_data[0] = 8'h11;
        in_data[1] = 8'h22;
        in_data[2] = 8'h33;
        in_data[3] = 8'h44;

        tx_packet_active = 1'b0;
        pending_data     = 1'b0;

        pending_token_pid = 8'h00;
        pending_addr      = 7'd0;
        pending_ep        = 4'd0;
    end
    // ============================================================
    // Initialize toggles
    // ============================================================
    integer k;
    initial begin
        for (k = 0; k < 16; k = k + 1) begin
            in_toggle[k]  = 1'b0;
            out_toggle[k] = 1'b0;
        end
    end
    //=============================================================
    //Generate TXREADY when UTMI_TX_VALID is high
    //=============================================================
    always @(posedge clk_i) begin
	    if (rst_i) begin
		utmi_txready_i <= 1'b0;
	    end
	    else begin
		/*if (utmi_txvalid_o )
		    utmi_txready_i <= 1'b1;
		else
		    utmi_txready_i <= 1'b0;*/
		  
		    utmi_txready_i = 1'b1;
	    end
    end
    // ============================================================
    // TX packet capture
    //
    // DUT transmits:
    //   PID
    //   DATA
    //   CRC
    // txvalid remains high for the packet.
    // When txvalid falls, packet processing starts.
    // ============================================================  
    logic [7:0] pkt_copy[$];
    always @(posedge clk_i) begin
        if (rst_i) begin
            tx_pkt_q.delete();
            tx_packet_active <= 1'b0;
        end
        else begin
            if (utmi_txvalid_o && utmi_txready_i) begin
                tx_pkt_q.push_back(utmi_data_out_o);
                tx_packet_active <= 1'b1;
            end
            else if (tx_packet_active &&
                     !utmi_txvalid_o) begin
                tx_packet_active <= 1'b0;                
                
                pkt_copy = tx_pkt_q;
                $display("[%0t] DEVICE BFM: Captured packet size = %0d", $time, pkt_copy.size());
	        foreach (pkt_copy[j])
		    $display("[%0t] DEVICE BFM: pkt_copy[%0d] = %02h", $time, j, pkt_copy[j]); 		                  
                fork
                    process_packet(pkt_copy);
                join_none
                tx_pkt_q.delete();
            end
        end
    end
    // ============================================================
    // Main packet decoder
    // ============================================================
    task automatic process_packet(
        input logic [7:0] pkt[$]
    );
        logic [7:0] pid;
        logic [6:0] addr;
        logic [3:0] ep;
        logic [15:0] received_crc;
        logic [15:0] calculated_crc;
        logic [7:0] data_bytes[$];
        integer i;
        begin
            if (pkt.size() == 0)
                return;
            pid = pkt[0];
            if (!valid_pid(pid)) begin
                $display("[%0t] DEVICE BFM: Invalid PID = %02h", $time, pid);
                return;
            end
            // ====================================================
            // Handshake
            // ====================================================
            if ((pid == PID_ACK)  ||
                (pid == PID_NAK)  ||
                (pid == PID_STALL)) begin
                $display("[%0t] DEVICE BFM: Host handshake PID = %02h", $time, pid);
                if (pid == PID_ACK) begin
                    if (pending_ep < 16)
                        in_toggle[pending_ep] = ~in_toggle[pending_ep];
                end
                return;
            end
            // ====================================================
            // Token packet
            //
            // DUT sends:
            //
            // byte 0 = PID
            // byte 1 = token bits
            // byte 2 = token bits
            // ====================================================
            if ((pid == PID_OUT)   ||
                (pid == PID_IN)    ||
                (pid == PID_SETUP) ||
                (pid == PID_SOF)) begin
                if (pkt.size() != 3) begin
                    $display("[%0t] DEVICE BFM: Bad token size = %0d", $time, pkt.size());
                    return;
                end
                // ------------------------------------------------
                // Token packing used by your usbh_sie
                //
                // addr = byte1[6:0]
                // ep   = {byte1[7], byte2[2:0]}
                // ------------------------------------------------
                addr = pkt[1][6:0];
                ep = {
                    pkt[1][7],
                    pkt[2][2:0]
                };
                if (pid == PID_SOF) begin
                    $display("[%0t] DEVICE BFM: SOF received, frame/addr=%0d ep=%0d", $time, addr, ep);
                    return;
                end
                pending_token_pid = pid;
                pending_addr      = addr;
                pending_ep        = ep;
                $display("[%0t] DEVICE BFM: TOKEN, PID=%02h ADDR=%0d EP=%0d", $time, pid, addr, ep);
                // Ignore packets for another device address.
                if (addr != device_addr) begin
                    $display("[%0t] DEVICE BFM: Token ignored, (device_addr=%0d)", $time, device_addr);
                    pending_data = 1'b0;
                    return;
                end
                // ------------------------------------------------
                // IN token
                // ------------------------------------------------
                if (pid == PID_IN) begin
                    pending_data = 1'b0;
                    fork
                        respond_to_in(ep);
                    join_none
                end
                // ------------------------------------------------
                // OUT / SETUP
                // ------------------------------------------------
                else begin
                    pending_data = 1'b1;
                end
                return;
            end
            // ====================================================
            // DATA packet
            // ====================================================
            if ((pid == PID_DATA0) ||
                (pid == PID_DATA1)) begin
                if (!pending_data) begin
                    $display("[%0t] DEVICE BFM: Unexpected DATA packet", $time);
                    return;
                end
                if (pkt.size() < 3) begin
                    $display("[%0t] DEVICE BFM: DATA packet too short", $time);
                    return;
                end
                // ------------------------------------------------
                // Extract payload:
                // pkt:
                //
                // [0]       PID
                // [1..N-3] DATA
                // [N-2]     CRC low
                // [N-1]     CRC high
                // ------------------------------------------------
                data_bytes.delete();
                for (i = 1; i < pkt.size()-2; i = i + 1)
                    data_bytes.push_back(pkt[i]);
                    
                received_crc = {pkt[pkt.size()-1],
                     		pkt[pkt.size()-2]  };
                calculated_crc = ~crc16_usb(data_bytes);
                // ------------------------------------------------
                // CRC check
                // ------------------------------------------------
                if (received_crc != calculated_crc) begin
                    $display("[%0t] DEVICE BFM: CRC ERROR, PID=%02h received=%04h expected=%04h", $time, pid, received_crc, calculated_crc);
                    pending_data = 1'b0;
                    // Do not ACK bad packet.
                    return;
                end
                $display("[%0t] DEVICE BFM: DATA received, PID=%02h LEN=%0d", $time, pid, data_bytes.size());
                // ------------------------------------------------
                // Display received data
                // ------------------------------------------------
                for (i = 0; i < data_bytes.size(); i = i + 1) begin
                    $display("[%0t] DEVICE BFM:  DATA[%0d] = %02h", $time, i, data_bytes[i]);
                end
                // ------------------------------------------------
                // Respond to OUT / SETUP
                // ------------------------------------------------
                if (response_mode == RESP_TIMEOUT) begin
                    $display("[%0t] DEVICE BFM: Timeout response selected", $time);
                end
                else if (response_mode == RESP_NAK) begin
                    fork
                        send_handshake(PID_NAK);
                    join_none
                end
                else if (response_mode == RESP_STALL) begin
                    fork
                        send_handshake(PID_STALL);
                    join_none
                end
                else begin
                    // Normal response
                    fork
                        send_handshake(PID_ACK);
                    join_none
                    // Update OUT toggle after successful packet
                    if (pending_ep < 16)
                        out_toggle[pending_ep] = ~out_toggle[pending_ep];
                end
                pending_data = 1'b0;
                return;
            end
            $display("[%0t] DEVICE BFM: Unknown packet PID=%02h", $time, pid);
        end
    endtask
    // ============================================================
    // Respond to IN token
    // ============================================================
    task automatic respond_to_in(
        input logic [3:0] ep
    );
        logic [7:0] response_pid;
        logic [7:0] payload[$];
        logic [15:0] crc;
        integer i;
        begin
            // ----------------------------------------------------
            // Inter-packet delay
            // ----------------------------------------------------
            repeat (DEVICE_IFS_CLKS)
                @(posedge clk_i);
            // ----------------------------------------------------
            // NAK
            // ----------------------------------------------------
            if (response_mode == RESP_NAK) begin
                $display("[%0t] DEVICE BFM: IN -> NAK", $time);
                send_handshake(PID_NAK);
                return;
            end
            // ----------------------------------------------------
            // STALL
            // ----------------------------------------------------
            if (response_mode == RESP_STALL) begin
                $display("[%0t] DEVICE BFM: IN -> STALL", $time);
                send_handshake(PID_STALL);
                return;
            end
            // ----------------------------------------------------
            // Timeout
            // ----------------------------------------------------
            if (response_mode == RESP_TIMEOUT) begin
                $display("[%0t] DEVICE BFM: IN -> TIMEOUT", $time);
                return;
            end
            // ----------------------------------------------------
            // Select DATA0 / DATA1
            // ----------------------------------------------------
            if (in_toggle[ep])
                response_pid = PID_DATA1;
            else
                response_pid = PID_DATA0;
            // ----------------------------------------------------
            // Copy IN data into local queue
            // ----------------------------------------------------
            payload.delete();
            for (i = 0; i < in_data_len; i = i + 1)
                payload.push_back(in_data[i]);
            crc = ~crc16_usb(payload);
            $display("[%0t] DEVICE BFM: IN -> DATA PID=%02h LEN=%0d", $time, response_pid, payload.size());
            // ----------------------------------------------------
            // Send packet
            // ----------------------------------------------------
            send_data_packet(
                response_pid,
                payload,
                crc,
                response_mode == RESP_CRC_ERROR
            );
        end
    endtask
    // ============================================================
    // Send handshake packet
    // ============================================================
    task automatic send_handshake(
        input logic [7:0] pid
    );
       begin
            repeat (DEVICE_IFS_CLKS)
                @(posedge clk_i);
            @(posedge clk_i);
            utmi_rxactive_i <= 1'b1;
            utmi_rxvalid_i  <= 1'b1;
            utmi_rxerror_i  <= 1'b0;
            utmi_data_in_i  <= pid;
            @(posedge clk_i);
            utmi_rxactive_i <= 1'b0;
            utmi_rxvalid_i  <= 1'b0;
            utmi_data_in_i  <= 8'h00;
        end
    endtask
    // ============================================================
    // Send DATA packet
    // ============================================================
    task automatic send_data_packet(
        input logic [7:0] pid,
        input logic [7:0] payload[$],
        input logic [15:0] crc,
        input bit corrupt_crc
    );
        logic [15:0] tx_crc;
        integer i;
        begin
            tx_crc = crc;
            // ----------------------------------------------------
            // Error injection
            // ----------------------------------------------------
            if (corrupt_crc)
                tx_crc[0] = ~tx_crc[0];
            // ----------------------------------------------------
            // PID
            // ----------------------------------------------------
            @(posedge clk_i);
            utmi_rxactive_i <= 1'b1;
            utmi_rxvalid_i  <= 1'b1;
            utmi_rxerror_i  <= 1'b0;
            utmi_data_in_i  <= pid;
            // ----------------------------------------------------
            // Payload
            // ----------------------------------------------------
            for (i = 0; i < payload.size(); i = i + 1) begin
                @(posedge clk_i);
                utmi_rxactive_i <= 1'b1;
                utmi_rxvalid_i  <= 1'b1;
                utmi_rxerror_i  <= 1'b0;
                utmi_data_in_i  <= payload[i];
            end
            // ----------------------------------------------------
            // CRC low byte
            // ----------------------------------------------------
            @(posedge clk_i);
            utmi_rxactive_i <= 1'b1;
            utmi_rxvalid_i  <= 1'b1;
            utmi_data_in_i  <= tx_crc[7:0];
            // ----------------------------------------------------
            // CRC high byte
            // ----------------------------------------------------
            @(posedge clk_i);
            utmi_rxactive_i <= 1'b1;
            utmi_rxvalid_i  <= 1'b1;
            utmi_data_in_i  <= tx_crc[15:8];
            // ----------------------------------------------------
            // End packet
            // ----------------------------------------------------
            @(posedge clk_i);
            utmi_rxactive_i <= 1'b0;
            utmi_rxvalid_i  <= 1'b0;
            utmi_rxerror_i  <= 1'b0;
            utmi_data_in_i  <= 8'h00;
        end
    endtask
    // ============================================================
    // Public configuration tasks
    // ============================================================
    task automatic set_device_address(
        input logic [6:0] addr
    );
        begin
            device_addr = addr;
            $display("[%0t] DEVICE BFM: Device address set to %0d", $time, addr);
        end
    endtask
    task automatic set_response_mode(
        input integer mode
    );
        begin
            response_mode = mode;
           $display("[%0t] DEVICE BFM: Response mode = %0d", $time, mode);
        end
    endtask
    task automatic set_in_data(
        input integer len,
        input logic [7:0] data0,
        input logic [7:0] data1,
        input logic [7:0] data2,
        input logic [7:0] data3
    );
        begin
            in_data_len = len;
            if (len > 0)
                in_data[0] = data0;
            if (len > 1)
                in_data[1] = data1;
            if (len > 2)
                in_data[2] = data2;
            if (len > 3)
                in_data[3] = data3;
        end
    endtask
    // ============================================================
    // Line-state / EOP model
    //
    // Host txvalid falling -> emulate SE0/EOP.
    //
    // 2'b00 = SE0
    // 2'b01 = FS J
    // ============================================================
    logic previous_txvalid;
    initial begin
        previous_txvalid = 1'b0;
    end
    always @(posedge clk_i) begin
        if (rst_i) begin
            previous_txvalid <= 1'b0;
            utmi_linestate_i <= 2'b01;
        end
        else begin
            if (previous_txvalid &&
                !utmi_txvalid_o) begin
                fork
                    generate_eop();
                join_none
            end
            previous_txvalid <= utmi_txvalid_o;
        end
    end
    task automatic generate_eop();
        begin
            utmi_linestate_i <= 2'b00;
            repeat (2)
                @(posedge clk_i);
            utmi_linestate_i <= 2'b01;
        end
    endtask

endmodule
