class cpu_axi_mem_model #(
  parameter int DATA_WIDTH = `CPU_AXI_DATA_WIDTH,
  parameter int ADDR_WIDTH = `CPU_AXI_ADDR_WIDTH
) extends uvm_object;
  localparam int STRB_WIDTH = DATA_WIDTH / 8;

  `uvm_object_param_utils(cpu_axi_mem_model #(DATA_WIDTH, ADDR_WIDTH))

  static byte unsigned mem[longint unsigned];
  localparam longint unsigned I2C_CMD_ADDR = 64'h3001_0000;
  static byte unsigned i2c_last_data;

  function new(string name = "cpu_axi_mem_model");
    super.new(name);
  endfunction

  // AXI AWSIZE is log2(bytes transferred by one beat). Never index beyond
  // the configured native data bus or its derived strobe width.
  static function automatic int unsigned beat_bytes(input int unsigned awsize);
    int unsigned bytes;
    if (awsize >= 31)
      return STRB_WIDTH;
    bytes = 1 << awsize;
    return (bytes > STRB_WIDTH) ? STRB_WIDTH : bytes;
  endfunction

  static function void write_beat(
    input bit [ADDR_WIDTH-1:0] addr,
    input bit [DATA_WIDTH-1:0] data,
    input bit [STRB_WIDTH-1:0] strb,
    input int unsigned          awsize
  );
    longint unsigned base_addr;
    int unsigned nbytes;

    base_addr = addr;
    nbytes = beat_bytes(awsize);
    for (int unsigned b = 0; b < nbytes; b++) begin
      if (strb[b])
        mem[base_addr + b] = data[8*b +: 8];
    end

    if (base_addr == I2C_CMD_ADDR && strb[0])
      i2c_last_data = data[7:0];
  endfunction

  static function bit [DATA_WIDTH-1:0] read_beat(
    input bit [ADDR_WIDTH-1:0] addr,
    input int unsigned          awsize
  );
    bit [DATA_WIDTH-1:0] value;
    longint unsigned base_addr;
    int unsigned nbytes;

    value = '0;
    base_addr = addr;
    nbytes = beat_bytes(awsize);

    if (base_addr == I2C_CMD_ADDR) begin
      value[7:0] = i2c_last_data;
      return value;
    end

    for (int unsigned b = 0; b < nbytes; b++) begin
      value[8*b +: 8] = mem.exists(base_addr + b)
                       ? mem[base_addr + b]
                       : 8'h00;
    end
    return value;
  endfunction
endclass
