//It does not control the DUT, It acts like an external SPI slave device

class spi_slave_driver extends uvm_driver #(spi_slave_item);

    `uvm_component_utils(spi_slave_driver)

    virtual spi_bus_if vif;
    uvm_analysis_port #(spi_slave_item) exp_ap;

    function new(string name = "spi_slave_driver",uvm_component parent = null);
      super.new(name, parent);
      exp_ap = new("exp_ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
      super.build_phase(phase);
      if (!uvm_config_db#(virtual spi_bus_if)::get(this, "", "bus_vif", vif)) begin
        `uvm_fatal("SLAVE_DRV", "bus_vif not found")
      end
    endfunction

  
  //which bit it is sending like msb or lsb
    function bit get_bit(bit [7:0] data,
                         int bit_idx,
                         bit lsb_first);
      if (lsb_first)
        return data[bit_idx];
      else
        return data[7-bit_idx];
    endfunction

  
    //wait for cs
    task wait_cs_assert(bit [1:0] cs);
      if (vif.cs_n[cs] !== 1'b0)
        @(negedge vif.cs_n[cs]);
    endtask

    //cs deassert
    task wait_cs_deassert(bit [1:0] cs);
      if (vif.cs_n[cs] !== 1'b1)
        @(posedge vif.cs_n[cs]);
    endtask

  
//   MODE  CPOL  CPHA  Idle SCK  Sample edge       Shift edge
//   ----  ----  ----  --------  -----------       ----------
//     0     0     0   low       rising  (1st)     falling (2nd)
//     1     0     1   low       falling (2nd)     rising  (1st)
//     2     1     0   high      falling (1st)     rising  (2nd)
//     3     1     1   high      rising  (2nd)     falling (1st)
    task wait_sample_edge(bit cpol, bit cpha);
      bit sample_on_rise;
      sample_on_rise = !(cpol ^ cpha);
      if (sample_on_rise)
        @(posedge vif.sck);
      else
        @(negedge vif.sck);
    endtask

    task wait_shift_edge(bit cpol, bit cpha);
      bit shift_on_rise;
      shift_on_rise = (cpol ^ cpha);
      if (shift_on_rise)
        @(posedge vif.sck);
      else
        @(negedge vif.sck);
    endtask

  
    //CPHA0
    task drive_cpha0_stream(spi_slave_item req);
      bit first_bit;
      first_bit = 1'b1;

      foreach (req.tx_data[word]) begin
        for (int bit_idx = 0; bit_idx < 8; bit_idx++) begin
          if (first_bit) begin
            vif.miso = get_bit(req.tx_data[word], bit_idx, req.lsb_first);
            first_bit = 1'b0;
          end
          else begin
            wait_shift_edge(req.cpol, req.cpha);
            vif.miso = get_bit(req.tx_data[word], bit_idx, req.lsb_first);
          end

          wait_sample_edge(req.cpol, req.cpha);
        end
      end
    endtask

    //CPHA1
    task drive_cpha1_stream(spi_slave_item req);
      foreach (req.tx_data[word]) begin
        for (int bit_idx = 0; bit_idx < 8; bit_idx++) begin
          wait_shift_edge(req.cpol, req.cpha);
          vif.miso = get_bit(req.tx_data[word], bit_idx, req.lsb_first);
          wait_sample_edge(req.cpol, req.cpha);
        end
      end
    endtask

  
    //wait fr CS then select
    task drive_one_frame(spi_slave_item req);
      wait_cs_assert(req.cs_sel);

      if (req.cpha == 1'b0)
        drive_cpha0_stream(req);
      else
        drive_cpha1_stream(req);

      wait_cs_deassert(req.cs_sel);
      vif.miso = 1'b0;
    endtask

  
  
    task drive_separate_frames(spi_slave_item req);
      spi_slave_item one_word;

      foreach (req.tx_data[word]) begin
        one_word = spi_slave_item::type_id::create(
          $sformatf("one_word_%0d", word));

        one_word.cpol          = req.cpol;
        one_word.cpha          = req.cpha;
        one_word.lsb_first     = req.lsb_first;
        one_word.cs_sel        = req.cs_sel;
        one_word.continuous_cs = 1'b0;
        one_word.num_words     = 1;
        one_word.tx_data       = new[1];
        one_word.tx_data[0]    = req.tx_data[word];

        drive_one_frame(one_word);
      end
    endtask

  
  
  //run phase
    task run_phase(uvm_phase phase);
      spi_slave_item req;

      vif.miso = 1'b0;

      forever begin
        seq_item_port.get_next_item(req);

        exp_ap.write(req);

        `uvm_info("SLAVE_DRV",
          $sformatf("Slave response: mode=%0d TX words=%0d",
                    {req.cpol,req.cpha}, req.num_words), UVM_MEDIUM)

        if (req.continuous_cs)
          drive_one_frame(req);
        else
          drive_separate_frames(req);

        seq_item_port.item_done();
      end
    endtask

  endclass
