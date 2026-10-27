//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_ral_pkg
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: RAL register model: metadata helper functions and the 16 register classes of APB_SPI
//=================================================================================

// Register metadata carried from the YAML: volatile / dont_compare / side effects.
// Plain package-scope functions: this file is `included inside apb_spi_tb_pkg.
// Returns 1 if register has volatile==true in YAML
function bit is_volatile(string name);
  case (name)
    "STATUS": return 1;
    "IRQ_STAT": return 1;
    "RX_DATA": return 1;
    "FIFO_LVL": return 1;
    default: return 0;
  endcase
endfunction

function bit is_dont_compare(string name);
  case (name)
    "STATUS": return 1;
    "IRQ_STAT": return 1;
    "RX_DATA": return 1;
    "FIFO_LVL": return 1;
    default: return 0;
  endcase
endfunction

function bit has_read_side_effect(string name);
  case (name)
    "RX_DATA": return 1;
    default: return 0;
  endcase
endfunction

function bit has_write_side_effect(string name);
  case (name)
    "IRQ_STAT": return 1;
    "TX_DATA": return 1;
    default: return 0;
  endcase
endfunction

// Declare the UVM RAL class for CTRL.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class ctrl_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create ctrl_reg objects through the factory.
  `uvm_object_utils(ctrl_reg)
  // UVM register field for START [0:0]
  rand uvm_reg_field START;
  // UVM register field for LSB_FIRST [1:1]
  rand uvm_reg_field LSB_FIRST;
  // UVM register field for CPOL [2:2]
  rand uvm_reg_field CPOL;
  // UVM register field for CPHA [3:3]
  rand uvm_reg_field CPHA;
  // UVM register field for CS_INTER_BYTE [4:4]
  rand uvm_reg_field CS_INTER_BYTE;
  // UVM register field for RESERVED [7:5]
  rand uvm_reg_field RESERVED;
  // UVM register field for CS_SEL [15:8]
  rand uvm_reg_field CS_SEL;
  // UVM register field for CS_SETUP [23:16]
  rand uvm_reg_field CS_SETUP;
  // UVM register field for CS_HOLD [31:24]
  rand uvm_reg_field CS_HOLD;

  // Constructor for ctrl_reg
  function new(string name = "ctrl_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    START = uvm_reg_field::type_id::create("START");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    START.configure(this, 1, 0, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    LSB_FIRST = uvm_reg_field::type_id::create("LSB_FIRST");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (1)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    LSB_FIRST.configure(this, 1, 1, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    CPOL = uvm_reg_field::type_id::create("CPOL");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (2)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    CPOL.configure(this, 1, 2, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    CPHA = uvm_reg_field::type_id::create("CPHA");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (3)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    CPHA.configure(this, 1, 3, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    CS_INTER_BYTE = uvm_reg_field::type_id::create("CS_INTER_BYTE");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (4)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    CS_INTER_BYTE.configure(this, 1, 4, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RESERVED = uvm_reg_field::type_id::create("RESERVED");
    // Configure the field:
    //   width       = number of bits (3)
    //   lsb         = least-significant bit position (5)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RESERVED.configure(this, 1, 7, "RO", 0, 0, 1, 0, 0);
    // Create the UVM RAL field object through the UVM factory.
    CS_SEL = uvm_reg_field::type_id::create("CS_SEL");
    // Configure the field:
    //   width       = number of bits (8)
    //   lsb         = least-significant bit position (8)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    CS_SEL.configure(this, 2, 5, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    CS_SETUP = uvm_reg_field::type_id::create("CS_SETUP");
    // Configure the field:
    //   width       = number of bits (8)
    //   lsb         = least-significant bit position (16)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    CS_SETUP.configure(this, 8, 8, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    CS_HOLD = uvm_reg_field::type_id::create("CS_HOLD");
    // Configure the field:
    //   width       = number of bits (8)
    //   lsb         = least-significant bit position (24)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    CS_HOLD.configure(this, 8, 16, "RW", 0, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for STATUS.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class status_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create status_reg objects through the factory.
  `uvm_object_utils(status_reg)
  // UVM register field for BUSY [0:0]
  rand uvm_reg_field BUSY;
  // UVM register field for TX_EMPTY [1:1]
  rand uvm_reg_field TX_EMPTY;
  // UVM register field for TX_FULL [2:2]
  rand uvm_reg_field TX_FULL;
  // UVM register field for RX_EMPTY [3:3]
  rand uvm_reg_field RX_EMPTY;
  // UVM register field for RX_FULL [4:4]
  rand uvm_reg_field RX_FULL;
  // UVM register field for RESERVED [31:5]
  rand uvm_reg_field RESERVED;

  // Constructor for status_reg
  function new(string name = "status_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    BUSY = uvm_reg_field::type_id::create("BUSY");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    BUSY.configure(this, 1, 0, "RO", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    TX_EMPTY = uvm_reg_field::type_id::create("TX_EMPTY");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (1)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    TX_EMPTY.configure(this, 1, 1, "RO", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    TX_FULL = uvm_reg_field::type_id::create("TX_FULL");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (2)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    TX_FULL.configure(this, 1, 2, "RO", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RX_EMPTY = uvm_reg_field::type_id::create("RX_EMPTY");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (3)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RX_EMPTY.configure(this, 1, 3, "RO", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RX_FULL = uvm_reg_field::type_id::create("RX_FULL");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (4)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RX_FULL.configure(this, 1, 4, "RO", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RESERVED = uvm_reg_field::type_id::create("RESERVED");
    // Configure the field:
    //   width       = number of bits (27)
    //   lsb         = least-significant bit position (5)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RESERVED.configure(this, 27, 5, "RO", 1, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for IRQ_STAT.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class irq_stat_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create irq_stat_reg objects through the factory.
  `uvm_object_utils(irq_stat_reg)
  // UVM register field for TX_EMPTY [0:0]
  rand uvm_reg_field TX_EMPTY;
  // UVM register field for RX_FULL [1:1]
  rand uvm_reg_field RX_FULL;
  // UVM register field for DONE [2:2]
  rand uvm_reg_field DONE;
  // UVM register field for ERROR [3:3]
  rand uvm_reg_field ERROR;
  // UVM register field for RESERVED [31:4]
  rand uvm_reg_field RESERVED;

  // Constructor for irq_stat_reg
  function new(string name = "irq_stat_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    TX_EMPTY = uvm_reg_field::type_id::create("TX_EMPTY");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW1C"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    TX_EMPTY.configure(this, 1, 0, "W1C", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RX_FULL = uvm_reg_field::type_id::create("RX_FULL");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (1)
    //   access      = field access type "RW1C"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RX_FULL.configure(this, 1, 1, "W1C", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    DONE = uvm_reg_field::type_id::create("DONE");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (2)
    //   access      = field access type "RW1C"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DONE.configure(this, 1, 2, "W1C", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    ERROR = uvm_reg_field::type_id::create("ERROR");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (3)
    //   access      = field access type "RW1C"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    ERROR.configure(this, 1, 3, "W1C", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RESERVED = uvm_reg_field::type_id::create("RESERVED");
    // Configure the field:
    //   width       = number of bits (28)
    //   lsb         = least-significant bit position (4)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RESERVED.configure(this, 28, 4, "RO", 1, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for IRQ_MASK.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class irq_mask_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create irq_mask_reg objects through the factory.
  `uvm_object_utils(irq_mask_reg)
  // UVM register field for TX_EMPTY [0:0]
  rand uvm_reg_field TX_EMPTY;
  // UVM register field for RX_FULL [1:1]
  rand uvm_reg_field RX_FULL;
  // UVM register field for DONE [2:2]
  rand uvm_reg_field DONE;
  // UVM register field for ERROR [3:3]
  rand uvm_reg_field ERROR;
  // UVM register field for RESERVED [31:4]
  rand uvm_reg_field RESERVED;

  // Constructor for irq_mask_reg
  function new(string name = "irq_mask_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    TX_EMPTY = uvm_reg_field::type_id::create("TX_EMPTY");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    TX_EMPTY.configure(this, 1, 0, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RX_FULL = uvm_reg_field::type_id::create("RX_FULL");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (1)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RX_FULL.configure(this, 1, 1, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    DONE = uvm_reg_field::type_id::create("DONE");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (2)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DONE.configure(this, 1, 2, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    ERROR = uvm_reg_field::type_id::create("ERROR");
    // Configure the field:
    //   width       = number of bits (1)
    //   lsb         = least-significant bit position (3)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    ERROR.configure(this, 1, 3, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RESERVED = uvm_reg_field::type_id::create("RESERVED");
    // Configure the field:
    //   width       = number of bits (28)
    //   lsb         = least-significant bit position (4)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RESERVED.configure(this, 28, 4, "RO", 0, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for CLK_DIV.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class clk_div_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create clk_div_reg objects through the factory.
  `uvm_object_utils(clk_div_reg)
  // UVM register field for DIV [15:0]
  rand uvm_reg_field DIV;
  // UVM register field for RESERVED [31:16]
  rand uvm_reg_field RESERVED;

  // Constructor for clk_div_reg
  function new(string name = "clk_div_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    DIV = uvm_reg_field::type_id::create("DIV");
    // Configure the field:
    //   width       = number of bits (16)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DIV.configure(this, 16, 0, "RW", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RESERVED = uvm_reg_field::type_id::create("RESERVED");
    // Configure the field:
    //   width       = number of bits (16)
    //   lsb         = least-significant bit position (16)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RESERVED.configure(this, 16, 16, "RO", 0, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for TX_DATA.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class tx_data_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create tx_data_reg objects through the factory.
  `uvm_object_utils(tx_data_reg)
  // UVM register field for DATA [7:0]
  rand uvm_reg_field DATA;
  // UVM register field for RESERVED [31:8]
  rand uvm_reg_field RESERVED;

  // Constructor for tx_data_reg
  function new(string name = "tx_data_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    DATA = uvm_reg_field::type_id::create("DATA");
    // Configure the field:
    //   width       = number of bits (8)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "WO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DATA.configure(this, 8, 0, "WO", 0, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RESERVED = uvm_reg_field::type_id::create("RESERVED");
    // Configure the field:
    //   width       = number of bits (24)
    //   lsb         = least-significant bit position (8)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RESERVED.configure(this, 24, 8, "RO", 0, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for RX_DATA.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class rx_data_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create rx_data_reg objects through the factory.
  `uvm_object_utils(rx_data_reg)
  // UVM register field for DATA [7:0]
  rand uvm_reg_field DATA;
  // UVM register field for RESERVED [31:8]
  rand uvm_reg_field RESERVED;

  // Constructor for rx_data_reg
  function new(string name = "rx_data_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    DATA = uvm_reg_field::type_id::create("DATA");
    // Configure the field:
    //   width       = number of bits (8)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DATA.configure(this, 8, 0, "RO", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RESERVED = uvm_reg_field::type_id::create("RESERVED");
    // Configure the field:
    //   width       = number of bits (24)
    //   lsb         = least-significant bit position (8)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RESERVED.configure(this, 24, 8, "RO", 1, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for FIFO_LVL.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class fifo_lvl_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create fifo_lvl_reg objects through the factory.
  `uvm_object_utils(fifo_lvl_reg)
  // UVM register field for TX_COUNT [4:0]
  rand uvm_reg_field TX_COUNT;
  // UVM register field for RESERVED0 [15:5]
  rand uvm_reg_field RESERVED0;
  // UVM register field for RX_COUNT [20:16]
  rand uvm_reg_field RX_COUNT;
  // UVM register field for RESERVED1 [31:21]
  rand uvm_reg_field RESERVED1;

  // Constructor for fifo_lvl_reg
  function new(string name = "fifo_lvl_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    TX_COUNT = uvm_reg_field::type_id::create("TX_COUNT");
    // Configure the field:
    //   width       = number of bits (5)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    TX_COUNT.configure(this, 5, 0, "RO", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RESERVED0 = uvm_reg_field::type_id::create("RESERVED0");
    // Configure the field:
    //   width       = number of bits (11)
    //   lsb         = least-significant bit position (5)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RESERVED0.configure(this, 11, 5, "RO", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RX_COUNT = uvm_reg_field::type_id::create("RX_COUNT");
    // Configure the field:
    //   width       = number of bits (5)
    //   lsb         = least-significant bit position (16)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RX_COUNT.configure(this, 5, 16, "RO", 1, 0, 1, 1, 1);
    // Create the UVM RAL field object through the UVM factory.
    RESERVED1 = uvm_reg_field::type_id::create("RESERVED1");
    // Configure the field:
    //   width       = number of bits (11)
    //   lsb         = least-significant bit position (21)
    //   access      = field access type "RO"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    RESERVED1.configure(this, 11, 21, "RO", 1, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for ID.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class id_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create id_reg objects through the factory.
  `uvm_object_utils(id_reg)
  // UVM register field for IDENTIFIER [31:0]
  rand uvm_reg_field IDENTIFIER;

  // Constructor for id_reg
  function new(string name = "id_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    IDENTIFIER = uvm_reg_field::type_id::create("IDENTIFIER");
    // Configure the field:
    //   width       = number of bits (32)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RO"
    //   reset       = reset value 1494221182
    //   volatile    = whether the field value can change independently
    IDENTIFIER.configure(this, 32, 0, "RO", 0, 1494221182, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for VERSION.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class version_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create version_reg objects through the factory.
  `uvm_object_utils(version_reg)
  // UVM register field for VERSION [31:0]
  rand uvm_reg_field VERSION;

  // Constructor for version_reg
  function new(string name = "version_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    VERSION = uvm_reg_field::type_id::create("VERSION");
    // Configure the field:
    //   width       = number of bits (32)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RO"
    //   reset       = reset value 65536
    //   volatile    = whether the field value can change independently
    VERSION.configure(this, 32, 0, "RO", 0, 65536, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for SCRATCH0.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class scratch0_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create scratch0_reg objects through the factory.
  `uvm_object_utils(scratch0_reg)
  // UVM register field for DATA [31:0]
  rand uvm_reg_field DATA;

  // Constructor for scratch0_reg
  function new(string name = "scratch0_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    DATA = uvm_reg_field::type_id::create("DATA");
    // Configure the field:
    //   width       = number of bits (32)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DATA.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for SCRATCH1.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class scratch1_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create scratch1_reg objects through the factory.
  `uvm_object_utils(scratch1_reg)
  // UVM register field for DATA [31:0]
  rand uvm_reg_field DATA;

  // Constructor for scratch1_reg
  function new(string name = "scratch1_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    DATA = uvm_reg_field::type_id::create("DATA");
    // Configure the field:
    //   width       = number of bits (32)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DATA.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for SCRATCH2.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class scratch2_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create scratch2_reg objects through the factory.
  `uvm_object_utils(scratch2_reg)
  // UVM register field for DATA [31:0]
  rand uvm_reg_field DATA;

  // Constructor for scratch2_reg
  function new(string name = "scratch2_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    DATA = uvm_reg_field::type_id::create("DATA");
    // Configure the field:
    //   width       = number of bits (32)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DATA.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for SCRATCH3.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class scratch3_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create scratch3_reg objects through the factory.
  `uvm_object_utils(scratch3_reg)
  // UVM register field for DATA [31:0]
  rand uvm_reg_field DATA;

  // Constructor for scratch3_reg
  function new(string name = "scratch3_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    DATA = uvm_reg_field::type_id::create("DATA");
    // Configure the field:
    //   width       = number of bits (32)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DATA.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for SCRATCH4.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class scratch4_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create scratch4_reg objects through the factory.
  `uvm_object_utils(scratch4_reg)
  // UVM register field for DATA [31:0]
  rand uvm_reg_field DATA;

  // Constructor for scratch4_reg
  function new(string name = "scratch4_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    DATA = uvm_reg_field::type_id::create("DATA");
    // Configure the field:
    //   width       = number of bits (32)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DATA.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
  endfunction

endclass

// Declare the UVM RAL class for SCRATCH5.
// "extends uvm_reg" means this class inherits the standard UVM register
// functionality such as read(), write(), mirror(), predict(), etc.
class scratch5_reg extends uvm_reg;
  // Register this RAL class with the UVM factory.
  // This allows UVM to create scratch5_reg objects through the factory.
  `uvm_object_utils(scratch5_reg)
  // UVM register field for DATA [31:0]
  rand uvm_reg_field DATA;

  // Constructor for scratch5_reg
  function new(string name = "scratch5_reg");
    // Call the parent uvm_reg constructor.
    // name = register instance name
    // 32   = register width in bits
    // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
    super.new(name, 32, UVM_NO_COVERAGE);
  endfunction

  // Build the register fields and configure volatile/compare behavior
  virtual function void build();
    // Create the UVM RAL field object through the UVM factory.
    DATA = uvm_reg_field::type_id::create("DATA");
    // Configure the field:
    //   width       = number of bits (32)
    //   lsb         = least-significant bit position (0)
    //   access      = field access type "RW"
    //   reset       = reset value 0
    //   volatile    = whether the field value can change independently
    DATA.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
  endfunction

endclass
