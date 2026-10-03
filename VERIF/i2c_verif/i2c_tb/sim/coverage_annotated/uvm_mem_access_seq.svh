//      // verilator_coverage annotation
        // 
        // -------------------------------------------------------------
        //    Copyright 2004-2008 Synopsys, Inc.
        //    Copyright 2010 Mentor Graphics Corporation
        //    All Rights Reserved Worldwide
        // 
        //    Licensed under the Apache License, Version 2.0 (the
        //    "License"); you may not use this file except in
        //    compliance with the License.  You may obtain a copy of
        //    the License at
        // 
        //        http://www.apache.org/licenses/LICENSE-2.0
        // 
        //    Unless required by applicable law or agreed to in
        //    writing, software distributed under the License is
        //    distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
        //    CONDITIONS OF ANY KIND, either express or implied.  See
        //    the License for the specific language governing
        //    permissions and limitations under the License.
        // -------------------------------------------------------------
        // 
        
        //
        // TITLE: Memory Access Test Sequence
        //
        
        //
        // class: uvm_mem_single_access_seq
        //
        // Verify the accessibility of a memory
        // by writing through its default address map
        // then reading it via the backdoor, then reversing the process,
        // making sure that the resulting value matches the written value.
        //
        // If bit-type resource named
        // "NO_REG_TESTS", "NO_MEM_TESTS", or "NO_MEM_ACCESS_TEST"
        // in the "REG::" namespace
        // matches the full name of the memory,
        // the memory is not tested.
        //
        //| uvm_resource_db#(bit)::set({"REG::",regmodel.blk.mem0.get_full_name()},
        //|                            "NO_MEM_TESTS", 1, this);
        //
        // Memories without an available backdoor
        // cannot be tested.
        //
        // The DUT should be idle and not modify the memory during this test.
        //
        
        class uvm_mem_single_access_seq extends uvm_reg_sequence #(uvm_sequence #(uvm_reg_item));
        
           // Variable: mem
           //
           // The memory to be tested
           //
           uvm_mem mem;
        
%000001    `uvm_object_utils(uvm_mem_single_access_seq)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
        
%000000    function new(string name="uam_mem_single_access_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000      super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
           endfunction
        
%000000    virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000       string mode;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000       uvm_reg_map maps[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000       int n_bits;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
        
%000000       if (mem == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000          `uvm_error("uvm_mem_access_seq", "No register specified to run sequence on");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
              end
        
              // Memories with some attributes are not to be tested
%000000       if (uvm_resource_db#(bit)::get_by_name({"REG::",mem.get_full_name()},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                                                     "NO_REG_TESTS", 0) != null ||
                  uvm_resource_db#(bit)::get_by_name({"REG::",mem.get_full_name()},
                                                     "NO_MEM_TESTS", 0) != null ||
                  uvm_resource_db#(bit)::get_by_name({"REG::",mem.get_full_name()},
                                                     "NO_MEM_ACCESS_TEST", 0) != null)
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
        
              // Can only deal with memories with backdoor access
%000000       if (mem.get_backdoor() == null && !mem.has_hdl_path()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                 `uvm_error("uvm_mem_access_seq", {"Memory '",mem.get_full_name(),
%000000              "' does not have a backdoor mechanism available"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
              end
        
%000000       n_bits = mem.get_n_bits();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
              
              // Memories may be accessible from multiple physical interfaces (maps)
%000000       mem.get_maps(maps);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
        
              // Walk the memory via each map
%000000       foreach (maps[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000          uvm_status_e status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000          uvm_reg_data_t  val, exp, v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                 
                 `uvm_info("uvm_mem_access_seq", {"Verifying access of memory '",
                     mem.get_full_name(),"' in map '", maps[j].get_full_name(),
%000000              "' ..."}, UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
        
%000000          mode = mem.get_access(maps[j]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                 
                 // The access process is, for address k:
                 // - Write random value via front door
                 // - Read via backdoor and expect same random value if RW
                 // - Write complement of random value via back door
                 // - Read via front door and expect inverted random value
%000000          for (int k = 0; k < mem.get_size(); k++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000             val = $random & uvm_reg_data_t'((1'b1<<n_bits)-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000             if (n_bits > 32)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000               val = uvm_reg_data_t'(val << 32) | $random;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000             if (mode == "RO") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000                mem.peek(status, k, exp);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000                if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                          `uvm_error("uvm_mem_access_seq", $sformatf("Status was %s when reading \"%s[%0d]\" through backdoor.",
%000000                                               status.name(), mem.get_full_name(), k))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                       end
                    end
%000000             else exp = val;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                    
%000000             mem.write(status, k, val, UVM_FRONTDOOR, maps[j], this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000             if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                       `uvm_error("uvm_mem_access_seq", $sformatf("Status was %s when writing \"%s[%0d]\" through map \"%s\".",
%000000                                            status.name(), mem.get_full_name(), k, maps[j].get_full_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                    end
%000000             #1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                    
%000000             val = 'x;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000             mem.peek(status, k, val);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000             if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                       `uvm_error("uvm_mem_access_seq", $sformatf("Status was %s when reading \"%s[%0d]\" through backdoor.",
%000000                                            status.name(), mem.get_full_name(), k))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                    end
%000000             else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000                if (val !== exp) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                          `uvm_error("uvm_mem_access_seq", $sformatf("Backdoor \"%s[%0d]\" read back as 'h%h instead of 'h%h.",
%000000                                               mem.get_full_name(), k, val, exp))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                       end
                    end
                    
%000000             exp = ~exp & ((1'b1<<n_bits)-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000             mem.poke(status, k, exp);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000             if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                       `uvm_error("uvm_mem_access_seq", $sformatf("Status was %s when writing \"%s[%0d-1]\" through backdoor.",
%000000                                            status.name(), mem.get_full_name(), k))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                    end
                    
%000000             mem.read(status, k, val, UVM_FRONTDOOR, maps[j], this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000             if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                       `uvm_error("uvm_mem_access_seq", $sformatf("Status was %s when reading \"%s[%0d]\" through map \"%s\".",
%000000                                            status.name(), mem.get_full_name(), k, maps[j].get_full_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                    end
%000000             else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000                if (mode == "WO") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000                   if (val !== '0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                             `uvm_error("uvm_mem_access_seq", $sformatf("Front door \"%s[%0d]\" read back as 'h%h instead of 'h%h.",
%000000                                                  mem.get_full_name(), k, val, 0))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                          end
                       end
%000000                else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
%000000                   if (val !== exp) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                             `uvm_error("uvm_mem_access_seq", $sformatf("Front door \"%s[%0d]\" read back as 'h%h instead of 'h%h.",
%000000                                                  mem.get_full_name(), k, val, exp))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_single_access_seq__Vclpkg
                          end
                       end
                    end
                 end
              end
           endtask: body
        endclass: uvm_mem_single_access_seq
        
        
        
        
        //
        // class: uvm_mem_access_seq
        //
        // Verify the accessibility of all memories in a block
        // by executing the <uvm_mem_single_access_seq> sequence on
        // every memory within it.
        //
        // If bit-type resource named
        // "NO_REG_TESTS", "NO_MEM_TESTS", or "NO_MEM_ACCESS_TEST"
        // in the "REG::" namespace
        // matches the full name of the block,
        // the block is not tested.
        //
        //| uvm_resource_db#(bit)::set({"REG::",regmodel.blk.get_full_name(),".*"},
        //|                            "NO_MEM_TESTS", 1, this);
        //
        
        class uvm_mem_access_seq extends uvm_reg_sequence #(uvm_sequence #(uvm_reg_item));
        
           // Variable: model
           //
           // The block to be tested. Declared in the base class.
           //
           //| uvm_reg_block model; 
        
        
           // Variable: mem_seq
           //
           // The sequence used to test one memory
           //
           protected uvm_mem_single_access_seq mem_seq;
        
%000001    `uvm_object_utils(uvm_mem_access_seq)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
        
%000000    function new(string name="uvm_mem_access_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000      super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
           endfunction
        
           // Task: body
           //
           // Execute the Memory Access sequence.
           // Do not call directly. Use seq.start() instead.
           //
%000000    virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
        
%000000       if (model == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000          `uvm_error("uvm_mem_access_seq", "No register model specified to run sequence on");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
              end
        
%000000       uvm_report_info("STARTING_SEQ",{"\n\nStarting ",get_name()," sequence...\n"},UVM_LOW);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
              
%000000       mem_seq = uvm_mem_single_access_seq::type_id::create("single_mem_access_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
        
%000000       this.reset_blk(model);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000       model.reset();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
        
%000000       do_block(model);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
           endtask: body
        
        
           // Task: do_block
           //
           // Test all of the memories in a given ~block~
           //
%000000    protected virtual task do_block(uvm_reg_block blk);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000       uvm_mem mems[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
              
%000000       if (uvm_resource_db#(bit)::get_by_name({"REG::",blk.get_full_name()},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
                                                     "NO_REG_TESTS", 0) != null ||
                  uvm_resource_db#(bit)::get_by_name({"REG::",blk.get_full_name()},
                                                     "NO_MEM_TESTS", 0) != null ||
                  uvm_resource_db#(bit)::get_by_name({"REG::",blk.get_full_name()},
                                                     "NO_MEM_ACCESS_TEST", 0) != null )
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
              
              // Iterate over all memories, checking accesses
%000000       blk.get_memories(mems, UVM_NO_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000       foreach (mems[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
                 // Registers with some attributes are not to be tested
%000000          if (uvm_resource_db#(bit)::get_by_name({"REG::",mems[i].get_full_name()},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
                                                        "NO_REG_TESTS", 0) != null ||
                     uvm_resource_db#(bit)::get_by_name({"REG::",mems[i].get_full_name()},
                                                        "NO_MEM_TESTS", 0) != null ||
        	     uvm_resource_db#(bit)::get_by_name({"REG::",mems[i].get_full_name()},
                                                        "NO_MEM_ACCESS_TEST", 0) != null )
%000000            continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
                 
                 // Can only deal with memories with backdoor access
%000000          if (mems[i].get_backdoor() == null &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000              !mems[i].has_hdl_path()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
                    `uvm_warning("uvm_mem_access_seq", $sformatf("Memory \"%s\" does not have a backdoor mechanism available",
%000000                                                mems[i].get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000             continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
                 end
                 
%000000          mem_seq.mem = mems[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000          mem_seq.start(null, this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
              end
        
%000000       begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000          uvm_reg_block blks[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
                 
%000000          blk.get_blocks(blks);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000          foreach (blks[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
%000000             do_block(blks[i]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
                 end
              end
           endtask: do_block
        
        
           // Task: reset_blk
           //
           // Reset the DUT that corresponds to the specified block abstraction class.
           //
           // Currently empty.
           // Will rollback the environment's phase to the ~reset~
           // phase once the new phasing is available.
           //
           // In the meantime, the DUT should be reset before executing this
           // test sequence or this method should be implemented
           // in an extension to reset the DUT.
           //
%000000    virtual task reset_blk(uvm_reg_block blk);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem_access_seq__Vclpkg
           endtask
        
        
        endclass: uvm_mem_access_seq
        
        
        
