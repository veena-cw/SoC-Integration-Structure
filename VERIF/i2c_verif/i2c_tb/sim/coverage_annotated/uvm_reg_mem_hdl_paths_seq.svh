//      // verilator_coverage annotation
        // 
        // -------------------------------------------------------------
        //    Copyright 2010 Cadence.
        //    Copyright 2011 Mentor Graphics Corporation
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
        // TITLE: HDL Paths Checking Test Sequence
        //
        
        //
        // class: uvm_reg_mem_hdl_paths_seq
        //
        // Verify the correctness of HDL paths specified for registers and memories.
        //
        // This sequence is be used to check that the specified backdoor paths
        // are indeed accessible by the simulator.
        // By default, the check is performed for the default design abstraction.
        // If the simulation contains multiple models of the DUT,
        // HDL paths for multiple design abstractions can be checked.
        // 
        // If a path is not accessible by the simulator, it cannot be used for 
        // read/write backdoor accesses. In that case a warning is produced. 
        // A simulator may have finer-grained access permissions such as separate 
        // read or write permissions.
        // These extra access permissions are NOT checked.
        //
        // The test is performed in zero time and
        // does not require any reads/writes to/from the DUT.
        //
        
        class uvm_reg_mem_hdl_paths_seq extends uvm_reg_sequence #(uvm_sequence #(uvm_reg_item));
            // Variable: abstractions
            // If set, check the HDL paths for the specified design abstractions.
            // If empty, check the HDL path for the default design abstraction,
            // as specified with <uvm_reg_block::set_default_hdl_path()>
            string abstractions[$];
            
%000001     `uvm_object_utils_begin(uvm_reg_mem_hdl_paths_seq)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000         `uvm_field_queue_string(abstractions, UVM_DEFAULT)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
            `uvm_object_utils_end
            
%000000     function new(string name="uvm_reg_mem_hdl_paths_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000         super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
            endfunction
        
%000000     virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
%000000         if (model == null) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000             uvm_report_error("uvm_reg_mem_hdl_paths_seq", "Register model handle is null");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000             return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                end
        
               `uvm_info("uvm_reg_mem_hdl_paths_seq",
                         {"checking HDL paths for all registers/memories in ",
%000000                   model.get_full_name()}, UVM_LOW);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
%000000        if (abstractions.size() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000           do_block(model, "");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000        else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000           foreach (abstractions[i])
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000              do_block(model, abstractions[i]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
               end
        
%000000         `uvm_info("uvm_reg_mem_hdl_paths_seq", "HDL path validation completed ",UVM_LOW);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                
            endtask: body
        
        
            // Any additional steps required to reset the block
            // and make it accessible
%000000     virtual task reset_blk(uvm_reg_block blk);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
            endtask
        
        
%000000     protected virtual function void do_block(uvm_reg_block blk,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                                                     string        kind);
%000000         uvm_reg       regs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000         uvm_mem       mems[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
               `uvm_info("uvm_reg_mem_hdl_paths_seq",
                         {"Validating HDL paths in ", blk.get_full_name(),
                          " for ", (kind == "") ? "default" : kind,
%000000                   " design abstraction"}, UVM_MEDIUM) 
-000000  point: type=expr comment=((kind == %22%22)==0) => 0 hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=expr comment=((kind == %22%22)==1) => 1 hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
               // Iterate over all registers, checking accesses
%000000        blk.get_registers(regs, UVM_NO_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000        foreach (regs[i]) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000           check_reg(regs[i], kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
               
%000000        blk.get_memories(mems, UVM_NO_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000        foreach (mems[i]) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000           check_mem(mems[i], kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
            
%000000        begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000           uvm_reg_block blks[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                  
%000000           blk.get_blocks(blks);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000           foreach (blks[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000              do_block(blks[i], kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                  end
               end
            endfunction: do_block
            
        
%000000     protected virtual function void check_reg(uvm_reg r,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                                                      string kind);
%000000         uvm_hdl_path_concat paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
        	// avoid calling get_full_hdl_path when the register has not path for this abstraction kind
%000000 	if(!r.has_hdl_path(kind))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000 		return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
%000000         r.get_full_hdl_path(paths, kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000         if (paths.size() == 0) return;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
%000000         foreach(paths[p]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000             uvm_hdl_path_concat path=paths[p];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000             foreach (path.slices[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000                 string p_ = path.slices[j].path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000                 uvm_reg_data_t d;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000                 if (!uvm_hdl_read(p_,d))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                            `uvm_error("uvm_reg_mem_hdl_paths_seq",
                                       $sformatf("HDL path \"%s\" for register \"%s\" is not readable",
%000000                                          p_, r.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000                 if (!uvm_hdl_check_path(p_))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                            `uvm_error("uvm_reg_mem_hdl_paths_seq",
                                       $sformatf("HDL path \"%s\" for register \"%s\" is not accessible",
%000000                                          p_, r.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                    end
                end
            endfunction
         
        
%000000     protected virtual function void check_mem(uvm_mem m,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                                                      string kind);
%000000         uvm_hdl_path_concat paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
        	// avoid calling get_full_hdl_path when the register has not path for this abstraction kind
%000000 	if(!m.has_hdl_path(kind))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000 		return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
%000000         m.get_full_hdl_path(paths, kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000         if (paths.size() == 0) return;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
        
%000000         foreach(paths[p]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000             uvm_hdl_path_concat path=paths[p];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000             foreach (path.slices[j]) 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000             begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000                 string p_ = path.slices[j].path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
%000000                 if(!uvm_hdl_check_path(p_))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                            `uvm_error("uvm_reg_mem_hdl_paths_seq",
                                       $sformatf("HDL path \"%s\" for memory \"%s\" is not accessible",
%000000                                          p_, m.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_mem_hdl_paths_seq__Vclpkg
                    end
                end
            endfunction 
        endclass: uvm_reg_mem_hdl_paths_seq
        
