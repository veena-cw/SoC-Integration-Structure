module  sd_emmc_controller_dma (
            input  wire clock,
            input  wire reset,

            // S_AXI
            input logic dma_ena_trans_mode,
            input logic dir_dat_trans_mode,
            output logic [1:0] dma_interrupts,
            input logic dat_int_rst,
            input logic data_present,
            input logic [31:0] descriptor_pointer_i,
            input logic blk_gap_req,

            // Data serial
            input logic xfer_compl,
            input logic is_we_en,
            output logic start_write,
            input logic ser_next_blk,
            input logic [1:0] write_timeout,
            
            // Command master
            input logic cmd_compl_puls,
            
            // FIFO Filler
            output logic fifo_dat_rd_ready,
            output logic fifo_dat_wr_ready_o,
            input logic [31:0] read_fifo_data,
            output logic fifo_rst,

            // M_AXI
            output logic m_axi_wvalid,
            input logic m_axi_wready,
            output logic  m_axi_awid,//
            output logic [31:0] m_axi_awaddr,
            output logic  m_axi_awlock,
            output logic [3:0] m_axi_awcache,
            output logic [2:0] m_axi_awprot,
            output logic [3:0] m_axi_awqos,
            output logic m_axi_awvalid,
            input logic m_axi_awready,
            output logic [3:0] m_axi_wstrb,
            output logic [31:0] m_axi_araddr,
            output logic m_axi_arvalid,
            input logic m_axi_arready,
            input logic m_axi_rvalid,
            output logic m_axi_rready,
            input logic m_axi_rlast,
            input logic [31:0] m_axi_rdata,
            output logic [7:0] m_axi_arlen,
            output logic [2:0] m_axi_arsize,
            output logic [1:0] m_axi_arburst,
            output logic [1:0] m_axi_awburst,
            output logic [7:0] m_axi_awlen,
            output logic [2:0] m_axi_awsize,
            output logic [31:0] m_axi_wdata,
            output logic m_axi_wlast,
            input logic  m_axi_bid,
            input logic [1:0] m_axi_bresp,
            input logic  m_axi_bvalid,
            output logic m_axi_bready,
            output logic  m_axi_arid,
            output logic  m_axi_arlock,
            output logic [3 : 0] m_axi_arcache,
            output logic [2 : 0] m_axi_arprot,
            output logic [3:0] m_axi_arqos,
            input logic  m_axi_rid,
            input logic [1:0] m_axi_rresp);

reg [3:0] state;
reg [16:0] data_cycle;
reg [16:0] we_counter;
reg init_we_ff;
reg init_we_ff2;
reg init_rready;
reg init_rready2;
reg init_rvalid;
reg addr_accepted;
reg we_counter_reset;
reg rd_counter_reset;
wire we_pulse;
reg data_write_disable;
reg [2:0] adma_state;
reg sys_addr_sel;
reg [31:0] descriptor_pointer_reg;
reg [63:0] descriptor_line;
reg [11:0] sdma_contr_reg;
reg [3:0] write_index;
reg burst_tx;
reg axi_bready;
reg m_axi_rready_reg;
reg [16:0] rd_dat_words;
wire Tran;
wire Link;
wire stop_trans;
wire next_data_word;
wire write_resp_error;
wire read_resp_error;

localparam IDLE             = 4'b0000;
localparam MEM2CARD         = 4'b0001;
localparam MEM2CARD_WAIT    = 4'b0010;
localparam CARD2MEM_WAIT    = 4'b0011;
localparam CARD2MEM_ACT     = 4'b0100;

localparam [2:0] ST_STOP = 3'b000, //State Stop DMA. ADMA2 stays in this state in following cases:
                                  // (1) After Power on reset or software reset.
                                  // (2) All descriptor data transfers are completed.
                                  //If a new ADMA2 operation is started by writing Command register, go to ST_FDS state. 
                 ST_FDS  = 3'b001, //State Fetch Descriptor. In this state ADMA2 fetches a descriptor line 
                                   //and set parameters in internal registers.
                 ST_CADR = 3'b010, //State Change Address. In this state Link operation loads another Descriptor address
                                   //to ADMA System Address register.
                 ST_TFR  = 3'b011; //State Transfer Data. In this state data transfer of one descriptor line is executed 
                                  //between system memory and SD card.
                
  assign m_axi_arsize	     = 3'b010;
  assign m_axi_arburst       = 2'b01;
  assign m_axi_awburst       = 2'b01;
  assign m_axi_awlen	     = sdma_contr_reg[`BurstLen];
  assign m_axi_awsize	     = 3'b010;
  assign stop_trans          = state == IDLE ? 1'b1 : 1'b0;
  assign fifo_dat_rd_ready   = m_axi_wready & m_axi_wvalid;
  assign fifo_dat_wr_ready_o = sdma_contr_reg[`DatTarg] ? 1'b0 : m_axi_rready;
  assign m_axi_araddr        = sdma_contr_reg[`AddrSel] ? descriptor_pointer_reg : descriptor_line [63:32];
  assign m_axi_arlen         = sdma_contr_reg[`BurstLen];
  assign Tran = (descriptor_line[5:4] == 2'b10) ? 1'b1 : 1'b0;
  assign Link = (descriptor_line[5:4] == 2'b11) ? 1'b1 : 1'b0;
  assign next_data_word = m_axi_wready & m_axi_wvalid;
  assign m_axi_awid	   = 'b0;
  assign m_axi_awaddr  = descriptor_line [63:32];
  assign m_axi_wdata   = read_fifo_data;
  assign m_axi_arqos   = 4'h0;
  assign m_axi_arprot  = 3'h0;
  assign m_axi_arcache = 4'b0011;
  assign m_axi_arlock  = 1'b0;
  assign m_axi_arid	   = 'b0;
  assign m_axi_awlock  = 1'b0;
  assign m_axi_awcache = 4'b0011;
  assign m_axi_awprot  = 3'h0;
  assign m_axi_awqos   = 4'h0;
  assign m_axi_wstrb   = 4'hf;
  assign read_resp_error  = m_axi_rready & m_axi_rvalid & m_axi_rresp[1];
  assign write_resp_error = axi_bready & m_axi_bvalid & m_axi_bresp[1];
  assign m_axi_bready	  = axi_bready;


  	always_ff @(posedge clock)                                     
    begin: WRITE_RESPONSE_B_CHANNEL                                                                 
      if (reset == 1'b0 ) begin
        axi_bready <= 1'b0;
      end
      // accept/acknowledge bresp with axi_bready by the master           
      // when m_axi_bvalid is asserted by slave                           
      else if (m_axi_bvalid && ~axi_bready) begin
        axi_bready <= 1'b1;
      end
      // deassert after one clock cycle                                   
      else if (axi_bready) begin
        axi_bready <= 1'b0;
      end
      else
        axi_bready <= axi_bready;
    end


    always_ff @(posedge clock)
    begin: WRITE_DATA_BEAT_COUNTER
      if (reset == 1'b0 || burst_tx == 1'b1) begin
        write_index <= 0;
      end
      else if (next_data_word && (write_index != sdma_contr_reg[`BurstLen])) begin
        write_index <= write_index + 1;
      end
      else
        write_index <= write_index;
    end

	always_ff @(posedge clock)
	begin: WLAST_GENERATION
	  if (reset == 1'b0 || burst_tx == 1'b1) begin
	    m_axi_wlast <= 1'b0;
	  end
	  else if (((write_index == sdma_contr_reg[`BurstLen] -1 && sdma_contr_reg[`BurstLen] >= 2) && next_data_word) || (sdma_contr_reg[`BurstLen] == 1 )) begin
	    m_axi_wlast <= 1'b1;
	  end
	  else if (next_data_word)
	    m_axi_wlast <= 1'b0;
	  else if (m_axi_wlast && sdma_contr_reg[`BurstLen] == 1)
	    m_axi_wlast <= 1'b0;
	  else
	    m_axi_wlast <= m_axi_wlast;
	end


    /*
    *  SDMA
    */
    always_ff @(posedge clock)
    begin: STATE_TRANSITION
      if (reset == 1'b0) begin
        state <= IDLE;
        m_axi_awvalid <= 0;
        m_axi_wvalid <= 0;
        data_cycle <= 0;
        addr_accepted <= 0;
        m_axi_arvalid <= 0;
        fifo_rst <= 0;
        descriptor_line <= 0;
      end
      else begin
        case (state)
          IDLE: begin
                   data_cycle <= 0;
                   data_write_disable <= 0;
                   we_counter_reset <= 1;
                   rd_counter_reset <= 1;
                  if (sdma_contr_reg[`DatTransDir] == 2'b01) begin
                    state <= CARD2MEM_WAIT;
                    fifo_rst <= 1;
                  end
                  else if (sdma_contr_reg[`DatTransDir] == 2'b10) begin
                    state <= MEM2CARD;
                    fifo_rst <= 1;
                  end
                  else begin
                    state <= IDLE;
                    burst_tx <= 1'b1;
                    start_write <= 1'b0;
                  end
                end
          CARD2MEM_WAIT: begin
                       fifo_rst <= 0;
                       if (we_counter >= (data_cycle + 16)) begin
                         state <= CARD2MEM_ACT;
                       end
                       if (data_cycle >= (rd_dat_words/4)) begin
                         data_cycle <= 0;
                         we_counter_reset <= 1'b0;
                         state <= IDLE;
                       end
                     end
          CARD2MEM_ACT: begin
                      we_counter_reset <= 1'b1;
                      case (addr_accepted)
                          1'b0: begin 
                                  if (m_axi_awvalid && m_axi_awready) begin
                                    m_axi_awvalid <= 1'b0;
                                    addr_accepted <= 1'b1;
                                    descriptor_line [63:32] <= descriptor_line [63:32] + 64;
                                    burst_tx <= 1'b0;
                                  end
                                  else begin
                                    m_axi_awvalid <= 1'b1;
                                  end
                                end
                          1'b1: begin
                                  if (next_data_word) begin
                                    data_cycle <= data_cycle + 1;
                                  end
                                  else begin
                                    m_axi_wvalid <= 1'b1;
                                  end
                                  if (m_axi_wlast & m_axi_wvalid) begin
                                    state <= CARD2MEM_WAIT;
                                    m_axi_wvalid <= 1'b0;
                                    addr_accepted <= 1'b0;
                                    burst_tx <= 1'b1;
                                  end
                                end
                      endcase 
                    end
          MEM2CARD: begin
                          fifo_rst <= 0;
                          start_write <= 1'b0;
                          if (((data_cycle + 1) % 128 == 0) && data_cycle != 0) begin //Has the DMA reached a multiple of 128 data cycles
                           state <= MEM2CARD_WAIT;
                           start_write <= 1'b1;
                         end
                          case (addr_accepted)
                            1'b0: begin
                              if (data_cycle >= (rd_dat_words / 4)) begin
                                data_cycle <= 0;
                                state <= IDLE;
                              end
                              else begin
                                if (m_axi_arvalid & m_axi_arready) begin
                                  m_axi_arvalid <= 1'b0;
                                  addr_accepted <= 1'b1;
                                  if (~sdma_contr_reg[`AddrSel]) //AddrSel = 0  → condition TRUE ,AddrSel = 1  → condition FALSE
                                    descriptor_line [63:32] <= descriptor_line [63:32] + 64;
                                end
                                else begin
                                  m_axi_arvalid <= 1'b1;//"I have a read request. I'm waiting for the memory to accept it."The DMA keeps ARVALID high. This is normal AXI behavior.
                                end
                              end
                            end
                            1'b1: begin  //The burst read active
                                if (m_axi_rready) begin
                                  data_cycle <= data_cycle + 1;
                                end
                                if (sdma_contr_reg[`DatTarg]) begin  //DatTarg = 1 → condition TRUE DatTarg = 0 → condition FALSE
                                  descriptor_line <= {m_axi_rdata, descriptor_line[63:32]};
                                end
                                if (m_axi_rlast) begin
                                 addr_accepted <= 1'b0;  //The burst read stopped
                                 data_cycle <= data_cycle + 1;
                                end
                            end
                          endcase
                        end
          MEM2CARD_WAIT: begin
                            start_write <= 1'b0;
                            if (ser_next_blk | xfer_compl) begin
                                state <= MEM2CARD;
                                fifo_rst <= 1'b1;
                            end
                        end
            
        endcase
        // abort the state when timeout on data serializer
        if (write_timeout == 2'b11) begin
          state <= IDLE;
          start_write <= 0;
        end
      end
    end
    
    assign m_axi_rready = m_axi_rready_reg && m_axi_rvalid;
     
    always_ff @ (posedge clock)
      begin: AXI_RREADY_PULSE_GENERATOR
        if (reset == 1'b0) begin
          m_axi_rready_reg <= 1'b0;
        end
        else begin
          if (m_axi_rvalid & m_axi_rready_reg) begin
            m_axi_rready_reg <= 1'b0;
          end
          else begin
            m_axi_rready_reg <= 1'b1;
          end
        end
      end

    always_ff @ (posedge clock)
      begin: NUMBER_OF_FIFO_WRITING_COUNTER
        if ((reset == 1'b0) || (we_counter_reset == 1'b0)) begin
          we_counter <= 0;
        end
        else begin
          if (we_pulse)
            we_counter <= we_counter + 16'h0001;
        end
      end

//	assign we_pulse	= (!init_we_ff2) && init_we_ff;
	assign we_pulse	= init_we_ff2 && (!init_we_ff);
	
    always_ff @ (posedge clock)
      begin: WE_PULS_GENERATOR
        if (reset == 1'b0) begin
          init_we_ff <= 1'b0;
          init_we_ff2 <= 1'b0;
        end
        else begin
          init_we_ff <= is_we_en;
          init_we_ff2 <= init_we_ff;
        end
      end
    
      
      /* 
      *   ADMA
      */
      reg [1:0] start_dat_trans;
      reg [2:0] next_state;
      reg TFC; //TFC = Transfer Finished / completion indication
      reg a;
      reg trans_act;
      reg next_trans_act;
      
    always_ff @ (posedge clock)
      begin: adma
        if(reset == 1'b0) begin
          start_dat_trans <= 0;
          sys_addr_sel <= 0;
          descriptor_pointer_reg <= 0;
          dma_interrupts <= 0;
          rd_dat_words <= 0;
          TFC <= 0;
          sdma_contr_reg <= 0;
          a <= 0;
        end
        else begin
          case (adma_state)
            ST_STOP: begin
                       if (dma_ena_trans_mode & cmd_compl_puls & data_present /*& dat_int_rst*/) begin
                         next_state <= ST_FDS;
                         sdma_contr_reg <= 12'h01E; //Read from SysRam, read to descriptor line, read from adma_descriptor_pointer addres, read two beats in burst, start read. 
                         rd_dat_words <= 17'h00008; //This sets the amount associated with this initial descriptor-fetch operation to 8.In this implementation, the descriptor is 8 bytes, so the DMA is preparing to fetch the descriptor.
                         descriptor_pointer_reg <= descriptor_pointer_i;// this contains the starting address of ADMA descriptor 
                       end
                       else begin
                         TFC <= 0;
                       end
                     end
            ST_FDS: begin
                      sdma_contr_reg[`DatTransDir] <= 0; // Reset start transferring command //So while we are fetching/checking the descriptor, the actual data transfer should not start yet.
                      TFC <= 1'b0; 
                      next_trans_act <= 1'b0; //This clears the indication that the next transfer operation should be active.Again, we are still dealing with the descriptor, not the actual data transfer.
                      a <= 1'b1;  //This sets the internal flag a.
                      if (stop_trans) begin
                        if (descriptor_line[`valid] == 1) begin
                          next_state <= ST_CADR; // ST_CADR then examines the descriptor and determines whether it is a Transfer descriptor, Link descriptor, End descriptor, etc.
                        end
                        else begin
                          dma_interrupts[1] <= 1'b1;
                          next_state <= ST_STOP;
                        end
                      end
                    end
            ST_CADR: begin
                       a <= 1'b0;
                       if (Tran) begin
                         next_state <= ST_TFR;
                       end
                       else begin
                         if (descriptor_line[`End] && !Tran && xfer_compl) begin
                           next_state <= ST_STOP;
                           dma_interrupts[0] <= 1'b1;
                         end
                         else if (~descriptor_line[`End] && !Tran) begin
                           next_state <= ST_FDS;
                           sdma_contr_reg <= 12'h01E;
                         end
                       end
                       if (Link)
                         descriptor_pointer_reg <= descriptor_line[63:32];
                       else if (a)
                         descriptor_pointer_reg <= descriptor_pointer_reg + 32'h00000008;  //So a is used to indicate that the descriptor pointer may need to advance by 8 bytes when moving to the next descriptor.
                     end
            ST_TFR: begin
                      if (TFC && xfer_compl && (descriptor_line[`End] || blk_gap_req)) begin
                        next_state <= ST_STOP;
                        dma_interrupts[0] <= 1'b1;
                      end
                      else if (TFC && ~descriptor_line[`End] && !blk_gap_req) begin
                        next_state <= ST_FDS;
                        sdma_contr_reg <= 12'h01E;
                        rd_dat_words <= 17'h00008;
                      end
                      else begin
                        case (trans_act)
                          1'b0: begin
                                  if (dir_dat_trans_mode) begin
                                    sdma_contr_reg <= 12'h0F1;
                                  end
                                  else begin
                                    sdma_contr_reg <= 12'h0F2;
                                  end
                                  next_trans_act <= 1'b1;
                                end
                          1'b1: begin
                                  if (stop_trans) begin
                                    TFC <= 1'b1;
                                  end
                                  else begin
                                  end
                                  sdma_contr_reg[`DatTransDir] <= 0; // Reset start transferring command
                                end
                        endcase
                        if (descriptor_line[31:16] == 16'h0000)
                          rd_dat_words <= 17'h10000;
                        else
                          rd_dat_words <= descriptor_line[31:16];
                      end
                    end
            
          endcase
          if (dat_int_rst)
            dma_interrupts <= 0;
        end
      end  
      
      always_ff @(posedge clock)
      begin: FSM_SEQ
        if (reset == 1'b0) begin
          adma_state <= ST_STOP;
          trans_act <= 0;
        end
        else begin
          trans_act <= next_trans_act;
          adma_state <= next_state;
        end
      end


endmodule
