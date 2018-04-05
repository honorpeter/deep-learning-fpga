// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _mnist_HH_
#define _mnist_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "unpacker.h"
#include "linear_activation.h"
#include "relu.h"
#include "linear_activation_1.h"
#include "packer.h"
#include "fifo_w8_d1_A.h"
#include "fifo_w32_d1_A.h"
#include "start_for_linear_mb6.h"
#include "start_for_relu_U0.h"
#include "start_for_linear_ncg.h"
#include "start_for_packer_U0.h"

namespace ap_rtl {

struct mnist : public sc_module {
    // Port declarations 20
    sc_in< sc_lv<8> > sdata_in_TDATA;
    sc_in< sc_lv<1> > sdata_in_TKEEP;
    sc_in< sc_lv<1> > sdata_in_TSTRB;
    sc_in< sc_lv<1> > sdata_in_TUSER;
    sc_in< sc_lv<1> > sdata_in_TLAST;
    sc_in< sc_lv<1> > sdata_in_TID;
    sc_in< sc_lv<1> > sdata_in_TDEST;
    sc_out< sc_lv<32> > sdata_out_TDATA;
    sc_out< sc_lv<4> > sdata_out_TKEEP;
    sc_out< sc_lv<4> > sdata_out_TSTRB;
    sc_out< sc_lv<1> > sdata_out_TUSER;
    sc_out< sc_lv<1> > sdata_out_TLAST;
    sc_out< sc_lv<1> > sdata_out_TID;
    sc_out< sc_lv<1> > sdata_out_TDEST;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > sdata_in_TVALID;
    sc_out< sc_logic > sdata_in_TREADY;
    sc_out< sc_logic > sdata_out_TVALID;
    sc_in< sc_logic > sdata_out_TREADY;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    mnist(sc_module_name name);
    SC_HAS_PROCESS(mnist);

    ~mnist();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    unpacker* unpacker_U0;
    linear_activation* linear_activation_U0;
    relu* relu_U0;
    linear_activation_1* linear_activation_1_U0;
    packer* packer_U0;
    fifo_w8_d1_A* data_in_V_V_U;
    fifo_w32_d1_A* l1_result_V_V_U;
    fifo_w32_d1_A* l1_relu_V_V_U;
    fifo_w32_d1_A* data_out_V_V_U;
    start_for_linear_mb6* start_for_linear_mb6_U;
    start_for_relu_U0* start_for_relu_U0_U;
    start_for_linear_ncg* start_for_linear_ncg_U;
    start_for_packer_U0* start_for_packer_U0_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > unpacker_U0_ap_start;
    sc_signal< sc_logic > unpacker_U0_ap_done;
    sc_signal< sc_logic > unpacker_U0_ap_continue;
    sc_signal< sc_logic > unpacker_U0_ap_idle;
    sc_signal< sc_logic > unpacker_U0_ap_ready;
    sc_signal< sc_logic > unpacker_U0_start_out;
    sc_signal< sc_logic > unpacker_U0_start_write;
    sc_signal< sc_logic > unpacker_U0_sdata_in_TREADY;
    sc_signal< sc_lv<8> > unpacker_U0_stream_out_V_V_din;
    sc_signal< sc_logic > unpacker_U0_stream_out_V_V_write;
    sc_signal< sc_logic > linear_activation_U0_ap_start;
    sc_signal< sc_logic > linear_activation_U0_ap_done;
    sc_signal< sc_logic > linear_activation_U0_ap_continue;
    sc_signal< sc_logic > linear_activation_U0_ap_idle;
    sc_signal< sc_logic > linear_activation_U0_ap_ready;
    sc_signal< sc_logic > linear_activation_U0_start_out;
    sc_signal< sc_logic > linear_activation_U0_start_write;
    sc_signal< sc_logic > linear_activation_U0_data_in_V_V_read;
    sc_signal< sc_lv<32> > linear_activation_U0_data_out_V_V_din;
    sc_signal< sc_logic > linear_activation_U0_data_out_V_V_write;
    sc_signal< sc_logic > relu_U0_ap_start;
    sc_signal< sc_logic > relu_U0_ap_done;
    sc_signal< sc_logic > relu_U0_ap_continue;
    sc_signal< sc_logic > relu_U0_ap_idle;
    sc_signal< sc_logic > relu_U0_ap_ready;
    sc_signal< sc_logic > relu_U0_start_out;
    sc_signal< sc_logic > relu_U0_start_write;
    sc_signal< sc_logic > relu_U0_data_in_V_V_read;
    sc_signal< sc_lv<32> > relu_U0_data_out_V_V_din;
    sc_signal< sc_logic > relu_U0_data_out_V_V_write;
    sc_signal< sc_logic > linear_activation_1_U0_ap_start;
    sc_signal< sc_logic > linear_activation_1_U0_ap_done;
    sc_signal< sc_logic > linear_activation_1_U0_ap_continue;
    sc_signal< sc_logic > linear_activation_1_U0_ap_idle;
    sc_signal< sc_logic > linear_activation_1_U0_ap_ready;
    sc_signal< sc_logic > linear_activation_1_U0_start_out;
    sc_signal< sc_logic > linear_activation_1_U0_start_write;
    sc_signal< sc_logic > linear_activation_1_U0_data_in_V_V_read;
    sc_signal< sc_lv<32> > linear_activation_1_U0_data_out_V_V_din;
    sc_signal< sc_logic > linear_activation_1_U0_data_out_V_V_write;
    sc_signal< sc_logic > packer_U0_ap_start;
    sc_signal< sc_logic > packer_U0_ap_done;
    sc_signal< sc_logic > packer_U0_ap_continue;
    sc_signal< sc_logic > packer_U0_ap_idle;
    sc_signal< sc_logic > packer_U0_ap_ready;
    sc_signal< sc_logic > packer_U0_stream_in_V_V_read;
    sc_signal< sc_lv<32> > packer_U0_sdata_out_TDATA;
    sc_signal< sc_logic > packer_U0_sdata_out_TVALID;
    sc_signal< sc_lv<4> > packer_U0_sdata_out_TKEEP;
    sc_signal< sc_lv<4> > packer_U0_sdata_out_TSTRB;
    sc_signal< sc_lv<1> > packer_U0_sdata_out_TUSER;
    sc_signal< sc_lv<1> > packer_U0_sdata_out_TLAST;
    sc_signal< sc_lv<1> > packer_U0_sdata_out_TID;
    sc_signal< sc_lv<1> > packer_U0_sdata_out_TDEST;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > data_in_V_V_full_n;
    sc_signal< sc_lv<8> > data_in_V_V_dout;
    sc_signal< sc_logic > data_in_V_V_empty_n;
    sc_signal< sc_logic > l1_result_V_V_full_n;
    sc_signal< sc_lv<32> > l1_result_V_V_dout;
    sc_signal< sc_logic > l1_result_V_V_empty_n;
    sc_signal< sc_logic > l1_relu_V_V_full_n;
    sc_signal< sc_lv<32> > l1_relu_V_V_dout;
    sc_signal< sc_logic > l1_relu_V_V_empty_n;
    sc_signal< sc_logic > data_out_V_V_full_n;
    sc_signal< sc_lv<32> > data_out_V_V_dout;
    sc_signal< sc_logic > data_out_V_V_empty_n;
    sc_signal< sc_lv<1> > start_for_linear_activation_U0_din;
    sc_signal< sc_logic > start_for_linear_activation_U0_full_n;
    sc_signal< sc_lv<1> > start_for_linear_activation_U0_dout;
    sc_signal< sc_logic > start_for_linear_activation_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_relu_U0_din;
    sc_signal< sc_logic > start_for_relu_U0_full_n;
    sc_signal< sc_lv<1> > start_for_relu_U0_dout;
    sc_signal< sc_logic > start_for_relu_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_linear_activation_1_U0_din;
    sc_signal< sc_logic > start_for_linear_activation_1_U0_full_n;
    sc_signal< sc_lv<1> > start_for_linear_activation_1_U0_dout;
    sc_signal< sc_logic > start_for_linear_activation_1_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_packer_U0_din;
    sc_signal< sc_logic > start_for_packer_U0_full_n;
    sc_signal< sc_lv<1> > start_for_packer_U0_dout;
    sc_signal< sc_logic > start_for_packer_U0_empty_n;
    sc_signal< sc_logic > packer_U0_start_full_n;
    sc_signal< sc_logic > packer_U0_start_write;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_continue();
    void thread_linear_activation_1_U0_ap_continue();
    void thread_linear_activation_1_U0_ap_start();
    void thread_linear_activation_U0_ap_continue();
    void thread_linear_activation_U0_ap_start();
    void thread_packer_U0_ap_continue();
    void thread_packer_U0_ap_start();
    void thread_packer_U0_start_full_n();
    void thread_packer_U0_start_write();
    void thread_relu_U0_ap_continue();
    void thread_relu_U0_ap_start();
    void thread_sdata_in_TREADY();
    void thread_sdata_out_TDATA();
    void thread_sdata_out_TDEST();
    void thread_sdata_out_TID();
    void thread_sdata_out_TKEEP();
    void thread_sdata_out_TLAST();
    void thread_sdata_out_TSTRB();
    void thread_sdata_out_TUSER();
    void thread_sdata_out_TVALID();
    void thread_start_for_linear_activation_1_U0_din();
    void thread_start_for_linear_activation_U0_din();
    void thread_start_for_packer_U0_din();
    void thread_start_for_relu_U0_din();
    void thread_unpacker_U0_ap_continue();
    void thread_unpacker_U0_ap_start();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif