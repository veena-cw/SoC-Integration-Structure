class score_board extends uvm_scoreboard;
`uvm_component_utils(socre_board)
    uvm_tlm_analysis_fifo#(Noc_master_seq_item) sb_NoC_master;
	uvm_tlm_analysis_fifo#(NoC_master_seq_item) sb_NoC_slave;
 function new(string name = "score_board", uvm_component parent );
          super.new(name,parent);
 endfunction 
endclass
