//      // verilator_coverage annotation
        // 
        // -------------------------------------------------------------
        //    Copyright 2004-2008 Synopsys, Inc.
        //    Copyright 2010 Mentor Graphics Corporation
        //    Copyright 2010 Cadence Design Systems, Inc.
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
        
        //------------------------------------------------------------------------------
        //
        // Title: Register Access Test Sequences
        //
        // This section defines sequences that test DUT register access via the
        // available frontdoor and backdoor paths defined in the provided register
        // model.
        //------------------------------------------------------------------------------
        
        typedef class uvm_mem_access_seq;
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_reg_single_access_seq
        //
        // Verify the accessibility of a register
        // by writing through its default address map
        // then reading it via the backdoor, then reversing the process,
        // making sure that the resulting value matches the mirrored value.
        //
        // If bit-type resource named
        // "NO_REG_TESTS" or "NO_REG_ACCESS_TEST"
        // in the "REG::" namespace
        // matches the full name of the register,
        // the register is not tested.
        //
        //| uvm_resource_db#(bit)::set({"REG::",regmodel.blk.r0.get_full_name()},
        //|                            "NO_REG_TESTS", 1, this);
        //
        // Registers without an available backdoor or
        // that contain read-only fields only,
        // or fields with unknown access policies
        // cannot be tested.
        //
        // The DUT should be idle and not modify any register during this test.
        //
        //------------------------------------------------------------------------------
        
        class uvm_reg_single_access_seq extends uvm_reg_sequence #(uvm_sequence #(uvm_reg_item));
        
           // Variable: rg
           // The register to be tested
           uvm_reg rg;
        
%000001    `uvm_object_utils(uvm_reg_single_access_seq)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
        
%000000    function new(string name="uvm_reg_single_access_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000      super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
           endfunction
        
%000000    virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000       uvm_reg_map maps[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
        
%000000       if (rg == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          `uvm_error("uvm_reg_access_seq", "No register specified to run sequence on")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
              end
        
              // Registers with some attributes are not to be tested
%000000       if (uvm_resource_db#(bit)::get_by_name({"REG::",rg.get_full_name()},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                                                     "NO_REG_TESTS", 0) != null || 
                  uvm_resource_db#(bit)::get_by_name({"REG::",rg.get_full_name()},
                                                     "NO_REG_ACCESS_TEST", 0) != null )
%000000             return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
        
              // Can only deal with registers with backdoor access
%000000       if (rg.get_backdoor() == null && !rg.has_hdl_path()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                 `uvm_error("uvm_reg_access_seq", {"Register '",rg.get_full_name(),
%000000          "' does not have a backdoor mechanism available"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
              end
        
              // Registers may be accessible from multiple physical interfaces (maps)
%000000       rg.get_maps(maps);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
        
              // Cannot test access if register contains RO or OTHER fields
%000000       begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          uvm_reg_field fields[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
        
%000000          rg.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          foreach (fields[j]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000             foreach (maps[k]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000                if (fields[j].get_access(maps[k]) == "RO") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                          `uvm_warning("uvm_reg_access_seq", {"Register '",
%000000                                rg.get_full_name(),"' has RO fields"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000                   return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                       end
%000000                if (!fields[j].is_known_access(maps[k])) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                          `uvm_warning("uvm_reg_access_seq", {"Register '",rg.get_full_name(),
                            "' has field with unknown access type '",
%000000                     fields[j].get_access(maps[k]),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000                   return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                       end
                    end
                 end
              end
              
              // Access each register:
              // - Write complement of reset value via front door
              // - Read value via backdoor and compare against mirror
              // - Write reset value via backdoor
              // - Read via front door and compare against mirror
%000000       foreach (maps[j]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          uvm_status_e status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          uvm_reg_data_t  v, exp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                 
                 `uvm_info("uvm_reg_access_seq", {"Verifying access of register '",
                     rg.get_full_name(),"' in map '", maps[j].get_full_name(),
%000000              "' ..."}, UVM_LOW)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                 
%000000          v = rg.get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                 
%000000          rg.write(status, ~v, UVM_FRONTDOOR, maps[j], this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
        
%000000          if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                    `uvm_error("uvm_reg_access_seq", {"Status was '",status.name(),
                                         "' when writing '",rg.get_full_name(),
%000000                                  "' through map '",maps[j].get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                 end
%000000          #1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                 
%000000          rg.mirror(status, UVM_CHECK, UVM_BACKDOOR, uvm_reg_map::backdoor(), this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                    `uvm_error("uvm_reg_access_seq", {"Status was '",status.name(),
                                         "' when reading reset value of register '",
%000000                                  rg.get_full_name(), "' through backdoor"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                 end
                 
%000000          rg.write(status, v, UVM_BACKDOOR, maps[j], this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                    `uvm_error("uvm_reg_access_seq", {"Status was '",status.name(),
                                         "' when writing '",rg.get_full_name(),
%000000                                  "' through backdoor"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                 end
                 
%000000          rg.mirror(status, UVM_CHECK, UVM_FRONTDOOR, maps[j], this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
%000000          if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                    `uvm_error("uvm_reg_access_seq", {"Status was '",status.name(),
                                         "' when reading reset value of register '",
                                         rg.get_full_name(), "' through map '",
%000000                                  maps[j].get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_single_access_seq__Vclpkg
                 end
              end
           endtask: body
        endclass: uvm_reg_single_access_seq
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_reg_access_seq
        //
        // Verify the accessibility of all registers in a block
        // by executing the <uvm_reg_single_access_seq> sequence on
        // every register within it.
        //
        // If bit-type resource named
        // "NO_REG_TESTS" or "NO_REG_ACCESS_TEST"
        // in the "REG::" namespace
        // matches the full name of the block,
        // the block is not tested.
        //
        //| uvm_resource_db#(bit)::set({"REG::",regmodel.blk.get_full_name(),".*"},
        //|                            "NO_REG_TESTS", 1, this);
        //
        //------------------------------------------------------------------------------
        
        class uvm_reg_access_seq extends uvm_reg_sequence #(uvm_sequence #(uvm_reg_item));
        
           // Variable: model
           //
           // The block to be tested. Declared in the base class.
           //
           //| uvm_reg_block model; 
        
        
           // Variable: reg_seq
           //
           // The sequence used to test one register
           //
           protected uvm_reg_single_access_seq reg_seq;
           
%000001    `uvm_object_utils(uvm_reg_access_seq)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
        
%000000    function new(string name="uvm_reg_access_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000      super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
           endfunction
        
        
           // Task: body
           //
           // Executes the Register Access sequence.
           // Do not call directly. Use seq.start() instead.
           //
%000000    virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
        
%000000       if (model == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000          `uvm_error("uvm_reg_access_seq", "No register model specified to run sequence on")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
              end
        
%000000       uvm_report_info("STARTING_SEQ",{"\n\nStarting ",get_name()," sequence...\n"},UVM_LOW);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
              
%000000       reg_seq = uvm_reg_single_access_seq::type_id::create("single_reg_access_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
        
%000000       this.reset_blk(model);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000       model.reset();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
        
%000000       do_block(model);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
           endtask: body
        
        
           // Task: do_block
           //
           // Test all of the registers in a block
           //
%000000    protected virtual task do_block(uvm_reg_block blk);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
              
%000000       if (uvm_resource_db#(bit)::get_by_name({"REG::",blk.get_full_name()},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
                                                     "NO_REG_TESTS", 0) != null ||
                  uvm_resource_db#(bit)::get_by_name({"REG::",blk.get_full_name()},
                                                     "NO_REG_ACCESS_TEST", 0) != null )
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
        
              // Iterate over all registers, checking accesses
%000000       blk.get_registers(regs, UVM_NO_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
                 // Registers with some attributes are not to be tested
%000000          if (uvm_resource_db#(bit)::get_by_name({"REG::",regs[i].get_full_name()},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
                                                        "NO_REG_TESTS", 0) != null ||
        	     uvm_resource_db#(bit)::get_by_name({"REG::",regs[i].get_full_name()},
                                                        "NO_REG_ACCESS_TEST", 0) != null )
%000000               continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
                 
                 // Can only deal with registers with backdoor access
%000000          if (regs[i].get_backdoor() == null && !regs[i].has_hdl_path()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
                    `uvm_warning("uvm_reg_access_seq", {"Register '",regs[i].get_full_name(),
%000000                    "' does not have a backdoor mechanism available"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000             continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
                 end
                 
%000000          reg_seq.rg = regs[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000          reg_seq.start(null,this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
              end
        
%000000       begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000          uvm_reg_block blks[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
                 
%000000          blk.get_blocks(blks);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000          foreach (blks[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
%000000             do_block(blks[i]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
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
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_access_seq__Vclpkg
           endtask
        
        endclass: uvm_reg_access_seq
        
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_reg_mem_access_seq
        //
        // Verify the accessibility of all registers and memories in a block
        // by executing the <uvm_reg_access_seq> and
        // <uvm_mem_access_seq> sequence respectively on every register
        // and memory within it.
        //
        // Blocks and registers with the NO_REG_TESTS or
        // the NO_REG_ACCESS_TEST attribute are not verified.
        //
        //------------------------------------------------------------------------------
        
        class uvm_reg_mem_access_seq extends uvm_reg_sequence #(uvm_sequence #(uvm_reg_item));
        
%000001    `uvm_object_utils(uvm_reg_mem_access_seq)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
        
%000000    function new(string name="uvm_reg_mem_access_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000      super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
           endfunction
        
%000000    virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
        
%000000       if (model == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000          `uvm_error("uvm_reg_mem_access_seq", "Register model handle is null")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
              end
        
%000000       uvm_report_info("STARTING_SEQ",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000             {"\n\nStarting ",get_name()," sequence...\n"},UVM_LOW);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
              
%000000       if (uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000                                              "NO_REG_TESTS", 0) == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000         if (uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000                                                "NO_REG_ACCESS_TEST", 0) == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            uvm_reg_access_seq sub_seq = new("reg_access_seq");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            this.reset_blk(model);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            model.reset();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            sub_seq.model = model;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            sub_seq.start(null,this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
                end
%000000         if (uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000                                                "NO_MEM_ACCESS_TEST", 0) == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            uvm_mem_access_seq sub_seq = new("mem_access_seq");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            this.reset_blk(model);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            model.reset();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            sub_seq.model = model;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
%000000            sub_seq.start(null,this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
                end
              end
        
           endtask: body
        
        
           // Any additional steps required to reset the block
           // and make it accessibl
%000000    virtual task reset_blk(uvm_reg_block blk);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_access_seq__Vclpkg
           endtask
        
        
        endclass: uvm_reg_mem_access_seq
        
