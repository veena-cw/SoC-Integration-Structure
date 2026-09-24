

module noc_axi4_ingress #(
    parameter int ADDR_WIDTH = 40,
    parameter int DATA_WIDTH = 128,
    parameter int ID_WIDTH   = 4
) (
    input  logic clk,
    input  logic rst_n,

    
    // AXI4 SLAVE SIDE
    // This connects directly to master of bp_bedrock_axi4_adapter
   
    // ---------------- WRITE ADDRESS ----------------
    input  logic [ID_WIDTH-1:0]     s_axi_awid,
    input  logic [ADDR_WIDTH-1:0]   s_axi_awaddr,
    input  logic [7:0]              s_axi_awlen,
    input  logic [2:0]              s_axi_awsize,
    input  logic [1:0]              s_axi_awburst,
    input  logic                    s_axi_awlock,
    input  logic [3:0]              s_axi_awcache,
    input  logic [2:0]              s_axi_awprot,
    input  logic [3:0]              s_axi_awqos,
    input  logic                    s_axi_awvalid,
    output logic                    s_axi_awready,

    // ---------------- WRITE DATA -------------------
    input  logic [DATA_WIDTH-1:0]   s_axi_wdata,
    input  logic [DATA_WIDTH/8-1:0] s_axi_wstrb,
    input  logic                    s_axi_wlast,
    input  logic                    s_axi_wvalid,
    output logic                    s_axi_wready,

    // ---------------- WRITE RESPONSE ----------------
    output logic [ID_WIDTH-1:0]     s_axi_bid,
    output logic [1:0]              s_axi_bresp,
    output logic                    s_axi_bvalid,
    input  logic                    s_axi_bready,

    // ---------------- READ ADDRESS -----------------
    input  logic [ID_WIDTH-1:0]     s_axi_arid,
    input  logic [ADDR_WIDTH-1:0]   s_axi_araddr,
    input  logic [7:0]              s_axi_arlen,
    input  logic [2:0]              s_axi_arsize,
    input  logic [1:0]              s_axi_arburst,
    input  logic                    s_axi_arlock,
    input  logic [3:0]              s_axi_arcache,
    input  logic [2:0]              s_axi_arprot,
    input  logic [3:0]              s_axi_arqos,
    input  logic                    s_axi_arvalid,
    output logic                    s_axi_arready,

    // ---------------- READ DATA --------------------
    output logic [ID_WIDTH-1:0]     s_axi_rid,
    output logic [DATA_WIDTH-1:0]   s_axi_rdata,
    output logic [1:0]              s_axi_rresp,
    output logic                    s_axi_rlast,
    output logic                    s_axi_rvalid,
    input  logic                    s_axi_rready,


    // INTERNAL NoC WRITE INTERFACE

    output logic                    noc_wr_valid_o,
    output logic [ID_WIDTH-1:0]     noc_wr_id_o,
    output logic [ADDR_WIDTH-1:0]   noc_wr_addr_o,
    output logic [7:0]              noc_wr_len_o,
    output logic [2:0]              noc_wr_size_o,
    output logic [1:0]              noc_wr_burst_o,

    output logic                    noc_wr_lock_o,
    output logic [3:0]              noc_wr_cache_o,
    output logic [2:0]              noc_wr_prot_o,
    output logic [3:0]              noc_wr_qos_o,

    output logic [DATA_WIDTH-1:0]   noc_wr_data_o,
    output logic [DATA_WIDTH/8-1:0] noc_wr_strb_o,
    output logic                    noc_wr_last_o,

    input  logic                    noc_wr_ready_i,


    
    // INTERNAL NoC WRITE RESPONSE

    input  logic                    noc_b_valid_i,
    input  logic [ID_WIDTH-1:0]     noc_b_id_i,
    input  logic [1:0]              noc_b_resp_i,
    output logic                    noc_b_ready_o,


    
    // INTERNAL NoC READ INTERFACE

    output logic                    noc_rd_valid_o,
    output logic [ID_WIDTH-1:0]     noc_rd_id_o,
    output logic [ADDR_WIDTH-1:0]   noc_rd_addr_o,
    output logic [7:0]              noc_rd_len_o,
    output logic [2:0]              noc_rd_size_o,
    output logic [1:0]              noc_rd_burst_o,

    output logic                    noc_rd_lock_o,
    output logic [3:0]              noc_rd_cache_o,
    output logic [2:0]              noc_rd_prot_o,
    output logic [3:0]              noc_rd_qos_o,

    input logic                     noc_rd_ready_i,


    // INTERNAL NoC READ RESPONSE

    input logic                    noc_r_valid_i,
    input logic [ID_WIDTH-1:0]     noc_r_id_i,
    input logic [DATA_WIDTH-1:0]   noc_r_data_i,
    input logic [1:0]              noc_r_resp_i,
    input logic                    noc_r_last_i,

    output logic                    noc_r_ready_o
);

    localparam int STRB_WIDTH = DATA_WIDTH / 8;


    // WRITE ADDRESS REGISTERS
    
    logic [ID_WIDTH-1:0]   awid_r;
    logic [ADDR_WIDTH-1:0] awaddr_r;
    logic [7:0]            awlen_r;
    logic [2:0]            awsize_r;
    logic [1:0]            awburst_r;

    logic                  awlock_r;
    logic [3:0]            awcache_r;
    logic [2:0]            awprot_r;
    logic [3:0]            awqos_r;

    logic                  aw_pending_r;
	
    // WRITE DATA REGISTERS
  
    logic [DATA_WIDTH-1:0] wdata_r;
    logic [STRB_WIDTH-1:0] wstrb_r;
    logic                  wlast_r;

    logic                  w_pending_r;

    // READ ADDRESS REGISTERS

    logic [ID_WIDTH-1:0]   arid_r;
    logic [ADDR_WIDTH-1:0] araddr_r;
    logic [7:0]            arlen_r;
    logic [2:0]            arsize_r;
    logic [1:0]            arburst_r;

    logic                  arlock_r;
    logic [3:0]            arcache_r;
    logic [2:0]            arprot_r;
    logic [3:0]            arqos_r;

    logic                  ar_pending_r;


    // WRITE RESPONSE REGISTERS

    logic                  bvalid_r;
    logic [ID_WIDTH-1:0]   bid_r;
    logic [1:0]            bresp_r;


    // READ RESPONSE REGISTERS

    logic                  rvalid_r;
    logic [ID_WIDTH-1:0]   rid_r;
    logic [DATA_WIDTH-1:0] rdata_r;
    logic [1:0]            rresp_r;
    logic                  rlast_r;

    // AXI READY SIGNALS

    always_comb begin

        // Accept one write address when no address is pending
        s_axi_awready = !aw_pending_r;

        // Accept one write data beat when no data is pending
        s_axi_wready  = !w_pending_r;

        // Accept one read request when no read is pending
        s_axi_arready = !ar_pending_r;

    end
	
	
    // AXI RESPONSE OUTPUTS
 
 always_comb begin

        s_axi_bvalid = bvalid_r;
        s_axi_bid    = bid_r;
        s_axi_bresp  = bresp_r;

        s_axi_rvalid = rvalid_r;
        s_axi_rid    = rid_r;
        s_axi_rdata  = rdata_r;
        s_axi_rresp  = rresp_r;
        s_axi_rlast  = rlast_r;

    end


    // INTERNAL NoC WRITE OUTPUT

    always_comb begin

        noc_wr_valid_o = aw_pending_r && w_pending_r;

        noc_wr_id_o    = awid_r;
        noc_wr_addr_o  = awaddr_r;
        noc_wr_len_o   = awlen_r;
        noc_wr_size_o  = awsize_r;
        noc_wr_burst_o = awburst_r;

        noc_wr_lock_o  = awlock_r;
        noc_wr_cache_o = awcache_r;
        noc_wr_prot_o  = awprot_r;
        noc_wr_qos_o   = awqos_r;

        noc_wr_data_o  = wdata_r;
        noc_wr_strb_o  = wstrb_r;
        noc_wr_last_o  = wlast_r;

    end


 
    // INTERNAL NoC READ OUTPUT
  
    always_comb begin

        noc_rd_valid_o = ar_pending_r;

        noc_rd_id_o    = arid_r;
        noc_rd_addr_o  = araddr_r;
        noc_rd_len_o   = arlen_r;
        noc_rd_size_o  = arsize_r;
        noc_rd_burst_o = arburst_r;

        noc_rd_lock_o  = arlock_r;
        noc_rd_cache_o = arcache_r;
        noc_rd_prot_o  = arprot_r;
        noc_rd_qos_o   = arqos_r;

    end


   
    // NoC RESPONSE READY
 
    assign noc_b_ready_o = !bvalid_r;

    assign noc_r_ready_o = !rvalid_r;



    // REGISTER LOGIC

    always_ff @(posedge clk or negedge rst_n) begin

        if (!rst_n) begin

            // WRITE ADDRESS
 
            awid_r       <= '0;
            awaddr_r     <= '0;
            awlen_r      <= '0;
            awsize_r     <= '0;
            awburst_r    <= '0;

            awlock_r     <= 1'b0;
            awcache_r    <= '0;
            awprot_r     <= '0;
            awqos_r      <= '0;

            aw_pending_r <= 1'b0;


            // WRITE DATA

            wdata_r      <= '0;
            wstrb_r      <= '0;
            wlast_r      <= 1'b0;

            w_pending_r  <= 1'b0;


            // READ ADDRESS
			
            arid_r       <= '0;
            araddr_r     <= '0;
            arlen_r      <= '0;
            arsize_r     <= '0;
            arburst_r    <= '0;

            arlock_r     <= 1'b0;
            arcache_r    <= '0;
            arprot_r     <= '0;
            arqos_r      <= '0;

            ar_pending_r <= 1'b0;


            
            // WRITE RESPONSE
           
            bvalid_r     <= 1'b0;
            bid_r        <= '0;
            bresp_r      <= 2'b00;

            
            // READ RESPONSE

            rvalid_r     <= 1'b0;
            rid_r        <= '0;
            rdata_r      <= '0;
            rresp_r      <= 2'b00;
            rlast_r      <= 1'b0;

        end

        else begin

            
            // ACCEPT AXI WRITE ADDRESS
            

            if (s_axi_awvalid && s_axi_awready) begin

                awid_r       <= s_axi_awid;
                awaddr_r     <= s_axi_awaddr;
                awlen_r      <= s_axi_awlen;
                awsize_r     <= s_axi_awsize;
                awburst_r    <= s_axi_awburst;

                awlock_r     <= s_axi_awlock;
                awcache_r    <= s_axi_awcache;
                awprot_r     <= s_axi_awprot;
                awqos_r      <= s_axi_awqos;

                aw_pending_r <= 1'b1;

            end


           
            // ACCEPT AXI WRITE DATA
           
            if (s_axi_wvalid && s_axi_wready) begin

                wdata_r     <= s_axi_wdata;
                wstrb_r     <= s_axi_wstrb;
                wlast_r     <= s_axi_wlast;

                w_pending_r <= 1'b1;

            end


            
            // SEND WRITE TRANSACTION TO NoC
       
            if (noc_wr_valid_o && noc_wr_ready_i) begin

                aw_pending_r <= 1'b0;
                w_pending_r  <= 1'b0;

            end


          
            // ACCEPT AXI READ ADDRESS
        
            if (s_axi_arvalid && s_axi_arready) begin

                arid_r       <= s_axi_arid;
                araddr_r     <= s_axi_araddr;
                arlen_r      <= s_axi_arlen;
                arsize_r     <= s_axi_arsize;
                arburst_r    <= s_axi_arburst;

                arlock_r     <= s_axi_arlock;
                arcache_r    <= s_axi_arcache;
                arprot_r     <= s_axi_arprot;
                arqos_r      <= s_axi_arqos;

                ar_pending_r <= 1'b1;

            end

            
            // SEND READ TRANSACTION TO NoC
           

            if (noc_rd_valid_o && noc_rd_ready_i) begin

                ar_pending_r <= 1'b0;

            end


            
            // RECEIVE WRITE RESPONSE FROM NoC
            

            if (noc_b_valid_i && noc_b_ready_o) begin

                bid_r    <= noc_b_id_i;
                bresp_r  <= noc_b_resp_i;
                bvalid_r <= 1'b1;

            end


           // AXI MASTER ACCEPTS WRITE RESPONSE
           

            if (s_axi_bvalid && s_axi_bready) begin

                bvalid_r <= 1'b0;

            end


            
            // RECEIVE READ RESPONSE FROM NoC
            

            if (noc_r_valid_i && noc_r_ready_o) begin

                rid_r    <= noc_r_id_i;
                rdata_r  <= noc_r_data_i;
                rresp_r  <= noc_r_resp_i;
                rlast_r  <= noc_r_last_i;

                rvalid_r <= 1'b1;

            end


          
            // AXI MASTER ACCEPTS READ RESPONSE
           

            if (s_axi_rvalid && s_axi_rready) begin

                rvalid_r <= 1'b0;

            end

        end

    end

endmodule