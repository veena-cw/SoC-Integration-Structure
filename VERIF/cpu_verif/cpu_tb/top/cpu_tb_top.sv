// cpu_tb_top.sv
// hdl_top/hvl_top split: this module owns the DUT instantiation and clock/reset;
// UVM's run_test() drives everything else through the virtual interface.
//
// NOTE on integration: bp_processor's real BedRock ports are packed structs
// (bp_bedrock_mem_fwd_header_s, etc, see bp_common_bedrock_if.svh) rather than
// the flattened fields used on bedrock_if here. In the real DUT hookup, add a
// thin adapter that packs/unpacks those structs to/from bedrock_if's signals --
// the field order (msg_type, subop, addr, size, payload) is preserved so the
// mapping is mechanical. That adapter is intentionally left out of this
// standalone package so it compiles without the full bp_common include tree.
/*
`timescale 1ns/1ps

module cpu_tb_top;

  import uvm_pkg::*;
  import bp_uvm_pkg::*;
  `include "uvm_macros.svh"

  bit clk;
  bit reset;

  always #5 clk = ~clk; // 100MHz tb clock, independent of DUT clock per riscv_tb_top.sv convention

  initial begin
    reset = 1'b1;
    repeat (10) @(posedge clk);
    reset = 1'b0;
  end

  bedrock_if #(.ADDR_WIDTH(64), .DATA_WIDTH(64)) bedrock_vif (.clk(clk), .reset(reset));

  // ---------------------------------------------------------------------
  // DUT instantiation placeholder.
  // Swap this for the real `wrapper` module from bp_top/test/tb/bp_tethered,
  // with its mem_fwd/mem_rev ports connected through the adapter noted above.
  // A behavioral stub is provided here (bp_processor_stub) so this package
  // is runnable standalone to validate the UVM environment itself.
  // ---------------------------------------------------------------------
  bp_processor_stub dut (
    .clk_i               (clk),
    .reset_i             (reset),
    .mem_fwd_addr_i      (bedrock_vif.mem_fwd_addr),
    .mem_fwd_msg_type_i  (bedrock_vif.mem_fwd_msg_type),
    .mem_fwd_size_i      (bedrock_vif.mem_fwd_size),
    .mem_fwd_data_i      (bedrock_vif.mem_fwd_data),
    .mem_fwd_v_i         (bedrock_vif.mem_fwd_v),
    .mem_fwd_ready_and_o (bedrock_vif.mem_fwd_ready_and),
    .mem_rev_addr_o      (bedrock_vif.mem_rev_addr),
    .mem_rev_msg_type_o  (bedrock_vif.mem_rev_msg_type),
    .mem_rev_size_o      (bedrock_vif.mem_rev_size),
    .mem_rev_data_o      (bedrock_vif.mem_rev_data),
    .mem_rev_v_o         (bedrock_vif.mem_rev_v),
    .mem_rev_ready_and_i (bedrock_vif.mem_rev_ready_and)
  );

  // Waveform dump for debugging with GTKWave or another VCD viewer.
  initial begin
    $dumpfile("cpu_tb_top.vcd");
    $dumpvars(0, cpu_tb_top);
  end

  initial begin
    uvm_resource_db#(virtual bedrock_if)::set("uvm_test_top.env.bedrock_agt.bedrock_drv", "vif", bedrock_vif);
    uvm_resource_db#(virtual bedrock_if)::set("uvm_test_top.env.bedrock_agt.bedrock_mon", "vif", bedrock_vif);
    run_test();
  end

endmodule
*/


`include "bp_common_defines.svh"
`include "bp_me_defines.svh"

module cpu_tb_top
  import uvm_pkg::*;
  import bp_uvm_pkg::*;
  import bp_common_pkg::*;
  import bp_me_pkg::*;
  #(
    parameter bp_params_e bp_params_p = e_bp_default_cfg
    `declare_bp_proc_params(bp_params_p)
    `declare_bp_bedrock_if_widths(paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p)
  )
  ();
  `include "uvm_macros.svh"

  `declare_bp_bedrock_if(paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p);

  bit clk;
  bit reset;
  always #5 clk = ~clk;
  // Match bp_top/test/tb/bp_tethered/wrapper.sv.  The processor uses a
  // slower real-time clock for the core-side control path; tying rt_clk_i to
  // clk can make the first cache response arrive before its credit is posted.
  logic rt_clk;
  bsg_counter_clock_downsample
    #(.width_p(3))
  rt_clk_gen
   (.clk_i(clk)
    ,.reset_i(reset)
    ,.val_i('1)
    ,.clk_r_o(rt_clk)
    );
  initial begin
    reset = 1'b1;
    repeat (10) @(posedge clk);
    reset = 1'b0;
  end

  // two flattened-field TB interfaces (unchanged from before)
  bedrock_if #(.ADDR_WIDTH(64), .DATA_WIDTH(64)) incoming_vif (.clk(clk), .reset(reset));
  bedrock_if #(.ADDR_WIDTH(64), .DATA_WIDTH(64)) outgoing_vif (.clk(clk), .reset(reset));

  // struct wires that sit directly on the DUT's real ports
  bp_bedrock_mem_fwd_header_s mem_fwd_header_li, mem_fwd_header_lo;
  bp_bedrock_mem_rev_header_s mem_rev_header_li, mem_rev_header_lo;

  // The real BlackParrot testbench configures and releases the processor
  // through bp_nonsynth_cfg_loader before the host starts the NBF stream.
  bp_bedrock_mem_fwd_header_s cfg_mem_fwd_header;
  logic [bedrock_fill_width_p-1:0] cfg_mem_fwd_data;
  logic cfg_mem_fwd_v, cfg_mem_fwd_ready, cfg_done;
  logic [mem_rev_header_width_lp-1:0] cfg_mem_rev_header;
  logic [bedrock_fill_width_p-1:0] cfg_mem_rev_data;
  logic cfg_mem_rev_v, cfg_mem_rev_ready;

  bp_bedrock_mem_fwd_header_s mem_fwd_header_to_dut;
  logic [bedrock_fill_width_p-1:0] mem_fwd_data_to_dut;
  logic mem_fwd_v_to_dut, mem_fwd_ready_from_dut;
  logic mem_rev_ready_to_dut;

  wire [lce_id_width_p-1:0] host_lce_id =
    num_core_p*2 + num_cacc_p + num_l2e_p + num_sacc_p + num_io_p;
  wire [did_width_p-1:0] proc_did = 1;
  wire [did_width_p-1:0] host_did = '1;

  // Real DMA channels.  These replace the previous tie-offs so the DUT can
  // fetch and write back cache lines through the behavioral DRAM model.
  `declare_bsg_cache_dma_pkt_s(daddr_width_p, l2_block_size_in_words_p);
  bsg_cache_dma_pkt_s [num_cce_p-1:0][l2_dmas_p-1:0] dma_pkt;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_pkt_v, dma_pkt_yumi;
  logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0] dma_data_to_dut;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_data_v_to_dut;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_data_ready_from_dut;
  logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0] dma_data_from_dut;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_data_v_from_dut, dma_data_yumi;
  logic host_mem_write;
  bp_uvm_name_warning_catcher name_warning_catcher;

  assign mem_fwd_header_li.msg_type = incoming_vif.mem_fwd_msg_type;
  assign mem_fwd_header_li.addr     = incoming_vif.mem_fwd_addr;
  assign mem_fwd_header_li.size     = bp_bedrock_msg_size_e'(incoming_vif.mem_fwd_size);

  // Configuration traffic has priority until the loader releases the core.
  // The UVM driver is held off during this phase, so its first NBF transfer
  // is not lost and no two sources drive the DUT input simultaneously.
  assign mem_fwd_header_to_dut = cfg_done ? mem_fwd_header_li : cfg_mem_fwd_header;
  assign mem_fwd_data_to_dut   = cfg_done ? incoming_vif.mem_fwd_data : cfg_mem_fwd_data;
  assign mem_fwd_v_to_dut      = cfg_done ? incoming_vif.mem_fwd_v : cfg_mem_fwd_v;
  assign incoming_vif.mem_fwd_ready_and = cfg_done && mem_fwd_ready_from_dut;
  assign cfg_mem_fwd_ready = !cfg_done && mem_fwd_ready_from_dut;

  assign mem_rev_ready_to_dut = cfg_done
                              ? incoming_vif.mem_rev_ready_and
                              : cfg_mem_rev_ready;
  assign cfg_mem_rev_header = mem_rev_header_lo;
  assign cfg_mem_rev_data   = incoming_vif.mem_rev_data;
  assign cfg_mem_rev_v      = incoming_vif.mem_rev_v;

  assign outgoing_vif.mem_fwd_msg_type = mem_fwd_header_lo.msg_type;
  assign outgoing_vif.mem_fwd_addr     = mem_fwd_header_lo.addr;
  assign outgoing_vif.mem_fwd_size     = mem_fwd_header_lo.size;

  // Mirror accepted boot-image writes into the testbench DRAM model. The
  // processor still receives these writes normally; this is only a memory
  // initialization sideband for the TB DMA model.
  assign host_mem_write = incoming_vif.mem_fwd_v
                       && incoming_vif.mem_fwd_ready_and
                       && (incoming_vif.mem_fwd_msg_type == E_MEM_WR);

  bp_nonsynth_cfg_loader
    #(.bp_params_p(bp_params_p), .ucode_str_p("ucode_mem"))
  cfg_loader
   ( .clk_i(clk), .reset_i(reset)
   , .lce_id_i(host_lce_id), .did_i(host_did)
   , .mem_fwd_header_o(cfg_mem_fwd_header)
   , .mem_fwd_data_o(cfg_mem_fwd_data)
   , .mem_fwd_v_o(cfg_mem_fwd_v)
   , .mem_fwd_ready_and_i(cfg_mem_fwd_ready)
   , .mem_rev_header_i(cfg_mem_rev_header)
   , .mem_rev_data_i(cfg_mem_rev_data)
   , .mem_rev_v_i(cfg_mem_rev_v)
   , .mem_rev_ready_and_o(cfg_mem_rev_ready)
   , .done_o(cfg_done)
   );

  // Respond to the processor's outbound uncached BedRock traffic.  This is
  // the same host model used by BlackParrot's normal tethered testbench and
  // is needed for program stores such as the final tohost write.
  bp_nonsynth_host
    #(.bp_params_p(bp_params_p))
  host
   ( .clk_i(clk), .reset_i(reset)
   , .mem_fwd_header_i(mem_fwd_header_lo)
   , .mem_fwd_data_i(outgoing_vif.mem_fwd_data)
   , .mem_fwd_v_i(outgoing_vif.mem_fwd_v)
   , .mem_fwd_ready_and_o(outgoing_vif.mem_fwd_ready_and)
   , .mem_rev_header_o(mem_rev_header_li)
   , .mem_rev_data_o(outgoing_vif.mem_rev_data)
   , .mem_rev_v_o(outgoing_vif.mem_rev_v)
   , .mem_rev_ready_and_i(outgoing_vif.mem_rev_ready_and)
   );

  // ---- direct DUT instantiation, no wrapper/adapter module ----
  bp_processor #(.bp_params_p(bp_params_p)) dut
   ( .clk_i(clk), .rt_clk_i(rt_clk), .reset_i(reset)
   , .my_did_i(proc_did), .host_did_i(host_did)

   , .mem_fwd_header_o(mem_fwd_header_lo), .mem_fwd_data_o(outgoing_vif.mem_fwd_data)
   , .mem_fwd_v_o(outgoing_vif.mem_fwd_v), .mem_fwd_ready_and_i(outgoing_vif.mem_fwd_ready_and)
   , .mem_rev_header_i(mem_rev_header_li), .mem_rev_data_i(outgoing_vif.mem_rev_data)
   , .mem_rev_v_i(outgoing_vif.mem_rev_v), .mem_rev_ready_and_o(outgoing_vif.mem_rev_ready_and)

   , .mem_fwd_header_i(mem_fwd_header_to_dut), .mem_fwd_data_i(mem_fwd_data_to_dut)
   , .mem_fwd_v_i(mem_fwd_v_to_dut), .mem_fwd_ready_and_o(mem_fwd_ready_from_dut)
   , .mem_rev_header_o(mem_rev_header_lo), .mem_rev_data_o(incoming_vif.mem_rev_data)
   , .mem_rev_v_o(incoming_vif.mem_rev_v), .mem_rev_ready_and_i(mem_rev_ready_to_dut)

   , .dma_pkt_o(dma_pkt), .dma_pkt_v_o(dma_pkt_v), .dma_pkt_ready_and_i(dma_pkt_yumi)
   , .dma_data_i(dma_data_to_dut), .dma_data_v_i(dma_data_v_to_dut), .dma_data_ready_and_o(dma_data_ready_from_dut)
   , .dma_data_o(dma_data_from_dut), .dma_data_v_o(dma_data_v_from_dut), .dma_data_ready_and_i(dma_data_yumi)
   );

  bp_nonsynth_dram
   #(.num_dma_p(num_cce_p*l2_dmas_p)
     ,.dma_addr_width_p(daddr_width_p)
     ,.dma_data_width_p(l2_fill_width_p)
     ,.dma_burst_len_p(l2_block_size_in_fill_p)
     ,.dma_mask_width_p(l2_block_size_in_words_p)
     ) dram
    (.clk_i(clk)
     ,.reset_i(reset)
     ,.dma_pkt_i(dma_pkt)
     ,.dma_pkt_v_i(dma_pkt_v)
     ,.dma_pkt_yumi_o(dma_pkt_yumi)
     ,.dma_data_o(dma_data_to_dut)
     ,.dma_data_v_o(dma_data_v_to_dut)
     ,.dma_data_ready_and_i(dma_data_ready_from_dut)
     ,.dma_data_i(dma_data_from_dut)
     ,.dma_data_v_i(dma_data_v_from_dut)
     ,.dma_data_yumi_o(dma_data_yumi)
     ,.host_mem_write_i(host_mem_write)
     ,.host_mem_addr_i(incoming_vif.mem_fwd_addr)
     ,.host_mem_data_i(incoming_vif.mem_fwd_data)
     );
/*
  // Temporary handshake visibility while the integration is being debugged.
  always @(posedge clk) begin
    if (!reset) begin
      if (cfg_mem_fwd_v && cfg_mem_fwd_ready)
        $display("TB CFG_WRITE t=%0t addr=%h data=%h", $time,
                 cfg_mem_fwd_header.addr, cfg_mem_fwd_data);
      if (outgoing_vif.mem_fwd_v && outgoing_vif.mem_fwd_ready_and)
        $display("DUT HOST_FWD t=%0t msg=%0d addr=%h data=%h", $time,
                 outgoing_vif.mem_fwd_msg_type, outgoing_vif.mem_fwd_addr,
                 outgoing_vif.mem_fwd_data);
      if (incoming_vif.mem_fwd_v && incoming_vif.mem_fwd_ready_and)
        $display("TB->DUT MEM_FWD t=%0t msg=%0d addr=%h size=%0d data=%h",
                 $time, incoming_vif.mem_fwd_msg_type, incoming_vif.mem_fwd_addr,
                 incoming_vif.mem_fwd_size, incoming_vif.mem_fwd_data);
      if (host_mem_write)
        $display("TB DRAM HOST_WRITE t=%0t addr=%h data=%h",
                 $time, incoming_vif.mem_fwd_addr, incoming_vif.mem_fwd_data);
      if (incoming_vif.mem_rev_v && incoming_vif.mem_rev_ready_and)
        $display("DUT->TB MEM_REV t=%0t msg=%0d addr=%h size=%0d data=%h",
                 $time, incoming_vif.mem_rev_msg_type, incoming_vif.mem_rev_addr,
                 incoming_vif.mem_rev_size, incoming_vif.mem_rev_data);

      for (int cce = 0; cce < num_cce_p; cce++) begin
        for (int dma = 0; dma < l2_dmas_p; dma++) begin
          if (dma_pkt_v[cce][dma] && dma_pkt_yumi[cce][dma])
            $display("DUT DMA_PKT t=%0t cce=%0d dma=%0d %s addr=%h",
                     $time, cce, dma,
                     dma_pkt[cce][dma].write_not_read ? "WRITE" : "READ",
                     dma_pkt[cce][dma].addr);
          if (dma_data_v_to_dut[cce][dma] && dma_data_ready_from_dut[cce][dma])
            $display("DRAM->DUT DMA_DATA t=%0t cce=%0d dma=%0d data=%h",
                     $time, cce, dma, dma_data_to_dut[cce][dma]);
          if (dma_data_v_from_dut[cce][dma] && dma_data_yumi[cce][dma])
            $display("DUT->DRAM DMA_DATA t=%0t cce=%0d dma=%0d data=%h",
                     $time, cce, dma, dma_data_from_dut[cce][dma]);
        end
      end
    end
  end

*/
  // Observe the catch-up integer result. This stage has the forwarded source
  // operands for dependent instructions; the early reservation can still
  // contain stale operands while a producer is completing.
  int add_exec_count;
  int sub_exec_count;
  int and_exec_count;
  int or_exec_count;
  int xor_exec_count;
  int slt_exec_count;
  int sltu_exec_count;
  int addi_exec_count;
  int slti_exec_count;
  int sltiu_exec_count;
  int andi_exec_count;
  int ori_exec_count;
  int xori_exec_count;
  int sll_exec_count;
  int srl_exec_count;
  int sra_exec_count;
  int slli_exec_count;
  int srli_exec_count;
  int srai_exec_count;
  int muldiv_exec_count;
  int add_retire_count;
  int srl_retire_count;
  int muldiv_retire_count;
  always @(posedge dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_catchup_data_v_lo) begin : alu_operation_log
    logic [31:0] instr;
    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;
    logic [63:0] operand_a, operand_b, alu_result, immediate;
    string operation_name;

    // Let the catch-up reservation and ALU combinational logic settle before
    // sampling the forwarded operands and result.
    #1ps;

    instr = dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.instr;
    opcode = instr[6:0];
    funct3 = instr[14:12];
    funct7 = instr[31:25];
    immediate = {{52{instr[31]}}, instr[31:20]};
    operand_a = dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.isrc1[63:0];
    operand_b = dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.isrc2[63:0];
    alu_result = dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_catchup_data_lo[63:0];
    if (!reset
        && dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.v
        && dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.decode.pipe_int_v) begin
      if ((opcode == 7'b0110011) || (opcode == 7'b0111011)) begin
        if (funct7 == 7'b0000001) begin
          case ({opcode, funct3})
            10'b0110011_000: operation_name = "MUL";
            10'b0110011_001: operation_name = "MULH";
            10'b0110011_010: operation_name = "MULHSU";
            10'b0110011_011: operation_name = "MULHU";
            10'b0110011_100: operation_name = "DIV";
            10'b0110011_101: operation_name = "DIVU";
            10'b0110011_110: operation_name = "REM";
            10'b0110011_111: operation_name = "REMU";
            10'b0111011_000: operation_name = "MULW";
            10'b0111011_100: operation_name = "DIVW";
            10'b0111011_101: operation_name = "DIVUW";
            10'b0111011_110: operation_name = "REMW";
            10'b0111011_111: operation_name = "REMUW";
            default: operation_name = "M-EXT-UNKNOWN";
          endcase
          muldiv_exec_count++;
          $display("TB MULDIV op=%s count=%0d pc=%h instr=%h a=%h b=%h result=%h time=%0t",
                   operation_name, muldiv_exec_count,
                   dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                   instr, operand_a, operand_b, alu_result, $time);
        end
        case (funct3)
          3'b000: begin
            if (funct7 == 7'b0000000) begin
              add_exec_count++;
              $display("TB ALU op=ADD count=%0d pc=%h instr=%h a=%h b=%h result=%h time=%0t",
                       add_exec_count,
                       dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                       instr, operand_a, operand_b, alu_result, $time);
            end else if (funct7 == 7'b0100000) begin
              sub_exec_count++;
              $display("TB ALU op=SUB count=%0d pc=%h instr=%h a=%h b=%h result=%h time=%0t",
                       sub_exec_count,
                       dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                       instr, operand_a, operand_b, alu_result, $time);
            end
          end
          3'b111: if ((opcode == 7'b0110011) && (funct7 == 7'b0000000)) begin
            and_exec_count++;
            $display("TB ALU op=AND count=%0d pc=%h instr=%h a=%h b=%h result=%h time=%0t",
                     and_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, operand_b, alu_result, $time);
          end
          3'b110: if ((opcode == 7'b0110011) && (funct7 == 7'b0000000)) begin
            or_exec_count++;
            $display("TB ALU op=OR count=%0d pc=%h instr=%h a=%h b=%h result=%h time=%0t",
                     or_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, operand_b, alu_result, $time);
          end
          3'b100: if ((opcode == 7'b0110011) && (funct7 == 7'b0000000)) begin
            xor_exec_count++;
            $display("TB ALU op=XOR count=%0d pc=%h instr=%h a=%h b=%h result=%h time=%0t",
                     xor_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, operand_b, alu_result, $time);
          end
          3'b010: if ((opcode == 7'b0110011) && (funct7 == 7'b0000000)) begin
            slt_exec_count++;
            $display("TB ALU op=SLT count=%0d pc=%h instr=%h a=%h b=%h result=%h time=%0t",
                     slt_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, operand_b, alu_result, $time);
          end
          3'b011: if ((opcode == 7'b0110011) && (funct7 == 7'b0000000)) begin
            sltu_exec_count++;
            $display("TB ALU op=SLTU count=%0d pc=%h instr=%h a=%h b=%h result=%h time=%0t",
                     sltu_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, operand_b, alu_result, $time);
          end
          3'b001: if (opcode == 7'b0110011 && funct7 == 7'b0000000) begin
            sll_exec_count++;
            $display("TB ALU op=SLL count=%0d pc=%h instr=%h a=%h shamt=%h result=%h time=%0t",
                     sll_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, operand_b, alu_result, $time);
          end
          3'b101: if (opcode == 7'b0110011) begin
            if (funct7 == 7'b0000000) begin
              srl_exec_count++;
              $display("TB ALU op=SRL count=%0d pc=%h instr=%h a=%h shamt=%h result=%h time=%0t",
                       srl_exec_count,
                       dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                       instr, operand_a, operand_b, alu_result, $time);
            end else if (funct7 == 7'b0100000) begin
              sra_exec_count++;
              $display("TB ALU op=SRA count=%0d pc=%h instr=%h a=%h shamt=%h result=%h time=%0t",
                       sra_exec_count,
                       dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                       instr, operand_a, operand_b, alu_result, $time);
            end
          end
          default: ;
        endcase
      end else if (opcode == 7'b0010011) begin
        case (funct3)
          3'b000: begin
            addi_exec_count++;
            $display("TB ALU op=ADDI count=%0d pc=%h instr=%h a=%h imm=%h result=%h time=%0t",
                     addi_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, immediate, alu_result, $time);
          end
          3'b010: begin
            slti_exec_count++;
            $display("TB ALU op=SLTI count=%0d pc=%h instr=%h a=%h imm=%h result=%h time=%0t",
                     slti_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, immediate, alu_result, $time);
          end
          3'b011: begin
            sltiu_exec_count++;
            $display("TB ALU op=SLTIU count=%0d pc=%h instr=%h a=%h imm=%h result=%h time=%0t",
                     sltiu_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, immediate, alu_result, $time);
          end
          3'b111: begin
            andi_exec_count++;
            $display("TB ALU op=ANDI count=%0d pc=%h instr=%h a=%h imm=%h result=%h time=%0t",
                     andi_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, immediate, alu_result, $time);
          end
          3'b110: begin
            ori_exec_count++;
            $display("TB ALU op=ORI count=%0d pc=%h instr=%h a=%h imm=%h result=%h time=%0t",
                     ori_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, immediate, alu_result, $time);
          end
          3'b100: begin
            xori_exec_count++;
            $display("TB ALU op=XORI count=%0d pc=%h instr=%h a=%h imm=%h result=%h time=%0t",
                     xori_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, immediate, alu_result, $time);
          end
          3'b001: if (instr[31:26] == 6'b000000) begin
            slli_exec_count++;
            $display("TB ALU op=SLLI count=%0d pc=%h instr=%h a=%h shamt=%0d result=%h time=%0t",
                     slli_exec_count,
                     dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                     instr, operand_a, instr[25:20], alu_result, $time);
          end
          3'b101: begin
            if (instr[31:26] == 6'b000000) begin
              srli_exec_count++;
              $display("TB ALU op=SRLI count=%0d pc=%h instr=%h a=%h shamt=%0d result=%h time=%0t",
                       srli_exec_count,
                       dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                       instr, operand_a, instr[25:20], alu_result, $time);
            end else if (instr[31:26] == 6'b010000) begin
              srai_exec_count++;
              $display("TB ALU op=SRAI count=%0d pc=%h instr=%h a=%h shamt=%0d result=%h time=%0t",
                       srai_exec_count,
                       dut.u.unicore.unicore_lite.core_minimal.be.calculator.catchup.catchup_reservation_r.pc,
                       instr, operand_a, instr[25:20], alu_result, $time);
            end
          end
          default: ;
        endcase
      end
    end
  end

  // Check ADD at retirement.  This is independent of pipe_int_early.v_o,
  // which can be low while the instruction is stalled or while the pipeline
  // is carrying a non-valid reservation payload.
  always @(posedge clk) begin
    if (!reset
        && dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instret
        && !dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.exception
        && (dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr[6:0] == 7'b0110011)
        && (dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr[14:12] == 3'b000)
        && (dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr[31:25] == 7'b0000000)) begin
      add_retire_count++;
      $display("TB ADD RETIRED count=%0d pc=%h instr=%h time=%0t",
               add_retire_count,
               dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.pc,
               dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr,
               $time);
    end
  end

  // Log SRL at retirement as well as at ALU execution, so the trace confirms
  // that the decoded logical-right-shift instruction actually committed.
  always @(posedge clk) begin
    if (!reset
        && dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instret
        && !dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.exception
        && (dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr[6:0] == 7'b0110011)
        && (dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr[14:12] == 3'b101)
        && (dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr[31:25] == 7'b0000000)) begin
      srl_retire_count++;
      $display("TB SHIFT RETIRED op=SRL count=%0d pc=%h instr=%h time=%0t",
               srl_retire_count,
               dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.pc,
               dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr,
               $time);
    end
  end

  always @(posedge clk) begin : muldiv_retirement_log
    logic [31:0] retired_instr;
    string operation_name;

    retired_instr = dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr;
    operation_name = "";
    if (!reset
        && dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instret
        && !dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.exception
        && (retired_instr[31:25] == 7'b0000001)) begin
      case ({retired_instr[6:0], retired_instr[14:12]})
        10'b0110011_000: operation_name = "MUL";
        10'b0110011_001: operation_name = "MULH";
        10'b0110011_010: operation_name = "MULHSU";
        10'b0110011_011: operation_name = "MULHU";
        10'b0110011_100: operation_name = "DIV";
        10'b0110011_101: operation_name = "DIVU";
        10'b0110011_110: operation_name = "REM";
        10'b0110011_111: operation_name = "REMU";
        10'b0111011_000: operation_name = "MULW";
        10'b0111011_100: operation_name = "DIVW";
        10'b0111011_101: operation_name = "DIVUW";
        10'b0111011_110: operation_name = "REMW";
        10'b0111011_111: operation_name = "REMUW";
        default: operation_name = "";
      endcase
      if (operation_name != "") begin
        muldiv_retire_count++;
        $display("TB MULDIV RETIRED op=%s count=%0d pc=%h instr=%h time=%0t",
                 operation_name, muldiv_retire_count,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.pc,
                 retired_instr, $time);
      end
    end
  end

/*
  // Temporary backend/frontend redirect visibility.  This is useful for
  // distinguishing a real branch target from a redirect caused by an NPC
  // mismatch.  It also shows the PC stored in the backend reservation before
  // the integer pipe produces its branch packet.
  int redirect_dbg_count;
  always @(posedge clk) begin
    if (!reset && cfg_done
        && (dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_early.v_o
            || dut.u.unicore.unicore_lite.core_minimal.be.br_pkt.v
            || (dut.u.unicore.unicore_lite.core_minimal.be.director.fe_cmd_v_li
                && (dut.u.unicore.unicore_lite.core_minimal.be.director.fe_cmd_li.opcode != 0))
            || (dut.u.unicore.unicore_lite.core_minimal.fe.redirect_v_li
                && (dut.u.unicore.unicore_lite.core_minimal.fe.redirect_npc_li != 64'h0000_0000_8000_0000)))) begin
      redirect_dbg_count++;
      if (redirect_dbg_count <= 100)
        $display("TB REDIRECT t=%0t pipe_v=%0b pipe_pc=%h pipe_instr=%h j=%0b jr=%0b br=%0b pipe_npc=%h pipe_taken=%0b br_pkt_v=%0b br_pkt_branch=%0b br_pkt_taken=%0b br_pkt_npc=%h expected_npc=%h commit_npc_w_v=%0b commit_pc=%h commit_npc=%h commit_instr=%h commit_exc=%0b commit_irq=%0b commit_resume=%0b commit_ic_miss=%0b commit_itlb_miss=%0b commit_dcache_miss=%0b cmd_v=%0b cmd_opcode=%0d cmd_npc=%h fe_redirect_v=%0b fe_redirect_pc=%h fe_redirect_npc=%h",
                 $time,
                 dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_early.v_o,
                 dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_early.pc,
                 dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_early.instr,
                 dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_early.decode.j_v,
                 dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_early.decode.jr_v,
                 dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_early.decode.br_v,
                 dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_early.npc_o,
                 dut.u.unicore.unicore_lite.core_minimal.be.calculator.pipe_int_early.btaken_o,
                 dut.u.unicore.unicore_lite.core_minimal.be.br_pkt.v,
                 dut.u.unicore.unicore_lite.core_minimal.be.br_pkt.branch,
                 dut.u.unicore.unicore_lite.core_minimal.be.br_pkt.btaken,
                 dut.u.unicore.unicore_lite.core_minimal.be.br_pkt.npc,
                 dut.u.unicore.unicore_lite.core_minimal.be.expected_npc_lo,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.npc_w_v,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.pc,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.npc,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.instr,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.exception,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt._interrupt,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.resume,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.icache_miss,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.itlb_miss,
                 dut.u.unicore.unicore_lite.core_minimal.be.commit_pkt.dcache_miss,
                 dut.u.unicore.unicore_lite.core_minimal.be.director.fe_cmd_v_li,
                 dut.u.unicore.unicore_lite.core_minimal.be.director.fe_cmd_li.opcode,
                 dut.u.unicore.unicore_lite.core_minimal.be.director.fe_cmd_li.npc,
                 dut.u.unicore.unicore_lite.core_minimal.fe.redirect_v_li,
                 dut.u.unicore.unicore_lite.core_minimal.fe.redirect_pc_li,
                 dut.u.unicore.unicore_lite.core_minimal.fe.redirect_npc_li);
    end
  end

  // Temporary I-cache UCE handshake monitor.  The underflow is generated by
  // the UCE credit counter, so these signals show whether a complete forward
  // request was issued before a complete reverse response was consumed.
  int uce_dbg_count;
  always @(posedge clk) begin
    if (!reset
        && (dut.u.unicore.unicore_lite.icache_uce.fsm_fwd_v_lo
            || dut.u.unicore.unicore_lite.icache_uce.fsm_rev_v_li
            || dut.u.unicore.unicore_lite.icache_uce.fsm_rev_yumi_lo
            || dut.u.unicore.unicore_lite.icache_uce.mem_fwd_v_o
            || dut.u.unicore.unicore_lite.icache_uce.mem_rev_v_i)) begin
      uce_dbg_count++;
      if (uce_dbg_count <= 80)
        $display("TB ICache UCE t=%0t credit=%0d cache_v=%0b cache_done=%0b cache_addr=%h cache_type=%0d fwd_v=%0b fwd_addr=%h fwd_msg=%0d fwd_size=%0d fwd_last=%0b rev_v=%0b rev_addr=%h rev_msg=%0d rev_data=%h rev_yumi=%0b rev_last=%0b mem_fwd_v=%0b mem_rev_v=%0b",
                 $time,
                 dut.u.unicore.unicore_lite.icache_uce.credit_counter.count_o,
                 dut.u.unicore.unicore_lite.icache_uce.cache_req_v_r,
                 dut.u.unicore.unicore_lite.icache_uce.cache_req_done,
                 dut.u.unicore.unicore_lite.icache_uce.cache_req_r.addr,
                 dut.u.unicore.unicore_lite.icache_uce.cache_req_r.msg_type,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_fwd_v_lo,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_fwd_addr_lo,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_fwd_header_lo.msg_type,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_fwd_header_lo.size,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_fwd_last_lo,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_rev_v_li,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_rev_addr_li,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_rev_header_li.msg_type,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_rev_data_li,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_rev_yumi_lo,
                 dut.u.unicore.unicore_lite.icache_uce.fsm_rev_last_li,
                 dut.u.unicore.unicore_lite.icache_uce.mem_fwd_v_o,
                 dut.u.unicore.unicore_lite.icache_uce.mem_rev_v_i);
    end
  end

  // Temporary front-end visibility.  This confirms whether an I$ response
  // becomes a hit, is assembled into instructions, and is accepted by the
  // fetch queue after the cache line fill.
  int fe_dbg_count;
  always @(posedge clk) begin
    if (!reset
        && (dut.u.unicore.unicore_lite.core_minimal.fe.if2_hit_v_lo
            || dut.u.unicore.unicore_lite.core_minimal.fe.if2_miss_v_lo
            || dut.u.unicore.unicore_lite.core_minimal.fe.assembled_v_lo
            || dut.u.unicore.unicore_lite.core_minimal.fe.fetch_v_lo)) begin
      fe_dbg_count++;
      if (fe_dbg_count <= 100)
        $display("TB FE t=%0t next_pc=%h ic_v=%0b ic_yumi=%0b if2_hit=%0b if2_miss=%0b if2_pc=%h if2_data=%h assembled_v=%0b assembled_pc=%h assembled_instr=%h fetch_v=%0b fetch_pc=%h fetch_instr=%h fetch_count=%0d fetch_yumi=%0b",
                 $time,
                 dut.u.unicore.unicore_lite.core_minimal.fe.next_pc_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.icache_v_li,
                 dut.u.unicore.unicore_lite.core_minimal.fe.icache_yumi_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.if2_hit_v_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.if2_miss_v_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.if2_pc_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.if2_data_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.assembled_v_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.assembled_pc_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.assembled_instr_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.fetch_v_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.fetch_pc_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.fetch_instr_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.fetch_count_lo,
                 dut.u.unicore.unicore_lite.core_minimal.fe.fetch_yumi_li);
    end
  end
*/
  initial begin
    name_warning_catcher = new();
    uvm_report_cb::add(null, name_warning_catcher);
    uvm_resource_db#(virtual bedrock_if)::set(
      "uvm_test_top.env.bedrock_agt.bedrock_drv", "vif", incoming_vif);
    uvm_resource_db#(virtual bedrock_if)::set(
      "uvm_test_top.env.bedrock_agt.bedrock_mon", "vif", incoming_vif);
    uvm_resource_db#(virtual bedrock_if)::set(
      "uvm_test_top.env.outgoing_mon", "vif", outgoing_vif);
    run_test();
  end

   // Waveform dump for debugging with GTKWave or another VCD viewer.
  initial begin
    $dumpfile("cpu_tb_top.vcd");
    $dumpvars(0, incoming_vif);
    $dumpvars(0, outgoing_vif);
    $dumpvars(0, dma_pkt);
    $dumpvars(0, dma_pkt_v);
    $dumpvars(0, dma_pkt_yumi);
    $dumpvars(0, dma_data_to_dut);
    $dumpvars(0, dma_data_v_to_dut);
    $dumpvars(0, dma_data_ready_from_dut);
    $dumpvars(0, dma_data_from_dut);
    $dumpvars(0, dma_data_v_from_dut);
    $dumpvars(0, dma_data_yumi);
    $dumpvars(0, host_mem_write);
    $dumpvars(0, cfg_done);
  end

endmodule
