class cpu_axi_txn #(
  parameter int DATA_WIDTH = `CPU_AXI_DATA_WIDTH,
  parameter int ADDR_WIDTH = `CPU_AXI_ADDR_WIDTH,
  parameter int ID_WIDTH   = `CPU_AXI_ID_WIDTH
) extends uvm_sequence_item;
  localparam int STRB_WIDTH = DATA_WIDTH / 8;

  `uvm_object_param_utils(cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH))

  typedef enum bit {AXI_READ, AXI_WRITE} direction_e;

  direction_e direction;
  bit [ID_WIDTH-1:0]   id;
  bit [ADDR_WIDTH-1:0] addr;
  bit [DATA_WIDTH-1:0] data;
  bit [STRB_WIDTH-1:0] strb;
  bit                  last;
  int unsigned         awsize;
  int unsigned         size_bytes;
  int unsigned         burst_len;   // Raw AXI AWLEN/ARLEN value (beats - 1)
  int unsigned         burst_beats; // Total beats in the burst
  bit [1:0]            burst_type;  // AXI BURST field
  bit [1:0]            resp;

  function new(string name = "cpu_axi_txn");
    super.new(name);
  endfunction

  function string convert2string();
    return $sformatf(
      "dir=%s id=%h addr=%h data=%h strb=%h awsize=%0d size_bytes=%0d len=%0d beats=%0d burst=%b resp=%0d last=%0b",
      direction.name(), id, addr, data, strb, awsize, size_bytes,
      burst_len, burst_beats, burst_type, resp, last);
  endfunction

  function void do_print(uvm_printer printer);
    super.do_print(printer);
    printer.print_string("direction", direction.name());
    printer.print_field("id", id, ID_WIDTH, UVM_HEX);
    printer.print_field("addr", addr, ADDR_WIDTH, UVM_HEX);
    printer.print_field("data", data, DATA_WIDTH, UVM_HEX);
    printer.print_field("strb", strb, STRB_WIDTH, UVM_HEX);
    printer.print_field("awsize", awsize, 32, UVM_DEC);
    printer.print_field("size_bytes", size_bytes, 32, UVM_DEC);
    printer.print_field("burst_len", burst_len, 32, UVM_DEC);
    printer.print_field("burst_beats", burst_beats, 32, UVM_DEC);
    printer.print_field("burst_type", burst_type, 2, UVM_BIN);
    printer.print_field("resp", resp, 2, UVM_HEX);
    printer.print_field("last", last, 1, UVM_BIN);
  endfunction

  function void print_axi_transaction(string tag = "AXI_TXN");
    `uvm_info(tag, convert2string(), UVM_LOW)
  endfunction
endclass
