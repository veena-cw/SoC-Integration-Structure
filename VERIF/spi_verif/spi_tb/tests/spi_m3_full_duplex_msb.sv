class spi_m3_full_duplex_msb extends spi_base_test;

    `uvm_component_utils(spi_m3_full_duplex_msb)

    function new(string name = "spi_m3_full_duplex_msb",
                 uvm_component parent = null);
      super.new(name, parent);
    endfunction

    task run_phase(uvm_phase phase);
      spi_full_duplex_vseq vseq;

      phase.raise_objection(this);

      vseq = spi_full_duplex_vseq::type_id::create("vseq");

      // Mode 3, MSB first, CS0
      vseq.cpol          = 1'b1;
      vseq.cpha          = 1'b1;
      vseq.lsb_first     = 1'b0;
      vseq.clk_div       = 16'd4;
      vseq.cs_sel        = 2'd0;
      vseq.cs_setup      = 8'd3;
      vseq.cs_hold       = 8'd2;
      vseq.continuous_cs = 1'b0;
      vseq.num_words     = 1;

      vseq.master_tx = new[1];
      vseq.slave_tx  = new[1];

      vseq.master_tx[0] = 8'hA5;
      vseq.slave_tx[0]  = 8'h3C;

      `uvm_info("TEST",
        "Starting spi_m3_full_duplex_msb: Master TX=A5, Slave TX=3C, Mode3",
        UVM_LOW)

      vseq.start(env.vseqr);

      // Allow final monitor/analysis callbacks to complete.
      repeat (3) @(posedge env.m_agent.monitor.vif.clk_i);

      phase.drop_objection(this);
    endtask

  endclass
