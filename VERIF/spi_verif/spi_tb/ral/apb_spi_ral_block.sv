//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_ral_block
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: RAL register block for APB_SPI (16 registers, byte-addressed default_map)
//=================================================================================

class apb_spi_ral_block extends uvm_reg_block;
  `uvm_object_utils(apb_spi_ral_block)
  rand ctrl_reg CTRL; // original: CTRL @'h0
  rand status_reg STATUS; // original: STATUS @'h4
  rand irq_stat_reg IRQ_STAT; // original: IRQ_STAT @'h8
  rand irq_mask_reg IRQ_MASK; // original: IRQ_MASK @'hC
  rand clk_div_reg CLK_DIV; // original: CLK_DIV @'h10
  rand tx_data_reg TX_DATA; // original: TX_DATA @'h14
  rand rx_data_reg RX_DATA; // original: RX_DATA @'h18
  rand fifo_lvl_reg FIFO_LVL; // original: FIFO_LVL @'h1C
  rand id_reg ID; // original: ID @'h20
  rand version_reg VERSION; // original: VERSION @'h24
  rand scratch0_reg SCRATCH0; // original: SCRATCH0 @'h28
  rand scratch1_reg SCRATCH1; // original: SCRATCH1 @'h2C
  rand scratch2_reg SCRATCH2; // original: SCRATCH2 @'h30
  rand scratch3_reg SCRATCH3; // original: SCRATCH3 @'h34
  rand scratch4_reg SCRATCH4; // original: SCRATCH4 @'h38
  rand scratch5_reg SCRATCH5; // original: SCRATCH5 @'h3C
  uvm_reg_map default_map;

  function new(string name = "apb_spi_ral_block");
    super.new(name, UVM_NO_COVERAGE);
  endfunction

  virtual function void build();
    default_map = create_map("default_map", 32'h00000000, 4, UVM_LITTLE_ENDIAN, 0);

    CTRL = ctrl_reg::type_id::create("CTRL");
    CTRL.configure(this, null, "");
    CTRL.build();
    default_map.add_reg(CTRL, 'h0, "RW");

    STATUS = status_reg::type_id::create("STATUS");
    STATUS.configure(this, null, "");
    STATUS.build();
    default_map.add_reg(STATUS, 'h4, "RO");

    IRQ_STAT = irq_stat_reg::type_id::create("IRQ_STAT");
    IRQ_STAT.configure(this, null, "");
    IRQ_STAT.build();
    default_map.add_reg(IRQ_STAT, 'h8, "RW");

    IRQ_MASK = irq_mask_reg::type_id::create("IRQ_MASK");
    IRQ_MASK.configure(this, null, "");
    IRQ_MASK.build();
    default_map.add_reg(IRQ_MASK, 'hC, "RW");

    CLK_DIV = clk_div_reg::type_id::create("CLK_DIV");
    CLK_DIV.configure(this, null, "");
    CLK_DIV.build();
    default_map.add_reg(CLK_DIV, 'h10, "RW");

    TX_DATA = tx_data_reg::type_id::create("TX_DATA");
    TX_DATA.configure(this, null, "");
    TX_DATA.build();
    default_map.add_reg(TX_DATA, 'h14, "WO");

    RX_DATA = rx_data_reg::type_id::create("RX_DATA");
    RX_DATA.configure(this, null, "");
    RX_DATA.build();
    default_map.add_reg(RX_DATA, 'h18, "RO");

    FIFO_LVL = fifo_lvl_reg::type_id::create("FIFO_LVL");
    FIFO_LVL.configure(this, null, "");
    FIFO_LVL.build();
    default_map.add_reg(FIFO_LVL, 'h1C, "RO");

    ID = id_reg::type_id::create("ID");
    ID.configure(this, null, "");
    ID.build();
    default_map.add_reg(ID, 'h20, "RO");

    VERSION = version_reg::type_id::create("VERSION");
    VERSION.configure(this, null, "");
    VERSION.build();
    default_map.add_reg(VERSION, 'h24, "RO");

    SCRATCH0 = scratch0_reg::type_id::create("SCRATCH0");
    SCRATCH0.configure(this, null, "");
    SCRATCH0.build();
    default_map.add_reg(SCRATCH0, 'h28, "RW");

    SCRATCH1 = scratch1_reg::type_id::create("SCRATCH1");
    SCRATCH1.configure(this, null, "");
    SCRATCH1.build();
    default_map.add_reg(SCRATCH1, 'h2C, "RW");

    SCRATCH2 = scratch2_reg::type_id::create("SCRATCH2");
    SCRATCH2.configure(this, null, "");
    SCRATCH2.build();
    default_map.add_reg(SCRATCH2, 'h30, "RW");

    SCRATCH3 = scratch3_reg::type_id::create("SCRATCH3");
    SCRATCH3.configure(this, null, "");
    SCRATCH3.build();
    default_map.add_reg(SCRATCH3, 'h34, "RW");

    SCRATCH4 = scratch4_reg::type_id::create("SCRATCH4");
    SCRATCH4.configure(this, null, "");
    SCRATCH4.build();
    default_map.add_reg(SCRATCH4, 'h38, "RW");

    SCRATCH5 = scratch5_reg::type_id::create("SCRATCH5");
    SCRATCH5.configure(this, null, "");
    SCRATCH5.build();
    default_map.add_reg(SCRATCH5, 'h3C, "RW");

  endfunction

endclass
