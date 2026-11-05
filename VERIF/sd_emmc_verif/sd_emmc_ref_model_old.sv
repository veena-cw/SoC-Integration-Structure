//systemverilog
//----------------------------------------------------------------------
// File       : sd_emmc_ref_model.sv
// Description:
//   Functional reference model for the SD/eMMC Host Controller.
//
//   The model predicts DUT-visible behavior independently of the DUT
//   implementation. It consumes monitored transactions from:
//
//       1. AXI-Lite
//       2. AXI-MEM / DMA
//       3. SD/eMMC protocol
//
//   and produces expected transactions for the scoreboard.
//
// Compatible:
//   Vivado Simulator
//   Questa
//   Xcelium
//   VCS
//
// Important:
//   - No DUT internal signals are accessed.
//   - No simulator-specific constructs are used.
//   - Uses the exact sequence-item fields supplied by the project.
//   - Register packing follows the supplied RTL/reference-model
//     interpretation and is intentionally isolated in this file.
//----------------------------------------------------------------------

`ifndef SD_EMMC_REF_MODEL_SV
`define SD_EMMC_REF_MODEL_SV
`include "uvm_macros.svh"
import uvm_pkg::*;


`include "axi_lite_seq_item.sv"
`include "axi_mem_seq_item.sv"
`include "sd_emmc_seq_item.sv"
`include "irq_seq_item.sv"

//----------------------------------------------------------------------
// Multiple analysis implementations in one component
//----------------------------------------------------------------------

`uvm_analysis_imp_decl(_axi_lite)
`uvm_analysis_imp_decl(_axi_mem)
`uvm_analysis_imp_decl(_sd_emmc)


//======================================================================
// SD/eMMC Functional Reference Model
//======================================================================

class sd_emmc_ref_model extends uvm_component;

  `uvm_component_utils(sd_emmc_ref_model)

  //====================================================================
  // Analysis Inputs
  //====================================================================

  uvm_analysis_imp_axi_lite #(
    axi_lite_seq_item,
    sd_emmc_ref_model
  ) axi_lite_export;

  uvm_analysis_imp_axi_mem #(
    axi_mem_seq_item,
    sd_emmc_ref_model
  ) axi_mem_export;

  uvm_analysis_imp_sd_emmc #(
    sd_emmc_seq_item,
    sd_emmc_ref_model
  ) sd_emmc_export;


  //====================================================================
  // Expected Outputs
  //====================================================================

  uvm_analysis_port #(axi_lite_seq_item)
    expected_reg_ap;

  uvm_analysis_port #(axi_mem_seq_item)
    expected_mem_ap;

  uvm_analysis_port #(sd_emmc_seq_item)
    expected_sd_ap;

  uvm_analysis_port #(irq_seq_item)
    expected_irq_ap;


  //====================================================================
  // Configuration
  //====================================================================

  bit enable_pio_support        = 1'b0;
  bit enforce_rw1c              = 1'b0;
  bit is_emmc_mode              = 1'b0;

  bit enable_irq_prediction     = 1'b1;
  bit enable_crc_prediction     = 1'b1;
  bit enable_timeout_prediction = 1'b1;
  bit enable_dma_prediction     = 1'b1;


  //====================================================================
  // Register Index Map
  //
  // This is the word-oriented representation used by the supplied
  // reference-model specification.
  //
  // AXI-Lite sequence item currently requires addr[1:0] == 0.
  // Therefore accesses are modeled at the 32-bit word level.
  //====================================================================

  typedef enum int unsigned {

    REG_SDMA_ADDR    = 0,   // 0x00
    REG_BLOCK_SIZE   = 1,   // 0x04
    REG_ARGUMENT_1   = 2,   // 0x08
    REG_TRANS_MODE   = 3,   // 0x0C

    REG_RESP_0       = 4,   // 0x10
    REG_RESP_1       = 5,   // 0x14
    REG_RESP_2       = 6,   // 0x18
    REG_RESP_3       = 7,   // 0x1C

    REG_BUFFER_PORT  = 8,   // 0x20
    REG_STATE        = 9,   // 0x24

    REG_HOST_CTRL_1  = 10,  // 0x28
    REG_CLOCK_CTRL   = 11,  // 0x2C

    REG_NORM_INT     = 12,  // 0x30
    REG_NORM_EN      = 13,  // 0x34
    REG_NORM_SIG     = 14,  // 0x38

    REG_AUTO_ERR     = 15,  // 0x3C

    REG_CAPS_L       = 16,  // 0x40
    REG_CAPS_H       = 17,  // 0x44

    REG_RESERVED_18  = 18,
    REG_RESERVED_19  = 19,
    REG_RESERVED_20  = 20,

    REG_ADMA_ERR    = 21,   // 0x54
    REG_ADMA_ADDR_L = 22,   // 0x58
    REG_ADMA_ADDR_H = 23    // 0x5C

  } reg_index_e;


  //====================================================================
  // Register Storage
  //====================================================================

  bit [31:0] reg_state [0:23];


  //====================================================================
  // Card State
  //====================================================================

  typedef enum int unsigned {

    CARD_IDLE,
    CARD_READY,
    CARD_IDENT,
    CARD_STBY,
    CARD_TRAN,
    CARD_DATA_RX,
    CARD_DATA_TX

  } card_state_e;

  card_state_e card_state;

  bit [15:0] card_rca;


  //====================================================================
  // Card Memory
  //
  // Sparse associative memory allows large logical card capacity
  // without allocating the entire card.
  //====================================================================

  bit [7:0] card_memory [bit [31:0]];


  //====================================================================
  // DMA state
  //====================================================================

  typedef enum int unsigned {

    DMA_STOP,
    DMA_FETCH_DESCRIPTOR,
    DMA_TRANSFER

  } dma_state_e;

  dma_state_e dma_state;

  bit [63:0] dma_current_address;


  //====================================================================
  // Statistics
  //====================================================================

  int unsigned command_count;
  int unsigned dma_count;
  int unsigned sd_transaction_count;
  int unsigned irq_count;


  //====================================================================
  // Constructor
  //====================================================================

  function new(string name = "sd_emmc_ref_model", uvm_component parent = null);

    super.new(name, parent);

    axi_lite_export = new("axi_lite_export", this);

    axi_mem_export =  new("axi_mem_export", this);

    sd_emmc_export =  new("sd_emmc_export", this);

    expected_reg_ap = new("expected_reg_ap", this);

    expected_mem_ap = new("expected_mem_ap", this);

    expected_sd_ap =  new("expected_sd_ap", this);

    expected_irq_ap = new("expected_irq_ap", this);

  endfunction


  //====================================================================
  // Build Phase
  //====================================================================

  virtual function void build_phase(uvm_phase phase);

    super.build_phase(phase);

    void'(uvm_config_db#(bit)::get(this, "", "enable_pio_support", enable_pio_support));

    void'(uvm_config_db#(bit)::get(this, "", "enforce_rw1c", enforce_rw1c));

    void'(uvm_config_db#(bit)::get(this, "", "is_emmc_mode", is_emmc_mode));

    void'(uvm_config_db#(bit)::get(this, "", "enable_irq_prediction", enable_irq_prediction));

    void'(uvm_config_db#(bit)::get(this, "", "enable_crc_prediction", enable_crc_prediction));

    void'(uvm_config_db#(bit)::get(this, "", "enable_timeout_prediction", enable_timeout_prediction));

    void'(uvm_config_db#(bit)::get(this, "", "enable_dma_prediction", enable_dma_prediction));

    reset_model();

  endfunction


  //====================================================================
  // Reset Model
  //====================================================================

  function void reset_model();

    foreach (reg_state[i])
      reg_state[i] = 32'h0000_0000;

    //------------------------------------------------------------------
    // Capability register.
    //
    // Value supplied by the reference-model input specification.
    //------------------------------------------------------------------

    reg_state[REG_CAPS_L] = 32'h1A2D_0000;

    reg_state[REG_CAPS_H] = 32'h0000_0007;


    //------------------------------------------------------------------
    // Initial present-state value.
    //------------------------------------------------------------------

    reg_state[REG_STATE] = 32'h0007_0000;


    card_state = CARD_IDLE;

    card_rca = 16'h0000;

    dma_state = DMA_STOP;

    dma_current_address = 64'h0;

    command_count = 0;

    dma_count = 0;

    sd_transaction_count = 0;

    irq_count = 0;

  endfunction


  //====================================================================
  // Card Memory Initialization
  //====================================================================

  function void initialize_card_memory();

    card_memory.delete();

    // Deterministic 512-byte test sector.
    for (int unsigned i = 0; i < 512; i++)
      card_memory[i] = bit'(i[7:0]);

  endfunction


  //====================================================================
  // Utility: Address -> Register Index
  //====================================================================

  function int get_reg_index(bit [31:0] addr);

    return int'(addr[7:2]);

  endfunction


  //====================================================================
  // Utility: Apply AXI-Lite WSTRB
  //====================================================================

  function bit [31:0] apply_wstrb(
    bit [31:0] old_value,
    bit [31:0] new_value,
    bit [3:0]  wstrb
  );

    bit [31:0] result;

    result = old_value;

    for (int i = 0; i < 4; i++) begin

      if (wstrb[i])
        result[(i*8) +: 8] =
          new_value[(i*8) +: 8];

    end

    return result;

  endfunction


  //====================================================================
  // AXI-Lite Monitor Input
  //====================================================================

  virtual function void write_axi_lite(
    axi_lite_seq_item t
  );

    int idx;

    bit [31:0] old_value;
    bit [31:0] new_value;

    axi_lite_seq_item expected;


    idx = get_reg_index(t.addr);


    if ((idx < 0) || (idx >= 24)) begin

      `uvm_warning("REF_MODEL", $sformatf("AXI-Lite access outside modeled register range: 0x%08h", t.addr));

      return;

    end


    //------------------------------------------------------------------
    // WRITE
    //------------------------------------------------------------------

    if (t.cmd == axi_lite_seq_item::AXI_WRITE) begin

      old_value = reg_state[idx];

      //----------------------------------------------------------------
      // Register-specific behavior
      //----------------------------------------------------------------

      case (idx)

        REG_STATE,
        REG_CAPS_L,
        REG_CAPS_H: begin

          // Read-only registers.

          `uvm_info("REF_MODEL", $sformatf("Ignoring write to RO register 0x%08h", t.addr),  UVM_HIGH);

        end


        REG_NORM_INT: begin

          if (enforce_rw1c) begin

            reg_state[idx] = old_value & ~(t.write_data & wstrb_mask(t.wstrb));

          end
          else begin

            reg_state[idx] = apply_wstrb(old_value, t.write_data, t.wstrb);

          end

        end


        default: begin

          reg_state[idx] = apply_wstrb(old_value, t.write_data, t.wstrb);

        end

      endcase


      //----------------------------------------------------------------
      // Command launch
      //----------------------------------------------------------------

      if (idx == REG_TRANS_MODE) begin

        // Command field occupies upper half of TRANS_MODE.

        if (t.wstrb[2] || t.wstrb[3])
          process_command_trigger();

      end


      //----------------------------------------------------------------
      // Software reset
      //----------------------------------------------------------------

      if (idx == REG_CLOCK_CTRL) begin

        if (t.wstrb[3])
          process_software_reset();

      end


      //----------------------------------------------------------------
      // Expected AXI-Lite write.
      //
      // The observed write itself is the expected bus transaction,
      // except where the reference model modifies register semantics.
      //----------------------------------------------------------------

      expected = axi_lite_seq_item::type_id::create("expected_axi_lite_write");

      expected.copy(t);

      expected_reg_ap.write(expected);

    end


    //------------------------------------------------------------------
    // READ
    //------------------------------------------------------------------

    else begin

      expected =
        axi_lite_seq_item::type_id::create(
          "expected_axi_lite_read"
        );

      expected.copy(t);

      expected.read_data =
        reg_state[idx];

      expected_reg_ap.write(expected);

    end

  endfunction


  //====================================================================
  // WSTRB -> 32-bit Mask
  //====================================================================

  function bit [31:0] wstrb_mask(
    bit [3:0] wstrb
  );

    bit [31:0] mask;

    mask = 32'h0;

    for (int i = 0; i < 4; i++) begin

      if (wstrb[i])
        mask[(i*8) +: 8] = 8'hFF;

    end

    return mask;

  endfunction


  //====================================================================
  // AXI-MEM Monitor Input
  //====================================================================

  virtual function void write_axi_mem(axi_mem_seq_item t);

    axi_mem_seq_item expected;

    dma_count++;


    //------------------------------------------------------------------
    // Maintain the reference-model DMA state.
    //------------------------------------------------------------------

    if (enable_dma_prediction)
      dma_state = DMA_TRANSFER;


    dma_current_address = t.address;


    //------------------------------------------------------------------
    // WRITE:
    //
    // System memory -> controller/card.
    //
    // The observed AXI-MEM write represents data becoming available
    // from the system side.
    //------------------------------------------------------------------

    if (t.cmd == axi_mem_seq_item::AXI_MEM_WRITE) begin

      update_card_memory_from_axi_mem(t);

    end


    //------------------------------------------------------------------
    // READ:
    //
    // Controller/card -> system memory.
    //
    // Generate expected memory transaction based on the current card
    // contents.
    //------------------------------------------------------------------

    if (t.cmd == axi_mem_seq_item::AXI_MEM_READ) begin

      expected = create_expected_dma_read(t);

      expected_mem_ap.write(expected);

    end
    else begin

      expected =
        create_expected_dma_write(t);

      expected_mem_ap.write(expected);

    end


    dma_state = DMA_STOP;

  endfunction


  //====================================================================
  // Generate Expected AXI-MEM READ
  //====================================================================

  function axi_mem_seq_item create_expected_dma_read(axi_mem_seq_item actual);

    axi_mem_seq_item exp;

    exp = axi_mem_seq_item::type_id::create("expected_dma_read");

    exp.copy(actual);

    exp.cmd = axi_mem_seq_item::AXI_MEM_READ;

    exp.resp = 2'b00;

    return exp;

  endfunction


  //====================================================================
  // Generate Expected AXI-MEM WRITE
  //====================================================================

  function axi_mem_seq_item create_expected_dma_write(axi_mem_seq_item actual);

    axi_mem_seq_item exp;

    exp = axi_mem_seq_item::type_id::create("expected_dma_write");

    exp.copy(actual);

    exp.cmd = axi_mem_seq_item::AXI_MEM_WRITE;

    exp.resp = 2'b00;

    return exp;

  endfunction


  //====================================================================
  // Update Card Memory from AXI-MEM Write
  //====================================================================

  function void update_card_memory_from_axi_mem(
    axi_mem_seq_item t
  );

    bit [31:0] byte_address;

    byte_address =
      bit'(t.address[31:0]);

    for (int unsigned beat = 0;
         beat < t.data.size();
         beat++) begin

      for (int byte_idx = 0;
           byte_idx < 8;
           byte_idx++) begin

        card_memory[
          byte_address +
          (beat * 8) +
          byte_idx
        ] =
          t.data[beat][(byte_idx*8) +: 8];

      end

    end

  endfunction


  //====================================================================
  // SD/eMMC Monitor Input
  //====================================================================

  virtual function void write_sd_emmc(
    sd_emmc_seq_item t
  );

    sd_emmc_seq_item expected;

    sd_transaction_count++;


    expected =
      predict_sd_transaction(t);


    if (expected != null)
      expected_sd_ap.write(expected);

  endfunction


  //====================================================================
  // SD/eMMC Transaction Predictor
  //====================================================================

  function sd_emmc_seq_item predict_sd_transaction(
    sd_emmc_seq_item actual
  );

    sd_emmc_seq_item expected;

    expected =
      sd_emmc_seq_item::type_id::create(
        "expected_sd_emmc"
      );

    //------------------------------------------------------------------
    // Start from protocol-independent transaction information.
    //------------------------------------------------------------------

    expected.protocol =
      actual.protocol;

    expected.cmd_idx =
      actual.cmd_idx;

    expected.argument =
      actual.argument;

    expected.response_type =
      expected_response_type(
        actual.cmd_idx
      );

    expected.transfer_type =
      actual.transfer_type;

    expected.block_size =
      actual.block_size;

    expected.block_count =
      actual.block_count;

    expected.ddr_mode =
      actual.ddr_mode;

    expected.bus_width =
      actual.bus_width;

    expected.transaction_id =
      actual.transaction_id;

    expected.error_mode =
      actual.error_mode;


    //------------------------------------------------------------------
    // Error injection.
    //------------------------------------------------------------------

    if (actual.error_mode !=
        sd_emmc_seq_item::ERR_NONE) begin

      predict_error_response(
        actual,
        expected
      );

      return expected;

    end


    //------------------------------------------------------------------
    // Command processing.
    //------------------------------------------------------------------

    case (actual.cmd_idx)

      0: begin
        predict_cmd0(expected);
      end


      1: begin
        predict_cmd1(expected);
      end


      2: begin
        predict_cmd2(expected);
      end


      3: begin
        predict_cmd3(
          actual,
          expected
        );
      end


      7: begin
        predict_cmd7(
          actual,
          expected
        );
      end


      8: begin
        predict_cmd8(
          actual,
          expected
        );
      end


      17: begin
        predict_cmd17(
          actual,
          expected
        );
      end


      24: begin
        predict_cmd24(
          actual,
          expected
        );
      end


      default: begin

        // For commands not explicitly modeled, preserve the
        // observed transaction while marking no functional
        // response prediction.

        expected.response_data =
          actual.response_data;

      end

    endcase


    return expected;

  endfunction


  //====================================================================
  // Expected Response Type
  //====================================================================

  function sd_emmc_seq_item::response_type_e
    expected_response_type(
      bit [5:0] cmd_idx
    );

    case (cmd_idx)

      0:
        return sd_emmc_seq_item::RESP_NONE;

      2:
        return sd_emmc_seq_item::RESP_R2;

      8:
        return sd_emmc_seq_item::RESP_R7;

      17:
        return sd_emmc_seq_item::RESP_R1;

      24:
        return sd_emmc_seq_item::RESP_R1;

      default:
        return sd_emmc_seq_item::RESP_R1;

    endcase

  endfunction


  //====================================================================
  // CMD0
  //====================================================================

  function void predict_cmd0(
    sd_emmc_seq_item expected
  );

    card_state =
      CARD_IDLE;

    card_rca =
      16'h0000;

    expected.response_data =
      136'h0;

    expected.response_crc_ok =
      1'b1;

    expected.response_timeout =
      1'b0;

  endfunction


  //====================================================================
  // CMD1 - eMMC Operating Condition
  //====================================================================

  function void predict_cmd1(
    sd_emmc_seq_item expected
  );

    if (!is_emmc_mode) begin

      expected.response_data =
        136'h0;

      expected.response_timeout =
        1'b1;

      return;

    end


    if (card_state == CARD_IDLE) begin

      card_state =
        CARD_READY;

      expected.response_data =
        136'h0000_0000_0000_0000_0000_0000_80FF_8000;

      expected.response_crc_ok =
        1'b1;

      expected.response_timeout =
        1'b0;

    end

  endfunction


  //====================================================================
  // CMD2 - Get CID
  //====================================================================

  function void predict_cmd2(
    sd_emmc_seq_item expected
  );

    if (card_state != CARD_READY)
      return;


    card_state =
      CARD_IDENT;


    expected.response_data =
      136'h0000_5344_4361_7264_5061_7474_6572_6E00_0001;


    expected.response_crc_ok =
      1'b1;

    expected.response_timeout =
      1'b0;

  endfunction


  //====================================================================
  // CMD3 - RCA
  //====================================================================

  function void predict_cmd3(
    sd_emmc_seq_item actual,
    sd_emmc_seq_item expected
  );

    if (card_state != CARD_IDENT)
      return;


    card_state =
      CARD_STBY;


    if (is_emmc_mode) begin

      card_rca =
        actual.argument[31:16];

    end
    else begin

      card_rca =
        16'h1234;

    end


    expected.response_data =
      {
        104'h0,
        card_rca,
        16'h0500
      };

    expected.response_crc_ok =
      1'b1;

    expected.response_timeout =
      1'b0;

  endfunction


  //====================================================================
  // CMD7 - Select Card
  //====================================================================

  function void predict_cmd7(
    sd_emmc_seq_item actual,
    sd_emmc_seq_item expected
  );

    if ((card_state == CARD_STBY) &&
        (actual.argument[31:16] == card_rca)) begin

      card_state =
        CARD_TRAN;

      expected.response_data =
        {
          104'h0,
          16'h0000,
          16'h0900
        };

      expected.response_crc_ok =
        1'b1;

      expected.response_timeout =
        1'b0;

    end

  endfunction


  //====================================================================
  // CMD8 - Interface / Voltage Check
  //====================================================================

  function void predict_cmd8(
    sd_emmc_seq_item actual,
    sd_emmc_seq_item expected
  );

    if (card_state == CARD_IDLE) begin

      card_state =
        CARD_READY;

      expected.response_data =
        {
          88'h0,
          actual.argument
        };

      expected.response_crc_ok =
        1'b1;

      expected.response_timeout =
        1'b0;

    end

  endfunction


  //====================================================================
  // CMD17 - Single Block Read
  //====================================================================

  function void predict_cmd17(
    sd_emmc_seq_item actual,
    sd_emmc_seq_item expected
  );

    int unsigned total_bytes;

    bit [31:0] base_addr;


    if (card_state != CARD_TRAN)
      return;


    card_state =
      CARD_DATA_RX;


    expected.transfer_type =
      sd_emmc_seq_item::TRANSFER_READ;


    expected.response_data =
      {
        104'h0,
        16'h0B00
      };


    expected.response_crc_ok =
      1'b1;

    expected.response_timeout =
      1'b0;


    total_bytes =
      actual.block_size *
      ((actual.block_count == 0) ?
       1 :
       actual.block_count);


    base_addr =
      actual.argument;


    expected.data =
      new[total_bytes];


    for (int unsigned i = 0;
         i < total_bytes;
         i++) begin

      if (card_memory.exists(base_addr + i))
        expected.data[i] =
          card_memory[base_addr + i];
      else
        expected.data[i] =
          8'h00;

    end


    card_state =
      CARD_TRAN;

  endfunction


  //====================================================================
  // CMD24 - Single Block Write
  //====================================================================

  function void predict_cmd24(
    sd_emmc_seq_item actual,
    sd_emmc_seq_item expected
  );

    expected.transfer_type =
      sd_emmc_seq_item::TRANSFER_WRITE;


    if (card_state != CARD_TRAN)
      return;


    card_state =
      CARD_DATA_TX;


    expected.response_data =
      {
        104'h0,
        16'h0D00
      };


    expected.response_crc_ok =
      1'b1;

    expected.response_timeout =
      1'b0;


    //------------------------------------------------------------------
    // If data is already present in the monitored transaction, update
    // the reference card memory.
    //------------------------------------------------------------------

    if (actual.data.size() != 0) begin

      for (int unsigned i = 0;
           i < actual.data.size();
           i++) begin

        card_memory[
          actual.argument + i
        ] =
          actual.data[i];

      end

    end


    card_state =
      CARD_TRAN;

  endfunction


  //====================================================================
  // Error Prediction
  //====================================================================

  function void predict_error_response(
    sd_emmc_seq_item actual,
    sd_emmc_seq_item expected
  );

    expected.response_crc_ok =
      1'b1;

    expected.response_timeout =
      1'b0;


    case (actual.error_mode)

      sd_emmc_seq_item::ERR_CMD_CRC: begin

        expected.response_crc_ok =
          1'b0;

      end


      sd_emmc_seq_item::ERR_CMD_TIMEOUT: begin

        expected.response_timeout =
          1'b1;

      end


      sd_emmc_seq_item::ERR_DATA_CRC: begin

        expected.response_crc_ok =
          1'b0;

      end


      sd_emmc_seq_item::ERR_DATA_TIMEOUT: begin

        expected.response_timeout =
          1'b1;

      end


      sd_emmc_seq_item::ERR_BUSY_TIMEOUT: begin

        expected.response_timeout =
          1'b1;

      end


      sd_emmc_seq_item::ERR_ILLEGAL_CMD: begin

        expected.response_data =
          136'h0;

      end


      sd_emmc_seq_item::ERR_BAD_RESPONSE: begin

        expected.response_crc_ok =
          1'b0;

      end


      default: begin
      end

    endcase

  endfunction


  //====================================================================
  // Software Reset
  //====================================================================

  function void process_software_reset();

    bit [7:0] reset_value;

    reset_value =
      reg_state[REG_CLOCK_CTRL][31:24];


    //------------------------------------------------------------------
    // Bit 0 - Reset All
    //------------------------------------------------------------------

    if (reset_value[0]) begin

      reset_model();

      return;

    end


    //------------------------------------------------------------------
    // Bit 1 - Command Reset
    //------------------------------------------------------------------

    if (reset_value[1]) begin

      reg_state[REG_STATE][0] =
        1'b0;

      reg_state[REG_NORM_INT][0] =
        1'b0;

      reg_state[REG_CLOCK_CTRL][25] =
        1'b0;

    end


    //------------------------------------------------------------------
    // Bit 2 - Data Reset
    //------------------------------------------------------------------

    if (reset_value[2]) begin

      reg_state[REG_STATE][1] =
        1'b0;

      reg_state[REG_STATE][11] =
        1'b0;

      reg_state[REG_STATE][10] =
        1'b0;

      reg_state[REG_NORM_INT][1] =
        1'b0;

      reg_state[REG_CLOCK_CTRL][26] =
        1'b0;

    end

  endfunction


  //====================================================================
  // Command Trigger
  //====================================================================

  function void process_command_trigger();

    bit [15:0] command_reg;
    bit [5:0]  command_index;
    bit [31:0] argument;


    command_reg =
      reg_state[REG_TRANS_MODE][31:16];

    command_index =
      command_reg[13:8];

    argument =
      reg_state[REG_ARGUMENT_1];


    command_count++;


    `uvm_info(
      "REF_MODEL",
      $sformatf(
        "Command trigger: CMD%0d ARG=0x%08h",
        command_index,
        argument
      ),
      UVM_MEDIUM
    )


    //------------------------------------------------------------------
    // Set command inhibit while command is active.
    //------------------------------------------------------------------

    reg_state[REG_STATE][0] =
      1'b1;


    //------------------------------------------------------------------
    // Process command using the independent card model.
    //------------------------------------------------------------------

    case (command_index)

      0: begin

        card_state =
          CARD_IDLE;

        card_rca =
          16'h0000;

      end


      1: begin

        if (is_emmc_mode &&
            card_state == CARD_IDLE) begin

          card_state =
            CARD_READY;

          reg_state[REG_RESP_0] =
            32'h80FF_8000;

        end

      end


      2: begin

        if (card_state == CARD_READY) begin

          card_state =
            CARD_IDENT;

          reg_state[REG_RESP_0] =
            32'h5344_4361;

          reg_state[REG_RESP_1] =
            32'h7264_5061;

          reg_state[REG_RESP_2] =
            32'h7474_6572;

          reg_state[REG_RESP_3] =
            32'h6E00_0001;

        end

      end


      3: begin

        if (card_state == CARD_IDENT) begin

          card_state =
            CARD_STBY;

          if (is_emmc_mode)
            card_rca =
              argument[31:16];
          else
            card_rca =
              16'h1234;


          reg_state[REG_RESP_0] =
            {
              card_rca,
              16'h0500
            };

        end

      end


      7: begin

        if ((card_state == CARD_STBY) &&
            (argument[31:16] == card_rca)) begin

          card_state =
            CARD_TRAN;

          reg_state[REG_RESP_0] =
            32'h0000_0900;

        end

      end


      8: begin

        if (card_state == CARD_IDLE) begin

          card_state =
            CARD_READY;

          reg_state[REG_RESP_0] =
            argument;

        end

      end


      17: begin

        if (card_state == CARD_TRAN) begin

          card_state =
            CARD_DATA_RX;

          reg_state[REG_RESP_0] =
            32'h0000_0B00;

          predict_command_data_transfer(
            1'b1,
            argument
          );

        end

      end


      24: begin

        if (card_state == CARD_TRAN) begin

          card_state =
            CARD_DATA_TX;

          reg_state[REG_RESP_0] =
            32'h0000_0D00;

          predict_command_data_transfer(
            1'b0,
            argument
          );

        end

      end


      default: begin

        `uvm_info(
          "REF_MODEL",
          $sformatf(
            "CMD%0d not explicitly modeled",
            command_index
          ),
          UVM_HIGH
        );

      end

    endcase


    //------------------------------------------------------------------
    // Command complete.
    //------------------------------------------------------------------

    reg_state[REG_STATE][0] =
      1'b0;

    reg_state[REG_NORM_INT][0] =
      1'b1;


    if (enable_irq_prediction)
      predict_irq(
        irq_seq_item::IRQ_EVENT_ASSERT
      );

  endfunction


  //====================================================================
  // Command-Level Data Transfer Prediction
  //====================================================================

  function void predict_command_data_transfer(
    bit read_direction,
    bit [31:0] argument
  );

    bit [15:0] block_size;
    bit [15:0] block_count;

    bit [15:0] transfer_mode;

    bit dma_enable;

    int unsigned total_bytes;
    axi_mem_seq_item dma_item;

    block_size =
      reg_state[REG_BLOCK_SIZE][15:0];

    block_count =
      reg_state[REG_BLOCK_SIZE][31:16];

    transfer_mode =
      reg_state[REG_TRANS_MODE][15:0];

    dma_enable =
      transfer_mode[0];


    if (block_count == 0)
      block_count = 1;


    total_bytes =
      block_size * block_count;


    //------------------------------------------------------------------
    // DMA
    //------------------------------------------------------------------

    if (dma_enable &&
        enable_dma_prediction) begin

      dma_state =
        DMA_TRANSFER;


      dma_current_address =
        {
          reg_state[REG_ADMA_ADDR_H],
          reg_state[REG_ADMA_ADDR_L]
        };


      if (read_direction) begin

        reg_state[REG_STATE][9] =
          1'b1;

      end
      else begin

        reg_state[REG_STATE][10] =
          1'b1;

      end


      //----------------------------------------------------------------
      // Expected memory transaction.
      //----------------------------------------------------------------

      

      dma_item =
        axi_mem_seq_item::type_id::create(
          "expected_command_dma"
        );


      dma_item.cmd =
        read_direction ?
        axi_mem_seq_item::AXI_MEM_WRITE :
        axi_mem_seq_item::AXI_MEM_READ;


      dma_item.address =
        dma_current_address;


      dma_item.burst_size =
        3;       // 8-byte AXI transfer


      dma_item.burst_type =
        axi_mem_seq_item::AXI_BURST_INCR;


      dma_item.burst_len =
        (total_bytes + 7) / 8;


      dma_item.transfer_id =
        dma_count;

      dma_item.descriptor_id =
        0;


      dma_item.data =
        new[dma_item.burst_len];


      expected_mem_ap.write(
        dma_item
      );


      dma_count++;


      //----------------------------------------------------------------
      // Complete transfer.
      //----------------------------------------------------------------

      reg_state[REG_NORM_INT][1] =
        1'b1;


      reg_state[REG_STATE][9] =
        1'b0;

      reg_state[REG_STATE][10] =
        1'b0;


      dma_state =
        DMA_STOP;

    end


    //------------------------------------------------------------------
    // PIO
    //------------------------------------------------------------------

    else if (enable_pio_support) begin

      if (read_direction) begin

        reg_state[REG_STATE][11] =
          1'b1;

        reg_state[REG_NORM_INT][5] =
          1'b1;

      end
      else begin

        reg_state[REG_STATE][10] =
          1'b1;

        reg_state[REG_NORM_INT][4] =
          1'b1;

      end

    end


    //------------------------------------------------------------------
    // Return card to TRANSFER state after data operation.
    //------------------------------------------------------------------

    card_state =
      CARD_TRAN;

    reg_state[REG_STATE][1] =
      1'b0;

  endfunction


  //====================================================================
  // IRQ Prediction
  //====================================================================

  function void predict_irq(
    irq_seq_item::irq_event_e event_type
  );

    irq_seq_item irq_exp;


    if (!enable_irq_prediction)
      return;


    irq_exp =
      irq_seq_item::type_id::create(
        "expected_irq"
      );


    irq_exp.event_type =
      event_type;


    if (event_type ==
        irq_seq_item::IRQ_EVENT_ASSERT) begin

      irq_exp.irq_value =
        1'b1;

    end
    else begin

      irq_exp.irq_value =
        1'b0;

    end


    // Event numbering and exact duration are monitor-specific.
    // Keep them at deterministic neutral values.

    irq_exp.event_id =
      0;

    irq_exp.duration_cycles =
      0;


    irq_count++;


    expected_irq_ap.write(
      irq_exp
    );

  endfunction


  //====================================================================
  // End-of-Elaboration Diagnostics
  //====================================================================

  virtual function void end_of_elaboration_phase(
    uvm_phase phase
  );

    super.end_of_elaboration_phase(phase);

    `uvm_info(
      "REF_MODEL",
      "SD/eMMC functional reference model configured",
      UVM_LOW
    )

    `uvm_info(
      "REF_MODEL",
      $sformatf(
        "PIO=%0b RW1C=%0b eMMC=%0b DMA=%0b",
        enable_pio_support,
        enforce_rw1c,
        is_emmc_mode,
        enable_dma_prediction
      ),
      UVM_LOW
    )

  endfunction


endclass : sd_emmc_ref_model


`endif // SD_EMMC_REF_MODEL_SV
