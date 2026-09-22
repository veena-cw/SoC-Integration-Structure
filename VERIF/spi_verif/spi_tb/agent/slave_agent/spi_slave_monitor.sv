//Although named slave monitor, this is really out SPI bus monitor.
`ifndef TB_NUM_CS
  `define TB_NUM_CS 4
`endif

class spi_slave_monitor extends uvm_monitor;

    `uvm_component_utils(spi_slave_monitor)

    virtual spi_bus_if         bus_vif;
    virtual spi_master_ctrl_if ctrl_vif;

    uvm_analysis_port #(spi_bus_word) ap;

    function new(string name = "spi_slave_monitor",
                 uvm_component parent = null);
      super.new(name, parent);
      ap = new("ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
      super.build_phase(phase);

      if (!uvm_config_db#(virtual spi_bus_if)::get(
            this, "", "bus_vif", bus_vif)) begin
        `uvm_fatal("SLAVE_MON", "bus_vif not found")
      end

      if (!uvm_config_db#(virtual spi_master_ctrl_if)::get(
            this, "", "master_vif", ctrl_vif)) begin
        `uvm_fatal("SLAVE_MON", "master_vif not found")
      end
    endfunction

  
  //active CS
    function int find_active_cs();
      for (int i = 0; i < `TB_NUM_CS; i++) begin
        if (bus_vif.cs_n[i] === 1'b0)
          return i;
      end
      return 0;
    endfunction

  
  //monitor waits for CS-->1111(No slave selected)--> it waits until 1111 to 1110(then monitoring starts)
   /* task wait_sample_or_cs_rise(
      input bit sample_on_rise,
      input int cs_idx,
      output bit got_sample
    );
      got_sample = 1'b0;

      fork : WAIT_SAMPLE_OR_CS
        begin
          if (sample_on_rise)
            @(posedge bus_vif.sck);
          else
            @(negedge bus_vif.sck);
          got_sample = 1'b1;
        end

        begin
          @(posedge bus_vif.cs_n[cs_idx]);
          got_sample = 1'b0;
        end
      join_any

      disable WAIT_SAMPLE_OR_CS;
    endtask

  */
  
  task wait_sample_or_cs_rise(
    input  bit sample_on_rise,
    input  int cs_idx,
    output bit got_sample
);
    bit sample_hit;
    bit cs_rise;

    sample_hit = 1'b0;
    cs_rise    = 1'b0;
    got_sample = 1'b0;

    fork : WAIT_SAMPLE_OR_CS
        begin
            if (sample_on_rise)
                @(posedge bus_vif.sck);
            else
                @(negedge bus_vif.sck);

            sample_hit = 1'b1;
        end

        begin
            @(posedge bus_vif.cs_n[cs_idx]);
            cs_rise = 1'b1;
        end
    join_any

    disable WAIT_SAMPLE_OR_CS;

    if (sample_hit && !cs_rise)
        got_sample = 1'b1;
    else
        got_sample = 1'b0;

endtask
  
    //determine sampling edge
    task run_phase(uvm_phase phase);
      int cs_idx;
      bit frame_active;
      bit sample_on_rise;
      bit got_sample;
      bit [7:0] mosi_acc;
      bit [7:0] miso_acc;
      int bit_count;
      spi_bus_word tr;

      forever begin
        // Wait until any CS is asserted.
        wait (bus_vif.cs_n != '1);

        cs_idx = find_active_cs();
        frame_active = 1'b1;

        // DUT latches these controls at transfer launch; TB keeps them stable.
        sample_on_rise = !(ctrl_vif.cpol_i ^ ctrl_vif.cpha_i);
        mosi_acc = '0;
        miso_acc = '0;
        bit_count = 0;

        while (frame_active) begin
          wait_sample_or_cs_rise(sample_on_rise, cs_idx, got_sample);

          if (!got_sample) begin
            frame_active = 1'b0;
            if (bit_count != 0)
              `uvm_error("SLAVE_MON", "CS deasserted in the middle of a word")
          end
          else begin
            if (ctrl_vif.lsb_first_i) begin
              mosi_acc = {bus_vif.mosi, mosi_acc[7:1]};
              miso_acc = {bus_vif.miso, miso_acc[7:1]};
            end
            else begin
              mosi_acc = {mosi_acc[6:0], bus_vif.mosi};
              miso_acc = {miso_acc[6:0], bus_vif.miso};
            end

            bit_count++;

            if (bit_count == 8) begin
              tr = spi_bus_word::type_id::create("bus_tr");
              tr.mosi_word = mosi_acc;
              tr.miso_word = miso_acc;
              tr.cs_index  = cs_idx[1:0];
              tr.cpol      = ctrl_vif.cpol_i;
              tr.cpha      = ctrl_vif.cpha_i;
              tr.lsb_first = ctrl_vif.lsb_first_i;

              ap.write(tr);

              `uvm_info("SLAVE_MON",
                $sformatf("Observed SPI: MOSI=0x%02h MISO=0x%02h CS=%0d MODE=%0d",
                          tr.mosi_word, tr.miso_word, tr.cs_index,
                          {tr.cpol,tr.cpha}), UVM_MEDIUM)

              mosi_acc = '0;
              miso_acc = '0;
              bit_count = 0;
            end
          end
        end

        // Ensure outer wait does not immediately re-enter on old state.
        wait (bus_vif.cs_n == '1);
      end
    endtask

  endclass
