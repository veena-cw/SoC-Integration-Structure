// plic_irq_ctrl: lets the CPU program raise and drop PLIC interrupt sources
// (BP-DV-058, c/plic_irq.c).
//
// Subscribes to the AXI agent monitor. The program writes a 64-bit source
// mask to a command address in the host window; this component turns it
// into a plic_irq_seq on the PLIC interrupt agent's sequencer (agent, driver
// and sequence reused unchanged from VERIF/plic_verif/plic_tb):
//
//   0x0010_8E00  RAISE       src |=  mask
//   0x0010_8E08  DROP        src &= ~mask
//   0x0010_8E10  RAISE_LATE  src |=  mask after late_delay PLIC clocks (wfi)
//   0x0010_8E20  STATUS      written here after every change: the src mask
//                            now driven, read back by the program
//
// STATUS lives in the AXI memory model, so a CPU load from it returns the
// value. Commands are applied in AXI order, one at a time.

`ifndef PLIC_IRQ_CTRL_SV
`define PLIC_IRQ_CTRL_SV

class plic_irq_ctrl extends uvm_subscriber #(cpu_axi_txn #());
  `uvm_component_utils(plic_irq_ctrl)

  localparam longint unsigned CMD_RAISE      = 64'h0010_8E00;
  localparam longint unsigned CMD_DROP       = 64'h0010_8E08;
  localparam longint unsigned CMD_RAISE_LATE = 64'h0010_8E10;
  localparam longint unsigned STATUS_ADDR    = 64'h0010_8E20;

  typedef struct {
    longint unsigned addr;
    plic_src_t       mask;
  } cmd_t;

  plic_irq_sequencer sequencer;      // set by the test (PLIC interrupt agent)
  int unsigned       late_delay = 400;
  plic_src_t         cur;
  int unsigned       n_cmds;
  virtual plic_irq_if #(PLIC_SOURCES, PLIC_TARGETS) vif;
  local mailbox #(cmd_t) q = new();

  function new(string name = "plic_irq_ctrl", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual plic_irq_if #(PLIC_SOURCES, PLIC_TARGETS))::read_by_name(get_full_name(), "irq_vif", vif))
      `uvm_fatal("NOVIF", "PLIC interrupt virtual interface 'irq_vif' not found")
  endfunction

  // AXI monitor: queue the command writes
  function void write(cpu_axi_txn #() t);
    cmd_t c;
    if (t.direction != cpu_axi_txn #()::AXI_WRITE)
      return;
    if (t.addr != CMD_RAISE && t.addr != CMD_DROP && t.addr != CMD_RAISE_LATE)
      return;
    c.addr = t.addr;
    c.mask = t.data[63:0];        // <= 8-byte MMIO stores use WDATA[63:0]
    void'(q.try_put(c));
  endfunction

  local function void publish();
    for (int i = 0; i < 8; i++)
      cpu_axi_mem_model #()::mem[STATUS_ADDR + i] = cur[8*i +: 8];
  endfunction

  local task apply(plic_irq_op_e op, plic_src_t mask);
    plic_irq_seq seq = plic_irq_seq::type_id::create("seq");
    seq.op   = op;
    seq.mask = mask;
    seq.start(sequencer);
    if (op == IRQ_RAISE) cur |= mask;
    else                 cur &= ~mask;
    @(posedge vif.clk);           // the driver's NBA has reached src
    publish();
  endtask

  task run_phase(uvm_phase phase);
    cmd_t c;
    cur = '0;
    publish();
    forever begin
      q.get(c);
      n_cmds++;
      case (c.addr)
        CMD_RAISE: apply(IRQ_RAISE, c.mask);
        CMD_DROP:  apply(IRQ_DROP, c.mask);
        default: begin
          repeat (late_delay) @(posedge vif.clk);
          apply(IRQ_RAISE, c.mask);
        end
      endcase
      `uvm_info("PLIC_IRQ_CTRL", $sformatf("%s mask=%h -> src=%h",
                (c.addr == CMD_RAISE) ? "RAISE" : (c.addr == CMD_DROP) ? "DROP" : "RAISE_LATE",
                c.mask, cur), UVM_MEDIUM)
    end
  endtask

  function void report_phase(uvm_phase phase);
    `uvm_info("PLIC_IRQ_CTRL", $sformatf("%0d source commands applied, final src=%h", n_cmds, cur), UVM_LOW)
  endfunction
endclass

`endif
