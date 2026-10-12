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

  // MMIO data-lane convention (matches bp_bedrock_axi4_bridge): transfers
  // narrower than the bus (AxSIZE <= 3, at most 8 bytes) use only
  // WDATA/RDATA[63:0], with each byte at lane (addr % 8). Full-width beats
  // use every lane at (addr % STRB_WIDTH). This is NOT standard AXI4
  // narrow-transfer lane placement (addr % 16); see the bridge.
  localparam int MMIO_BYTES = 8;

  static function automatic int unsigned lane_bytes(input int unsigned awsize);
    return (beat_bytes(awsize) < STRB_WIDTH) ? MMIO_BYTES : STRB_WIDTH;
  endfunction

  // Byte lane that carries a given address for a transfer of this size.
  static function automatic int unsigned byte_lane(input longint unsigned addr,
                                                   input int unsigned awsize);
    return addr % lane_bytes(awsize);
  endfunction

  // WSTRB selects the written bytes; each byte's address is the lane's
  // position within the (8- or 16-byte) aligned group holding addr.
  static function void write_beat(
    input bit [ADDR_WIDTH-1:0] addr,
    input bit [DATA_WIDTH-1:0] data,
    input bit [STRB_WIDTH-1:0] strb,
    input int unsigned          awsize
  );
    longint unsigned base;
    int unsigned     lanes;
    int unsigned     i2c_lane;

    lanes = lane_bytes(awsize);
    base  = longint'(addr) - byte_lane(addr, awsize);
    for (int unsigned lane = 0; lane < lanes; lane++) begin
      if (strb[lane])
        mem[base + lane] = data[8*lane +: 8];
    end

    i2c_lane = byte_lane(I2C_CMD_ADDR, awsize);
    if ((base == I2C_CMD_ADDR - i2c_lane) && strb[i2c_lane])
      i2c_last_data = data[8*i2c_lane +: 8];
  endfunction

  // Returns the bytes from addr up to the end of its size-aligned container,
  // each on its lane (addr % 8 for MMIO). Other lanes read as zero.
  static function bit [DATA_WIDTH-1:0] read_beat(
    input bit [ADDR_WIDTH-1:0] addr,
    input int unsigned          awsize
  );
    bit [DATA_WIDTH-1:0] value;
    longint unsigned base_addr;
    longint unsigned end_addr;
    int unsigned nbytes;

    value = '0;
    base_addr = addr;
    nbytes = beat_bytes(awsize);
    end_addr = (base_addr - (base_addr % nbytes)) + nbytes;

    if (base_addr == I2C_CMD_ADDR) begin
      value[8*byte_lane(I2C_CMD_ADDR, awsize) +: 8] = i2c_last_data;
      return value;
    end

    for (longint unsigned a = base_addr; a < end_addr; a++) begin
      value[8*byte_lane(a, awsize) +: 8] = mem.exists(a) ? mem[a] : 8'h00;
    end
    return value;
  endfunction
endclass
