//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_random_error_injection_vseq
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Virtual sequence of test tpu_random_error_injection: Random negative test: each
//               iteration injects one randomly chosen error (AXI response, RLAST, handshake stall,
//               DMA parameter, UB overflow, queue overflow, bad register access, START while busy,
//               VPU timeout) with random parameters, checks the exact ERROR_CODE and then checks
//               recovery with a random DMA loopback.
//=================================================================================
class tpu_random_error_injection_vseq extends tpu_host_base_vseq;
  `uvm_object_utils(tpu_random_error_injection_vseq)
  function new(string name = "tpu_random_error_injection_vseq"); super.new(name); endfunction

  int unsigned iterations = 20;
  typedef enum {E_RRESP, E_BRESP, E_RLAST_EARLY, E_RLAST_LATE, E_STALL, E_MISALIGN, E_UB_OVF_LD, E_UB_OVF_ST,
                E_QOVF, E_BAD_REG, E_DMA_BOTH, E_START_BUSY, E_VPU_TMO, E_UNMAPPED} err_kind_e;

  // DMA loopback of random data; must complete without error (used after every injected error)
  task check_recovery(int it);
    q88_t w[$];
    int   len;
    bit [31:0] src;
    len = $urandom_range(1, 64);
    src = 32'h0020_0000 + 16 * $urandom_range(0, 1023);
    for (int k = 0; k < len; k++) w.push_back(16'($urandom));
    mem_put(src, w);
    dma_load(src, len);
    dma_store(32'h0030_0000, 0, len);
    run_expect_done($sformatf("recovery loopback after error %0d", it));
    void'(check_mem($sformatf("recovery loopback after error %0d", it), 32'h0030_0000, w));
  endtask

  task body();
    tpu_host_axis_agent_cfg m;
    err_kind_e k;
    bit [1:0]  resp;
    bit [31:0] d;
    bit [7:0]  ec;
    int        len;
    m = p_sequencer.mem;
    if ($value$plusargs("ITER=%d", iterations)) `uvm_info("ITER", $sformatf("%0d iterations", iterations), UVM_LOW)
    for (int it = 0; it < iterations; it++) begin
      k   = err_kind_e'($urandom_range(0, E_UNMAPPED));
      len = $urandom_range(9, 64);                     // at least 2 beats (RLAST checks need a multi-beat burst)
      `uvm_info("ERRINJ", $sformatf("iteration %0d: %s, %0d words", it, k.name(), len), UVM_LOW)
      soft_reset();
      csr_wr(CSR_TIMEOUT, TIMEOUT_RESET);
      case (k)
        E_RRESP: begin
          m.rresp_err_count = 1; m.rresp_err_code = ($urandom_range(0, 1) != 0) ? RESP_SLVERR : RESP_DECERR;
          dma_load(32'h0010_0000, len);
          run_expect_error($sformatf("RRESP %0d", m.rresp_err_code), ERR_AXI);
        end
        E_BRESP: begin
          m.bresp_err_count = 1; m.bresp_err_code = ($urandom_range(0, 1) != 0) ? RESP_SLVERR : RESP_DECERR;
          dma_load(32'h0010_0000, len); dma_store(32'h0011_0000, 0, len);
          run_expect_error($sformatf("BRESP %0d", m.bresp_err_code), ERR_AXI);
        end
        E_RLAST_EARLY: begin m.rlast_mode = 1; dma_load(32'h0010_0000, len); run_expect_error("RLAST one beat early", ERR_AXI); end
        E_RLAST_LATE:  begin m.rlast_mode = 2; dma_load(32'h0010_0000, len); run_expect_error("RLAST one beat late", ERR_AXI); end
        E_STALL: begin
          csr_wr(CSR_TIMEOUT, 32'($urandom_range(32, 256)));
          m.stall_channel = $urandom_range(1, 5); m.stall_cycles = 4000;
          dma_load(32'h0010_0000, len);
          if (m.stall_channel >= 3) dma_store(32'h0011_0000, 0, len);
          run_expect_error($sformatf("stall on channel %0d", m.stall_channel), ERR_TIMEOUT);
        end
        E_MISALIGN: begin
          if ($urandom_range(0, 1) != 0) dma_load(32'h0010_0000 + 2 * $urandom_range(1, 7), len);
          else                           dma_store(32'h0011_0000 + 2 * $urandom_range(1, 7), 0, len);
          run_expect_error("misaligned DMA address", ERR_ALIGN);
        end
        E_UB_OVF_LD: begin dma_load(32'h0010_0000, $urandom_range(129, 300)); run_expect_error("load larger than the UB", ERR_UB_OVF); end
        E_UB_OVF_ST: begin
          d = $urandom_range(1, 127);
          dma_store(32'h0011_0000, int'(d), 129 - int'(d) + $urandom_range(0, 20));
          run_expect_error("store past the end of the UB", ERR_UB_OVF);
        end
        E_QOVF: begin
          repeat (QUEUE_DEPTH + $urandom_range(1, 3)) push(tpu_host_cmd::nop());
          get_error(ec);
          if (ec != ERR_QOVF) `uvm_error("ERRINJ", $sformatf("queue overflow: ERROR_CODE 0x%02h", ec))
        end
        E_BAD_REG: begin
          csr_write(($urandom_range(0, 2) == 0) ? CSR_STATUS : (($urandom_range(0, 1) != 0) ? CSR_ERROR_CODE : CSR_VERSION),
                    $urandom, 4'hF, resp);
          if (resp != RESP_OKAY) `uvm_error("ERRINJ", $sformatf("read-only write answered %0d", resp))
          idle(10); get_error(ec);
          if (ec != ERR_BAD_REG) `uvm_error("ERRINJ", $sformatf("read-only write: ERROR_CODE 0x%02h", ec))
        end
        E_DMA_BOTH: begin
          csr_wr(CSR_CONTROL, (32'h1 << CTRL_DMA_LOAD) | (32'h1 << CTRL_DMA_STORE));
          idle(10); get_error(ec);
          if (ec != ERR_BAD_REG) `uvm_error("ERRINJ", $sformatf("DMA_LOAD + DMA_STORE: ERROR_CODE 0x%02h", ec))
        end
        E_START_BUSY: begin
          bit [31:0] st;
          clear();
          push(tpu_host_cmd::nop(WM_CYCLES, 3000));
          tpu_start(); tpu_start();
          wait_done(st, "START while busy");
          get_error(ec);
          if (ec != ERR_START_BUSY || !st[ST_DONE]) `uvm_error("ERRINJ", $sformatf("START while busy: STATUS 0x%08h ERROR_CODE 0x%02h", st, ec))
        end
        E_VPU_TMO: begin
          csr_wr(CSR_TIMEOUT, 32'($urandom_range(50, 500)));
          push(tpu_host_cmd::nop(($urandom_range(0, 1) != 0) ? WM_VPU1 : WM_VPU_ANY));
          run_expect_error("VPU wait without VPU output", ERR_TIMEOUT);
        end
        default: begin                                 // unmapped / misaligned register: DECERR, no ERROR_CODE bit
          csr_write(8'($urandom_range(16, 63) * 4 + (($urandom_range(0, 1) != 0) ? 0 : 1)), $urandom, 4'hF, resp);
          if (resp != RESP_DECERR) `uvm_error("ERRINJ", $sformatf("unmapped write answered %0d", resp))
          idle(10); get_error(ec);
          if (ec != 8'h00) `uvm_error("ERRINJ", $sformatf("unmapped write changed ERROR_CODE to 0x%02h", ec))
        end
      endcase
      m.clear_errors();
      csr_wr(CSR_TIMEOUT, TIMEOUT_RESET);
      // AXI-side errors abandon the bus transaction (spec 3.2.13): reset before using the interconnect again
      if (k inside {E_RRESP, E_BRESP, E_RLAST_EARLY, E_RLAST_LATE, E_STALL}) hw_reset();
      else soft_reset();
      check_recovery(it);
    end
  endtask
endclass
