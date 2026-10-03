//      // verilator_coverage annotation
        //
        // -------------------------------------------------------------
        //    Copyright 2004-2009 Synopsys, Inc.
        //    Copyright 2010-2011 Mentor Graphics Corporation
        //    Copyright 2010-2011 Cadence Design Systems, Inc.
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
        // TITLE: Explicit Register Predictor
        //------------------------------------------------------------------------------
        //
        // The <uvm_reg_predictor> class defines a predictor component,
        // which is used to update the register model's mirror values
        // based on transactions explicitly observed on a physical bus. 
        //------------------------------------------------------------------------------
        
 000250 class uvm_predict_s;
+000250  point: type=line comment=block hier=uvm_pkg::uvm_predict_s__Vclpkg
           bit addr[uvm_reg_addr_t];
           uvm_reg_item reg_item;
        endclass
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_reg_predictor
        //
        // Updates the register model mirror based on observed bus transactions
        //
        // This class converts observed bus transactions of type ~BUSTYPE~ to generic
        // registers transactions, determines the register being accessed based on the
        // bus address, then updates the register's mirror value with the observed bus
        // data, subject to the register's access mode. See <uvm_reg::predict> for details.
        //
        // Memories can be large, so their accesses are not predicted.
        //
        //------------------------------------------------------------------------------
        
        class uvm_reg_predictor #(type BUSTYPE=int) extends uvm_component;
        
%000000   `uvm_component_param_utils(uvm_reg_predictor#(BUSTYPE))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
        
          // Variable: bus_in
          //
          // Observed bus transactions of type ~BUSTYPE~ are received from this
          // port and processed.
          //
          // For each incoming transaction, the predictor will attempt to get the
          // register or memory handle corresponding to the observed bus address. 
          //
          // If there is a match, the predictor calls the register or memory's
          // predict method, passing in the observed bus data. The register or
          // memory mirror will be updated with this data, subject to its configured
          // access behavior--RW, RO, WO, etc. The predictor will also convert the
          // bus transaction to a generic <uvm_reg_item> and send it out the
          // ~reg_ap~ analysis port.
          //
          // If the register is wider than the bus, the
          // predictor will collect the multiple bus transactions needed to
          // determine the value being read or written.
          //
          uvm_analysis_imp #(BUSTYPE, uvm_reg_predictor #(BUSTYPE)) bus_in;
        
        
          // Variable: reg_ap
          //
          // Analysis output port that publishes <uvm_reg_item> transactions
          // converted from bus transactions received on ~bus_in~.
          uvm_analysis_port #(uvm_reg_item) reg_ap;
        
        
          // Variable: map
          //
          // The map used to convert a bus address to the corresponding register
          // or memory handle. Must be configured before the run phase.
          // 
          uvm_reg_map map;
        
        
          // Variable: adapter
          //
          // The adapter used to convey the parameters of a bus operation in 
          // terms of a canonical <uvm_reg_bus_op> datum.
          // The <uvm_reg_adapter> must be configured before the run phase.
          //
          uvm_reg_adapter adapter;
        
        
          // Function: new
          //
          // Create a new instance of this type, giving it the optional ~name~
          // and ~parent~.
          //
%000001   function new (string name, uvm_component parent);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000001     super.new(name, parent);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000001     bus_in = new("bus_in", this);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000001     reg_ap = new("reg_ap", this);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
          endfunction
        
          // This method is documented in uvm_object
%000001   static string type_name = "";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000   virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000     if (type_name == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000       BUSTYPE t;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000       t = BUSTYPE::type_id::create("t");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000       type_name = {"uvm_reg_predictor #(", t.get_type_name(), ")"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
            end
%000000     return type_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
          endfunction
          
          // Function: pre_predict
          //
          // Override this method to change the value or re-direct the
          // target register
          //
 000250   virtual function void pre_predict(uvm_reg_item rw);
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
          endfunction
        
          local uvm_predict_s m_pending[uvm_reg];
        
        
          // Function- write
          //
          // not a user-level method. Do not call directly. See documentation
          // for the ~bus_in~ member.
          //
 000250   virtual function void write(BUSTYPE tr);
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250      uvm_reg rg;
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250      uvm_reg_bus_op rw;
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
~000250     if (adapter == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
+000250  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000      `uvm_fatal("REG/WRITE/NULL","write: adapter handle is null") 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
        
             // In case they forget to set byte_en
 000250      rw.byte_en = -1;
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250      adapter.bus2reg(tr,rw);
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250      rg = map.get_reg_by_offset(rw.addr, (rw.kind == UVM_READ));
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
        
             // ToDo: Add memory look-up and call uvm_mem::XsampleX()
        
~000250      if (rg != null) begin
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        bit found;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        uvm_reg_item reg_item;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        uvm_reg_map local_map;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        uvm_reg_map_info map_info;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        uvm_predict_s predict_info;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        uvm_reg_indirect_data ireg;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        uvm_reg ir;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
         
~000250        if (!m_pending.exists(rg)) begin
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250          uvm_reg_item item = new;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250          predict_info =new;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250          item.element_kind = UVM_REG;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250          item.element      = rg;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250          item.path         = UVM_PREDICT;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250          item.map          = map;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250          item.kind         = rw.kind;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250          predict_info.reg_item = item;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250          m_pending[rg] = predict_info;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
               end
 000250        predict_info = m_pending[rg];
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        reg_item = predict_info.reg_item;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
        
~000250        if (predict_info.addr.exists(rw.addr)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
+000250  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                  `uvm_error("REG_PREDICT_COLLISION",{"Collision detected for register '",
%000000                      rg.get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                  // TODO: what to do with subsequent collisions?
%000000           m_pending.delete(rg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
               end
        
 000250        local_map = rg.get_local_map(map,"predictor::write()");
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        map_info = local_map.get_reg_map_info(rg);
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250        ir=($cast(ireg, rg))?ireg.get_indirect_reg():rg;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
        
~000250        foreach (map_info.addr[i]) begin
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000          if (rw.addr == map_info.addr[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000             found = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000            reg_item.value[0] |= rw.data << (i * map.get_n_bytes()*8);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000            predict_info.addr[rw.addr] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
~000250            if (predict_info.addr.num() == map_info.addr.size()) begin
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                      // We've captured the entire abstract register transaction.
                      uvm_predict_e predict_kind = 
 000250                   (reg_item.kind == UVM_WRITE) ? UVM_PREDICT_WRITE : UVM_PREDICT_READ;
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
        
~000250               if (reg_item.kind == UVM_READ &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
+000250  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                          local_map.get_check_on_read() &&
%000000                   reg_item.status != UVM_NOT_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000                  void'(rg.do_check(ir.get_mirrored_value(), reg_item.value[0], local_map));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                      end
                      
 000250               pre_predict(reg_item);
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
        
 000250               ir.XsampleX(reg_item.value[0], rw.byte_en,
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250                           reg_item.kind == UVM_READ, local_map);
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250               begin
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250                  uvm_reg_block blk = rg.get_parent();
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250                  blk.XsampleX(map_info.offset,
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250                               reg_item.kind == UVM_READ,
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250                               local_map);
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                      end
        
 000250               rg.do_predict(reg_item, predict_kind, rw.byte_en);
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
~000250               if(reg_item.kind == UVM_WRITE)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
+000250  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                        `uvm_info("REG_PREDICT", {"Observed WRITE transaction to register ",
                                 ir.get_full_name(), ": value='h",
                                 $sformatf("%0h",reg_item.value[0]), " : updated value = 'h", 
%000000                          $sformatf("%0h",ir.get())},UVM_HIGH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                      else
                        `uvm_info("REG_PREDICT", {"Observed READ transaction to register ",
                                 ir.get_full_name(), ": value='h",
~000250                          $sformatf("%0h",reg_item.value[0])},UVM_HIGH)
+000250  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
+000250  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250               reg_ap.write(reg_item);
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
 000250               m_pending.delete(rg);
+000250  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                   end
%000000            break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                 end
               end
~000250        if (!found)
-000000  point: type=expr comment=(found==0) => 1 hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
+000250  point: type=expr comment=(found==1) => 0 hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
+000250  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
                 `uvm_error("REG_PREDICT_INTERNAL",{"Unexpected failed address lookup for register '",
%000000                   rg.get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
             end
%000000      else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
               `uvm_info("REG_PREDICT_NOT_FOR_ME",
                  {"Observed transaction does not target a register: ",
%000000             $sformatf("%p",tr)},UVM_FULL)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
             end
          endfunction
        
          
          // Function: check_phase
          //
          // Checks that no pending register transactions are still enqueued.
        
%000001   virtual function void check_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000001      super.check_phase(phase);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000001     if (m_pending.num() > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
              `uvm_error("PENDING REG ITEMS",{"There are ",$sformatf("%0d",m_pending.num()),
%000000                  " incomplete register transactions still pending completion:"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000        foreach (m_pending[l]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000           uvm_reg rg=l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
%000000           $display("\n%s",rg.get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_predictor__Tz45__Vclpkg
               end
            end
          endfunction
        
        endclass
        
