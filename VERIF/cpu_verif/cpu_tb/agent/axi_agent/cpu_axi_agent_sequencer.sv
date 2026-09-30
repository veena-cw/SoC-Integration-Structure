class cpu_axi_agent_sequencer #(
  parameter int DATA_WIDTH = `CPU_AXI_DATA_WIDTH,
  parameter int ADDR_WIDTH = `CPU_AXI_ADDR_WIDTH,
  parameter int ID_WIDTH   = `CPU_AXI_ID_WIDTH
) extends uvm_sequencer #(cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH));
  `uvm_component_param_utils(cpu_axi_agent_sequencer #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH))

  typedef cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH) txn_t;
  typedef cpu_axi_mem_model #(DATA_WIDTH, ADDR_WIDTH) mem_t;

  uvm_tlm_analysis_fifo #(txn_t) request_fifo;
  mem_t mem;

  function new(string name = "cpu_axi_agent_sequencer", uvm_component parent = null);
    super.new(name, parent);
    request_fifo = new("request_fifo", this);
    mem = mem_t::type_id::create("mem");
  endfunction
endclass

class cpu_axi_memory_sequence #(
  parameter int DATA_WIDTH = `CPU_AXI_DATA_WIDTH,
  parameter int ADDR_WIDTH = `CPU_AXI_ADDR_WIDTH,
  parameter int ID_WIDTH   = `CPU_AXI_ID_WIDTH
) extends uvm_sequence #(cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH));
  `uvm_object_param_utils(cpu_axi_memory_sequence #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH))
  `uvm_declare_p_sequencer(cpu_axi_agent_sequencer #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH))

  typedef cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH) txn_t;

  function new(string name = "cpu_axi_memory_sequence");
    super.new(name);
  endfunction

  task body();
    txn_t tr_seq;
    forever begin
      p_sequencer.request_fifo.get(tr_seq);
      if (tr_seq.direction == txn_t::AXI_WRITE) begin
        p_sequencer.mem.write_beat(
          tr_seq.addr, tr_seq.data, tr_seq.strb, tr_seq.awsize);
        `uvm_info("AXI_MEM",
                  $sformatf("stored %s", tr_seq.convert2string()), UVM_LOW)
      end
      else if (tr_seq.direction == txn_t::AXI_READ) begin
        tr_seq.data = p_sequencer.mem.read_beat(tr_seq.addr, tr_seq.awsize);
        `uvm_info("AXI_MEM",
                  $sformatf("read %s", tr_seq.convert2string()), UVM_LOW)
      end
    end
  endtask
endclass
