// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _relu_HH_
#define _relu_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct relu : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<32> > data_in_V_V_dout;
    sc_in< sc_logic > data_in_V_V_empty_n;
    sc_out< sc_logic > data_in_V_V_read;
    sc_out< sc_lv<32> > data_out_V_V_din;
    sc_in< sc_logic > data_out_V_V_full_n;
    sc_out< sc_logic > data_out_V_V_write;


    // Module declarations
    relu(sc_module_name name);
    SC_HAS_PROCESS(relu);

    ~relu();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > data_in_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_fu_78_p2;
    sc_signal< sc_logic > data_out_V_V_blk_n;
    sc_signal< sc_lv<1> > tmp_fu_90_p2;
    sc_signal< sc_lv<7> > ii_1_fu_84_p2;
    sc_signal< bool > ap_predicate_op14_write_state2;
    sc_signal< bool > ap_predicate_op16_write_state2;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<7> > ii_reg_67;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    sc_signal< bool > ap_condition_81;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_block_state1();
    void thread_ap_block_state2();
    void thread_ap_condition_81();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_predicate_op14_write_state2();
    void thread_ap_predicate_op16_write_state2();
    void thread_ap_ready();
    void thread_data_in_V_V_blk_n();
    void thread_data_in_V_V_read();
    void thread_data_out_V_V_blk_n();
    void thread_data_out_V_V_din();
    void thread_data_out_V_V_write();
    void thread_exitcond_fu_78_p2();
    void thread_ii_1_fu_84_p2();
    void thread_internal_ap_ready();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_fu_90_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
