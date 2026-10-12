`ifndef BP_COMMON_ADDR_PKGDEF
`define BP_COMMON_ADDR_PKGDEF

  // TODO: These could be parameterizable, but there are some constraints of
  //   of bit placement within the local uncached space.
  // TL;DR 16MB ought to be enough for anyone
  localparam tile_id_width_gp  = 7;
  localparam dev_id_width_gp   = 4;
  localparam dev_addr_width_gp = 20;

  localparam core_offset_width_gp = dev_addr_width_gp + dev_id_width_gp;

  localparam host_dev_gp  = 1;
  localparam cfg_dev_gp   = 2;
  localparam clint_dev_gp = 3;
  localparam cache_dev_gp = 4;
  localparam plic_dev_gp = 5; //Added for external PLIC shared between core-0 and core-1


                             // 0x00_0(nnnN)(D)(A_AAAA)
  localparam host_dev_base_addr_gp     = 32'h0010_0000;
  localparam cfg_dev_base_addr_gp      = 32'h0020_0000;
  localparam clint_dev_base_addr_gp    = 32'h0030_0000;
  localparam cache_dev_base_addr_gp    = 32'h0040_0000;
  localparam plic_dev_base_addr_gp = 32'h0050_0000; //Added for external PLIC 1 MB address window

  // TODO: This is hardcoded for a 32-bit DRAM address, will need to be adjusted
  //   for a different address space
  localparam boot_base_addr_gp         = 40'h00_0011_0000;
  localparam dram_base_addr_gp         = 40'h00_8000_0000;
  
  //Added for Low speed peripherals
  localparam soc_periph_base_addr_gp  = 40'h00_3000_0000;
  localparam soc_periph_limit_addr_gp = 40'h00_3FFF_FFFF;

`endif

