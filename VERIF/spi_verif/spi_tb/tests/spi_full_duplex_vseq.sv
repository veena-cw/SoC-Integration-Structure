class spi_full_duplex_vseq extends uvm_sequence;

    `uvm_object_utils(spi_full_duplex_vseq)
    `uvm_declare_p_sequencer(spi_virtual_sequencer)

    bit cpol;
    bit cpha;
    bit lsb_first;
    bit [15:0] clk_div;
    bit [1:0]  cs_sel;
    bit [7:0]  cs_setup;
    bit [7:0]  cs_hold;
    bit        continuous_cs;
    int unsigned num_words;
    bit [7:0] master_tx[];
    bit [7:0] slave_tx[];

    function new(string name = "spi_full_duplex_vseq");
      super.new(name);
    endfunction

    task body();
      spi_master_basic_sequence m_seq;
      spi_slave_basic_sequence  s_seq;

      if (p_sequencer == null)
        `uvm_fatal("VSEQ", "Virtual sequencer is null")

      if (master_tx.size() != num_words)
        `uvm_fatal("VSEQ", "master_tx.size() != num_words")

      if (slave_tx.size() != num_words)
        `uvm_fatal("VSEQ", "slave_tx.size() != num_words")

      m_seq = spi_master_basic_sequence::type_id::create("m_seq");
      s_seq = spi_slave_basic_sequence ::type_id::create("s_seq");

      m_seq.cpol          = cpol;
      m_seq.cpha          = cpha;
      m_seq.lsb_first     = lsb_first;
      m_seq.clk_div       = clk_div;
      m_seq.cs_sel        = cs_sel;
      m_seq.cs_setup      = cs_setup;
      m_seq.cs_hold       = cs_hold;
      m_seq.continuous_cs = continuous_cs;
      m_seq.num_words     = num_words;
      m_seq.tx_data       = new[num_words];

      s_seq.cpol          = cpol;
      s_seq.cpha          = cpha;
      s_seq.lsb_first     = lsb_first;
      s_seq.cs_sel        = cs_sel;
      s_seq.continuous_cs = continuous_cs;
      s_seq.num_words     = num_words;
      s_seq.tx_data       = new[num_words];

      foreach (master_tx[i])
        m_seq.tx_data[i] = master_tx[i];

      foreach (slave_tx[i])
        s_seq.tx_data[i] = slave_tx[i];

      // Slave is started first in the fork source order. Master driver
      // waits on clk_i before launching, giving the reactive BFM time to
      // reach its CS wait before the DUT starts SCK.
      fork
        s_seq.start(p_sequencer.slave_seqr);
        m_seq.start(p_sequencer.master_seqr);
      join
    endtask

  endclass
