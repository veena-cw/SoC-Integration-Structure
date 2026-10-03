//      // verilator_coverage annotation
        //
        //--------------------------------------------------------------
        //    Copyright 2004-2009 Synopsys, Inc.
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
        //--------------------------------------------------------------
        //
         
        //------------------------------------------------------------------------------
        // Title: Generic Register Operation Descriptors
        //
        // This section defines the abtract register transaction item. It also defines
        // a descriptor for a physical bus operation that is used by <uvm_reg_adapter>
        // subtypes to convert from a protocol-specific address/data/rw operation to
        // a bus-independent, canonical r/w operation.
        //------------------------------------------------------------------------------
        
        
        //------------------------------------------------------------------------------
        // CLASS: uvm_reg_item
        //
        // Defines an abstract register transaction item. No bus-specific information
        // is present, although a handle to a <uvm_reg_map> is provided in case a user
        // wishes to implement a custom address translation algorithm.
        //------------------------------------------------------------------------------
        
%000000 class uvm_reg_item extends uvm_sequence_item;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
        
%000001   `uvm_object_utils(uvm_reg_item)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
        
          // Variable: element_kind
          //
          // Kind of element being accessed: REG, MEM, or FIELD. See <uvm_elem_kind_e>.
          //
          uvm_elem_kind_e element_kind;
        
        
          // Variable: element
          //
          // A handle to the RegModel model element associated with this transaction.
          // Use <element_kind> to determine the type to cast  to: <uvm_reg>,
          // <uvm_mem>, or <uvm_reg_field>.
          //
          uvm_object element;
        
        
          // Variable: kind
          //
          // Kind of access: READ or WRITE.
          //
          rand uvm_access_e kind;
        
        
          // Variable: value
          //
          // The value to write to, or after completion, the value read from the DUT.
          // Burst operations use the <values> property.
          //
          rand uvm_reg_data_t value[];
        
        
          // TODO: parameterize
          constraint max_values { value.size() > 0 && value.size() < 1000; }
        
          // Variable: offset
          //
          // For memory accesses, the offset address. For bursts,
          // the ~starting~ offset address.
          //
          rand uvm_reg_addr_t offset;
        
        
          // Variable: status
          //
          // The result of the transaction: IS_OK, HAS_X, or ERROR.
          // See <uvm_status_e>.
          //
          uvm_status_e status;
        
        
          // Variable: local_map
          //
          // The local map used to obtain addresses. Users may customize 
          // address-translation using this map. Access to the sequencer
          // and bus adapter can be obtained by getting this map's root map,
          // then calling <uvm_reg_map::get_sequencer> and 
          // <uvm_reg_map::get_adapter>.
          //
          uvm_reg_map local_map;
        
        
          // Variable: map
          //
          // The original map specified for the operation. The actual <map>
          // used may differ when a test or sequence written at the block
          // level is reused at the system level.
          //
          uvm_reg_map map;
        
        
          // Variable: path
          //
          // The path being used: <UVM_FRONTDOOR> or <UVM_BACKDOOR>.
          //
          uvm_path_e path;
        
        
          // Variable: parent
          //
          // The sequence from which the operation originated.
          //
          rand uvm_sequence_base parent;
        
        
          // Variable: prior
          //
          // The priority requested of this transfer, as defined by
          // <uvm_sequence_base::start_item>.
          //
 000775   int prior = -1;
+000775  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
        
        
          // Variable: extension
          //
          // Handle to optional user data, as conveyed in the call to
          // write(), read(), mirror(), or update() used to trigger the operation.
          //
          rand uvm_object extension;
        
        
          // Variable: bd_kind
          //
          // If path is UVM_BACKDOOR, this member specifies the abstraction 
          // kind for the backdoor access, e.g. "RTL" or "GATES".
          //
          string bd_kind;
        
        
          // Variable: fname
          //
          // The file name from where this transaction originated, if provided
          // at the call site.
          //
          string fname;
        
        
          // Variable: lineno
          //
          // The file name from where this transaction originated, if provided 
          // at the call site.
          //
          int lineno;
        
        
          // Function: new
          //
          // Create a new instance of this type, giving it the optional ~name~.
          //
~000775   function new(string name="");
+000775  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
 000775     super.new(name);
+000775  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
 000775     value = new[1];
+000775  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
          endfunction
        
        
          // Function: convert2string
          //
          // Returns a string showing the contents of this transaction.
          //
%000000   virtual function string convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     string s,value_s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     s = {"kind=",kind.name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000          " ele_kind=",element_kind.name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000          " ele_name=",element==null?"null":element.get_full_name() };
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
        
%000000     if (value.size() > 1 && uvm_report_enabled(UVM_HIGH, UVM_INFO, "RegModel")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000       value_s = "'{";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000       foreach (value[i])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000          value_s = {value_s,$sformatf("%0h,",value[i])};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000       value_s[value_s.len()-1]="}";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
            end
            else
%000000       value_s = $sformatf("%0h",value[0]);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     s = {s, " value=",value_s};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
        
%000000     if (element_kind == UVM_MEM)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000       s = {s, $sformatf(" offset=%0h",offset)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     s = {s," map=",(map==null?"null":map.get_full_name())," path=",path.name()};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     s = {s," status=",status.name()};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     return s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
          endfunction
        
        
          // Function: do_copy
          //
          // Copy the ~rhs~ object into this object. The ~rhs~ object must
          // derive from <uvm_reg_item>.
          //
%000000   virtual function void do_copy(uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     uvm_reg_item rhs_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     if (rhs == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000      `uvm_fatal("REG/NULL","do_copy: rhs argument is null") 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
        
%000000     if (!$cast(rhs_,rhs)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000       `uvm_error("WRONG_TYPE","Provided rhs is not of type uvm_reg_item")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_item__Vclpkg
            end
%000000     super.copy(rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     element_kind = rhs_.element_kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     element = rhs_.element;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     kind = rhs_.kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     value = rhs_.value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     offset = rhs_.offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     status = rhs_.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     local_map = rhs_.local_map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     map = rhs_.map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     path = rhs_.path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     extension = rhs_.extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     bd_kind = rhs_.bd_kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     parent = rhs_.parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     prior = rhs_.prior;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     fname = rhs_.fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
%000000     lineno = rhs_.lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_item__Vclpkg
          endfunction
        
        endclass
        
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_reg_bus_op
        //
        // Struct that defines a generic bus transaction for register and memory accesses, having
        // ~kind~ (read or write), ~address~, ~data~, and ~byte enable~ information.
        // If the bus is narrower than the register or memory location being accessed,
        // there will be multiple of these bus operations for every abstract
        // <uvm_reg_item> transaction. In this case, ~data~ represents the portion 
        // of <uvm_reg_item::value> being transferred during this bus cycle. 
        // If the bus is wide enough to perform the register or memory operation in
        // a single cycle, ~data~ will be the same as <uvm_reg_item::value>.
        //------------------------------------------------------------------------------
        
        typedef struct {
        
          // Variable: kind
          //
          // Kind of access: READ or WRITE.
          //
          uvm_access_e kind;
        
        
          // Variable: addr
          //
          // The bus address.
          //
          uvm_reg_addr_t addr;
        
        
          // Variable: data
          //
          // The data to write. If the bus width is smaller than the register or
          // memory width, ~data~ represents only the portion of ~value~ that is
          // being transferred this bus cycle.
          //
          uvm_reg_data_t data;
        
           
          // Variable: n_bits
          //
          // The number of bits of <uvm_reg_item::value> being transferred by
          // this transaction.
        
          int n_bits;
        
          /*
          constraint valid_n_bits {
             n_bits > 0;
             n_bits <= `UVM_REG_DATA_WIDTH;
          }
          */
        
        
          // Variable: byte_en
          //
          // Enables for the byte lanes on the bus. Meaningful only when the
          // bus supports byte enables and the operation originates from a field
          // write/read.
          //
          uvm_reg_byte_en_t byte_en;
        
        
          // Variable: status
          //
          // The result of the transaction: UVM_IS_OK, UVM_HAS_X, UVM_NOT_OK.
          // See <uvm_status_e>.
          //
          uvm_status_e status;
        
        } uvm_reg_bus_op;
        
        
        
