//      // verilator_coverage annotation
        //
        // -------------------------------------------------------------
        //    Copyright 2010 Mentor Graphics Corporation
        //    Copyright 2010 Synopsys, Inc.
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
        // Class: uvm_reg_mem_built_in_seq
        //
        // Sequence that executes a user-defined selection
        // of pre-defined register and memory test sequences.
        //
        //------------------------------------------------------------------------------
        
        class uvm_reg_mem_built_in_seq extends uvm_reg_sequence #(uvm_sequence #(uvm_reg_item));
        
%000001    `uvm_object_utils(uvm_reg_mem_built_in_seq)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
        
%000000    function new(string name="uvm_reg_mem_built_in_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000      super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
           endfunction
        
           // Variable: model
           //
           // The block to be tested. Declared in the base class.
           //
           //| uvm_reg_block model; 
        
        
           // Variable: tests
           //
           // The pre-defined test sequences to be executed.
           //
%000000    bit [63:0] tests = UVM_DO_ALL_REG_MEM_TESTS;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
        
        
           // Task: body
           //
           // Executes any or all the built-in register and memory sequences.
           // Do not call directly. Use seq.start() instead.
           
%000000    virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
        
%000000       if (model == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000          `uvm_error("uvm_reg_mem_built_in_seq", "Not block or system specified to run sequence on");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
              end
        
%000000       uvm_report_info("START_SEQ",{"\n\nStarting ",get_name()," sequence...\n"},UVM_LOW);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
              
%000000       if (tests & UVM_DO_REG_HW_RESET &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
                                                     "NO_REG_TESTS", 0) == null &&
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
%000000                                              "NO_REG_HW_RESET_TEST", 0) == null ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         uvm_reg_hw_reset_seq seq = uvm_reg_hw_reset_seq::type_id::create("reg_hw_reset_seq");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.model = model;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.start(null,this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         `uvm_info("FINISH_SEQ",{"Finished ",seq.get_name()," sequence."},UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
              end
        
%000000       if (tests & UVM_DO_REG_BIT_BASH &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
                                                     "NO_REG_TESTS", 0) == null &&
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
%000000                                              "NO_REG_BIT_BASH_TEST", 0) == null ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         uvm_reg_bit_bash_seq seq = uvm_reg_bit_bash_seq::type_id::create("reg_bit_bash_seq");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.model = model;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.start(null,this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         `uvm_info("FINISH_SEQ",{"Finished ",seq.get_name()," sequence."},UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
              end
        
%000000       if (tests & UVM_DO_REG_ACCESS &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
                                                     "NO_REG_TESTS", 0) == null &&
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
%000000                                              "NO_REG_ACCESS_TEST", 0) == null ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         uvm_reg_access_seq seq = uvm_reg_access_seq::type_id::create("reg_access_seq");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.model = model;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.start(null,this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         `uvm_info("FINISH_SEQ",{"Finished ",seq.get_name()," sequence."},UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
              end
        
%000000       if (tests & UVM_DO_MEM_ACCESS &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
                                                     "NO_REG_TESTS", 0) == null &&
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
                                                     "NO_MEM_TESTS", 0) == null &&
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
%000000                                              "NO_MEM_ACCESS_TEST", 0) == null ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         uvm_mem_access_seq seq = uvm_mem_access_seq::type_id::create("mem_access_seq");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.model = model;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.start(null,this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         `uvm_info("FINISH_SEQ",{"Finished ",seq.get_name()," sequence."},UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
              end
        
%000000       if (tests & UVM_DO_SHARED_ACCESS &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
                                                     "NO_REG_TESTS", 0) == null &&
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
%000000                                              "NO_REG_SHARED_ACCESS_TEST", 0) == null ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         uvm_reg_mem_shared_access_seq seq = uvm_reg_mem_shared_access_seq::type_id::create("shared_access_seq");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.model = model;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.start(null,this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         `uvm_info("FINISH_SEQ",{"Finished ",seq.get_name()," sequence."},UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
              end
        
%000000       if (tests & UVM_DO_MEM_WALK &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
                                                     "NO_REG_TESTS", 0) == null &&
                  uvm_resource_db#(bit)::get_by_name({"REG::",model.get_full_name()},
%000000                                              "NO_MEM_WALK_TEST", 0) == null ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         uvm_mem_walk_seq seq = uvm_mem_walk_seq::type_id::create("mem_walk_seq");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.model = model;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         seq.start(null,this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
%000000         `uvm_info("FINISH_SEQ",{"Finished ",seq.get_name()," sequence."},UVM_LOW)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_built_in_seq__Vclpkg
              end
        
           endtask: body
        
        endclass: uvm_reg_mem_built_in_seq
        
        
