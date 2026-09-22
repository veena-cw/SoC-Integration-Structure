class csi2_short_packet_test extends csi2_base_test;
  `uvm_component_utils(csi2_short_packet_test)

  function new(string name = "csi2_short_packet_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual task run_scenario();
    int unsigned before_count;

    run_initial_baseline();

    for(int i = 0; i < 12; i++) begin
      before_count = en.sb.compared_count;
      send_short(i < 4 ? i : i + 4);
      wait(en.sb.compared_count == before_count + 1);
    end
  endtask
endclass : csi2_short_packet_test
