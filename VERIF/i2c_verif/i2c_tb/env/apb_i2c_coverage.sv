class apb_i2c_apb_coverage extends uvm_component;

  `uvm_component_utils(apb_i2c_apb_coverage)

  //============================================================
  // Analysis implementation
  //============================================================

  uvm_analysis_imp #(apb_i2c_apb_item,
                     apb_i2c_apb_coverage) analysis_export;


  //============================================================
  // APB addresses
  //============================================================

  localparam bit [31:0] APB_BASE_ADDR = 32'h3001_0000;

  localparam bit [31:0] CTRL_REG_ADDR =
      APB_BASE_ADDR + 32'h0010;

  localparam bit [31:0] STATUS_REG_ADDR =
      APB_BASE_ADDR + 32'h0014;

  localparam bit [31:0] TXDATA_REG_ADDR =
      APB_BASE_ADDR + 32'h0018;

  localparam bit [31:0] RXDATA_REG_ADDR =
      APB_BASE_ADDR + 32'h001C;


  //============================================================
  // Transaction
  //============================================================

  apb_i2c_apb_item tr;


  //============================================================
  // ONE COVERGROUP
  //============================================================

  covergroup apb_cg;

    option.per_instance = 1;


    //==========================================================
    // READ / WRITE
    //==========================================================

    cp_write: coverpoint tr.pwrite {

      bins READ  = {1'b0};
      bins WRITE = {1'b1};

    }


    //==========================================================
    // APB ADDRESS
    //==========================================================

    cp_addr: coverpoint tr.paddr {

      bins CTRL_REG = {
        CTRL_REG_ADDR
      };

      bins STATUS_REG = {
        STATUS_REG_ADDR
      };

      bins TXDATA_REG = {
        TXDATA_REG_ADDR
      };

      bins RXDATA_REG = {
        RXDATA_REG_ADDR
      };

      bins OTHER = default;

    }


    //==========================================================
    // BYTE ENABLE
    //==========================================================

    cp_strb: coverpoint tr.pstrb {

      bins BYTE0 = {4'b0001};
      bins BYTE1 = {4'b0010};
      bins BYTE2 = {4'b0100};
      bins BYTE3 = {4'b1000};

      bins BYTE01 = {4'b0011};
      bins BYTE12 = {4'b0110};
      bins BYTE23 = {4'b1100};

      bins ALL_BYTES = {4'b1111};

      bins OTHER = default;

    }


    //==========================================================
    // WRITE DATA
    //==========================================================

    cp_pwdata: coverpoint tr.pwdata {

      bins ZERO = {32'h0000_0000};

      bins NON_ZERO = {
        [32'h0000_0001 : 32'hFFFF_FFFF]
      };

    }


    //==========================================================
    // READ DATA
    //==========================================================

    cp_prdata: coverpoint tr.prdata {

      bins ZERO = {32'h0000_0000};

      bins NON_ZERO = {
        [32'h0000_0001 : 32'hFFFF_FFFF]
      };

    }


    //==========================================================
    // APB ERROR
    //==========================================================

    cp_slverr: coverpoint tr.pslverr {

      bins NO_ERROR = {1'b0};
      bins ERROR    = {1'b1};

    }



    //==========================================================
    // ADDRESS × READ/WRITE
    //==========================================================

    addr_x_write:
      cross cp_addr, cp_write;


    //==========================================================
    // ADDRESS × BYTE ENABLE
    //==========================================================

    addr_x_strb:
      cross cp_addr, cp_strb;


    //==========================================================
    // READ/WRITE × ERROR
    //==========================================================

    write_x_error:
      cross cp_write, cp_slverr;


  endgroup


  //============================================================
  // Constructor
  //============================================================

  function new(
    string name = "apb_i2c_apb_coverage",
    uvm_component parent = null
  );

    super.new(name, parent);

    analysis_export =
      new("analysis_export", this);

    apb_cg = new();

  endfunction


  //============================================================
  // RECEIVE TRANSACTION
  //============================================================

  virtual function void write(
    apb_i2c_apb_item t
  );

    if (t == null)
      return;


    // Store actual monitor transaction
    tr = t;


    `uvm_info(
      "APB_COVERAGE",
      $sformatf(
        "Sampling APB transaction: %s",
        tr.convert2string()
      ),
      UVM_HIGH
    )


    // Sample using actual transaction
    apb_cg.sample();

  endfunction


  //============================================================
  // REPORT
  //============================================================

  function void report_phase(uvm_phase phase);

    super.report_phase(phase);

    `uvm_info(
      "APB_COVERAGE",
      $sformatf(
        "APB Coverage = %0.2f%%",
        apb_cg.get_inst_coverage()
      ),
      UVM_LOW
    )

  endfunction

endclass
