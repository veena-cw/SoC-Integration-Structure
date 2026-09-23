// =======================================================================================================
// Copyright (c) 2015 VeriEdge Technologies Pvt Ltd, Inc. All rights reserved
// VeriEdge Technologies Confidential Proprietary
//--------------------------------------------------------------------------------------------------------
// FILE NAME    			: nvme_top_wrapper.sv
// SOURCE [Verilog|VHDL|SystemVerilog]	: Verilog
// AUTHOR				: Naveen Kadian
// AUTHOR'S EMAIL			: naveen@veriedge.com
//--------------------------------------------------------------------------------------------------------
// RELEASE HISTORY
// VERSION	DATE		AUTHOR		DESCRIPTION
// 1.0		03-01-2017	Naveen Kadian	Initial Version
//
//--------------------------------------------------------------------------------------------------------
// KEYWORDS	: 
// PURPOSE	: It is used to provide connection between Everest Top and memory models.
//--------------------------------------------------------------------------------------------------------
// REUSE ISSUES
//	Reset Strategy		: Asynchronous, active low system level reset
//	Clock Domains		: clk
//	Critical Timing		: N/A
//	Test Features		:
//	Asynchronous I/F	: rst_n
//	Instantiations		: N/A (specify instantiations if any)
//	Synthesizable		: Yes
//	Others			: 
// =======================================================================================================



module nvme_top_wrapper(/*AUTOARG*/
   // Outputs
   m_awaddr, m_awburst, m_awcache, m_awid, m_awlen, m_awlock,
   m_awprot, m_awqos, m_awregion, m_awsize, m_awvalid, m_wdata,
   m_wlast, m_wstrb, m_wvalid, m_bready, m_araddr, m_arburst,
   m_arcache, m_arid, m_arlen, m_arlock, m_arprot, m_arqos,
   m_arregion, m_arsize, m_arvalid, m_rready, prdata, pready, pslverr,
   nv2pcfg_addr, nv2pcfg_valid, nv2pcfg_vec_no, nv2pcfg_set_clr,nv2pcfg_tp,
   nv2tl_data, nv2tl_data_be, nv2tl_eop, nv2tl_fc_cmpldb_crdts,
   nv2tl_fc_cmplhq_crdts, nv2tl_fc_cmplq_avail_crdts,
   nv2tl_fc_npdb_crdts, nv2tl_fc_nphq_crdts, nv2tl_fc_npq_avail_crdts,
   nv2tl_fc_pdb_crdts, nv2tl_fc_phq_crdts, nv2tl_fc_pq_avail_crdts,
   nv2tl_ready, nv2tl_sop, nv2tl_valid, nv2lcpu_intr,
   // Inputs
   clk, aclk, areset_n, s_awready, s_wready, s_bid, s_bresp, s_bvalid,
   s_arready, s_rdata, s_rid, s_rlast, s_rresp, s_rvalid, pclk,
   preset_n, paddr, penable, psel, pwdata, pwrite, pcfg2nv_bme,
   pcfg2nv_dev_id, pcfg2nv_fm, pcfg2nv_id, pcfg2nv_mps, pcfg2nv_mrrs,
   pcfg2nv_mse, pcfg2nv_msi_mme, pcfg2nv_msie, pcfg2nv_msix_ba,
   pcfg2nv_msix_off, pcfg2nv_mxe, pcfg2nv_ncfg_ba, pcfg2nv_ncfg_off,
   pcfg2nv_pbao, pcfg2nv_to, pcfg2nv_ts, pcfg2nv_xtag_en, pcfg2nv_flr,
   temp2aer_comp_temp, temp2aer_temp1, temp2aer_temp2, temp2aer_temp3,
   temp2aer_temp4, temp2aer_temp5, temp2aer_temp6, temp2aer_temp7,
   temp2aer_temp8, fmem2nv_err, fmem2nv_addr, fmem2nv_err_valid,
   fmem2nv_pl, tl2nv_data, tl2nv_data_be, tl2nv_tlp_err, tl2nv_eop,
   tl2nv_fc_cmpldb_crdts, tl2nv_fc_cmplhq_crdts,
   tl2nv_fc_cmplq_avail_crdts, tl2nv_fc_npdb_crdts,
   tl2nv_fc_nphq_crdts, tl2nv_fc_npq_avail_crdts, tl2nv_fc_pdb_crdts,
   tl2nv_fc_phq_crdts, tl2nv_fc_pq_avail_crdts, tl2nv_link_up,
   tl2nv_ready, tl2nv_sop, tl2nv_valid, tlptap_addr, tlptap_data,
   tlptap_data_be, tlptap_valid
   );

   //=======================================================================================================
   //========================================= NVME Global Signal ==========================================
   //=======================================================================================================
   input 			   	clk;				// To EVEREST_TOP of everest.v
   //input 				rst_n;				// To EVEREST_TOP of everest.v
   
   //=======================================================================================================
   //========================================= AXI Global Signal ===========================================
   //=======================================================================================================  
   input 				aclk;				// To EVEREST_TOP of everest.v
   input 				areset_n;			// To EVEREST_TOP of everest.v
   
   //========================================================================================================
   //===================================== AXI Write Address Channel Signals ================================
   //========================================================================================================   
   output [`AXI_AWIDTH-1:0] 		m_awaddr;			// From EVEREST_TOP of everest.v
   output [`AXI_BTYPE-1:0] 		m_awburst;			// From EVEREST_TOP of everest.v
   output [`AXI_CTYPE-1:0] 		m_awcache;			// From EVEREST_TOP of everest.v
   output [`AXI_ID-1:0] 		m_awid;				// From EVEREST_TOP of everest.v
   output [`AXI_BLEN-1:0] 		m_awlen;			// From EVEREST_TOP of everest.v
   output 				m_awlock;			// From EVEREST_TOP of everest.v
   output [`AXI_PTYPE-1:0] 		m_awprot;			// From EVEREST_TOP of everest.v
   output [`AXI_QOS-1:0] 		m_awqos;			// From EVEREST_TOP of everest.v
   output [`AXI_REGION-1:0] 		m_awregion;			// From EVEREST_TOP of everest.v
   output [`AXI_BSIZE-1:0] 		m_awsize;			// From EVEREST_TOP of everest.v
   output 				m_awvalid;			// From EVEREST_TOP of everest.v
   input 				s_awready;			// To EVEREST_TOP of everest.v

   //========================================================================================================
   //===================================== AXI Write Data Channel Signals ===================================
   //========================================================================================================
   output [`AXI_DWIDTH-1:0] 		m_wdata;			// From EVEREST_TOP of everest.v
   output 				m_wlast;			// From EVEREST_TOP of everest.v
   output [`AXI_SWIDTH-1:0] 		m_wstrb;			// From EVEREST_TOP of everest.v
   output 				m_wvalid;			// From EVEREST_TOP of everest.v
   input 				s_wready;			// To EVEREST_TOP of everest.v
   
   //========================================================================================================
   //===================================== AXI Write Response Channel Signals ===============================
   //========================================================================================================
   output 				m_bready;			// From EVEREST_TOP of everest.v
   input [`AXI_ID-1:0] 			s_bid;				// To EVEREST_TOP of everest.v
   input [`AXI_RWIDTH-1:0] 		s_bresp;			// To EVEREST_TOP of everest.v
   input 				s_bvalid;			// To EVEREST_TOP of everest.v  
   
   //========================================================================================================
   //===================================== AXI Read Address Channel Signals =================================
   //========================================================================================================
   output [`AXI_AWIDTH-1:0] 		m_araddr;			// From EVEREST_TOP of everest.v
   output [`AXI_BTYPE-1:0] 		m_arburst;			// From EVEREST_TOP of everest.v
   output [`AXI_CTYPE-1:0] 		m_arcache;			// From EVEREST_TOP of everest.v
   output [`AXI_ID-1:0] 		m_arid;				// From EVEREST_TOP of everest.v
   output [`AXI_BLEN-1:0] 		m_arlen;			// From EVEREST_TOP of everest.v
   output 				m_arlock;			// From EVEREST_TOP of everest.v
   output [`AXI_PTYPE-1:0] 		m_arprot;			// From EVEREST_TOP of everest.v
   output [`AXI_QOS-1:0] 		m_arqos;			// From EVEREST_TOP of everest.v
   output [`AXI_REGION-1:0] 		m_arregion;			// From EVEREST_TOP of everest.v
   output [`AXI_BSIZE-1:0] 		m_arsize;			// From EVEREST_TOP of everest.v
   output 				m_arvalid;			// From EVEREST_TOP of everest.v
   input 				s_arready;			// To EVEREST_TOP of everest.v
   
   //========================================================================================================
   //===================================== AXI Read Data Channel Signals ====================================
   //========================================================================================================
   output 				m_rready;			// From EVEREST_TOP of everest.v
   input [`AXI_DWIDTH-1:0] 		s_rdata;			// To EVEREST_TOP of everest.v
   input [`AXI_ID-1:0] 			s_rid;				// To EVEREST_TOP of everest.v
   input 				s_rlast;			// To EVEREST_TOP of everest.v
   input [`AXI_RWIDTH-1:0] 		s_rresp;			// To EVEREST_TOP of everest.v
   input 				s_rvalid;			// To EVEREST_TOP of everest.v
   
   //=======================================================================================================
   //========================================= APB Global Signal ===========================================
   //=======================================================================================================  
   input 				pclk;				// To EVEREST_TOP of everest.v
   input 				preset_n;			// To EVEREST_TOP of everest.v
   
   //=======================================================================================================
   //========================================= APB Slave Input =============================================
   //=======================================================================================================   
   input [`APB_AWIDTH-1:0] 		paddr;				// To EVEREST_TOP of everest.v
   input 				penable;			// To EVEREST_TOP of everest.v
   input 				psel;				// To EVEREST_TOP of everest.v
   input [`APB_DWIDTH-1:0] 		pwdata;				// To EVEREST_TOP of everest.v
   input 				pwrite;				// To EVEREST_TOP of everest.v
   
   //=======================================================================================================
   //========================================= APB Slave Output ============================================
   //=======================================================================================================
   output [`APB_DWIDTH-1:0] 		prdata;				// From EVEREST_TOP of everest.v
   output 				pready;				// From EVEREST_TOP of everest.v
   output 				pslverr;			// From EVEREST_TOP of everest.v

   //=======================================================================================================
   //========================================= PCIe CFG to NVMe ============================================
   //======================================================================================================= 
   input 				pcfg2nv_bme;			// To EVEREST_TOP of everest.v
   input [`TX_REQ_ID-1:0] 		pcfg2nv_dev_id;			// To EVEREST_TOP of everest.v
   input 				pcfg2nv_fm;			// To EVEREST_TOP of everest.v
   input 				pcfg2nv_id;			// To EVEREST_TOP of everest.v
   input [`PCFG_MPS-1:0] 		pcfg2nv_mps;			// To EVEREST_TOP of everest.v
   input [`PCFG_MRRS-1:0] 		pcfg2nv_mrrs;			// To EVEREST_TOP of everest.v
   input 				pcfg2nv_mse;			// To EVEREST_TOP of everest.v
   input [`PCFG_MSI_MME-1:0] 		pcfg2nv_msi_mme;		// To EVEREST_TOP of everest.v
   input 				pcfg2nv_msie;			// To EVEREST_TOP of everest.v
   input [`MSIX_BA-1:0] 		pcfg2nv_msix_ba;		// To EVEREST_TOP of everest.v
   input [`BAR_OFF-1:0] 		pcfg2nv_msix_off;		// To EVEREST_TOP of everest.v
   input 				pcfg2nv_mxe;			// To EVEREST_TOP of everest.v
   input [`NCFG_BA-1:0] 		pcfg2nv_ncfg_ba;		// To EVEREST_TOP of everest.v
   input [`BAR_OFF-1:0] 		pcfg2nv_ncfg_off;		// To EVEREST_TOP of everest.v
   input [`PBA_OFF-1:0] 		pcfg2nv_pbao;			// To EVEREST_TOP of everest.v
   input [`TABLE_OFF-1:0] 		pcfg2nv_to;			// To EVEREST_TOP of everest.v
   input [`PCFG_MSIX_TS-1:0] 		pcfg2nv_ts;			// To EVEREST_TOP of everest.v
   input 				pcfg2nv_xtag_en;		// To EVEREST_TOP of everest.v
   input				pcfg2nv_flr;			// To EVEREST_TOP of everest.v

   //=======================================================================================================
   //========================================= Temperature Sensor to NVMe ==================================
   //======================================================================================================= 
   input [`AER_TEMP-1:0] 		temp2aer_comp_temp;		// To EVEREST_TOP of everest.v
   input [`AER_TEMP-1:0] 		temp2aer_temp1;			// To EVEREST_TOP of everest.v
   input [`AER_TEMP-1:0] 		temp2aer_temp2;			// To EVEREST_TOP of everest.v
   input [`AER_TEMP-1:0] 		temp2aer_temp3;			// To EVEREST_TOP of everest.v
   input [`AER_TEMP-1:0] 		temp2aer_temp4;			// To EVEREST_TOP of everest.v
   input [`AER_TEMP-1:0] 		temp2aer_temp5;			// To EVEREST_TOP of everest.v
   input [`AER_TEMP-1:0] 		temp2aer_temp6;			// To EVEREST_TOP of everest.v
   input [`AER_TEMP-1:0] 		temp2aer_temp7;			// To EVEREST_TOP of everest.v
   input [`AER_TEMP-1:0] 		temp2aer_temp8;			// To EVEREST_TOP of everest.v

   //=======================================================================================================
   //========================================= Flash Memory to NVMe ========================================
   //=======================================================================================================
   input [`NVME_TLP_ERR-1:0]	  		fmem2nv_err;	   	  	// To REG_TOP of reg_top.v
   input [`NVME_AWIDTH-1:0]			fmem2nv_addr;	  	  	// To REG_TOP of reg_top.v
   input					fmem2nv_err_valid;	  	// To REG_TOP of reg_top.v
   input					fmem2nv_pl;			//

   //=======================================================================================================
   //========================================= PCIe TL EP to NVMe ==========================================
   //=======================================================================================================
   input [`RX_DWIDTH-1:0] 		tl2nv_data;			// To EVEREST_TOP of everest.v
   input [`RX_BYTE_EN-1:0] 		tl2nv_data_be;			// To EVEREST_TOP of everest.v
   input [`NVME_TLP_ERR-1:0]		tl2nv_tlp_err;			// To EVEREST_TOP of everest.v
   input 				tl2nv_eop;			// To EVEREST_TOP of everest.v
   input [`TX_CMPLDQ_CRDTS-1:0] 	tl2nv_fc_cmpldb_crdts;		// To EVEREST_TOP of everest.v
   input [`TX_CMPLHQ_CRDTS-1:0] 	tl2nv_fc_cmplhq_crdts;		// To EVEREST_TOP of everest.v
   input [`TX_AVAIL_CRDTS-1:0] 		tl2nv_fc_cmplq_avail_crdts;	// To EVEREST_TOP of everest.v
   input [`TX_NPDQ_CRDTS-1:0] 		tl2nv_fc_npdb_crdts;		// To EVEREST_TOP of everest.v
   input [`TX_NPHQ_CRDTS-1:0] 		tl2nv_fc_nphq_crdts;		// To EVEREST_TOP of everest.v
   input [`TX_AVAIL_CRDTS-1:0] 		tl2nv_fc_npq_avail_crdts;	// To EVEREST_TOP of everest.v
   input [`TX_PDQ_CRDTS-1:0] 		tl2nv_fc_pdb_crdts;		// To EVEREST_TOP of everest.v
   input [`TX_PHQ_CRDTS-1:0] 		tl2nv_fc_phq_crdts;		// To EVEREST_TOP of everest.v
   input [`TX_AVAIL_CRDTS-1:0] 		tl2nv_fc_pq_avail_crdts;	// To EVEREST_TOP of everest.v
   input 				tl2nv_link_up;			// To EVEREST_TOP of everest.v
   input 				tl2nv_ready;			// To EVEREST_TOP of everest.v
   input 				tl2nv_sop;			// To EVEREST_TOP of everest.v
   input 				tl2nv_valid;			// To EVEREST_TOP of everest.v

   //=======================================================================================================
   //========================================= Taping I/F Signals ==========================================
   //=======================================================================================================
   input [`TLPTAP_AWIDTH-1:0] 		tlptap_addr;			// To EVEREST_TOP of everest.v
   input [`TLPTAP_DWIDTH-1:0] 		tlptap_data;			// To EVEREST_TOP of everest.v
   input [`TLPTAP_BYTE_EN-1:0] 		tlptap_data_be;			// To EVEREST_TOP of everest.v
   input 				tlptap_valid;			// To EVEREST_TOP of everest.v
   
   //======================================================================================================
   //========================================= NVMe to PCIe CFG ===========================================
   //======================================================================================================
   output [`TLPTAP_AWIDTH-1:0] 		nv2pcfg_addr;			// From EVEREST_TOP of everest.v
   output 		 		nv2pcfg_tp;			// From EVEREST_TOP of everest.v
   output 				nv2pcfg_valid;			// From EVEREST_TOP of everest.v
   output [`INTR_MSI_VEC_NO-1:0] 	nv2pcfg_vec_no;			// From EVEREST_TOP of everest.v
   output 				nv2pcfg_set_clr;		// From EVEREST_TOP of everest.v

   //======================================================================================================
   //========================================= NVMe to PCIe TL EP =========================================
   //======================================================================================================
   output [`TX_DWIDTH-1:0] 		nv2tl_data;			// From EVEREST_TOP of everest.v
   output [`TX_BYTE_EN-1:0] 		nv2tl_data_be;			// From EVEREST_TOP of everest.v
   output 				nv2tl_eop;			// From EVEREST_TOP of everest.v
   output [`RX_DATA_CRDTS-1:0] 		nv2tl_fc_cmpldb_crdts;		// From EVEREST_TOP of everest.v
   output [`RX_HDR_CRDTS-1:0] 		nv2tl_fc_cmplhq_crdts;		// From EVEREST_TOP of everest.v
   output [`RX_AVAIL_CRDTS-1:0] 	nv2tl_fc_cmplq_avail_crdts;	// From EVEREST_TOP of everest.v
   output [`RX_DATA_CRDTS-1:0] 		nv2tl_fc_npdb_crdts;		// From EVEREST_TOP of everest.v
   output [`RX_HDR_CRDTS-1:0] 		nv2tl_fc_nphq_crdts;		// From EVEREST_TOP of everest.v
   output [`RX_AVAIL_CRDTS-1:0] 	nv2tl_fc_npq_avail_crdts;	// From EVEREST_TOP of everest.v
   output [`RX_DATA_CRDTS-1:0] 		nv2tl_fc_pdb_crdts;		// From EVEREST_TOP of everest.v
   output [`RX_HDR_CRDTS-1:0] 		nv2tl_fc_phq_crdts;		// From EVEREST_TOP of everest.v
   output [`RX_AVAIL_CRDTS-1:0] 	nv2tl_fc_pq_avail_crdts;	// From EVEREST_TOP of everest.v
   output 				nv2tl_ready;			// From EVEREST_TOP of everest.v
   output 				nv2tl_sop;			// From EVEREST_TOP of everest.v
   output 				nv2tl_valid;			// From EVEREST_TOP of everest.v

   //======================================================================================================
   //========================================= NVMe to Local CPU ==========================================
   //======================================================================================================
   output 				nv2lcpu_intr;			// From EVEREST_TOP of everest.v

   //======================================================================================================
   //========================================= NVMe to Firmware Queue Buffer ==============================
   //======================================================================================================
   wire 			   	fqbcl2fqb_wr_en;		// From EVEREST_TOP of everest.v
   wire [`NVME_FQB_PTR-1:0]  	   	fqbcl2fqb_waddr;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]   	   	fqbcl2fqb_wdata;		// From EVEREST_TOP of everest.v
   wire 			   	fqbcl2fqb_rd_en;		// From EVEREST_TOP of everest.v
   wire [`NVME_FQB_PTR-1:0]  	   	fqbcl2fqb_raddr;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]   	   	fqb2fqbcl_rdata;		// To EVEREST_TOP of everest.v

   //======================================================================================================
   //========================================= NVMe to Firmware Slot ======================================
   //======================================================================================================
   wire [`NVME_DWIDTH-1:0]   		fqbcl2fsl_wdata0;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]   		fqbcl2fsl_wdata1;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]   		fqbcl2fsl_wdata2;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]   		fqbcl2fsl_wdata3;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]   		fqbcl2fsl_wdata4;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]   		fqbcl2fsl_wdata5;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]   		fqbcl2fsl_wdata6;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]   		fqbcl2fsl_wdata7;		// From EVEREST_TOP of everest.v
   wire [`NVME_FSLOTS-1:0]   		fqbcl2fsl_wr_en;		// From EVEREST_TOP of everest.v
   wire [`NVME_FQB_PTR-1:0]  		fqbcl2fsl_waddr;		// From EVEREST_TOP of everest.v
   wire [`NVME_FSLOTS-1:0]   		fqbcl2fsl_rd_en;		// From EVEREST_TOP of everest.v
   wire [`NVME_FQB_PTR-1:0]  		fqbcl2fsl_raddr;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]    		fsl2fqbcl_rdata0;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]    		fsl2fqbcl_rdata1;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]    		fsl2fqbcl_rdata2;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]    		fsl2fqbcl_rdata3;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]    		fsl2fqbcl_rdata4;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]    		fsl2fqbcl_rdata5;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]    		fsl2fqbcl_rdata6;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0]    		fsl2fqbcl_rdata7;		// To EVEREST_TOP of everest.v

   //======================================================================================================
   //========================================= NVMe to Delete SQ Memory ===================================
   //======================================================================================================
   wire			     		ad2dsq_wr_en;			// From EVEREST_TOP of everest.v
   wire [`DEL_SQ_CSIZE-1:0]        	ad2dsq_wdata;			// From EVEREST_TOP of everest.v
   wire [7:0]		       	     	ad2dsq_waddr;			// From EVEREST_TOP of everest.v
   wire 			     	ad2dsq_rd_en;			// From EVEREST_TOP of everest.v
   wire [7:0]		       	     	ad2dsq_raddr;			// From EVEREST_TOP of everest.v
   wire[`DEL_SQ_CSIZE-1:0]	        dsq2ad_rdata;			// To EVEREST_TOP of everest.v

   //======================================================================================================
   //========================================= Wire Declaration ===========================================
   //======================================================================================================
/*
   //Uncomment below lines if LBA Range Type Feature is implemented   
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba10_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba10_rd_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba10_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba10_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba10_wr_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba11_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba11_rd_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba11_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba11_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba11_wr_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba12_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba12_rd_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba12_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba12_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba12_wr_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba13_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba13_rd_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba13_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba13_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba13_wr_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba14_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba14_rd_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba14_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba14_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba14_wr_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba15_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba15_rd_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba15_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba15_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba15_wr_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba16_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba16_rd_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba16_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba16_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba16_wr_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba1_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba1_rd_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba1_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba1_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba1_wr_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba2_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba2_rd_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba2_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba2_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba2_wr_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba3_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba3_rd_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba3_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba3_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba3_wr_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba4_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba4_rd_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba4_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba4_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba4_wr_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba5_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba5_rd_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba5_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba5_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba5_wr_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba6_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba6_rd_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba6_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba6_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba6_wr_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba7_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba7_rd_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba7_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba7_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba7_wr_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba8_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba8_rd_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba8_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba8_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba8_wr_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba9_rd_address;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba9_rd_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_PTR-1:0] 		sfb2lba9_wr_address;		// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		sfb2lba9_wr_data;		// From EVEREST_TOP of everest.v
   wire 				sfb2lba9_wr_en;			// From EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba10_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba11_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba12_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba13_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba14_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba15_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba16_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba1_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba2_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba3_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba4_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba5_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba6_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba7_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba8_sfb_rd_data;		// To EVEREST_TOP of everest.v
   wire [`LMU_SFB_FDATA-1:0] 		lba9_sfb_rd_data;		// To EVEREST_TOP of everest.v
*/

   wire [`NVME_PRTCT_INFO-1:0] 		ete2mem0_prtct_info;		// From EVEREST_TOP of everest.v
   wire 				ete2mem0_prtct_info_rd_en1;	// From EVEREST_TOP of everest.v
   wire 				ete2mem0_prtct_info_rd_en2;	// From EVEREST_TOP of everest.v
   wire 				ete2mem0_prtct_info_rd_en3;	// From EVEREST_TOP of everest.v
   wire 				ete2mem0_prtct_info_rd_en4;	// From EVEREST_TOP of everest.v
   wire 				ete2mem0_prtct_info_rd_en5;	// From EVEREST_TOP of everest.v
   wire 				ete2mem0_prtct_info_rd_en6;	// From EVEREST_TOP of everest.v
   wire 				ete2mem0_prtct_info_rd_en7;	// From EVEREST_TOP of everest.v
   wire 				ete2mem0_prtct_info_rd_en8;	// From EVEREST_TOP of everest.v
   wire 				ete2mem1_prtct_info_rd_en1;	// From EVEREST_TOP of everest.v
   wire 				ete2mem1_prtct_info_rd_en2;	// From EVEREST_TOP of everest.v
   wire 				ete2mem1_prtct_info_rd_en3;	// From EVEREST_TOP of everest.v
   wire 				ete2mem1_prtct_info_rd_en4;	// From EVEREST_TOP of everest.v
   wire 				ete2mem1_prtct_info_rd_en5;	// From EVEREST_TOP of everest.v
   wire 				ete2mem1_prtct_info_rd_en6;	// From EVEREST_TOP of everest.v
   wire 				ete2mem1_prtct_info_rd_en7;	// From EVEREST_TOP of everest.v
   wire 				ete2mem1_prtct_info_rd_en8;	// From EVEREST_TOP of everest.v
   wire 				ete2mem2_prtct_info_rd_en1;	// From EVEREST_TOP of everest.v
   wire 				ete2mem2_prtct_info_rd_en2;	// From EVEREST_TOP of everest.v
   wire 				ete2mem2_prtct_info_rd_en3;	// From EVEREST_TOP of everest.v
   wire 				ete2mem2_prtct_info_rd_en4;	// From EVEREST_TOP of everest.v
   wire 				ete2mem2_prtct_info_rd_en5;	// From EVEREST_TOP of everest.v
   wire 				ete2mem2_prtct_info_rd_en6;	// From EVEREST_TOP of everest.v
   wire 				ete2mem2_prtct_info_rd_en7;	// From EVEREST_TOP of everest.v
   wire 				ete2mem2_prtct_info_rd_en8;	// From EVEREST_TOP of everest.v
   wire 				ete2mem3_prtct_info_rd_en1;	// From EVEREST_TOP of everest.v
   wire 				ete2mem3_prtct_info_rd_en2;	// From EVEREST_TOP of everest.v
   wire 				ete2mem3_prtct_info_rd_en3;	// From EVEREST_TOP of everest.v
   wire 				ete2mem3_prtct_info_rd_en4;	// From EVEREST_TOP of everest.v
   wire 				ete2mem3_prtct_info_rd_en5;	// From EVEREST_TOP of everest.v
   wire 				ete2mem3_prtct_info_rd_en6;	// From EVEREST_TOP of everest.v
   wire 				ete2mem3_prtct_info_rd_en7;	// From EVEREST_TOP of everest.v
   wire 				ete2mem3_prtct_info_rd_en8;	// From EVEREST_TOP of everest.v
   wire 				ete2mem4_prtct_info_rd_en1;	// From EVEREST_TOP of everest.v
   wire 				ete2mem4_prtct_info_rd_en2;	// From EVEREST_TOP of everest.v
   wire 				ete2mem4_prtct_info_rd_en3;	// From EVEREST_TOP of everest.v
   wire 				ete2mem4_prtct_info_rd_en4;	// From EVEREST_TOP of everest.v
   wire 				ete2mem4_prtct_info_rd_en5;	// From EVEREST_TOP of everest.v
   wire 				ete2mem4_prtct_info_rd_en6;	// From EVEREST_TOP of everest.v
   wire 				ete2mem4_prtct_info_rd_en7;	// From EVEREST_TOP of everest.v
   wire 				ete2mem4_prtct_info_rd_en8;	// From EVEREST_TOP of everest.v
   wire 				ete2mem5_prtct_info_rd_en1;	// From EVEREST_TOP of everest.v
   wire 				ete2mem5_prtct_info_rd_en2;	// From EVEREST_TOP of everest.v
   wire 				ete2mem5_prtct_info_rd_en3;	// From EVEREST_TOP of everest.v
   wire 				ete2mem5_prtct_info_rd_en4;	// From EVEREST_TOP of everest.v
   wire 				ete2mem5_prtct_info_rd_en5;	// From EVEREST_TOP of everest.v
   wire 				ete2mem5_prtct_info_rd_en6;	// From EVEREST_TOP of everest.v
   wire 				ete2mem5_prtct_info_rd_en7;	// From EVEREST_TOP of everest.v
   wire 				ete2mem5_prtct_info_rd_en8;	// From EVEREST_TOP of everest.v
   wire 				ete2mem6_prtct_info_rd_en1;	// From EVEREST_TOP of everest.v
   wire 				ete2mem6_prtct_info_rd_en2;	// From EVEREST_TOP of everest.v
   wire 				ete2mem6_prtct_info_rd_en3;	// From EVEREST_TOP of everest.v
   wire 				ete2mem6_prtct_info_rd_en4;	// From EVEREST_TOP of everest.v
   wire 				ete2mem6_prtct_info_rd_en5;	// From EVEREST_TOP of everest.v
   wire 				ete2mem6_prtct_info_rd_en6;	// From EVEREST_TOP of everest.v
   wire 				ete2mem6_prtct_info_rd_en7;	// From EVEREST_TOP of everest.v
   wire 				ete2mem6_prtct_info_rd_en8;	// From EVEREST_TOP of everest.v
   wire 				ete2mem7_prtct_info_rd_en1;	// From EVEREST_TOP of everest.v
   wire 				ete2mem7_prtct_info_rd_en2;	// From EVEREST_TOP of everest.v
   wire 				ete2mem7_prtct_info_rd_en3;	// From EVEREST_TOP of everest.v
   wire 				ete2mem7_prtct_info_rd_en4;	// From EVEREST_TOP of everest.v
   wire 				ete2mem7_prtct_info_rd_en5;	// From EVEREST_TOP of everest.v
   wire 				ete2mem7_prtct_info_rd_en6;	// From EVEREST_TOP of everest.v
   wire 				ete2mem7_prtct_info_rd_en7;	// From EVEREST_TOP of everest.v
   wire 				ete2mem7_prtct_info_rd_en8;	// From EVEREST_TOP of everest.v
   wire 				ete2mem0_prtct_info_wr_en;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem0_prtct_rd_address1;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem0_prtct_rd_address2;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem0_prtct_rd_address3;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem0_prtct_rd_address4;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem0_prtct_rd_address5;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem0_prtct_rd_address6;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem0_prtct_rd_address7;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem0_prtct_rd_address8;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem0_prtct_wr_address;	// From EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		ete2mem1_prtct_info;		// From EVEREST_TOP of everest.v
   wire 				ete2mem1_prtct_info_wr_en;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem1_prtct_rd_address1;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem1_prtct_rd_address2;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem1_prtct_rd_address3;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem1_prtct_rd_address4;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem1_prtct_rd_address5;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem1_prtct_rd_address6;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem1_prtct_rd_address7;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem1_prtct_rd_address8;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem1_prtct_wr_address;	// From EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		ete2mem2_prtct_info;		// From EVEREST_TOP of everest.v
   wire 				ete2mem2_prtct_info_wr_en;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem2_prtct_rd_address1;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem2_prtct_rd_address2;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem2_prtct_rd_address3;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem2_prtct_rd_address4;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem2_prtct_rd_address5;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem2_prtct_rd_address6;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem2_prtct_rd_address7;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem2_prtct_rd_address8;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem2_prtct_wr_address;	// From EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		ete2mem3_prtct_info;		// From EVEREST_TOP of everest.v
   wire 				ete2mem3_prtct_info_wr_en;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem3_prtct_rd_address1;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem3_prtct_rd_address2;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem3_prtct_rd_address3;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem3_prtct_rd_address4;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem3_prtct_rd_address5;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem3_prtct_rd_address6;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem3_prtct_rd_address7;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem3_prtct_rd_address8;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem3_prtct_wr_address;	// From EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		ete2mem4_prtct_info;		// From EVEREST_TOP of everest.v
   wire 				ete2mem4_prtct_info_wr_en;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem4_prtct_rd_address1;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem4_prtct_rd_address2;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem4_prtct_rd_address3;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem4_prtct_rd_address4;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem4_prtct_rd_address5;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem4_prtct_rd_address6;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem4_prtct_rd_address7;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem4_prtct_rd_address8;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem4_prtct_wr_address;	// From EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		ete2mem5_prtct_info;		// From EVEREST_TOP of everest.v
   wire 				ete2mem5_prtct_info_wr_en;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem5_prtct_rd_address1;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem5_prtct_rd_address2;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem5_prtct_rd_address3;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem5_prtct_rd_address4;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem5_prtct_rd_address5;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem5_prtct_rd_address6;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem5_prtct_rd_address7;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem5_prtct_rd_address8;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem5_prtct_wr_address;	// From EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		ete2mem6_prtct_info;		// From EVEREST_TOP of everest.v
   wire 				ete2mem6_prtct_info_wr_en;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem6_prtct_rd_address1;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem6_prtct_rd_address2;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem6_prtct_rd_address3;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem6_prtct_rd_address4;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem6_prtct_rd_address5;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem6_prtct_rd_address6;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem6_prtct_rd_address7;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem6_prtct_rd_address8;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem6_prtct_wr_address;	// From EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		ete2mem7_prtct_info;		// From EVEREST_TOP of everest.v
   wire 				ete2mem7_prtct_info_wr_en;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem7_prtct_rd_address1;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem7_prtct_rd_address2;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem7_prtct_rd_address3;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem7_prtct_rd_address4;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem7_prtct_rd_address5;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem7_prtct_rd_address6;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem7_prtct_rd_address7;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem7_prtct_rd_address8;	// From EVEREST_TOP of everest.v
   wire [`PRTCT_ADDR-1:0] 		ete2mem7_prtct_wr_address;	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_waddr0;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_waddr0;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_waddr1;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_waddr1;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_waddr2;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_waddr2;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_waddr3;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_waddr3;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_waddr4;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_waddr4;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_waddr5;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_waddr5;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_waddr6;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_waddr6;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_waddr7;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_waddr7;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		rcl2ram_wdata0;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ete2ram_wdata0;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		rcl2ram_wdata1;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ete2ram_wdata1;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		rcl2ram_wdata2;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ete2ram_wdata2;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		rcl2ram_wdata3;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ete2ram_wdata3;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		rcl2ram_wdata4;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ete2ram_wdata4;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		rcl2ram_wdata5;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ete2ram_wdata5;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		rcl2ram_wdata6;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ete2ram_wdata6;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		rcl2ram_wdata7;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ete2ram_wdata7;	 	// From EVEREST_TOP of everest.v
   wire 				rcl2ram_wr_en0;	 	// From EVEREST_TOP of everest.v
   wire 				ete2ram_wr_en0;	 	// From EVEREST_TOP of everest.v
   wire 				rcl2ram_wr_en1;	 	// From EVEREST_TOP of everest.v
   wire 				ete2ram_wr_en1;	 	// From EVEREST_TOP of everest.v
   wire 				rcl2ram_wr_en2;	 	// From EVEREST_TOP of everest.v
   wire 				ete2ram_wr_en2;	 	// From EVEREST_TOP of everest.v
   wire 				rcl2ram_wr_en3;	 	// From EVEREST_TOP of everest.v
   wire 				ete2ram_wr_en3;	 	// From EVEREST_TOP of everest.v
   wire 				rcl2ram_wr_en4;	 	// From EVEREST_TOP of everest.v
   wire 				ete2ram_wr_en4;	 	// From EVEREST_TOP of everest.v
   wire 				rcl2ram_wr_en5;	 	// From EVEREST_TOP of everest.v
   wire 				ete2ram_wr_en5;	 	// From EVEREST_TOP of everest.v
   wire 				rcl2ram_wr_en6;	 	// From EVEREST_TOP of everest.v
   wire 				ete2ram_wr_en6;	 	// From EVEREST_TOP of everest.v
   wire 				rcl2ram_wr_en7;	 	// From EVEREST_TOP of everest.v
   wire 				ete2ram_wr_en7;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_raddr0;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_raddr0;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_raddr1;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_raddr1;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_raddr2;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_raddr2;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_raddr3;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_raddr3;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_raddr4;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_raddr4;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_raddr5;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_raddr5;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_raddr6;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_raddr6;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		rcl2ram_raddr7;	 	// From EVEREST_TOP of everest.v
   wire [`LMU_RAM_PTR-1:0] 		ete2ram_raddr7;	 	// From EVEREST_TOP of everest.v
   wire 		   		rcl2ram_rd_en0;	 	// From EVEREST_TOP of everest.v
   wire 		   		ete2ram_rd_en0;	 	// From EVEREST_TOP of everest.v
   wire 		   		rcl2ram_rd_en1;	 	// From EVEREST_TOP of everest.v
   wire 		   		ete2ram_rd_en1;	 	// From EVEREST_TOP of everest.v
   wire 		   		rcl2ram_rd_en2;	 	// From EVEREST_TOP of everest.v
   wire 		   		ete2ram_rd_en2;	 	// From EVEREST_TOP of everest.v
   wire 		   		rcl2ram_rd_en3;	 	// From EVEREST_TOP of everest.v
   wire 		   		ete2ram_rd_en3;	 	// From EVEREST_TOP of everest.v
   wire 		   		rcl2ram_rd_en4;	 	// From EVEREST_TOP of everest.v
   wire 		   		ete2ram_rd_en4;	 	// From EVEREST_TOP of everest.v
   wire 		   		rcl2ram_rd_en5;	 	// From EVEREST_TOP of everest.v
   wire 		   		ete2ram_rd_en5;	 	// From EVEREST_TOP of everest.v
   wire 		   		rcl2ram_rd_en6;	 	// From EVEREST_TOP of everest.v
   wire 		   		ete2ram_rd_en6;	 	// From EVEREST_TOP of everest.v
   wire 		   		rcl2ram_rd_en7;	 	// From EVEREST_TOP of everest.v
   wire 		   		ete2ram_rd_en7;	 	// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2rcl_rdata0;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2ete_rdata0;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2rcl_rdata1;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2ete_rdata1;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2rcl_rdata2;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2ete_rdata2;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2rcl_rdata3;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2ete_rdata3;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2rcl_rdata4;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2ete_rdata4;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2rcl_rdata5;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2ete_rdata5;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2rcl_rdata6;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2ete_rdata6;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2rcl_rdata7;		// To EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		ram2ete_rdata7;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct0_info1;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct0_info2;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct0_info3;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct0_info4;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct0_info5;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct0_info6;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct0_info7;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct0_info8;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct1_info1;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct1_info2;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct1_info3;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct1_info4;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct1_info5;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct1_info6;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct1_info7;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct1_info8;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct2_info1;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct2_info2;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct2_info3;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct2_info4;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct2_info5;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct2_info6;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct2_info7;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct2_info8;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct3_info1;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct3_info2;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct3_info3;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct3_info4;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct3_info5;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct3_info6;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct3_info7;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct3_info8;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct4_info1;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct4_info2;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct4_info3;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct4_info4;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct4_info5;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct4_info6;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct4_info7;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct4_info8;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct5_info1;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct5_info2;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct5_info3;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct5_info4;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct5_info5;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct5_info6;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct5_info7;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct5_info8;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct6_info1;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct6_info2;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct6_info3;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct6_info4;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct6_info5;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct6_info6;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct6_info7;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct6_info8;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct7_info1;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct7_info2;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct7_info3;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct7_info4;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct7_info5;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct7_info6;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct7_info7;		// To EVEREST_TOP of everest.v
   wire [`NVME_PRTCT_INFO-1:0] 		mem2ete_prtct7_info8;		// To EVEREST_TOP of everest.v
   wire [`NVME_QBA-1:0] 		cbaq2cqbaq_rdata;		// From CC_CQBAQ of lmu_cc_cqbaq.v
   wire [`NVME_DWIDTH-1:0] 		cdsmem2cl_rdata;		// From CDS_MEM of lmu_cds_mem.v
   wire [`LMU_CDS_MPTR-1:0] 		cl2cdsmem_raddr;		// From EVEREST_TOP of everest.v
   wire 				cl2cdsmem_rd;			// From EVEREST_TOP of everest.v
   wire [`LMU_CDS_MPTR-1:0] 		cl2cdsmem_waddr;		// From EVEREST_TOP of everest.v
   wire [`NVME_DWIDTH-1:0] 		cl2cdsmem_wdata;		// From EVEREST_TOP of everest.v
   wire [`NVME_BYTE_EN-1:0] 		cl2cdsmem_byte_en;		// From EVEREST_TOP of everest.v
   wire 				cl2cdsmem_wr;			// From EVEREST_TOP of everest.v
   wire [`NVME_ERRLP_PTR-1:0] 		cntrl2errpmem_rd_addr;		// From EVEREST_TOP of everest.v
   wire 				cntrl2errpmem_rd_en;		// From EVEREST_TOP of everest.v
   wire [`NVME_ERRLP_PTR-1:0] 		cntrl2errpmem_wr_addr;		// From EVEREST_TOP of everest.v
   wire [`LMU_LPB_DATA-1:0] 		cntrl2errpmem_wr_data;		// From EVEREST_TOP of everest.v
   wire 				cntrl2errpmem_wr_en;		// From EVEREST_TOP of everest.v
   wire [`LMU_LPB_FS_PTR-1:0] 		cntrl2frmsltlpmem_rd_addr;	// From EVEREST_TOP of everest.v
   wire 				cntrl2frmsltlpmem_rd_en;	// From EVEREST_TOP of everest.v
   wire [`LMU_LPB_FS_PTR-1:0] 		cntrl2frmsltlpmem_wr_addr;	// From EVEREST_TOP of everest.v
   wire [`LMU_LPB_DATA-1:0] 		cntrl2frmsltlpmem_wr_data;	// From EVEREST_TOP of everest.v
   wire 				cntrl2frmsltlpmem_wr_en;	// From EVEREST_TOP of everest.v
   wire [`NVME_CQB_WIDTH-1:0]    	cqb2mem_cmd_sq_data;		// From EVEREST_TOP of everest.v
   wire 			        cqb2mem_cmd_sq_wr_en;         	// From EVEREST_TOP of everest.v 
   wire 			        cqb2mem_cid_rd_en;         	// From EVEREST_TOP of everest.v 
   wire 			        cqb2mem_count_rd_en;         	// From EVEREST_TOP of everest.v 
   wire 			        cqb2mem_cmd_sq_rd_en;         	// From EVEREST_TOP of everest.v
   wire [`NVME_CQB_PTR-1:0]     	cqb2mem_cmd_sq_wr_addr;       	// From EVEREST_TOP of everest.v
   wire [`NVME_CQB_PTR-1:0]     	cqb2mem_cmd_sq_rd_addr;       	// From EVEREST_TOP of everest.v
   wire [`NVME_CQB_PTR-1:0]     	cqb2mem_count_rd_addr;       	// From EVEREST_TOP of everest.v
   wire [`NVME_CQB_PTR-1:0]     	cqb2mem_cid_rd_addr;       	// From EVEREST_TOP of everest.v
   wire [`NVME_QID-1:0] 		cqbaq2cbaq_raddr;		// From EVEREST_TOP of everest.v
   wire 				cqbaq2cbaq_rd;			// From EVEREST_TOP of everest.v
   wire [`NVME_QID-1:0] 		cqbaq2cbaq_waddr;		// From EVEREST_TOP of everest.v
   wire [`NVME_QBA-1:0] 		cqbaq2cbaq_wdata;		// From EVEREST_TOP of everest.v
   wire 				cqbaq2cbaq_wr;			// From EVEREST_TOP of everest.v
   wire [`NVME_INIT_PWIDTH-1:0] 	cru2crucmdq_raddr;		// From EVEREST_TOP of everest.v
   wire 				cru2crucmdq_rd;			// From EVEREST_TOP of everest.v
   wire [`NVME_INIT_PWIDTH-1:0] 	cru2crucmdq_waddr;		// From EVEREST_TOP of everest.v
   wire [`NVME_CMD_SIZE-1:0] 		cru2crucmdq_wdata;		// From EVEREST_TOP of everest.v
   wire 				cru2crucmdq_wr;			// From EVEREST_TOP of everest.v
   wire [`NVME_CMD_SIZE-1:0] 		crucmdq2cru_rdata;		// From INIT_CRU_CMDQ of lmu_init_cru_cmdq.v
   wire [`DEC_QM_BA-1:0] 		dec2qm_ba;			// From EVEREST_TOP of everest.v
   wire [`DEC_SQID-1:0] 		dec2qm_sqid;			// From EVEREST_TOP of everest.v
   wire 				dec2sqbaq_valid;		// From EVEREST_TOP of everest.v
   wire [`LMU_LPB_DATA-1:0] 		errpmem2cntrl_rd_data;		// From ERRLP of lmu_errlp_mem.v
   wire [`LMU_LPB_DATA-1:0] 		frmsltlpmem2cntrl_rd_data;	// From FRMSLTLP of lmu_frmsltlp_mem.v
   //wire [`INTR_PB_DWIDTH-1:0] 		intrpba_rd_data;		// From INTR_PBA_TBL of intr_pba_tbl.v
   //wire 				intrpba_rd_en;			// From EVEREST_TOP of everest.v
   //wire [`INTR_VC_WRD_PTR-1:0] 		intrpba_rd_ptr;			// From EVEREST_TOP of everest.v
   //wire [`INTR_VC_DWIDTH-1:0] 		intrpba_wr_data;		// From EVEREST_TOP of everest.v
   //wire 				intrpba_wr_en;			// From EVEREST_TOP of everest.v
   //wire [`INTR_VC_WRD_PTR-1:0] 		intrpba_wr_ptr;			// From EVEREST_TOP of everest.v
   wire [`NVME_CQB_WIDTH-1:0] 		mem2cqb_cmd_sq_data;		// From CMD_SQ_MEM of lmu_cmd_sq_mem.v
   wire [`NVME_CQB_WIDTH-1:0] 		mem2cqb_count_data;		// From SQ_CID_MEM of lmu_sq_cid_mem.v
   wire [`NVME_CQB_WIDTH-1:0] 		mem2cqb_sq_cid_data;		// From SQ_CID_MEM of lmu_sq_cid_mem.v
   wire [`NVME_INIT_PWIDTH-1:0] 	pmu2pmucmdq_raddr;		// From EVEREST_TOP of everest.v
   wire 				pmu2pmucmdq_rd;			// From EVEREST_TOP of everest.v
   wire [`NVME_INIT_PWIDTH-1:0] 	pmu2pmucmdq_waddr;		// From EVEREST_TOP of everest.v
   wire [`INIT_CMD_SIZE-1:0] 		pmu2pmucmdq_wdata;		// From EVEREST_TOP of everest.v
   wire 				pmu2pmucmdq_wr;			// From EVEREST_TOP of everest.v
   wire [`INIT_CMD_SIZE-1:0] 		pmucmdq2pmu_rdata;		// From INIT_PMU_CMDQ of lmu_init_pmu_cmdq.v
   wire [`QM_SQID-1:0] 			qm2sqbaq_sqid;			// From EVEREST_TOP of everest.v
   wire 				qm2sqbaq_sqid_valid;		// From EVEREST_TOP of everest.v
   wire [`RX_DWIDTH-1:0] 		rxnpq_rd_data;			// From RX_NPHDRQ of rx_nphdrq.v
   wire [`RX_BYTE_EN-1:0] 		rxnpq_be_rd_data;			// From RX_NPHDRQ of rx_nphdrq.v
   wire 				rxnpq_rd_en;			// From EVEREST_TOP of everest.v
   wire [`RX_NPHQ_RD_PTR-1:0] 		rxnpq_rd_ptr;			// From EVEREST_TOP of everest.v
   wire [`RX_DWIDTH-1:0] 		rxnpq_wr_data;			// From EVEREST_TOP of everest.v
   wire 				rxnpq_wr_en;			// From EVEREST_TOP of everest.v
   wire [`RX_NPHQ_WR_PTR-1:0] 		rxnpq_wr_ptr;			// From EVEREST_TOP of everest.v

   wire 				rxnpq_be_rd_en;			// From EVEREST_TOP of everest.v
   wire [`RX_NPHQ_RD_PTR-1:0] 		rxnpq_be_rd_ptr;		// From EVEREST_TOP of everest.v
   wire [`RX_BYTE_EN-1:0] 		rxnpq_be_wr_data;		// From EVEREST_TOP of everest.v
   wire 				rxnpq_be_wr_en;			// From EVEREST_TOP of everest.v
   wire [`RX_NPHQ_WR_PTR-1:0] 		rxnpq_be_wr_ptr;		// From EVEREST_TOP of everest.v

   wire [`RX_DWIDTH-1:0] 		rxpdb_rd_data;			// From RX_PDB of rx_pdb.v
   wire 				rxpdb_rd_en;			// From EVEREST_TOP of everest.v
   wire [`RX_PDB_RD_PTR-1:0] 		rxpdb_rd_ptr;			// From EVEREST_TOP of everest.v
   wire [`RX_DWIDTH-1:0] 		rxpdb_wr_data;			// From EVEREST_TOP of everest.v
   wire 				rxpdb_wr_en;			// From EVEREST_TOP of everest.v
   wire [`RX_PDB_WR_PTR-1:0] 		rxpdb_wr_ptr;			// From EVEREST_TOP of everest.v
   wire [`RX_DWIDTH-1:0] 		rxphdrq_rd_data;		// From RX_PHDRQ of rx_phdrq.v
   wire 				rxphdrq_rd_en;			// From EVEREST_TOP of everest.v
   wire [`RX_PHQ_RD_PTR-1:0] 		rxphdrq_rd_ptr;			// From EVEREST_TOP of everest.v
   wire [`RX_DWIDTH-1:0] 		rxphdrq_wr_data;		// From EVEREST_TOP of everest.v
   wire 				rxphdrq_wr_en;			// From EVEREST_TOP of everest.v
   wire [`RX_PHQ_WR_PTR-1:0] 		rxphdrq_wr_ptr;			// From EVEREST_TOP of everest.v
   wire [`QM_SQ_BA-1:0] 		sqbaq2qm_sqba;			// From SQBAQ of lmu_sqbaq.v
   wire [`TX_DWIDTH-1:0] 		txcmpldb_rd_data;		// From TX_CMPLDB of tx_cmpldb.v
   wire 				txcmpldb_rd_en;			// From EVEREST_TOP of everest.v
   wire [`TX_CMPLDB_WRD_PTR-1:0] 	txcmpldb_rd_ptr;		// From EVEREST_TOP of everest.v
   wire [`RX_DWIDTH-1:0] 		txcmpldb_wr_data;		// From EVEREST_TOP of everest.v
   wire 				txcmpldb_wr_en;			// From EVEREST_TOP of everest.v
   wire [`TX_CMPLDB_WRD_PTR-1:0] 	txcmpldb_wr_ptr;		// From EVEREST_TOP of everest.v
   wire [`TX_BYTE_EN-1:0] 		txcmpldb_be_rd_data;		// From TX_CMPLDB of tx_cmpldb_be.v
   wire 				txcmpldb_be_rd_en;		// From EVEREST_TOP of everest.v
   wire [`TX_CMPLDB_WRD_PTR-1:0] 	txcmpldb_be_rd_ptr;		// From EVEREST_TOP of everest.v
   wire [`TX_BYTE_EN-1:0] 		txcmpldb_be_wr_data;		// From EVEREST_TOP of everest.v
   wire 				txcmpldb_be_wr_en;		// From EVEREST_TOP of everest.v
   wire [`TX_CMPLDB_WRD_PTR-1:0] 	txcmpldb_be_wr_ptr;		// From EVEREST_TOP of everest.v
   wire [`TX_HDR_WIDTH-1:0] 		txcmplhq_rd_data;		// From TX_CMPLHQ of tx_cmplhq.v
   wire 				txcmplhq_rd_en;			// From EVEREST_TOP of everest.v
   wire [`TX_CMPLHQ_WRD_PTR-1:0] 	txcmplhq_rd_ptr;		// From EVEREST_TOP of everest.v
   wire [`TX_HDR_WIDTH-1:0] 		txcmplhq_wr_data;		// From EVEREST_TOP of everest.v
   wire 				txcmplhq_wr_en;			// From EVEREST_TOP of everest.v
   wire [`TX_CMPLHQ_WRD_PTR-1:0] 	txcmplhq_wr_ptr;		// From EVEREST_TOP of everest.v
   wire [`TX_HDR_BE-1:0] 		txcmplhq_be_rd_data;		// From TX_CMPLHQ of tx_cmplhq.v
   wire 				txcmplhq_be_rd_en;		// From EVEREST_TOP of everest.v
   wire [`TX_CMPLHQ_WRD_PTR-1:0] 	txcmplhq_be_rd_ptr;		// From EVEREST_TOP of everest.v
   wire [`TX_HDR_BE-1:0] 		txcmplhq_be_wr_data;		// From EVEREST_TOP of everest.v
   wire 				txcmplhq_be_wr_en;		// From EVEREST_TOP of everest.v
   wire [`TX_CMPLHQ_WRD_PTR-1:0] 	txcmplhq_be_wr_ptr;		// From EVEREST_TOP of everest.v
   wire [`TX_NPHQ_WIDTH-1:0] 		txnphq_rd_data;			// From TX_NPHQ of tx_nphq.v
   wire 				txnphq_rd_en;			// From EVEREST_TOP of everest.v
   wire [`TX_NPHQ_WRD_PTR-1:0] 		txnphq_rd_ptr;			// From EVEREST_TOP of everest.v
   wire [`TX_NPHQ_WIDTH-1:0] 		txnphq_wr_data;			// From EVEREST_TOP of everest.v
   wire 				txnphq_wr_en;			// From EVEREST_TOP of everest.v
   wire [`TX_NPHQ_WRD_PTR-1:0] 		txnphq_wr_ptr;			// From EVEREST_TOP of everest.v
   wire [`TX_DWIDTH-1:0] 		txpdb_rd_data;			// From TX_PDB of tx_pdb.v
   wire 				txpdb_rd_en;			// From EVEREST_TOP of everest.v
   wire [`TX_PDB_WRD_PTR-1:0] 		txpdb_rd_ptr;			// From EVEREST_TOP of everest.v
   wire [`TX_DWIDTH-1:0] 		txpdb_wr_data;			// From EVEREST_TOP of everest.v
   wire 				txpdb_wr_en;			// From EVEREST_TOP of everest.v
   wire [`TX_PDB_WRD_PTR-1:0] 		txpdb_wr_ptr;			// From EVEREST_TOP of everest.v

   wire [`TX_BYTE_EN-1:0] 		txpdb_be_rd_data;			// From TX_PDB of tx_pdb.v
   wire 				txpdb_be_rd_en;			// From EVEREST_TOP of everest.v
   wire [`TX_PDB_WRD_PTR-1:0] 		txpdb_be_rd_ptr;			// From EVEREST_TOP of everest.v
   wire [`TX_BYTE_EN-1:0] 		txpdb_be_wr_data;			// From EVEREST_TOP of everest.v
   wire 				txpdb_be_wr_en;			// From EVEREST_TOP of everest.v
   wire [`TX_PDB_WRD_PTR-1:0] 		txpdb_be_wr_ptr;			// From EVEREST_TOP of everest.v

   wire [`TX_PHQ_WIDTH-1:0] 		txphq_rd_data;			// From TX_PHDRQ of tx_phq.v
   wire 				txphq_rd_en;			// From EVEREST_TOP of everest.v
   wire [`TX_PHQ_WRD_PTR-1:0] 		txphq_rd_ptr;			// From EVEREST_TOP of everest.v
   wire [`TX_PHQ_WIDTH-1:0] 		txphq_wr_data;			// From EVEREST_TOP of everest.v
   wire 				txphq_wr_en;			// From EVEREST_TOP of everest.v
   wire [`TX_PHQ_WRD_PTR-1:0] 		txphq_wr_ptr;			// From EVEREST_TOP of everest.v
   wire [`INTR_DWIDTH-1:0] 		ivtbl2intr_rdata_0;    		// From EVEREST_TOP of everest.v 	 
   wire [`INTR_DWIDTH-1:0] 		ivtbl2intr_rdata_1;    		// From EVEREST_TOP of everest.v 	 
   wire [`INTR_DWIDTH-1:0] 		ivtbl2intr_rdata_2;    		// From EVEREST_TOP of everest.v 	 
   wire [`INTR_DWIDTH-1:0] 		ivtbl2intr_rdata_3;    		// From EVEREST_TOP of everest.v 	 
   wire [3:0] 				intrvtbl_wr_en;         	// From EVEREST_TOP of everest.v
   wire [`INTR_VC_WRD_PTR-1:0] 		intrvtbl_wr_ptr [3:0]; 		// From EVEREST_TOP of everest.v
   wire [`INTR_DWIDTH-1:0] 		intrvtbl_wr_data [3:0];		// From EVEREST_TOP of everest.v
   wire [`INTR_BYTE_EN-1:0] 		intrvtbl_wr_data_be [3:0];	// From EVEREST_TOP of everest.v
   wire 				imem2ivtbl_wr_en_0;  		// From EVEREST_TOP of everest.v  	
   wire 				imem2ivtbl_wr_en_1;  		// From EVEREST_TOP of everest.v  	
   wire 				imem2ivtbl_wr_en_2;  		// From EVEREST_TOP of everest.v  	
   wire 				imem2ivtbl_wr_en_3;  		// From EVEREST_TOP of everest.v  	
   wire [`INTR_VC_WRD_PTR-1:0] 		imem2ivtbl_wptr_0; 		// From EVEREST_TOP of everest.v  	
   wire [`INTR_VC_WRD_PTR-1:0] 		imem2ivtbl_wptr_1; 		// From EVEREST_TOP of everest.v  	
   wire [`INTR_VC_WRD_PTR-1:0] 		imem2ivtbl_wptr_2; 		// From EVEREST_TOP of everest.v  	
   wire [`INTR_VC_WRD_PTR-1:0] 		imem2ivtbl_wptr_3; 		// From EVEREST_TOP of everest.v  	
   wire [`INTR_DWIDTH-1:0] 		imem2ivtbl_wdata_0;		// From EVEREST_TOP of everest.v		
   wire [`INTR_DWIDTH-1:0] 		imem2ivtbl_wdata_1;		// From EVEREST_TOP of everest.v		
   wire [`INTR_DWIDTH-1:0] 		imem2ivtbl_wdata_2;		// From EVEREST_TOP of everest.v		
   wire [`INTR_DWIDTH-1:0] 		imem2ivtbl_wdata_3;		// From EVEREST_TOP of everest.v		
   wire [`INTR_BYTE_EN-1:0] 		imem2ivtbl_data_be_0;		// From EVEREST_TOP of everest.v
   wire [`INTR_BYTE_EN-1:0] 		imem2ivtbl_data_be_1;		// From EVEREST_TOP of everest.v
   wire [`INTR_BYTE_EN-1:0] 		imem2ivtbl_data_be_2;		// From EVEREST_TOP of everest.v
   wire [`INTR_BYTE_EN-1:0] 		imem2ivtbl_data_be_3;		// From EVEREST_TOP of everest.v
   wire [3:0] 				intrvtbl_rd_en;         	// From EVEREST_TOP of everest.v
   wire [`INTR_VC_WRD_PTR-1:0] 		intrvtbl_rd_ptr [3:0]; 		// From EVEREST_TOP of everest.v 
   wire [`INTR_DWIDTH-1:0] 		intrvtbl_rd_data [3:0];		// From EVEREST_TOP of everest.v 
   wire 				intr2ivtbl_rd_en_0;  		// From EVEREST_TOP of everest.v
   wire 				intr2ivtbl_rd_en_1;  		// From EVEREST_TOP of everest.v
   wire 				intr2ivtbl_rd_en_2;  		// From EVEREST_TOP of everest.v
   wire 				intr2ivtbl_rd_en_3;  		// From EVEREST_TOP of everest.v
   wire [`INTR_VC_WRD_PTR-1:0] 		intr2ivtbl_rptr_0; 		// From EVEREST_TOP of everest.v
   wire [`INTR_VC_WRD_PTR-1:0] 		intr2ivtbl_rptr_1; 		// From EVEREST_TOP of everest.v
   wire [`INTR_VC_WRD_PTR-1:0] 		intr2ivtbl_rptr_2; 		// From EVEREST_TOP of everest.v
   wire [`INTR_VC_WRD_PTR-1:0] 		intr2ivtbl_rptr_3; 		// From EVEREST_TOP of everest.v
   wire 				intrvtbl_wr_clk;
   wire 				intrvtbl_rd_clk;
   wire 				intrvtbl_rst_n;
   //wire 				intrpba_wr_clk;
   //wire 				intrpba_rd_clk;
   //wire 				intrpba_rst_n;
   wire [`NVME_NUM_NS-1:0]		nscl2nsmem_wr;
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr1;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr2;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr3;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr4;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr5;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr6;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr7;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr8;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr9;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr10;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr11;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr12;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr13;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr14;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr15;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		nscl2nsmem_waddr16;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata1;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata2;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata3;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata4;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata5;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata6;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata7;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata8;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata9;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata10;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata11;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata12;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata13;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata14;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata15;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		nscl2nsmem_wdata16;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en1;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en2;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en3;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en4;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en5;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en6;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en7;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en8;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en9;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en10;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en11;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en12;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en13;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en14;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en15;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		nscl2nsmem_byte_en16;		// From MEM_UNIT of lmu.v
   wire [`NVME_NUM_NS-1:0]        	nscl2nsmem_rd;			// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr1;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr2;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr3;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr4;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr5;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr6;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr7;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr8;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr9;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr10;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr11;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr12;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr13;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr14;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr15;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]      	nscl2nsmem_raddr16;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata1; 		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata2; 		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata3; 		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata4; 		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata5; 		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata6; 		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata7; 		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata8; 		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata9; 		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata10;		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata11;		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata12;		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata13;		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata14;		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata15;		// To MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	nsmem2nscl_rdata16;	
   wire                        		stnscl2stnsmem_wr;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		stnscl2stnsmem_waddr;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0]    		stnscl2stnsmem_wdata;		// From MEM_UNIT of lmu.v
   wire [`NVME_BYTE_EN-1:0]   		stnscl2stnsmem_byte_en;		// From MEM_UNIT of lmu.v
   wire     			    	stnscl2stnsmem_rd;		// From MEM_UNIT of lmu.v
   wire [`LMU_NSDS_MPTR-1:0]  		stnscl2stnsmem_raddr;		// From MEM_UNIT of lmu.v
   wire [`NVME_DWIDTH-1:0] 	    	stnsmem2stnscl_rdata; 		// To MEM_UNIT of lmu.v
   wire			     		sch2fb_wr_en;			// From NVME_CORE of nvme_core.v
   wire [`NVME_QID-1:0]	     		sch2fb_waddr;			// From NVME_CORE of nvme_core.v
   wire [`NVME_CMD_SIZE-1:0]	     	sch2fb_wdata;			// From NVME_CORE of nvme_core.v
   wire			     		sch2fb_rd_en;			// From NVME_CORE of nvme_core.v
   wire [`NVME_QID-1:0]	     		sch2fb_raddr;			// From NVME_CORE of nvme_core.v
   wire [`NVME_CMD_SIZE-1:0]		fb2sch_rdata;			//

   wire					rst_n;

  endmodule // dut_wrapper

