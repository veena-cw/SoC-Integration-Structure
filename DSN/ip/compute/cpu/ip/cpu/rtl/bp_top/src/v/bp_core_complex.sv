/**
 *
 * bp_core_complex.v
 *
 */

`include "bsg_noc_links.svh"

`include "bp_common_defines.svh"
`include "bp_top_defines.svh"

module bp_core_complex
 import bp_common_pkg::*;
 import bp_be_pkg::*;
 import bsg_noc_pkg::*;
 import bsg_wormhole_router_pkg::*;
 import bp_me_pkg::*;



#(parameter bp_params_e bp_params_p = e_bp_default_cfg
  `declare_bp_proc_params(bp_params_p)
  `declare_bp_bedrock_if_widths(paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p)

  , localparam dma_noc_ral_link_width_lp = `bsg_ready_and_link_sif_width(dma_noc_flit_width_p)
  , localparam coh_noc_ral_link_width_lp = `bsg_ready_and_link_sif_width(coh_noc_flit_width_p)
)
  (input core_clk_i
   , input                                                             rt_clk_i
   , input                                                             core_reset_i

   , input                                                             coh_clk_i
   , input                                                             coh_reset_i

   , input                                                             dma_clk_i
   , input                                                             dma_reset_i

   , input [mem_noc_did_width_p-1:0]                                    my_did_i
   , input [mem_noc_did_width_p-1:0]                                    host_did_i

   , input [E:W][cc_y_dim_p-1:0][coh_noc_ral_link_width_lp-1:0]        coh_req_hor_link_i
   , output logic [E:W][cc_y_dim_p-1:0][coh_noc_ral_link_width_lp-1:0] coh_req_hor_link_o

   , input [E:W][cc_y_dim_p-1:0][coh_noc_ral_link_width_lp-1:0]        coh_cmd_hor_link_i
   , output logic [E:W][cc_y_dim_p-1:0][coh_noc_ral_link_width_lp-1:0] coh_cmd_hor_link_o

   , input [E:W][cc_y_dim_p-1:0][coh_noc_ral_link_width_lp-1:0]        coh_fill_hor_link_i
   , output logic [E:W][cc_y_dim_p-1:0][coh_noc_ral_link_width_lp-1:0] coh_fill_hor_link_o

   , input [E:W][cc_y_dim_p-1:0][coh_noc_ral_link_width_lp-1:0]        coh_resp_hor_link_i
   , output logic [E:W][cc_y_dim_p-1:0][coh_noc_ral_link_width_lp-1:0] coh_resp_hor_link_o

   , input [S:N][cc_x_dim_p-1:0][coh_noc_ral_link_width_lp-1:0]        coh_req_ver_link_i
   , output logic [S:N][cc_x_dim_p-1:0][coh_noc_ral_link_width_lp-1:0] coh_req_ver_link_o

   , input [S:N][cc_x_dim_p-1:0][coh_noc_ral_link_width_lp-1:0]        coh_cmd_ver_link_i
   , output logic [S:N][cc_x_dim_p-1:0][coh_noc_ral_link_width_lp-1:0] coh_cmd_ver_link_o

   , input [S:N][cc_x_dim_p-1:0][coh_noc_ral_link_width_lp-1:0]        coh_fill_ver_link_i
   , output logic [S:N][cc_x_dim_p-1:0][coh_noc_ral_link_width_lp-1:0] coh_fill_ver_link_o

   , input [S:N][cc_x_dim_p-1:0][coh_noc_ral_link_width_lp-1:0]        coh_resp_ver_link_i
   , output logic [S:N][cc_x_dim_p-1:0][coh_noc_ral_link_width_lp-1:0] coh_resp_ver_link_o

   , input [S:N][cc_x_dim_p-1:0][dma_noc_ral_link_width_lp-1:0]        dma_link_i
   , output logic [S:N][cc_x_dim_p-1:0][dma_noc_ral_link_width_lp-1:0] dma_link_o
   

// PLIC interface - core 0
, output logic [mem_fwd_header_width_lp-1:0] plic0_fwd_header_o
, output logic [bedrock_fill_width_p-1:0]    plic0_fwd_data_o
, output logic                               plic0_fwd_v_o
, input  logic                                plic0_fwd_ready_and_i

, input logic [mem_rev_header_width_lp-1:0]  plic0_rev_header_i
, input logic [bedrock_fill_width_p-1:0]     plic0_rev_data_i
, input logic                                plic0_rev_v_i
, output logic                               plic0_rev_ready_and_o

, input logic                                plic0_m_external_irq_i
, input logic                                plic0_s_external_irq_i

// PLIC interface - core 1
// PLIC interface - core 1
, output logic [mem_fwd_header_width_lp-1:0] plic1_fwd_header_o
, output logic [bedrock_fill_width_p-1:0]    plic1_fwd_data_o
, output logic                               plic1_fwd_v_o
, input logic                                plic1_fwd_ready_and_i

, input logic [mem_rev_header_width_lp-1:0]  plic1_rev_header_i
, input logic [bedrock_fill_width_p-1:0]     plic1_rev_data_i
, input logic                                plic1_rev_v_i
, output logic                               plic1_rev_ready_and_o

, input logic                                plic1_m_external_irq_i
, input logic                                plic1_s_external_irq_i);

  //`declare_bp_cfg_bus_s(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p, did_width_p);
  //`declare_bsg_ready_and_link_sif_s(coh_noc_flit_width_p, coh_noc_ral_link_s);
  //`declare_bsg_ready_and_link_sif_s(dma_noc_flit_width_p, dma_noc_ral_link_s);

//`bp_cast_o(bp_bedrock_mem_fwd_header_s, plic0_fwd_header);
//`bp_cast_i(bp_bedrock_mem_rev_header_s, plic0_rev_header);

//`bp_cast_o(bp_bedrock_mem_fwd_header_s, plic1_fwd_header);
//`bp_cast_i(bp_bedrock_mem_rev_header_s, plic1_rev_header);

`declare_bp_cfg_bus_s(vaddr_width_p, hio_width_p, core_id_width_p, cce_id_width_p, lce_id_width_p, did_width_p);

`declare_bp_bedrock_if(paddr_width_p
                      ,lce_id_width_p
                      ,cce_id_width_p
                      ,did_width_p
                      ,lce_assoc_p
                      );

`declare_bsg_ready_and_link_sif_s(coh_noc_flit_width_p, coh_noc_ral_link_s);
`declare_bsg_ready_and_link_sif_s(dma_noc_flit_width_p, dma_noc_ral_link_s);

`bp_cast_o(bp_bedrock_mem_fwd_header_s, plic0_fwd_header);
`bp_cast_i(bp_bedrock_mem_rev_header_s, plic0_rev_header);

`bp_cast_o(bp_bedrock_mem_fwd_header_s, plic1_fwd_header);
`bp_cast_i(bp_bedrock_mem_rev_header_s, plic1_rev_header);


  coh_noc_ral_link_s [cc_y_dim_p-1:0][cc_x_dim_p-1:0][S:W] lce_req_link_lo, lce_req_link_li;
  coh_noc_ral_link_s [cc_y_dim_p-1:0][cc_x_dim_p-1:0][S:W] lce_cmd_link_lo, lce_cmd_link_li;
  coh_noc_ral_link_s [cc_y_dim_p-1:0][cc_x_dim_p-1:0][S:W] lce_fill_link_lo, lce_fill_link_li;
  coh_noc_ral_link_s [cc_y_dim_p-1:0][cc_x_dim_p-1:0][S:W] lce_resp_link_lo, lce_resp_link_li;

  dma_noc_ral_link_s [cc_y_dim_p-1:0][cc_x_dim_p-1:0][S:N] dma_link_lo, dma_link_li;

  bp_bedrock_mem_fwd_header_s
  plic_fwd_header_lo [cc_x_dim_p-1:0];

logic [bedrock_fill_width_p-1:0]
  plic_fwd_data_lo [cc_x_dim_p-1:0];

logic
  plic_fwd_v_lo [cc_x_dim_p-1:0];

logic
  plic_fwd_ready_and_li [cc_x_dim_p-1:0];

bp_bedrock_mem_rev_header_s
  plic_rev_header_li [cc_x_dim_p-1:0];

logic [bedrock_fill_width_p-1:0]
  plic_rev_data_li [cc_x_dim_p-1:0];

logic
  plic_rev_v_li [cc_x_dim_p-1:0];

logic
  plic_rev_ready_and_lo [cc_x_dim_p-1:0];

logic
  plic_m_external_irq_li [cc_x_dim_p-1:0];

logic
  plic_s_external_irq_li [cc_x_dim_p-1:0];


// ------------------------------------------------------------
// PLIC interface - Core 0
// ------------------------------------------------------------

bp_bedrock_mem_fwd_header_s plic0_fwd_header_lo;
logic [bedrock_fill_width_p-1:0] plic0_fwd_data_lo;
logic plic0_fwd_v_lo;
logic plic0_fwd_ready_and_li;

bp_bedrock_mem_rev_header_s plic0_rev_header_li;
logic [bedrock_fill_width_p-1:0] plic0_rev_data_li;
logic plic0_rev_v_li;
logic plic0_rev_ready_and_lo;

logic plic0_m_external_irq_li;
logic plic0_s_external_irq_li;


// ------------------------------------------------------------
// PLIC interface - Core 1
// ------------------------------------------------------------

bp_bedrock_mem_fwd_header_s plic1_fwd_header_lo;
logic [bedrock_fill_width_p-1:0] plic1_fwd_data_lo;
logic plic1_fwd_v_lo;
logic plic1_fwd_ready_and_li;

bp_bedrock_mem_rev_header_s plic1_rev_header_li;
logic [bedrock_fill_width_p-1:0] plic1_rev_data_li;
logic plic1_rev_v_li;
logic plic1_rev_ready_and_lo;

logic plic1_m_external_irq_li;
logic plic1_s_external_irq_li;

  coh_noc_ral_link_s [E:W][cc_y_dim_p-1:0] lce_req_hor_link_li, lce_req_hor_link_lo;
  coh_noc_ral_link_s [S:N][cc_x_dim_p-1:0] lce_req_ver_link_li, lce_req_ver_link_lo;
  coh_noc_ral_link_s [E:W][cc_y_dim_p-1:0] lce_cmd_hor_link_li, lce_cmd_hor_link_lo;
  coh_noc_ral_link_s [S:N][cc_x_dim_p-1:0] lce_cmd_ver_link_li, lce_cmd_ver_link_lo;
  coh_noc_ral_link_s [E:W][cc_y_dim_p-1:0] lce_fill_hor_link_li, lce_fill_hor_link_lo;
  coh_noc_ral_link_s [S:N][cc_x_dim_p-1:0] lce_fill_ver_link_li, lce_fill_ver_link_lo;
  coh_noc_ral_link_s [E:W][cc_y_dim_p-1:0] lce_resp_hor_link_li, lce_resp_hor_link_lo;
  coh_noc_ral_link_s [S:N][cc_x_dim_p-1:0] lce_resp_ver_link_li, lce_resp_ver_link_lo;

  dma_noc_ral_link_s [S:N][cc_x_dim_p-1:0] mem_ver_link_lo, mem_ver_link_li;

  for (genvar j = 0; j < cc_y_dim_p; j++)
    begin : y
      for (genvar i = 0; i < cc_x_dim_p; i++)
        begin : x
          wire [coh_noc_cord_width_p-1:0] cord_li = {coh_noc_y_cord_width_p'(ic_y_dim_p+j)
                                                     ,coh_noc_x_cord_width_p'(sac_x_dim_p+i)
                                                     };
          bp_core_tile_node
           #(.bp_params_p(bp_params_p))
           tile_node
            (.core_clk_i(core_clk_i)
             ,.rt_clk_i(rt_clk_i)
             ,.core_reset_i(core_reset_i)

             ,.coh_clk_i(coh_clk_i)
             ,.coh_reset_i(coh_reset_i)

             ,.dma_clk_i(dma_clk_i)
             ,.dma_reset_i(dma_reset_i)

             ,.my_did_i(my_did_i)
             ,.host_did_i(host_did_i)
             ,.my_cord_i(cord_li)

             ,.coh_lce_req_link_i(lce_req_link_li[j][i])
             ,.coh_lce_resp_link_i(lce_resp_link_li[j][i])
             ,.coh_lce_cmd_link_i(lce_cmd_link_li[j][i])
             ,.coh_lce_fill_link_i(lce_fill_link_li[j][i])

             ,.coh_lce_req_link_o(lce_req_link_lo[j][i])
             ,.coh_lce_resp_link_o(lce_resp_link_lo[j][i])
             ,.coh_lce_cmd_link_o(lce_cmd_link_lo[j][i])
             ,.coh_lce_fill_link_o(lce_fill_link_lo[j][i])

             ,.dma_link_i(dma_link_li[j][i])
             ,.dma_link_o(dma_link_lo[j][i])

// PLIC interface
,.plic_fwd_header_o(plic_fwd_header_lo[i])
,.plic_fwd_data_o(plic_fwd_data_lo[i])
,.plic_fwd_v_o(plic_fwd_v_lo[i])
,.plic_fwd_ready_and_i(plic_fwd_ready_and_li[i])

,.plic_rev_header_i(plic_rev_header_li[i])
,.plic_rev_data_i(plic_rev_data_li[i])
,.plic_rev_v_i(plic_rev_v_li[i])
,.plic_rev_ready_and_o(plic_rev_ready_and_lo[i])

,.plic_m_external_irq_i(plic_m_external_irq_li[i])
,.plic_s_external_irq_i(plic_s_external_irq_li[i])
             
             );
        end
    end

    assign lce_req_hor_link_li = coh_req_hor_link_i;
    assign lce_req_ver_link_li = coh_req_ver_link_i;
    bsg_mesh_stitch
     #(.width_p($bits(coh_noc_ral_link_s))
       ,.x_max_p(cc_x_dim_p)
       ,.y_max_p(cc_y_dim_p)
       )
     coh_req_mesh
      (.outs_i(lce_req_link_lo)
       ,.ins_o(lce_req_link_li)

       ,.hor_i(lce_req_hor_link_li)
       ,.hor_o(lce_req_hor_link_lo)
       ,.ver_i(lce_req_ver_link_li)
       ,.ver_o(lce_req_ver_link_lo)
       );
    assign coh_req_hor_link_o = lce_req_hor_link_lo;
    assign coh_req_ver_link_o = lce_req_ver_link_lo;

    assign lce_cmd_hor_link_li = coh_cmd_hor_link_i;
    assign lce_cmd_ver_link_li = coh_cmd_ver_link_i;
    bsg_mesh_stitch
     #(.width_p($bits(coh_noc_ral_link_s))
       ,.x_max_p(cc_x_dim_p)
       ,.y_max_p(cc_y_dim_p)
       )
     coh_cmd_mesh
      (.outs_i(lce_cmd_link_lo)
       ,.ins_o(lce_cmd_link_li)

       ,.hor_i(lce_cmd_hor_link_li)
       ,.hor_o(lce_cmd_hor_link_lo)
       ,.ver_i(lce_cmd_ver_link_li)
       ,.ver_o(lce_cmd_ver_link_lo)
       );
    assign coh_cmd_hor_link_o = lce_cmd_hor_link_lo;
    assign coh_cmd_ver_link_o = lce_cmd_ver_link_lo;

    assign lce_fill_hor_link_li = coh_fill_hor_link_i;
    assign lce_fill_ver_link_li = coh_fill_ver_link_i;
    bsg_mesh_stitch
     #(.width_p($bits(coh_noc_ral_link_s))
       ,.x_max_p(cc_x_dim_p)
       ,.y_max_p(cc_y_dim_p)
       )
     coh_fill_mesh
      (.outs_i(lce_fill_link_lo)
       ,.ins_o(lce_fill_link_li)

       ,.hor_i(lce_fill_hor_link_li)
       ,.hor_o(lce_fill_hor_link_lo)
       ,.ver_i(lce_fill_ver_link_li)
       ,.ver_o(lce_fill_ver_link_lo)
       );
    assign coh_fill_hor_link_o = lce_fill_hor_link_lo;
    assign coh_fill_ver_link_o = lce_fill_ver_link_lo;

    assign lce_resp_hor_link_li = coh_resp_hor_link_i;
    assign lce_resp_ver_link_li = coh_resp_ver_link_i;
    bsg_mesh_stitch
     #(.width_p($bits(coh_noc_ral_link_s))
       ,.x_max_p(cc_x_dim_p)
       ,.y_max_p(cc_y_dim_p)
       )
     coh_resp_mesh
      (.outs_i(lce_resp_link_lo)
       ,.ins_o(lce_resp_link_li)

       ,.hor_i(lce_resp_hor_link_li)
       ,.hor_o(lce_resp_hor_link_lo)
       ,.ver_i(lce_resp_ver_link_li)
       ,.ver_o(lce_resp_ver_link_lo)
       );
    assign coh_resp_hor_link_o = lce_resp_hor_link_lo;
    assign coh_resp_ver_link_o = lce_resp_ver_link_lo;

    dma_noc_ral_link_s [cc_y_dim_p-1:0][cc_x_dim_p-1:0][S:W] mem_mesh_lo, mem_mesh_li;
    for (genvar i = 0; i < cc_y_dim_p; i++)
      for (genvar j = 0; j < cc_x_dim_p; j++)
        begin : link
          assign mem_mesh_lo[i][j][S:N] = dma_link_lo[i][j][S:N];
          assign dma_link_li[i][j][S:N] = mem_mesh_li[i][j][S:N];
        end
    assign mem_ver_link_li = dma_link_i;
    bsg_mesh_stitch
     #(.width_p($bits(dma_noc_ral_link_s))
       ,.x_max_p(cc_x_dim_p)
       ,.y_max_p(cc_y_dim_p)
       )
     mem_mesh
      (.outs_i(mem_mesh_lo)
       ,.ins_o(mem_mesh_li)

       ,.hor_i()
       ,.hor_o()
       ,.ver_i(mem_ver_link_li)
       ,.ver_o(mem_ver_link_lo)
       );
    assign dma_link_o = mem_ver_link_lo;
    
    


// ------------------------------------------------------------
// PLIC connections to bp_multicore
// ------------------------------------------------------------

// Core 0
assign plic0_fwd_header_cast_o = plic_fwd_header_lo[0];
assign plic0_fwd_data_o        = plic_fwd_data_lo[0];
assign plic0_fwd_v_o           = plic_fwd_v_lo[0];
assign plic_fwd_ready_and_li[0] = plic0_fwd_ready_and_i;

assign plic_rev_header_li[0]    = plic0_rev_header_cast_i;
assign plic_rev_data_li[0]      = plic0_rev_data_i;
assign plic_rev_v_li[0]         = plic0_rev_v_i;
assign plic0_rev_ready_and_o    = plic_rev_ready_and_lo[0];

assign plic_m_external_irq_li[0] = plic0_m_external_irq_i;
assign plic_s_external_irq_li[0] = plic0_s_external_irq_i;


// Core 1
assign plic1_fwd_header_cast_o = plic_fwd_header_lo[1];
assign plic1_fwd_data_o        = plic_fwd_data_lo[1];
assign plic1_fwd_v_o           = plic_fwd_v_lo[1];
assign plic_fwd_ready_and_li[1] = plic1_fwd_ready_and_i;

assign plic_rev_header_li[1]    = plic1_rev_header_cast_i;
assign plic_rev_data_li[1]      = plic1_rev_data_i;
assign plic_rev_v_li[1]         = plic1_rev_v_i;
assign plic1_rev_ready_and_o    = plic_rev_ready_and_lo[1];

assign plic_m_external_irq_li[1] = plic1_m_external_irq_i;
assign plic_s_external_irq_li[1] = plic1_s_external_irq_i;

endmodule

