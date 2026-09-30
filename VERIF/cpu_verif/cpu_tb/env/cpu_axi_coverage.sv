class cpu_axi_coverage #(
  parameter int DATA_WIDTH = `CPU_AXI_DATA_WIDTH,
  parameter int ADDR_WIDTH = `CPU_AXI_ADDR_WIDTH,
  parameter int ID_WIDTH   = `CPU_AXI_ID_WIDTH
) extends uvm_subscriber #(cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH));
  `uvm_component_param_utils(cpu_axi_coverage #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH))

  typedef cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH) txn_t;

  int unsigned read_count;
  int unsigned write_count;
  bit [7:0] size_hit;
  bit [7:0] region_hit;
  bit [1:0] direction_hit;

  covergroup axi_cg with function sample(int direction,
                                         int region,
                                         int size_bytes,
                                         int burst_len,
                                         bit last);
    option.per_instance = 1;

    cp_direction: coverpoint direction {
      bins read  = {0};
      bins write = {1};
    }
    cp_region: coverpoint region {
      bins spi   = {0};
      bins i2c   = {1};
      bins uart  = {2};
      bins gpio  = {3};
      bins csi   = {4};
      bins hdmi  = {5};
      bins timer = {6};
      bins debug = {7};
      bins other = {8};
    }
    cp_size: coverpoint size_bytes {
      bins byte_access       = {1};
      bins halfword          = {2};
      bins word_access       = {4};
      bins doubleword_access = {8};
      bins quadword_access  = {16};
      bins access_256bit     = {32};
      bins access_512bit     = {64};
    }
    cp_burst_len: coverpoint burst_len {
      bins single = {1};
      bins short_burst = {[2:4]};
      bins long_burst = {[5:256]};
    }
    cp_last: coverpoint last;
    direction_region: cross cp_direction, cp_region;
    direction_size: cross cp_direction, cp_size;
  endgroup

  function new(string name, uvm_component parent);
    super.new(name, parent);
    axi_cg = new();
  endfunction

  function automatic int region_for(longint unsigned addr);
    if (addr inside {[64'h3000_0000:64'h3000_FFFF]}) return 0;
    if (addr inside {[64'h3001_0000:64'h3001_FFFF]}) return 1;
    if (addr inside {[64'h3002_0000:64'h3002_FFFF]}) return 2;
    if (addr inside {[64'h3003_0000:64'h3003_FFFF]}) return 3;
    if (addr inside {[64'h3004_0000:64'h3004_FFFF]}) return 4;
    if (addr inside {[64'h3005_0000:64'h3005_FFFF]}) return 5;
    if (addr inside {[64'h3006_0000:64'h3006_FFFF]}) return 6;
    if (addr inside {[64'h3007_0000:64'h3007_FFFF]}) return 7;
    return 8;
  endfunction

  function void write(txn_t t);
    int direction;
    int region;
    direction = (t.direction == txn_t::AXI_WRITE) ? 1 : 0;
    region = region_for(t.addr);
    direction_hit[direction] = 1'b1;
    if (direction) write_count++; else read_count++;
    if (t.size_bytes inside {1,2,4,8,16,32,64})
      size_hit[$clog2(t.size_bytes)] = 1'b1;
    if (region < 8) region_hit[region] = 1'b1;
    axi_cg.sample(direction, region, t.size_bytes, 1, t.last);
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("AXI_COVERAGE",
      $sformatf("reads=%0d writes=%0d directions=%b sizes=%b regions=%b coverage=%0.2f%%",
                read_count, write_count, direction_hit, size_hit, region_hit,
                axi_cg.get_coverage()), UVM_NONE)
  endfunction
endclass
