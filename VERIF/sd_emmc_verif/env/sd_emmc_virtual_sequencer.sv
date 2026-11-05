`ifndef SD_EMMC_VIRTUAL_SQR_SV
`define SD_EMMC_VIRTUAL_SQR_SV
`include "uvm_macros.svh"
import uvm_pkg::*;


//------------------------------------------------------------------------------
// Virtual Sequencer
//
// The virtual sequence requires a virtual sequencer that provides handles to
// the protocol-specific sequencers.
//
// The actual virtual sequencer implementation may be placed in a separate
// file. This file only requires the virtual sequencer type to expose the
// handles shown below.
//
// Generic uvm_sequencer_base handles are used intentionally so that this
// virtual sequence does not depend on protocol-specific sequencer class names.
//------------------------------------------------------------------------------

class sd_emmc_virtual_sequencer extends uvm_sequencer;

  `uvm_component_utils(sd_emmc_virtual_sequencer)

  //--------------------------------------------------------------------------
  // Protocol sequencer handles
  //
  // These handles are intentionally generic.
  // They can point to:
  //
  //   AXI-Lite sequencer
  //   AXI-MEM/DMA sequencer
  //   SD/eMMC sequencer
  //
  // Concrete environments can connect their actual sequencers to these
  // handles during connect_phase().
  //--------------------------------------------------------------------------

sd_emmc_controller_axi_lite_agent_sequencer  axi_lite_sqr;
sd_emmc_controller_axi_mem_agent_sequencer   axi_mem_sqr;
sd_emmc_controller_sd_emmc_agent_sequencer   sd_emmc_sqr;
reset_sequencer                              rst_sqr;
  //--------------------------------------------------------------------------
  // Constructor
  //--------------------------------------------------------------------------

  function new(
    string name = "sd_emmc_virtual_sequencer",
    uvm_component parent = null
  );
    super.new(name, parent);
  endfunction


  //--------------------------------------------------------------------------
  // Build phase
  //--------------------------------------------------------------------------

  virtual function void build_phase(uvm_phase phase);

    super.build_phase(phase);

    `uvm_info(
      get_type_name(),
      "SD/eMMC virtual sequencer created",
      UVM_LOW
    )

  endfunction

endclass : sd_emmc_virtual_sequencer
`endif // SD_EMMC_VIRTUAL_SQR_SV
