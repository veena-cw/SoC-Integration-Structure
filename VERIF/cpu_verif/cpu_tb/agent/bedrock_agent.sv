// bedrock_agent.sv
// Standard UVM agent bundling sequencer + driver + monitor for the BedRock interface.

`ifndef BEDROCK_AGENT_SV
`define BEDROCK_AGENT_SV

typedef uvm_sequencer #(bedrock_txn) bedrock_sequencer;

class bedrock_agent extends uvm_agent;
  `uvm_component_utils(bedrock_agent)

  bedrock_sequencer bedrock_sqr;
  bedrock_driver     bedrock_drv;
  bedrock_monitor    bedrock_mon;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    bedrock_mon = bedrock_monitor::type_id::create("bedrock_mon", this);
    if (get_is_active() == UVM_ACTIVE) begin
      bedrock_sqr = bedrock_sequencer::type_id::create("bedrock_sqr", this);
      bedrock_drv = bedrock_driver::type_id::create("bedrock_drv", this);
    end
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    if (get_is_active() == UVM_ACTIVE)
      bedrock_drv.seq_item_port.connect(bedrock_sqr.seq_item_export);
  endfunction

endclass

`endif
