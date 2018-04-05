#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("m_axi_mem_V_AWVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_mem_V_AWREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_mem_V_AWADDR", 32, hls_out, 0, "m_axi", "ADDR", 1),
	Port_Property("m_axi_mem_V_AWID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_mem_V_AWLEN", 8, hls_out, 0, "m_axi", "LEN", 1),
	Port_Property("m_axi_mem_V_AWSIZE", 3, hls_out, 0, "m_axi", "SIZE", 1),
	Port_Property("m_axi_mem_V_AWBURST", 2, hls_out, 0, "m_axi", "BURST", 1),
	Port_Property("m_axi_mem_V_AWLOCK", 2, hls_out, 0, "m_axi", "LOCK", 1),
	Port_Property("m_axi_mem_V_AWCACHE", 4, hls_out, 0, "m_axi", "CACHE", 1),
	Port_Property("m_axi_mem_V_AWPROT", 3, hls_out, 0, "m_axi", "PROT", 1),
	Port_Property("m_axi_mem_V_AWQOS", 4, hls_out, 0, "m_axi", "QOS", 1),
	Port_Property("m_axi_mem_V_AWREGION", 4, hls_out, 0, "m_axi", "REGION", 1),
	Port_Property("m_axi_mem_V_AWUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_mem_V_WVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_mem_V_WREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_mem_V_WDATA", 32, hls_out, 0, "m_axi", "DATA", 1),
	Port_Property("m_axi_mem_V_WSTRB", 4, hls_out, 0, "m_axi", "STRB", 1),
	Port_Property("m_axi_mem_V_WLAST", 1, hls_out, 0, "m_axi", "LAST", 1),
	Port_Property("m_axi_mem_V_WID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_mem_V_WUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_mem_V_ARVALID", 1, hls_out, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_mem_V_ARREADY", 1, hls_in, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_mem_V_ARADDR", 32, hls_out, 0, "m_axi", "ADDR", 1),
	Port_Property("m_axi_mem_V_ARID", 1, hls_out, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_mem_V_ARLEN", 8, hls_out, 0, "m_axi", "LEN", 1),
	Port_Property("m_axi_mem_V_ARSIZE", 3, hls_out, 0, "m_axi", "SIZE", 1),
	Port_Property("m_axi_mem_V_ARBURST", 2, hls_out, 0, "m_axi", "BURST", 1),
	Port_Property("m_axi_mem_V_ARLOCK", 2, hls_out, 0, "m_axi", "LOCK", 1),
	Port_Property("m_axi_mem_V_ARCACHE", 4, hls_out, 0, "m_axi", "CACHE", 1),
	Port_Property("m_axi_mem_V_ARPROT", 3, hls_out, 0, "m_axi", "PROT", 1),
	Port_Property("m_axi_mem_V_ARQOS", 4, hls_out, 0, "m_axi", "QOS", 1),
	Port_Property("m_axi_mem_V_ARREGION", 4, hls_out, 0, "m_axi", "REGION", 1),
	Port_Property("m_axi_mem_V_ARUSER", 1, hls_out, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_mem_V_RVALID", 1, hls_in, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_mem_V_RREADY", 1, hls_out, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_mem_V_RDATA", 32, hls_in, 0, "m_axi", "DATA", 1),
	Port_Property("m_axi_mem_V_RLAST", 1, hls_in, 0, "m_axi", "LAST", 1),
	Port_Property("m_axi_mem_V_RID", 1, hls_in, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_mem_V_RUSER", 1, hls_in, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_mem_V_RRESP", 2, hls_in, 0, "m_axi", "RESP", 1),
	Port_Property("m_axi_mem_V_BVALID", 1, hls_in, 0, "m_axi", "VALID", 1),
	Port_Property("m_axi_mem_V_BREADY", 1, hls_out, 0, "m_axi", "READY", 1),
	Port_Property("m_axi_mem_V_BRESP", 2, hls_in, 0, "m_axi", "RESP", 1),
	Port_Property("m_axi_mem_V_BID", 1, hls_in, 0, "m_axi", "ID", 1),
	Port_Property("m_axi_mem_V_BUSER", 1, hls_in, 0, "m_axi", "USER", 1),
	Port_Property("m_axi_out_V_AWVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_out_V_AWREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_out_V_AWADDR", 32, hls_out, 1, "m_axi", "ADDR", 1),
	Port_Property("m_axi_out_V_AWID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_out_V_AWLEN", 8, hls_out, 1, "m_axi", "LEN", 1),
	Port_Property("m_axi_out_V_AWSIZE", 3, hls_out, 1, "m_axi", "SIZE", 1),
	Port_Property("m_axi_out_V_AWBURST", 2, hls_out, 1, "m_axi", "BURST", 1),
	Port_Property("m_axi_out_V_AWLOCK", 2, hls_out, 1, "m_axi", "LOCK", 1),
	Port_Property("m_axi_out_V_AWCACHE", 4, hls_out, 1, "m_axi", "CACHE", 1),
	Port_Property("m_axi_out_V_AWPROT", 3, hls_out, 1, "m_axi", "PROT", 1),
	Port_Property("m_axi_out_V_AWQOS", 4, hls_out, 1, "m_axi", "QOS", 1),
	Port_Property("m_axi_out_V_AWREGION", 4, hls_out, 1, "m_axi", "REGION", 1),
	Port_Property("m_axi_out_V_AWUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_out_V_WVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_out_V_WREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_out_V_WDATA", 32, hls_out, 1, "m_axi", "DATA", 1),
	Port_Property("m_axi_out_V_WSTRB", 4, hls_out, 1, "m_axi", "STRB", 1),
	Port_Property("m_axi_out_V_WLAST", 1, hls_out, 1, "m_axi", "LAST", 1),
	Port_Property("m_axi_out_V_WID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_out_V_WUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_out_V_ARVALID", 1, hls_out, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_out_V_ARREADY", 1, hls_in, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_out_V_ARADDR", 32, hls_out, 1, "m_axi", "ADDR", 1),
	Port_Property("m_axi_out_V_ARID", 1, hls_out, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_out_V_ARLEN", 8, hls_out, 1, "m_axi", "LEN", 1),
	Port_Property("m_axi_out_V_ARSIZE", 3, hls_out, 1, "m_axi", "SIZE", 1),
	Port_Property("m_axi_out_V_ARBURST", 2, hls_out, 1, "m_axi", "BURST", 1),
	Port_Property("m_axi_out_V_ARLOCK", 2, hls_out, 1, "m_axi", "LOCK", 1),
	Port_Property("m_axi_out_V_ARCACHE", 4, hls_out, 1, "m_axi", "CACHE", 1),
	Port_Property("m_axi_out_V_ARPROT", 3, hls_out, 1, "m_axi", "PROT", 1),
	Port_Property("m_axi_out_V_ARQOS", 4, hls_out, 1, "m_axi", "QOS", 1),
	Port_Property("m_axi_out_V_ARREGION", 4, hls_out, 1, "m_axi", "REGION", 1),
	Port_Property("m_axi_out_V_ARUSER", 1, hls_out, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_out_V_RVALID", 1, hls_in, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_out_V_RREADY", 1, hls_out, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_out_V_RDATA", 32, hls_in, 1, "m_axi", "DATA", 1),
	Port_Property("m_axi_out_V_RLAST", 1, hls_in, 1, "m_axi", "LAST", 1),
	Port_Property("m_axi_out_V_RID", 1, hls_in, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_out_V_RUSER", 1, hls_in, 1, "m_axi", "USER", 1),
	Port_Property("m_axi_out_V_RRESP", 2, hls_in, 1, "m_axi", "RESP", 1),
	Port_Property("m_axi_out_V_BVALID", 1, hls_in, 1, "m_axi", "VALID", 1),
	Port_Property("m_axi_out_V_BREADY", 1, hls_out, 1, "m_axi", "READY", 1),
	Port_Property("m_axi_out_V_BRESP", 2, hls_in, 1, "m_axi", "RESP", 1),
	Port_Property("m_axi_out_V_BID", 1, hls_in, 1, "m_axi", "ID", 1),
	Port_Property("m_axi_out_V_BUSER", 1, hls_in, 1, "m_axi", "USER", 1),
	Port_Property("s_axi_AXILiteS_AWVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_AWREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_AWADDR", 6, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_WVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_WREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_WDATA", 32, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_WSTRB", 4, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_ARVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_ARREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_ARADDR", 6, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_RVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_RREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_RDATA", 32, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_RRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_BVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_BREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_AXILiteS_BRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("interrupt", 1, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "neural_network";
