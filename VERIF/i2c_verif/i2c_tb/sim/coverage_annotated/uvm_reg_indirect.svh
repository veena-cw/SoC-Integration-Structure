//      // verilator_coverage annotation
        //
        // -------------------------------------------------------------
        //    Copyright 2010 Synopsys, Inc.
        //    Copyright 2010 Cadence Design Systems, Inc.
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
        
        typedef class uvm_reg_indirect_ftdr_seq;
        
        //-----------------------------------------------------------------
        // CLASS: uvm_reg_indirect_data
        // Indirect data access abstraction class
        //
        // Models the behavior of a register used to indirectly access
        // a register array, indexed by a second ~address~ register.
        //
        // This class should not be instantiated directly.
        // A type-specific class extension should be used to
        // provide a factory-enabled constructor and specify the
        // ~n_bits~ and coverage models.
        //-----------------------------------------------------------------
        
        class uvm_reg_indirect_data extends uvm_reg;
        
           protected uvm_reg m_idx;
           protected uvm_reg m_tbl[];
        
           // Function: new
           // Create an instance of this class
           //
           // Should not be called directly,
           // other than via super.new().
           // The value of ~n_bits~ must match the number of bits
           // in the indirect register array.
%000000    function new(string name = "uvm_reg_indirect",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                        int unsigned n_bits,
                        int has_cover);
%000000       super.new(name,n_bits,has_cover);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endfunction: new
        
%000000    virtual function void build();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endfunction: build
        
           // Function: configure
           // Configure the indirect data register.
           //
           // The ~idx~ register specifies the index,
           // in the ~reg_a~ register array, of the register to access.
           // The ~idx~ must be written to first.
           // A read or write operation to this register will subsequently
           // read or write the indexed register in the register array.
           //
           // The number of bits in each register in the register array must be
           // equal to ~n_bits~ of this register.
           // 
           // See <uvm_reg::configure()> for the remaining arguments.
%000000    function void configure (uvm_reg idx,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                                    uvm_reg reg_a[],
                                    uvm_reg_block blk_parent,
                                    uvm_reg_file regfile_parent = null);
%000000       super.configure(blk_parent, regfile_parent, "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       m_idx = idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       m_tbl = reg_a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
        
              // Not testable using pre-defined sequences
%000000       uvm_resource_db#(bit)::set({"REG::", get_full_name()},
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000                                  "NO_REG_TESTS", 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
        
              // Add a frontdoor to each indirectly-accessed register
              // for every address map this register is in.
%000000       foreach (m_maps[map]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          add_frontdoors(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
              end
           endfunction
           
%000000    /*local*/ virtual function void add_map(uvm_reg_map map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       super.add_map(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       add_frontdoors(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endfunction
           
           
%000000    local function void add_frontdoors(uvm_reg_map map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       foreach (m_tbl[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          uvm_reg_indirect_ftdr_seq fd;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          if (m_tbl[i] == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                    `uvm_error(get_full_name(),
%000000                        $sformatf("Indirect register #%0d is NULL", i));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000             continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                 end
%000000          fd = new(m_idx, i, this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          if (m_tbl[i].is_in_map(map))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000             m_tbl[i].set_frontdoor(fd, map);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                 else
%000000             map.add_reg(m_tbl[i], -1, "RW", 1, fd);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
              end
           endfunction
           
%000000    virtual function void do_predict (uvm_reg_item      rw,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                                             uvm_predict_e     kind = UVM_PREDICT_DIRECT,
                                             uvm_reg_byte_en_t be = -1);
%000000       if (m_idx.get() >= m_tbl.size()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          `uvm_error(get_full_name(), $sformatf("Address register %s has a value (%0d) greater than the maximum indirect register array size (%0d)", m_idx.get_full_name(), m_idx.get(), m_tbl.size()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
              end
        
              //NOTE limit to 2**32 registers
%000000       begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          int unsigned idx = m_idx.get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          m_tbl[idx].do_predict(rw, kind, be);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
              end
           endfunction
        
        
%000000    virtual function uvm_reg_map get_local_map(uvm_reg_map map, string caller="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       return  m_idx.get_local_map(map,caller);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endfunction
        
           //
           // Just for good measure, to catch and short-circuit non-sensical uses
           //
%000000    virtual function void add_field  (uvm_reg_field field);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       `uvm_error(get_full_name(), "Cannot add field to an indirect data access register");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endfunction
        
%000000    virtual function void set (uvm_reg_data_t  value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                                      string          fname = "",
                                      int             lineno = 0);
%000000       `uvm_error(get_full_name(), "Cannot set() an indirect data access register");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endfunction
           
%000000    virtual function uvm_reg_data_t  get(string  fname = "",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                                                int     lineno = 0);
%000000       `uvm_error(get_full_name(), "Cannot get() an indirect data access register");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endfunction
           
%000000    virtual function uvm_reg get_indirect_reg(string  fname = "",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                                                int     lineno = 0);
%000000       int unsigned idx = m_idx.get_mirrored_value();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       return(m_tbl[idx]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endfunction
        
%000000    virtual function bit needs_update();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endfunction
        
%000000    virtual task write(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                              input  uvm_reg_data_t    value,
                              input  uvm_path_e        path = UVM_DEFAULT_PATH,
                              input  uvm_reg_map       map = null,
                              input  uvm_sequence_base parent = null,
                              input  int               prior = -1,
                              input  uvm_object        extension = null,
                              input  string            fname = "",
                              input  int               lineno = 0);
        
%000000       if (path == UVM_DEFAULT_PATH) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          uvm_reg_block blk = get_parent();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          path = blk.get_default_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
              end
              
%000000       if (path == UVM_BACKDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          `uvm_warning(get_full_name(), "Cannot backdoor-write an indirect data access register. Switching to frontdoor.");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          path = UVM_FRONTDOOR;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
              end
        
              // Can't simply call super.write() because it'll call set()
%000000       begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
        
%000000          XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
        
%000000          rw = uvm_reg_item::type_id::create("write_item",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.element_kind = UVM_REG;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.kind         = UVM_WRITE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.value[0]     = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.path         = path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.map          = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.prior        = prior;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                 
%000000          do_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
        
%000000          status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
        
%000000          XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
              end
           endtask
        
%000000    virtual task read(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000                      output uvm_reg_data_t    value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                             input  uvm_path_e        path = UVM_DEFAULT_PATH,
                             input  uvm_reg_map       map = null,
                             input  uvm_sequence_base parent = null,
                             input  int               prior = -1,
                             input  uvm_object        extension = null,
                             input  string            fname = "",
                             input  int               lineno = 0);
        
%000000       if (path == UVM_DEFAULT_PATH) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          uvm_reg_block blk = get_parent();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          path = blk.get_default_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
              end
              
%000000       if (path == UVM_BACKDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          `uvm_warning(get_full_name(), "Cannot backdoor-read an indirect data access register. Switching to frontdoor.");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000          path = UVM_FRONTDOOR;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
              end
              
%000000       super.read(status, value, path, map, parent, prior, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endtask
        
%000000    virtual task poke(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                             input  uvm_reg_data_t    value,
                             input  string            kind = "",
                             input  uvm_sequence_base parent = null,
                             input  uvm_object        extension = null,
                             input  string            fname = "",
                             input  int               lineno = 0);
%000000       `uvm_error(get_full_name(), "Cannot poke() an indirect data access register");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endtask
        
%000000    virtual task peek(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000                      output uvm_reg_data_t    value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                             input  string            kind = "",
                             input  uvm_sequence_base parent = null,
                             input  uvm_object        extension = null,
                             input  string            fname = "",
                             input  int               lineno = 0);
%000000       `uvm_error(get_full_name(), "Cannot peek() an indirect data access register");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endtask
        
%000000    virtual task update(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                               input  uvm_path_e        path = UVM_DEFAULT_PATH,
                               input  uvm_reg_map       map = null,
                               input  uvm_sequence_base parent = null,
                               input  int               prior = -1,
                               input  uvm_object        extension = null,
                               input  string            fname = "",
                               input  int               lineno = 0);
%000000       status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endtask
           
%000000    virtual task mirror(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
                               input uvm_check_e        check  = UVM_NO_CHECK,
                               input uvm_path_e         path = UVM_DEFAULT_PATH,
                               input uvm_reg_map        map = null,
                               input uvm_sequence_base  parent = null,
                               input int                prior = -1,
                               input  uvm_object        extension = null,
                               input string             fname = "",
                               input int                lineno = 0);
%000000       status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_data__Vclpkg
           endtask
           
        endclass : uvm_reg_indirect_data
        
        
        class uvm_reg_indirect_ftdr_seq extends uvm_reg_frontdoor;
           local uvm_reg m_addr_reg;
           local uvm_reg m_data_reg;
           local int     m_idx;
           
%000000    function new(uvm_reg addr_reg,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
                        int idx,
                        uvm_reg data_reg);
%000000       super.new("uvm_reg_indirect_ftdr_seq");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       m_addr_reg = addr_reg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       m_idx      = idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       m_data_reg = data_reg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
           endfunction: new
        
%000000    virtual task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
        
%000000       uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
              
%000000       $cast(rw,rw_info.clone());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       rw.element = m_addr_reg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       rw.kind    = UVM_WRITE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       rw.value[0]= m_idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
        
%000000       m_addr_reg.XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       m_data_reg.XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
              
%000000       m_addr_reg.do_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
        
%000000       if (rw.status == UVM_NOT_OK)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
        
%000000       $cast(rw,rw_info.clone());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       rw.element = m_data_reg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
        
%000000       if (rw_info.kind == UVM_WRITE)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000         m_data_reg.do_write(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000         m_data_reg.do_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000         rw_info.value[0] = rw.value[0];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
              end
        
%000000       m_addr_reg.XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
%000000       m_data_reg.XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
              
%000000       rw_info.status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_indirect_ftdr_seq__Vclpkg
           endtask
        
        endclass
        
