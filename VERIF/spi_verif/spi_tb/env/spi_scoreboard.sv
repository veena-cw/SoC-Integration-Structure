`uvm_analysis_imp_decl(_master_exp)
`uvm_analysis_imp_decl(_slave_exp)
`uvm_analysis_imp_decl(_bus)
`uvm_analysis_imp_decl(_master_rx)

class spi_scoreboard extends uvm_scoreboard;

    `uvm_component_utils(spi_scoreboard)

    uvm_analysis_imp_master_exp #(spi_master_item,    spi_scoreboard) master_exp_imp;
    uvm_analysis_imp_slave_exp  #(spi_slave_item,     spi_scoreboard) slave_exp_imp;
    uvm_analysis_imp_bus        #(spi_bus_word,       spi_scoreboard) bus_imp;
    uvm_analysis_imp_master_rx  #(spi_master_rx_word, spi_scoreboard) master_rx_imp;

    bit [7:0] exp_mosi_q[$];
    bit [7:0] exp_miso_q[$];
    bit [7:0] exp_master_rx_q[$];
    bit [1:0] exp_cs_q[$];
    bit       exp_cpol_q[$];
    bit       exp_cpha_q[$];
    bit       exp_lsb_q[$];

    int unsigned pass_count;
    int unsigned fail_count;

    function new(string name = "spi_scoreboard",
                 uvm_component parent = null);
      super.new(name, parent);

      master_exp_imp = new("master_exp_imp", this);
      slave_exp_imp  = new("slave_exp_imp",  this);
      bus_imp        = new("bus_imp",        this);
      master_rx_imp  = new("master_rx_imp",  this);

      pass_count = 0;
      fail_count = 0;
    endfunction

    function void write_master_exp(spi_master_item tr);
      foreach (tr.tx_data[i]) begin
        exp_mosi_q.push_back(tr.tx_data[i]);
        exp_cs_q.push_back(tr.cs_sel);
        exp_cpol_q.push_back(tr.cpol);
        exp_cpha_q.push_back(tr.cpha);
        exp_lsb_q.push_back(tr.lsb_first);
      end
    endfunction

    function void write_slave_exp(spi_slave_item tr);
      foreach (tr.tx_data[i]) begin
        exp_miso_q.push_back(tr.tx_data[i]);
        exp_master_rx_q.push_back(tr.tx_data[i]);
      end
    endfunction

    function void write_bus(spi_bus_word tr);
      bit [7:0] exp_data;
      bit [1:0] exp_cs;
      bit exp_cpol;
      bit exp_cpha;
      bit exp_lsb;

      // Master TX -> MOSI
      if (exp_mosi_q.size() == 0) begin
        `uvm_error("SB_MOSI", "Unexpected MOSI word")
        fail_count++;
      end
      else begin
        exp_data = exp_mosi_q.pop_front();
        if (tr.mosi_word === exp_data) begin
          pass_count++;
          `uvm_info("SB_MOSI",
            $sformatf("PASS Master TX -> MOSI exp=0x%02h act=0x%02h",
                      exp_data, tr.mosi_word), UVM_LOW)
        end
        else begin
          fail_count++;
          `uvm_error("SB_MOSI",
            $sformatf("FAIL Master TX -> MOSI exp=0x%02h act=0x%02h",
                      exp_data, tr.mosi_word))
        end
      end

      // Slave TX -> MISO
      if (exp_miso_q.size() == 0) begin
        `uvm_error("SB_MISO", "Unexpected MISO word")
        fail_count++;
      end
      else begin
        exp_data = exp_miso_q.pop_front();
        if (tr.miso_word === exp_data) begin
          pass_count++;
          `uvm_info("SB_MISO",
            $sformatf("PASS Slave TX -> MISO exp=0x%02h act=0x%02h",
                      exp_data, tr.miso_word), UVM_LOW)
        end
        else begin
          fail_count++;
          `uvm_error("SB_MISO",
            $sformatf("FAIL Slave TX -> MISO exp=0x%02h act=0x%02h",
                      exp_data, tr.miso_word))
        end
      end

      // Configuration / selected CS
      if (exp_cs_q.size() != 0) begin
        exp_cs   = exp_cs_q.pop_front();
        exp_cpol = exp_cpol_q.pop_front();
        exp_cpha = exp_cpha_q.pop_front();
        exp_lsb  = exp_lsb_q.pop_front();

        if (tr.cs_index != exp_cs) begin
          fail_count++;
          `uvm_error("SB_CFG",
            $sformatf("CS mismatch exp=%0d act=%0d", exp_cs, tr.cs_index))
        end

        if ((tr.cpol != exp_cpol) ||
            (tr.cpha != exp_cpha) ||
            (tr.lsb_first != exp_lsb)) begin
          fail_count++;
          `uvm_error("SB_CFG", "SPI mode/bit-order mismatch")
        end
      end
    endfunction

    function void write_master_rx(spi_master_rx_word tr);
      bit [7:0] exp_data;

      if (exp_master_rx_q.size() == 0) begin
        fail_count++;
        `uvm_error("SB_RX", "Unexpected Master RX word")
      end
      else begin
        exp_data = exp_master_rx_q.pop_front();

        if (tr.data === exp_data) begin
          pass_count++;
          `uvm_info("SB_RX",
            $sformatf("PASS Slave TX -> Master RX exp=0x%02h act=0x%02h",
                      exp_data, tr.data), UVM_LOW)
        end
        else begin
          fail_count++;
          `uvm_error("SB_RX",
            $sformatf("FAIL Slave TX -> Master RX exp=0x%02h act=0x%02h",
                      exp_data, tr.data))
        end
      end
    endfunction

    function void report_phase(uvm_phase phase);
      super.report_phase(phase);

      if (exp_mosi_q.size() != 0) begin
        fail_count += exp_mosi_q.size();
        `uvm_error("SB_PENDING",
          $sformatf("%0d MOSI expected words not observed", exp_mosi_q.size()))
      end

      if (exp_miso_q.size() != 0) begin
        fail_count += exp_miso_q.size();
        `uvm_error("SB_PENDING",
          $sformatf("%0d MISO expected words not observed", exp_miso_q.size()))
      end

      if (exp_master_rx_q.size() != 0) begin
        fail_count += exp_master_rx_q.size();
        `uvm_error("SB_PENDING",
          $sformatf("%0d Master RX expected words not observed",
                    exp_master_rx_q.size()))
      end

      `uvm_info("SB_SUMMARY",
        $sformatf("SPI SCOREBOARD SUMMARY: PASS=%0d FAIL=%0d",
                  pass_count, fail_count), UVM_NONE)
    endfunction

  endclass
