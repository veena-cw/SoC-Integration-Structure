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
        // class: uvm_reg_hw_reset_seq
        // Test the hard reset values of registers
        //
        // The test sequence performs the following steps
        //
        // 1. resets the DUT and the
        // block abstraction class associated with this sequence.
        //
        // 2. reads all of the registers in the block,
        // via all of the available address maps,
        // comparing the value read with the expected reset value.
        //
        // If bit-type resource named
        // "NO_REG_TESTS" or "NO_REG_HW_RESET_TEST"
        // in the "REG::" namespace
        // matches the full name of the block or register,
        // the block or register is not tested.
        //
        //| uvm_resource_db#(bit)::set({"REG::",regmodel.blk.get_full_name(),".*"},
        //|                            "NO_REG_TESTS", 1, this);
        //
        // This is usually the first test executed on any DUT.
        //
        
        class uvm_reg_hw_reset_seq extends uvm_reg_sequence #(uvm_sequence #(uvm_reg_item));
        
%000001    `uvm_object_utils(uvm_reg_hw_reset_seq)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
%000000    function new(string name="uvm_reg_hw_reset_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
%000000      super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
           endfunction
        
        
           // Variable: model
           //
           // The block to be tested. Declared in the base class.
           //
           //| uvm_reg_block model; 
        
        
           // Variable: body
           //
           // Executes the Hardware Reset sequence.
           // Do not call directly. Use seq.start() instead.
        
%000000    virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
%000000       uvm_reg_map maps[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
%000000       if (model == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
%000000          `uvm_error("uvm_reg_hw_reset_seq", "Not block or system specified to run sequence on");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
              end
              
%000000       uvm_report_info("STARTING_SEQ",{"\n\nStarting ",get_name()," sequence...\n"},UVM_LOW);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
%000000       if (uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
                                                     "NO_REG_TESTS", 0) != null ||
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
                                                     "NO_REG_HW_RESET_TEST", 0) != null )
%000000             return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
%000000       this.reset_blk(model);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
%000000       model.reset();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
%000000       model.get_maps(maps);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
              // Iterate over all maps defined for the RegModel block
        
%000000       foreach (maps[d]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
                // Iterate over all registers in the map, checking accesses
                // Note: if map were in inner loop, could test simulataneous
                // access to same reg via different bus interfaces 
        
%000000         regs.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
%000000         maps[d].get_registers(regs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
%000000         foreach (regs[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
%000000           uvm_status_e status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
                  // Registers with certain attributes are not to be tested
%000000           if (uvm_resource_db#(bit)::get_by_name({"REG::",regs[i].get_full_name()},
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
                                                         "NO_REG_TESTS", 0) != null ||
                      uvm_resource_db#(bit)::get_by_name({"REG::",regs[i].get_full_name()},
                                                         "NO_REG_HW_RESET_TEST", 0) != null )
%000000               continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
                  `uvm_info(get_type_name(),
                            $sformatf("Verifying reset value of register %s in map \"%s\"...",
%000000                     regs[i].get_full_name(), maps[d].get_full_name()), UVM_LOW);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
                    
%000000           regs[i].mirror(status, UVM_CHECK, UVM_FRONTDOOR, maps[d], this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
        
%000000           if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
                     `uvm_error(get_type_name(),
                            $sformatf("Status was %s when reading reset value of register \"%s\" through map \"%s\".",
%000000                     status.name(), regs[i].get_full_name(), maps[d].get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
                  end
                end
              end
        
           endtask: body
        
        
           //
           // task: reset_blk
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
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_hw_reset_seq__Vclpkg
           endtask
        
        endclass: uvm_reg_hw_reset_seq
        
        
        
