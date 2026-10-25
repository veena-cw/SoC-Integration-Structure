class score_board extends uvm_scoreboard;
`uvm_component_utils(score_board)
    uvm_tlm_analysis_fifo#(NoC_master_seq_item) sb_NoC_master;
    uvm_tlm_analysis_fifo#(NoC_slave_seq_item)  sb_NoC_slave;
 function new(string name = "score_board", uvm_component parent );
          super.new(name,parent);
          sb_NoC_master = new("sb_NoC_master");
          sb_NoC_slave  = new("sb_NoC_slave");
 endfunction
endclass
