//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_apb_adapter
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: RAL bus adapter: uvm_reg_bus_op <-> apb_seq_item (frontdoor register access through the APB agent)
//=================================================================================

class apb_spi_apb_adapter extends uvm_reg_adapter;

  `uvm_object_utils(apb_spi_apb_adapter)

  function new(string name = "apb_spi_apb_adapter");
    super.new(name);
    supports_byte_enable = 1;
    provides_responses   = 0;   // the APB driver updates the same item in place
  endfunction

  virtual function uvm_sequence_item reg2bus(const ref uvm_reg_bus_op rw);
    apb_seq_item item;
    item = apb_seq_item::type_id::create("ral_item");
    item.paddr  = rw.addr[31:0];
    item.pwrite = (rw.kind == UVM_WRITE);
    item.pwdata = (rw.kind == UVM_WRITE) ? rw.data[31:0]    : 32'h0;
    item.pstrb  = (rw.kind == UVM_WRITE) ? rw.byte_en[3:0]  : 4'h0;
    item.pprot  = 3'b000;
    item.prdata = 32'h0;
    return item;
  endfunction

  virtual function void bus2reg(uvm_sequence_item bus_item, ref uvm_reg_bus_op rw);
    apb_seq_item item;
    if (!$cast(item, bus_item)) begin
      `uvm_fatal("RAL_ADAPTER", "bus2reg: item is not an apb_seq_item")
      return;
    end
    rw.addr    = item.paddr;
    rw.kind    = item.pwrite ? UVM_WRITE : UVM_READ;
    rw.data    = item.pwrite ? item.pwdata : item.prdata;
    rw.byte_en = item.pstrb;
    // a transfer killed by reset or answered with PSLVERR is not a valid register access
    rw.status  = (item.pslverr || item.aborted_by_reset) ? UVM_NOT_OK : UVM_IS_OK;
  endfunction

endclass
