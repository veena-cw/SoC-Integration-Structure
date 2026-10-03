//      // verilator_coverage annotation
        //
        //------------------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2011 Cadence Design Systems, Inc. 
        //   Copyright 2010 Synopsys, Inc.
        //   All Rights Reserved Worldwide
        //
        //   Licensed under the Apache License, Version 2.0 (the
        //   "License"); you may not use this file except in
        //   compliance with the License.  You may obtain a copy of
        //   the License at
        //
        //       http://www.apache.org/licenses/LICENSE-2.0
        //
        //   Unless required by applicable law or agreed to in
        //   writing, software distributed under the License is
        //   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
        //   CONDITIONS OF ANY KIND, either express or implied.  See
        //   the License for the specific language governing
        //   permissions and limitations under the License.
        //------------------------------------------------------------------------------
        
        
        //------------------------------------------------------------------------------
        // CLASS: uvm_packer
        //
        // The uvm_packer class provides a policy object for packing and unpacking
        // uvm_objects. The policies determine how packing and unpacking should be done.
        // Packing an object causes the object to be placed into a bit (byte or int)
        // array. If the `uvm_field_* macro are used to implement pack and unpack,
        // by default no metadata information is stored for the packing of dynamic
        // objects (strings, arrays, class objects).
        //
        //-------------------------------------------------------------------------------
        
        typedef bit signed [(`UVM_PACKER_MAX_BYTES*8)-1:0] uvm_pack_bitstream_t;
        
%000001 class uvm_packer;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
          //----------------//
          // Group: Packing //
          //----------------//
          
          // Function: pack_field
          //
          // Packs an integral value (less than or equal to 4096 bits) into the
          // packed array. ~size~ is the number of bits of ~value~ to pack.
        
          extern virtual function void pack_field (uvm_bitstream_t value, int size);
        
        
          // Function: pack_field_int
          //
          // Packs the integral value (less than or equal to 64 bits) into the
          // pack array.  The ~size~ is the number of bits to pack, usually obtained by
          // ~$bits~. This optimized version of <pack_field> is useful for sizes up
          // to 64 bits.
        
          extern virtual function void pack_field_int (logic[63:0] value, int size);
        
        
          // Function: pack_string
          //
          // Packs a string value into the pack array. 
          //
          // When the metadata flag is set, the packed string is terminated by a null
          // character to mark the end of the string.
          //
          // This is useful for mixed language communication where unpacking may occur
          // outside of SystemVerilog UVM.
        
          extern virtual function void pack_string (string value);
        
        
          // Function: pack_time
          //
          // Packs a time ~value~ as 64 bits into the pack array.
        
          extern virtual function void pack_time (time value); 
        
        
          // Function: pack_real
          //
          // Packs a real ~value~ as 64 bits into the pack array. 
          //
          // The real ~value~ is converted to a 6-bit scalar value using the function
          // $real2bits before it is packed into the array.
        
          extern virtual function void pack_real (real value);
        
        
          // Function: pack_object
          //
          // Packs an object value into the pack array. 
          //
          // A 4-bit header is inserted ahead of the string to indicate the number of
          // bits that was packed. If a null object was packed, then this header will
          // be 0. 
          //
          // This is useful for mixed-language communication where unpacking may occur
          // outside of SystemVerilog UVM.
        
          extern virtual function void pack_object (uvm_object value);
        
        
          //------------------//
          // Group: Unpacking //
          //------------------//
          
          // Function: is_null
          //
          // This method is used during unpack operations to peek at the next 4-bit
          // chunk of the pack data and determine if it is 0.
          //
          // If the next four bits are all 0, then the return value is a 1; otherwise
          // it is 0. 
          //
          // This is useful when unpacking objects, to decide whether a new object
          // needs to be allocated or not.
        
          extern virtual function bit is_null ();
        
        
          // Function: unpack_field_int
          //
          // Unpacks bits from the pack array and returns the bit-stream that was
          // unpacked. 
          //
          // ~size~ is the number of bits to unpack; the maximum is 64 bits. 
          // This is a more efficient variant than unpack_field when unpacking into
          // smaller vectors.
        
          extern virtual function logic[63:0] unpack_field_int (int size);
        
        
          // Function: unpack_field
          //
          // Unpacks bits from the pack array and returns the bit-stream that was
          // unpacked. ~size~ is the number of bits to unpack; the maximum is 4096 bits.
        
          extern virtual function uvm_bitstream_t unpack_field (int size);
        
        
          // Function: unpack_string
          //
          // Unpacks a string. 
          //
          // num_chars bytes are unpacked into a string. If num_chars is -1 then
          // unpacking stops on at the first null character that is encountered.
        
          extern virtual function string unpack_string (int num_chars=-1);
        
        
          // Function: unpack_time
          //
          // Unpacks the next 64 bits of the pack array and places them into a
          // time variable.
        
          extern virtual function time unpack_time (); 
        
        
          // Function: unpack_real
          //
          // Unpacks the next 64 bits of the pack array and places them into a
          // real variable. 
          //
          // The 64 bits of packed data are converted to a real using the $bits2real
          // system function.
        
          extern virtual function real unpack_real ();
        
        
          // Function: unpack_object
          //
          // Unpacks an object and stores the result into ~value~. 
          //
          // ~value~ must be an allocated object that has enough space for the data
          // being unpacked. The first four bits of packed data are used to determine
          // if a null object was packed into the array. 
          //
          // The <is_null> function can be used to peek at the next four bits in
          // the pack array before calling this method.
        
          extern virtual function void unpack_object (uvm_object value);
        
        
          // Function: get_packed_size
          //
          // Returns the number of bits that were packed.
        
          extern virtual function int get_packed_size(); 
        
        
          //------------------//
          // Group: Variables //
          //------------------//
        
          // Variable: physical
          //
          // This bit provides a filtering mechanism for fields.
          //
          // The <abstract> and physical settings allow an object to distinguish between
          // two different classes of fields. It is up to you, in the
          // <uvm_object::do_pack> and <uvm_object::do_unpack> methods, to test the
          // setting of this field if you want to use it as a filter.
        
%000001   bit physical = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
        
          // Variable: abstract
          //
          // This bit provides a filtering mechanism for fields. 
          //
          // The abstract and physical settings allow an object to distinguish between
          // two different classes of fields. It is up to you, in the
          // <uvm_object::do_pack> and <uvm_object::do_unpack> routines, to test the
          // setting of this field if you want to use it as a filter.
        
          bit abstract;
        
        
          // Variable: use_metadata
          //
          // This flag indicates whether to encode metadata when packing dynamic data,
          // or to decode metadata when unpacking.  Implementations of <uvm_object::do_pack>
          // and <uvm_object::do_unpack> should regard this bit when performing their
          // respective operation. When set, metadata should be encoded as follows:
          //
          // - For strings, pack an additional null byte after the string is packed.
          //
          // - For objects, pack 4 bits prior to packing the object itself. Use 4'b0000
          //   to indicate the object being packed is null, otherwise pack 4'b0001 (the
          //   remaining 3 bits are reserved).
          //
          // - For queues, dynamic arrays, and associative arrays, pack 32 bits
          //   indicating the size of the array prior to to packing individual elements.
        
          bit use_metadata;
        
        
          // Variable: big_endian
          //
          // This bit determines the order that integral data is packed (using
          // <pack_field>, <pack_field_int>, <pack_time>, or <pack_real>) and how the
          // data is unpacked from the pack array (using <unpack_field>,
          // <unpack_field_int>, <unpack_time>, or <unpack_real>). When the bit is set,
          // data is associated msb to lsb; otherwise, it is associated lsb to msb. 
          //
          // The following code illustrates how data can be associated msb to lsb and
          // lsb to msb:
          //
          //|  class mydata extends uvm_object;
          //|
          //|    logic[15:0] value = 'h1234;
          //|
          //|    function void do_pack (uvm_packer packer);
          //|      packer.pack_field_int(value, 16);
          //|    endfunction
          //|
          //|    function void do_unpack (uvm_packer packer);
          //|      value = packer.unpack_field_int(16);
          //|    endfunction
          //|  endclass
          //|
          //|  mydata d = new;
          //|  bit bits[];
          //|
          //|  initial begin
          //|    d.pack(bits);  // 'b0001001000110100
          //|    uvm_default_packer.big_endian = 0;
          //|    d.pack(bits);  // 'b0010110001001000
          //|  end
        
%000001   bit big_endian = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
        
          // variables and methods primarily for internal use
        
          static bit bitstream[];   // local bits for (un)pack_bytes
          static bit fabitstream[]; // field automation bits for (un)pack_bytes
          int count;                // used to count the number of packed bits
%000001   uvm_scope_stack scope= new;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
          bit   reverse_order;      //flip the bit order around
%000001   byte  byte_size     = 8;  //set up bytesize for endianess
-000001  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000001   int   word_size     = 16; //set up worksize for endianess
-000001  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          bit   nopack;             //only count packable bits
        
%000001   uvm_recursion_policy_enum policy = UVM_DEFAULT_POLICY;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
          uvm_pack_bitstream_t m_bits;
          int m_packed_size;
        
          extern virtual function void unpack_object_ext  (inout uvm_object value);
        
          extern virtual function uvm_pack_bitstream_t get_packed_bits ();
        
          extern virtual function bit  unsigned get_bit  (int unsigned index);
          extern virtual function byte unsigned get_byte (int unsigned index);
          extern virtual function int  unsigned get_int  (int unsigned index);
        
          extern virtual function void get_bits (ref bit unsigned bits[]);
          extern virtual function void get_bytes(ref byte unsigned bytes[]);
          extern virtual function void get_ints (ref int unsigned ints[]);
        
          extern virtual function void put_bits (ref bit unsigned bitstream[]);
          extern virtual function void put_bytes(ref byte unsigned bytestream[]);
          extern virtual function void put_ints (ref int unsigned intstream[]);
        
          extern virtual function void set_packed_size(); 
          extern function void index_error(int index, string id, int sz);
          extern function bit enough_bits(int needed, string id);
        
          extern function void reset();
        
        endclass
        
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        // NOTE- max size limited to BITSTREAM bits parameter (default: 4096)
        
        
        // index_ok
        // --------
        
%000000 function void uvm_packer::index_error(int index, string id, int sz);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     uvm_report_error("PCKIDX", 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000         $sformatf("index %0d for get_%0s too large; valid index range is 0-%0d.",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000                   index,id,((m_packed_size+sz-1)/sz)-1), UVM_NONE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // enough_bits
        // -----------
        
%000000 function bit uvm_packer::enough_bits(int needed, string id);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   if ((m_packed_size - count) < needed) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     uvm_report_error("PCKSZ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000         $sformatf("%0d bits needed to unpack %0s, yet only %0d available.",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000                   needed, id, (m_packed_size - count)), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
          end
%000000   return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // get_packed_size
        // ---------------
        
%000000 function int uvm_packer::get_packed_size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   return m_packed_size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // set_packed_size
        // ---------------
        
%000000 function void uvm_packer::set_packed_size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   m_packed_size = count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   count = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // reset
        // -----
        
%000000 function void uvm_packer::reset();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   count = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   m_bits = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   m_packed_size = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // get_packed_bits
        // ---------------
        
%000000 function uvm_pack_bitstream_t uvm_packer::get_packed_bits();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          //bits = m_bits;
%000000   return m_bits;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // get_bits
        // --------
        
%000000 function void uvm_packer::get_bits(ref bit unsigned bits[]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   bits = new[m_packed_size];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   for (int i=0;i<m_packed_size;i++)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     bits[i] = m_bits[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // get_bytes
        // ---------
        
%000000 function void uvm_packer::get_bytes(ref byte unsigned bytes[]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   int sz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   byte v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   sz = (m_packed_size+7) / 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   bytes = new[sz];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   for (int i=0;i<sz;i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if (i != sz-1 || (m_packed_size % 8) == 0) 
-000000  point: type=expr comment=(((m_packed_size %25 32'sh8) == 32'sh0)==1) => 1 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=((i != (sz - 32'sh1))==0 && ((m_packed_size %25 32'sh8) == 32'sh0)==0) => 0 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=((i != (sz - 32'sh1))==1) => 1 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       v = m_bits[ i*8 +: 8 ];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
            else
%000000       v = m_bits[ i*8 +: 8 ] & ('hFF >> (8-(m_packed_size%8)));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if(big_endian) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       byte tmp; tmp = v;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000       for(int j=0; j<8; ++j) v[j] = tmp[7-j];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
            end
%000000     bytes[i] = v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          end
        endfunction
        
        
        // get_ints
        // --------
        
%000000 function void uvm_packer::get_ints(ref int unsigned ints[]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   int sz, v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   sz = (m_packed_size+31) / 32;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   ints = new[sz];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   for (int i=0;i<sz;i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if (i != sz-1 || (m_packed_size % 32) == 0) 
-000000  point: type=expr comment=(((m_packed_size %25 32'sh20) == 32'sh0)==1) => 1 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=((i != (sz - 32'sh1))==0 && ((m_packed_size %25 32'sh20) == 32'sh0)==0) => 0 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=((i != (sz - 32'sh1))==1) => 1 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       v = m_bits[ i*32 +: 32 ];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
            else
%000000       v = m_bits[ i*32 +: 32 ] & ('hFFFFFFFF >> (32-(m_packed_size%32)));
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if(big_endian) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       int tmp; tmp = v;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000       for(int j=0; j<32; ++j) v[j] = tmp[31-j];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
            end
%000000     ints[i] = v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          end
        endfunction
        
        
        // put_bits
        // --------
        
%000000 function void uvm_packer::put_bits (ref bit bitstream []);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   int bit_size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   bit_size = bitstream.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   if(big_endian)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     for (int i=bit_size-1;i>=0;i--)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000       m_bits[i] = bitstream[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          else
%000000     for (int i=0;i<bit_size;i++)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000       m_bits[i] = bitstream[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   m_packed_size = bit_size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   count = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
         
        endfunction
        
        // put_bytes
        // ---------
        
%000000 function void uvm_packer::put_bytes (ref byte unsigned bytestream []);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   int byte_size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   int index;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   byte unsigned b;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   byte_size = bytestream.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   index = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   for (int i=0;i<byte_size;i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     b = bytestream[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if(big_endian) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       byte unsigned tb; tb = b;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000       for(int j=0;j<8;++j) b[j] = tb[7-j];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
            end
%000000     m_bits[index +:8] = b;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     index += 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          end
        
%000000   m_packed_size = byte_size*8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   count = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // put_ints
        // --------
        
%000000 function void uvm_packer::put_ints (ref int unsigned intstream []);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   int int_size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   int index;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   int unsigned v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   int_size = intstream.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   index = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   for (int i=0;i<int_size;i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     v = intstream[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if(big_endian) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       int unsigned tv; tv = v;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000       for(int j=0;j<32;++j) v[j] = tv[31-j];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
            end
%000000     m_bits[index +:32] = v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     index += 32;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          end
        
%000000   m_packed_size = int_size*32;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   count = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        
        
        // get_bit
        // -------
        
%000000 function bit unsigned uvm_packer::get_bit(int unsigned index);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   if (index >= m_packed_size)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     index_error(index, "bit",1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000   return m_bits[index];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // get_byte
        // --------
        
%000000 function byte unsigned uvm_packer::get_byte(int unsigned index);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   if (index >= (m_packed_size+7)/8)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     index_error(index, "byte",8);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000   return m_bits[index*8 +: 8];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // get_int
        // -------
        
%000000 function int unsigned uvm_packer::get_int(int unsigned index);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   if (index >= (m_packed_size+31)/32)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     index_error(index, "int",32);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000   return m_bits[(index*32) +: 32];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        
        // PACK
        
        
        // pack_object
        // ---------
        
%000000 function void uvm_packer::pack_object(uvm_object value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   if(value.__m_uvm_status_container.cycle_check.exists(value)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     uvm_report_warning("CYCFND", $sformatf("Cycle detected for object @%0d during pack", value.get_inst_id()), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
          end
%000000   value.__m_uvm_status_container.cycle_check[value] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   if((policy != UVM_REFERENCE) && (value != null) ) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_packer__Vclpkg
%000000       if(use_metadata == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000         m_bits[count +: 4] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000         count += 4; // to better debug when display packed bits in hexidecimal
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
              end
%000000       scope.down(value.get_name());
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_packer__Vclpkg
%000000       value.__m_uvm_field_automation(null, UVM_PACK,"");
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_packer__Vclpkg
%000000       value.do_pack(this);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_packer__Vclpkg
%000000       scope.up();
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_packer__Vclpkg
          end
%000000   else if(use_metadata == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     m_bits[count +: 4] = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     count += 4;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
          end
%000000   value.__m_uvm_status_container.cycle_check.delete(value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
          
        // pack_real
        // ---------
        
%000000 function void uvm_packer::pack_real(real value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   pack_field_int($realtobits(value), 64);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
          
        
        // pack_time
        // ---------
        
%000000 function void uvm_packer::pack_time(time value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   pack_field_int(value, 64);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          //m_bits[count +: 64] = value; this overwrites endian adjustments
        endfunction
          
        
        // pack_field
        // ----------
        
%000000 function void uvm_packer::pack_field(uvm_bitstream_t value, int size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   for (int i=0; i<size; i++)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if(big_endian == 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       m_bits[count+i] = value[size-1-i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
            else
%000000       m_bits[count+i] = value[i];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000   count += size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
          
        
        // pack_field_int
        // --------------
        
%000000 function void uvm_packer::pack_field_int(logic [63:0] value, int size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   for (int i=0; i<size; i++)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if(big_endian == 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       m_bits[count+i] = value[size-1-i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
            else
%000000       m_bits[count+i] = value[i];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000   count += size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
          
        
        // pack_string
        // -----------
        
%000000 function void uvm_packer::pack_string(string value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   byte b;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   foreach (value[index]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if(big_endian == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       m_bits[count +: 8] = value[index];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       b = value[index];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       for(int i=0; i<8; ++i)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000         m_bits[count+i] = b[7-i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
            end 
%000000     count += 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          end
%000000   if(use_metadata == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     m_bits[count +: 8] = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     count += 8;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
          end
        endfunction 
        
        
        // UNPACK
        
        
        // is_null
        // -------
        
%000000 function bit uvm_packer::is_null();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   return (m_bits[count+:4]==0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
        // unpack_object
        // -------------
        
%000000 function void uvm_packer::unpack_object_ext(inout uvm_object value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   unpack_object(value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction
        
%000000 function void uvm_packer::unpack_object(uvm_object value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   byte is_non_null; is_non_null = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   if(value.__m_uvm_status_container.cycle_check.exists(value)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     uvm_report_warning("CYCFND", $sformatf("Cycle detected for object @%0d during unpack", value.get_inst_id()), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
          end
%000000   value.__m_uvm_status_container.cycle_check[value] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   if(use_metadata == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     is_non_null = m_bits[count +: 4];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     count+=4;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
          end
        
          // NOTE- policy is a ~pack~ policy, not unpack policy;
          //       and you can't pack an object by REFERENCE
%000000   if (value != null)begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if (is_non_null > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       scope.down(value.get_name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000       value.__m_uvm_field_automation(null, UVM_UNPACK,"");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000       value.do_unpack(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000       scope.up();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
              // TODO: help do_unpack know whether unpacked result would be null
              //       to avoid new'ing unnecessarily;
              //       this does not nullify argument; need to pass obj by ref
            end
          end
%000000   else if ((is_non_null != 0) && (value == null)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000      uvm_report_error("UNPOBJ","can not unpack into null object", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
          end
%000000   value.__m_uvm_status_container.cycle_check.delete(value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
        
        endfunction
        
          
        // unpack_real
        // -----------
        
%000000 function real uvm_packer::unpack_real();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   if (enough_bits(64,"real")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     return $bitstoreal(unpack_field_int(64));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
          end
        endfunction
          
        
        // unpack_time
        // -----------
        
%000000 function time uvm_packer::unpack_time();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   if (enough_bits(64,"time")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     return unpack_field_int(64);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
          end
        endfunction
          
        
        // unpack_field
        // ------------
        
%000000 function uvm_bitstream_t uvm_packer::unpack_field(int size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   unpack_field = 'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   if (enough_bits(size,"integral")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     count += size;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     for (int i=0; i<size; i++)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000       if(big_endian == 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000         unpack_field[i] = m_bits[count-i-1];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
              else
%000000         unpack_field[i] = m_bits[count-size+i];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
          end
        endfunction
          
        
        // unpack_field_int
        // ----------------
        
%000000 function logic[63:0] uvm_packer::unpack_field_int(int size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   unpack_field_int = 'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   if (enough_bits(size,"integral")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     count += size;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     for (int i=0; i<size; i++)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000       if(big_endian == 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000         unpack_field_int[i] = m_bits[count-i-1];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
              else
%000000         unpack_field_int[i] = m_bits[count-size+i];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
          end
        endfunction
          
        
        // unpack_string
        // -------------
        
        // If num_chars is not -1, then the user only wants to unpack a
        // specific number of bytes into the string.
%000000 function string uvm_packer::unpack_string(int num_chars=-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   byte b;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   bit  is_null_term; // Assumes a null terminated string
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   int i; i=0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   if(num_chars == -1) is_null_term = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000   else is_null_term = 0;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
        
%000000   while(enough_bits(8,"string") && 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000         ((m_bits[count+:8] != 0) || (is_null_term == 0)) &&
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=((i < num_chars)==0 && (is_null_term == 32'sh1)==0) => 0 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=((m_bits[count[14:0]+:8] != 32'sh0)==0 && (is_null_term == 32'sh0)==0) => 0 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=(enough_bits(32'sh8%22string%22)==0) => 0 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=(enough_bits(32'sh8%22string%22)==1 && (is_null_term == 32'sh0)==1 && (i < num_chars)==1) => 1 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=(enough_bits(32'sh8%22string%22)==1 && (is_null_term == 32'sh0)==1 && (is_null_term == 32'sh1)==1) => 1 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=(enough_bits(32'sh8%22string%22)==1 && (m_bits[count[14:0]+:8] != 32'sh0)==1 && (i < num_chars)==1) => 1 hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=expr comment=(enough_bits(32'sh8%22string%22)==1 && (m_bits[count[14:0]+:8] != 32'sh0)==1 && (is_null_term == 32'sh1)==1) => 1 hier=uvm_pkg::uvm_packer__Vclpkg
%000000         ((i<num_chars)||(is_null_term==1)) )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000   begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
            // silly, because can not append byte/char to string
%000000     unpack_string = {unpack_string," "};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     if(big_endian == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       unpack_string[i] = m_bits[count +: 8];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000       for(int j=0; j<8; ++j)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000         b[7-j] = m_bits[count+j];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000       unpack_string[i] = b;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
            end 
%000000     count += 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
%000000     ++i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_packer__Vclpkg
          end
%000000   if(enough_bits(8,"string"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_packer__Vclpkg
%000000     count += 8;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_packer__Vclpkg
        endfunction 
        
        
        
