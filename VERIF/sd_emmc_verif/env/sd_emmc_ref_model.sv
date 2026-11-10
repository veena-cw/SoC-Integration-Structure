`ifndef SD_EMMC_REF_MODEL_SV
`define SD_EMMC_REF_MODEL_SV

`include "uvm_macros.svh"
import uvm_pkg::*;
import sd_emmc_controller_pkg::*;

// Create unique analysis implementation declarations for distinct sequence item types
`uvm_analysis_imp_decl(_reg)
`uvm_analysis_imp_decl(_sd)
`uvm_analysis_imp_decl(_mem)

class sd_emmc_ref_model extends uvm_component;

  `uvm_component_utils(sd_emmc_ref_model)

  //----------------------------------------------------------------------------
  // TLM Input Implementations (Receiving Monitored Transactions)
  //----------------------------------------------------------------------------
  uvm_analysis_imp_reg #(sd_emmc_controller_axi_lite_agent_seq_item, sd_emmc_ref_model) reg_imp;
  uvm_analysis_imp_sd  #(sd_emmc_controller_sd_emmc_agent_seq_item,  sd_emmc_ref_model) sd_imp;
  uvm_analysis_imp_mem #(sd_emmc_controller_axi_mem_agent_seq_item,  sd_emmc_ref_model) mem_imp;

  //----------------------------------------------------------------------------
  // TLM Output Analysis Ports (Sending Expected Items to Scoreboard)
  //----------------------------------------------------------------------------
  uvm_analysis_port #(sd_emmc_controller_axi_lite_agent_seq_item) expected_reg_ap;
  uvm_analysis_port #(sd_emmc_controller_sd_emmc_agent_seq_item)  expected_sd_ap;
  uvm_analysis_port #(sd_emmc_controller_axi_mem_agent_seq_item)  expected_mem_ap;

  //----------------------------------------------------------------------------
  // Card Internal Model State & Memory
  //----------------------------------------------------------------------------
  typedef enum bit [3:0] {
    STATE_IDLE  = 4'd0,
    STATE_READY = 4'd1,
    STATE_IDENT = 4'd2,
    STATE_STBY  = 4'd3,
    STATE_TRAN  = 4'd4,
    STATE_DATA  = 4'd5,
    STATE_RCV   = 4'd6,
    STATE_PRG   = 4'd7,
    STATE_DIS   = 4'd8
  } card_state_e;

  protected card_state_e        current_state;
  protected bit [31:0]          rca;
  protected bit [31:0]          card_status;
  protected bit [31:0]          block_len;
  bit [7:0]           mem_storage[bit [32:0]]; // Sparse storage array
  
  virtual sd_emmc_controller_sd_emmc_if vif;

  // Register Bank Shadow Space (for AXI-Lite verification)
  protected bit [31:0]          csr_regs [0:31];

  //----------------------------------------------------------------------------
  // Constructor & Build Phase
  //----------------------------------------------------------------------------
  function new(string name = "sd_emmc_ref_model", uvm_component parent = null);
    super.new(name, parent);

    reg_imp         = new("reg_imp", this);
    sd_imp          = new("sd_imp", this);
    mem_imp         = new("mem_imp", this);

    expected_reg_ap = new("expected_reg_ap", this);
    expected_sd_ap  = new("expected_sd_ap", this);
    expected_mem_ap = new("expected_mem_ap", this);
  endfunction

  virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    `uvm_info("REF_DBG","ref_model build v2",UVM_LOW)
    reset_model();
    reset_csr();
  endfunction
    
  
  //----------------------------------------------------------------------------
  // Reset Model
  //----------------------------------------------------------------------------
  virtual function void reset_model();
    //bit [11:0] key;
    current_state = STATE_IDLE;
    rca           = 32'h0001_0000;
    block_len     = 32'd512;
    card_status   = 32'h0000_0900;
    mem_storage.delete();
    endfunction
    
    virtual function void reset_csr();
    // Reset all 32 CSR array slots to 0
    for (int i = 0; i < 32; i++) csr_regs[i] = 32'h0000_0000;
    csr_regs['h24 >> 2] = 32'h01FF_0000; // Present State reset value
    csr_regs['h2C >> 2] = 32'h0000_0002; // Clock Control reset value
    csr_regs['h30 >> 2] = 32'h0000_0000; // Normal/Error Interrupt Status
    csr_regs['h34 >> 2] = 32'h0000_0000; // Interrupt Status Enable
    csr_regs['h38 >> 2] = 32'h0000_0000; // Interrupt Signal Enable
    csr_regs['h3C >> 2] = 32'h0000_0000; // Auto CMD Error Status / UHS
  endfunction

  
  //----------------------------------------------------------------------------
  // TLM Implementation Write Handlers
  //----------------------------------------------------------------------------
  
  // 1. AXI-Lite Register Interface Handler
// 1. AXI-Lite Register Interface Handler
  virtual function void write_reg(sd_emmc_controller_axi_lite_agent_seq_item tr);
    sd_emmc_controller_axi_lite_agent_seq_item exp_reg_tr;
    bit [31:0] write_mask;
    bit [31:0] w1c_mask;
    bit [4:0]  idx;
    bit        locked;   // set when DAT-inhibit lockout blocks this write

    if (tr == null) return;

    // Extract register index (Address / 4)
    idx = tr.addr[6:2];

    // Create expected transaction clone
    exp_reg_tr = sd_emmc_controller_axi_lite_agent_seq_item::type_id::create("exp_reg_tr");
    exp_reg_tr.copy(tr);

    if (tr.cmd == sd_emmc_controller_axi_lite_agent_seq_item::AXI_WRITE) begin
      // Note: Removed idx 14 (0x38) from RO check because 0x38 is Read/Write
      // Byte-lane write mask from WSTRB
      write_mask = 32'h0;
      if (tr.wstrb[0]) write_mask[7:0]   = 8'hFF;
      if (tr.wstrb[1]) write_mask[15:8]  = 8'hFF;
      if (tr.wstrb[2]) write_mask[23:16] = 8'hFF;
      if (tr.wstrb[3]) write_mask[31:24] = 8'hFF;

      // DAT-Inhibit lockout logic
      locked = 0;
      if (vif != null && vif.force_inh_dat) begin
        if (idx == 5'd1) begin write_mask = 32'h0;       locked = 1; end
        if (idx == 5'd3) begin write_mask[15:0] = 16'h0; locked = 1; end
      end

      // Special handling per CSR register specification
      case (idx)
        5'd9: begin // Offset 0x24: Present State (RO / ROC fields)
          // Bit 31:25-RSVD, 24:16-RO, 15:12-RSVD, 11:8-ROC, 7:4-RSVD, 3:0-ROC
          write_mask &= 32'h0000_0000; 
        end

        5'd12: begin // Offset 0x30 / 0x32: Normal & Error Interrupt Status (RW1C / ROC)
          // 0x30 (15: ROC, 14:13: RSVD, 12:8: ROC, 7:0: RW1C) -> Mask: 0x0000_00FF
          // 0x32 (15:12: RW1C, 11: RSVD, 10:0: RW1C)       -> Mask: 0xF7FF_0000
          w1c_mask = 32'hF7FF_00FF;

          // Clear written bits where write_data bit is 1 and bit is RW1C
          csr_regs[idx] &= ~(tr.write_data & write_mask & w1c_mask);
          write_mask = 32'h0; // Prevent standard overwrite below
        end

        5'd13, 5'd14: begin // Offsets 0x34 / 0x38: Status Enable & Signal Enable
          // Low halfword bit 15 fixed 0, 14:13 RSVD, 12:0 RW
          // High halfword (0x36 / 0x3A Error halves) follow same writable mask
          write_mask &= 32'hF7FF_1FFF;
        end

        5'd15: begin // Offset 0x3C / 0x3E: Auto CMD Error Status (ROC) & UHS Mode Select (RW)
          // 0x3C (15:8 RSVD, 1 ROC, 6:5 RSVD, 4:0 ROC) is Read-Only
          // 0x3E[2:0] (slv_reg15[18:16]) = UHS Mode Select is Read/Write
          write_mask &= 32'h0007_0000;
        end

        default: ; // Standard RW registers update normally
      endcase

      // Update shadow register state for standard RW bits
      csr_regs[idx] = (tr.write_data & write_mask) | (csr_regs[idx] & ~write_mask);

      `uvm_info("REF_DBG", $sformatf("WR addr=0x%08h idx=%0d, data=0x%08h strb=0x%0h -> csr=0x%08h%s",
                tr.addr, idx, tr.write_data, tr.wstrb, csr_regs[idx],
                locked ? " (DAT-inhibit lockout applied)" : ""), UVM_LOW)
    end
    else begin // AXI_READ
      // Predict read data from internal shadow storage
      exp_reg_tr.read_data = csr_regs[idx];

      `uvm_info("REF_DBG", $sformatf("RD addr=0x%08h idx=%0d -> expected=0x%08h",
                tr.addr, idx, exp_reg_tr.read_data), UVM_LOW)
    end

    // Broadcast predicted item to scoreboard
    expected_reg_ap.write(exp_reg_tr);
  endfunction

  // 2. SD/eMMC Protocol Interface Handler
  virtual function void write_sd(sd_emmc_controller_sd_emmc_agent_seq_item tr);
    sd_emmc_controller_sd_emmc_agent_seq_item exp_sd_tr;

    if (tr == null) return;

    exp_sd_tr = sd_emmc_controller_sd_emmc_agent_seq_item::type_id::create("exp_sd_tr");
    exp_sd_tr.copy(tr);

    // Decode SD/eMMC protocol logic
    process_sd_transaction(exp_sd_tr);

    expected_sd_ap.write(exp_sd_tr);
  endfunction

  // 3. System Memory / DMA Interface Handler
  virtual function void write_mem(sd_emmc_controller_axi_mem_agent_seq_item tr);
    sd_emmc_controller_axi_mem_agent_seq_item exp_mem_tr;

    if (tr == null) return;

    exp_mem_tr = sd_emmc_controller_axi_mem_agent_seq_item::type_id::create("exp_mem_tr");
    exp_mem_tr.copy(tr);

    // Prediction for DMA system memory operations
    expected_mem_ap.write(exp_mem_tr);
  endfunction

  //----------------------------------------------------------------------------
  // SD/eMMC Command Processing Logic
  //----------------------------------------------------------------------------
  protected function void process_sd_transaction(sd_emmc_controller_sd_emmc_agent_seq_item tr);
   tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::resp_type_from_idx(tr.cmd_idx);
   
    case (tr.cmd_idx)
      6'd0: begin // CMD0: GO_IDLE_STATE
        reset_model();
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_NONE;
      end

      6'd1: begin // CMD1: SEND_OP_COND
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R3;
        tr.response_data = 136'h80FF_8000;
      end

      6'd2: begin // CMD2: ALL_SEND_CID
        current_state    = STATE_IDENT;
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R2;
      end

      6'd3: begin // CMD3: SEND_RELATIVE_ADDR
        current_state    = STATE_STBY;
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R6;
        tr.response_data = {104'h0, rca};
      end

      6'd6: begin // CMD6: SWITCH_FUNC
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1B;
        tr.response_data = {104'h0, card_status};
      end

      6'd7: begin // CMD7: SELECT/DESELECT_CARD
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1B;
        if ((tr.argument >> 16) == rca[31:16]) begin
          current_state = STATE_TRAN;
        end else begin
          current_state = STATE_STBY;
        end
        tr.response_data = {104'h0, card_status};
      end

      6'd8: begin // CMD8: SEND_IF_COND
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R7;
        tr.response_data = {104'h0, tr.argument};
      end

      6'd9: begin // CMD9: SEND_CSD
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R2;
      end

      6'd12: begin // CMD12: STOP_TRANSMISSION
        current_state    = STATE_TRAN;
        tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1B;
        tr.response_data = {104'h0, card_status};
      end

      6'd13: begin // CMD13: SEND_STATUS
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1;
        tr.response_data = {104'h0, card_status};
      end

      6'd16: begin // CMD16: SET_BLOCKLEN
        tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1;
        block_len        = tr.argument;
        tr.response_data = {104'h0, card_status};
      end

      6'd17: begin // CMD17: READ_SINGLE_BLOCK
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1;
        tr.transfer_type = sd_emmc_controller_sd_emmc_agent_seq_item::TRANSFER_READ;
        tr.block_size    = block_len;
        tr.block_count   = 32'd1;
        tr.response_data = {104'h0, card_status};
        read_card_memory(tr.argument, block_len, tr.data);
      end

      6'd18: begin // CMD18: READ_MULTIPLE_BLOCK
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1;
        tr.transfer_type = sd_emmc_controller_sd_emmc_agent_seq_item::TRANSFER_READ;
        tr.block_size    = block_len;
        if (tr.block_count == 32'd0) tr.block_count = 32'd2;
        tr.response_data = {104'h0, card_status};
        read_card_memory(tr.argument, tr.block_size * tr.block_count, tr.data);
      end

      6'd24: begin // CMD24: WRITE_BLOCK
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1;
        tr.transfer_type = sd_emmc_controller_sd_emmc_agent_seq_item::TRANSFER_WRITE;
        tr.block_size    = block_len;
        tr.block_count   = 32'd1;
        tr.response_data = {104'h0, card_status};
        write_card_memory(tr.argument, tr.data);
      end

      6'd25: begin // CMD25: WRITE_MULTIPLE_BLOCK
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1;
        tr.transfer_type = sd_emmc_controller_sd_emmc_agent_seq_item::TRANSFER_WRITE;
        tr.block_size    = block_len;
        if (tr.block_count == 32'd0) tr.block_count = 32'd2;
        tr.response_data = {104'h0, card_status};
        write_card_memory(tr.argument, tr.data);
      end

      6'd52: begin // CMD52: IO_RW_DIRECT (SDIO)
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R5;
      end

      6'd53: begin // CMD53: IO_RW_EXTENDED (SDIO)
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R5;
      end

      default: begin
        //tr.response_type = sd_emmc_controller_sd_emmc_agent_seq_item::RESP_R1;
        tr.response_data = {104'h0, card_status};
      end
    endcase

  endfunction : process_sd_transaction

  //----------------------------------------------------------------------------
  // Card Memory Reading Helper
  //----------------------------------------------------------------------------
  protected function void read_card_memory(bit [32:0] start_addr, bit [31:0] len, ref byte unsigned data_out[]);
    data_out = new[len];
    for (int i = 0; i < len; i++) begin
      data_out[i] = mem_storage.exists(start_addr + i) ? mem_storage[start_addr + i] : 8'h00;
    end
    endfunction

  //----------------------------------------------------------------------------
  // Card Memory Writing Helper
  //----------------------------------------------------------------------------
  protected function void write_card_memory(bit [32:0] start_addr, const ref byte unsigned data_in[]);
    for (int i = 0; i < data_in.size(); i++) begin
      mem_storage[start_addr + i] = data_in[i];
    end
  endfunction

endclass : sd_emmc_ref_model

`endif
