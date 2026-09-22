
//----------------------------------------------------------------------
// LPDDR5C APB Register Configuration Sequence
//----------------------------------------------------------------------

class lpddr5c_apb_reg_ctrl0_write_seq
    extends uvm_sequence #(lpddr5c_apb_agent_seq_item);

  `uvm_object_utils(lpddr5c_apb_reg_ctrl0_write_seq)

  //============================================================
  // Constructor
  //============================================================
  function new(string name = "lpddr5c_apb_reg_ctrl0_write_seq");
    super.new(name);
  endfunction


  //============================================================
  // APB WRITE TASK
  //============================================================
  task automatic apb_write(
      input logic [15:0] addr,
      input logic [31:0] data
  );

    lpddr5c_apb_agent_seq_item req;

    req = lpddr5c_apb_agent_seq_item::type_id::create("req");

    start_item(req);

    // Initialize all fields
    req.paddr  = addr;
    req.pwdata = data;
    req.pwrite = 1'b1;

    // If these fields exist in your sequence item,
    // initialize them as well.
    // req.psel    = 1'b1;
    // req.penable = 1'b0;

    finish_item(req);

    `uvm_info(
      "APB_WRITE",
      $sformatf(
        "APB WRITE: ADDR=0x%04h DATA=0x%08h",
        addr,
        data
      ),
      UVM_MEDIUM
    );

  endtask


  //============================================================
  // MAIN BODY
  //============================================================
  virtual task body();

    `uvm_info(
      "APB_CFG",
      "====================================================",
      UVM_LOW
    );

    `uvm_info(
      "APB_CFG",
      "Starting LPDDR5C APB Register Configuration",
      UVM_LOW
    );


    //==========================================================
    // CONTROL REGISTERS
    //==========================================================

    // CTRL0 - Main Control
    apb_write(
      16'h0000,
      32'h0000_0010
    );

    // CTRL1 - Mode Control
    // CL = 24
    // CWL = 18
    apb_write(
      16'h0004,
      32'h0000_0018
    );

    // CTRL2 - Channel / Rank Control
    // 2 channels, 1 rank
    apb_write(
      16'h0008,
      32'h0000_0001
    );

    // CTRL3 - Burst Control
    // BL = 16
    apb_write(
      16'h000C,
      32'h0000_0010
    );


    //==========================================================
    // TIMING REGISTERS
    //==========================================================

    // TIMING0
    // tRC  = 30
    // tRAS = 18
    // tRP  = 12
    // tRCD = 12
    apb_write(
      16'h0010,
      32'h1E12_120C
    );

    // TIMING1
    // tWTR_L = 4
    // tWTR_S = 2
    // tCCD_L = 4
    // tCCD_S = 2
    apb_write(
      16'h0014,
      32'h0402_0402
    );

    // TIMING2
    // tWR    = 16
    // tRTP   = 8
    // tRRD_L = 4
    // tRRD_S = 4
    apb_write(
      16'h0018,
      32'h1008_0408
    );

    // TIMING3
    // tXSR = 100
    // tXP  = 8
    // tCKE = 4
    // tMOD = 2
    apb_write(
      16'h001C,
      32'h6408_0402
    );

    // TIMING4
    // tREFI = 1200
    // tRFC  = 350
    apb_write(
      16'h0020,
      32'h04B0_015E
    );

    // TIMING5
    // tZQ  = 128
    // tMOD = 16
    apb_write(
      16'h0024,
      32'h0080_0010
    );


    //==========================================================
    // ECC CONFIGURATION
    //==========================================================

    // ECC enabled
    apb_write(
      16'h0060,
      32'h0000_0001
    );


    //==========================================================
    // LOW POWER CONFIGURATION
    //==========================================================

    // Auto power-down enabled
    // Threshold = 256
    apb_write(
      16'h0070,
      32'h0000_0100
    );


    //==========================================================
    // TRAINING CONFIGURATION
    //==========================================================

    // Auto-training disabled
    apb_write(
      16'h0080,
      32'h0000_0000
    );


    //==========================================================
    // INTERRUPT ENABLE
    //==========================================================

    // bit[0] = Init Done
    // bit[1] = Training Error
    // bit[2] = Refresh Error
    // bit[3] = ECC Error
    apb_write(
      16'h00A0,
      32'h0000_000F
    );


    //==========================================================
    // TEST / BIST CONFIGURATION
    //==========================================================

    // Normal operation
    // Test mode disabled
    apb_write(
      16'h00F0,
      32'h0000_0000
    );


    //==========================================================
    // CONFIGURATION COMPLETE
    //==========================================================

    `uvm_info(
      "APB_CFG",
      "LPDDR5C APB Register Configuration Completed",
      UVM_LOW
    );

    `uvm_info(
      "APB_CFG",
      "====================================================",
      UVM_LOW
    );

  endtask : body

endclass : lpddr5c_apb_reg_ctrl0_write_seq


