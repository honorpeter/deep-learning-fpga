// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _linear_activation_1_HH_
#define _linear_activation_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "get_result.h"
#include "multiply_accumulate.h"
#include "mnist_edp_mux_104hbi.h"
#include "linear_activationfYi.h"
#include "linear_activationg8j.h"

namespace ap_rtl {

struct linear_activation_1 : public sc_module {
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
    sc_in< sc_lv<16> > data_in_V_V_dout;
    sc_in< sc_logic > data_in_V_V_empty_n;
    sc_out< sc_logic > data_in_V_V_read;
    sc_out< sc_lv<16> > data_out_V_V_din;
    sc_in< sc_logic > data_out_V_V_full_n;
    sc_out< sc_logic > data_out_V_V_write;


    // Module declarations
    linear_activation_1(sc_module_name name);
    SC_HAS_PROCESS(linear_activation_1);

    ~linear_activation_1();

    sc_trace_file* mVcdFile;

    linear_activationfYi* L2_WEIGHTS_V_U;
    linear_activationg8j* L2_BIAS_V_U;
    get_result* grp_get_result_fu_434;
    multiply_accumulate* grp_multiply_accumulate_fu_440;
    multiply_accumulate* grp_multiply_accumulate_fu_448;
    multiply_accumulate* grp_multiply_accumulate_fu_456;
    multiply_accumulate* grp_multiply_accumulate_fu_464;
    multiply_accumulate* grp_multiply_accumulate_fu_472;
    mnist_edp_mux_104hbi<1,1,80,80,80,80,80,80,80,80,80,80,4,80>* mnist_edp_mux_104hbi_U23;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<6> > L2_WEIGHTS_V_address0;
    sc_signal< sc_logic > L2_WEIGHTS_V_ce0;
    sc_signal< sc_lv<160> > L2_WEIGHTS_V_q0;
    sc_signal< sc_lv<4> > L2_BIAS_V_address0;
    sc_signal< sc_logic > L2_BIAS_V_ce0;
    sc_signal< sc_lv<16> > L2_BIAS_V_q0;
    sc_signal< sc_logic > data_in_V_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<1> > exitcond5_reg_935;
    sc_signal< sc_logic > data_out_V_V_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter5;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > exitcond_reg_1053;
    sc_signal< sc_lv<1> > ap_reg_pp1_iter4_exitcond_reg_1053;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_reg_181;
    sc_signal< sc_lv<80> > acc_8_m_cr_V_reg_193;
    sc_signal< sc_lv<80> > acc_7_m_cr_V_reg_205;
    sc_signal< sc_lv<80> > acc_6_m_cr_V_reg_217;
    sc_signal< sc_lv<80> > acc_5_m_cr_V_reg_229;
    sc_signal< sc_lv<80> > acc_4_m_cr_V_reg_241;
    sc_signal< sc_lv<80> > acc_3_m_cr_V_reg_253;
    sc_signal< sc_lv<80> > acc_2_m_cr_V_reg_265;
    sc_signal< sc_lv<80> > acc_1_m_cr_V_reg_277;
    sc_signal< sc_lv<80> > acc_0_m_cr_V_reg_289;
    sc_signal< sc_lv<7> > ii_reg_301;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_1_reg_312;
    sc_signal< sc_lv<80> > acc_8_m_cr_V_1_reg_323;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_7_reg_334;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_9_reg_345;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_18_reg_356;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_3_reg_367;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_4_reg_378;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_11_reg_389;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_13_reg_400;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_15_reg_411;
    sc_signal< sc_lv<4> > ires_reg_422;
    sc_signal< sc_lv<4> > ap_reg_pp1_iter1_ires_reg_422;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state8_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state9_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state10_pp1_stage0_iter2;
    sc_signal< bool > ap_block_state11_pp1_stage0_iter3;
    sc_signal< bool > ap_block_state12_pp1_stage0_iter4;
    sc_signal< bool > ap_block_state13_pp1_stage0_iter5;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<4> > ap_reg_pp1_iter2_ires_reg_422;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_440_ap_return;
    sc_signal< sc_lv<80> > reg_486;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state5_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_exitcond5_reg_935;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter3;
    sc_signal< sc_lv<1> > ap_reg_pp1_iter2_exitcond_reg_1053;
    sc_signal< sc_lv<1> > exitcond5_fu_492_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<7> > ii_2_fu_498_p2;
    sc_signal< sc_lv<7> > ii_2_reg_939;
    sc_signal< sc_lv<16> > tmp_V_1_reg_949;
    sc_signal< sc_lv<16> > tmp_14_fu_509_p1;
    sc_signal< sc_lv<16> > tmp_14_reg_958;
    sc_signal< sc_lv<16> > tmp_4_reg_963;
    sc_signal< sc_lv<16> > tmp_5_reg_968;
    sc_signal< sc_lv<16> > tmp_6_reg_973;
    sc_signal< sc_lv<16> > tmp_7_reg_978;
    sc_signal< sc_lv<16> > tmp_8_reg_983;
    sc_signal< sc_lv<16> > tmp_9_reg_988;
    sc_signal< sc_lv<16> > tmp_3_reg_993;
    sc_signal< sc_lv<16> > tmp_10_reg_998;
    sc_signal< sc_lv<16> > tmp_11_reg_1003;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_448_ap_return;
    sc_signal< sc_lv<80> > acc_1_m_cr_V_1_reg_1008;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_456_ap_return;
    sc_signal< sc_lv<80> > acc_2_m_cr_V_1_reg_1013;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_464_ap_return;
    sc_signal< sc_lv<80> > acc_3_m_cr_V_1_reg_1018;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_472_ap_return;
    sc_signal< sc_lv<80> > acc_4_m_cr_V_1_reg_1023;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > exitcond_fu_603_p2;
    sc_signal< sc_lv<1> > ap_reg_pp1_iter1_exitcond_reg_1053;
    sc_signal< sc_lv<1> > ap_reg_pp1_iter3_exitcond_reg_1053;
    sc_signal< sc_lv<4> > ires_1_fu_609_p2;
    sc_signal< sc_lv<4> > ires_1_reg_1057;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<16> > L2_BIAS_V_load_reg_1067;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_5_fu_751_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_6_fu_767_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_8_fu_799_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_10_fu_823_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_12_fu_847_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_14_fu_863_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_16_fu_887_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_19_fu_903_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_21_fu_919_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_22_fu_927_p3;
    sc_signal< bool > ap_block_state1;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state8;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter4;
    sc_signal< sc_lv<16> > grp_get_result_fu_434_ap_return;
    sc_signal< sc_logic > grp_get_result_fu_434_ap_ce;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_440_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read;
    sc_signal< sc_lv<16> > grp_multiply_accumulate_fu_440_in1_V;
    sc_signal< sc_lv<16> > grp_multiply_accumulate_fu_440_in2_V;
    sc_signal< sc_logic > grp_multiply_accumulate_fu_440_ap_ce;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_448_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read;
    sc_signal< sc_lv<16> > grp_multiply_accumulate_fu_448_in2_V;
    sc_signal< sc_logic > grp_multiply_accumulate_fu_448_ap_ce;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_456_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read;
    sc_signal< sc_lv<16> > grp_multiply_accumulate_fu_456_in2_V;
    sc_signal< sc_logic > grp_multiply_accumulate_fu_456_ap_ce;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_464_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read;
    sc_signal< sc_lv<16> > grp_multiply_accumulate_fu_464_in2_V;
    sc_signal< sc_logic > grp_multiply_accumulate_fu_464_ap_ce;
    sc_signal< sc_lv<80> > grp_multiply_accumulate_fu_472_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read;
    sc_signal< sc_lv<16> > grp_multiply_accumulate_fu_472_in2_V;
    sc_signal< sc_logic > grp_multiply_accumulate_fu_472_ap_ce;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_4_m_cr_V_phi_fu_245_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_3_m_cr_V_phi_fu_257_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_2_m_cr_V_phi_fu_269_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_1_m_cr_V_phi_fu_281_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_0_m_cr_V_phi_fu_293_p4;
    sc_signal< sc_lv<7> > ap_phi_mux_ii_phi_fu_305_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_9_m_cr_V_1_phi_fu_315_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_8_m_cr_V_1_phi_fu_326_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_9_m_cr_V_7_phi_fu_337_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_9_m_cr_V_9_phi_fu_348_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_9_m_cr_V_18_phi_fu_359_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_9_m_cr_V_3_phi_fu_370_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_9_m_cr_V_4_phi_fu_381_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_9_m_cr_V_11_phi_fu_392_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_9_m_cr_V_13_phi_fu_403_p4;
    sc_signal< sc_lv<80> > ap_phi_mux_acc_9_m_cr_V_15_phi_fu_414_p4;
    sc_signal< sc_lv<4> > ap_phi_mux_ires_phi_fu_426_p4;
    sc_signal< sc_lv<80> > tmp_fu_620_p12;
    sc_signal< sc_lv<64> > tmp_1_fu_504_p1;
    sc_signal< sc_lv<64> > tmp_2_fu_615_p1;
    sc_signal< bool > ap_block_pp1_stage0_01001;
    sc_signal< sc_lv<1> > sel_tmp7_fu_695_p2;
    sc_signal< sc_lv<1> > sel_tmp5_fu_689_p2;
    sc_signal< sc_lv<1> > sel_tmp3_fu_683_p2;
    sc_signal< sc_lv<1> > sel_tmp1_fu_677_p2;
    sc_signal< sc_lv<1> > sel_tmp8_fu_671_p2;
    sc_signal< sc_lv<1> > sel_tmp6_fu_665_p2;
    sc_signal< sc_lv<1> > sel_tmp4_fu_659_p2;
    sc_signal< sc_lv<1> > sel_tmp2_fu_653_p2;
    sc_signal< sc_lv<1> > sel_tmp_fu_647_p2;
    sc_signal< sc_lv<1> > or_cond_fu_701_p2;
    sc_signal< sc_lv<1> > or_cond1_fu_707_p2;
    sc_signal< sc_lv<1> > or_cond2_fu_713_p2;
    sc_signal< sc_lv<1> > or_cond3_fu_719_p2;
    sc_signal< sc_lv<1> > or_cond4_fu_733_p2;
    sc_signal< sc_lv<1> > or_cond5_fu_739_p2;
    sc_signal< sc_lv<1> > or_cond6_fu_745_p2;
    sc_signal< sc_lv<80> > newSel_fu_725_p3;
    sc_signal< sc_lv<80> > newSel2_fu_759_p3;
    sc_signal< sc_lv<80> > newSel4_fu_775_p3;
    sc_signal< sc_lv<80> > newSel5_fu_783_p3;
    sc_signal< sc_lv<80> > newSel6_fu_791_p3;
    sc_signal< sc_lv<80> > newSel8_fu_807_p3;
    sc_signal< sc_lv<80> > newSel9_fu_815_p3;
    sc_signal< sc_lv<80> > newSel1_fu_831_p3;
    sc_signal< sc_lv<80> > newSel3_fu_839_p3;
    sc_signal< sc_lv<80> > newSel7_fu_855_p3;
    sc_signal< sc_lv<80> > newSel10_fu_871_p3;
    sc_signal< sc_lv<80> > newSel11_fu_879_p3;
    sc_signal< sc_lv<80> > newSel12_fu_895_p3;
    sc_signal< sc_lv<80> > acc_9_m_cr_V_20_fu_911_p3;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< bool > ap_condition_761;
    sc_signal< bool > ap_condition_765;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_pp0_stage0;
    static const sc_lv<6> ap_ST_fsm_pp0_stage1;
    static const sc_lv<6> ap_ST_fsm_state7;
    static const sc_lv<6> ap_ST_fsm_pp1_stage0;
    static const sc_lv<6> ap_ST_fsm_state14;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<80> ap_const_lv80_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<16> ap_const_lv16_3C00;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<32> ap_const_lv32_50;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_6F;
    static const sc_lv<32> ap_const_lv32_70;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<32> ap_const_lv32_8F;
    static const sc_lv<32> ap_const_lv32_90;
    static const sc_lv<32> ap_const_lv32_9F;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_7;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<32> ap_const_lv32_5;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_L2_BIAS_V_address0();
    void thread_L2_BIAS_V_ce0();
    void thread_L2_WEIGHTS_V_address0();
    void thread_L2_WEIGHTS_V_ce0();
    void thread_acc_9_m_cr_V_10_fu_823_p3();
    void thread_acc_9_m_cr_V_12_fu_847_p3();
    void thread_acc_9_m_cr_V_14_fu_863_p3();
    void thread_acc_9_m_cr_V_16_fu_887_p3();
    void thread_acc_9_m_cr_V_19_fu_903_p3();
    void thread_acc_9_m_cr_V_20_fu_911_p3();
    void thread_acc_9_m_cr_V_21_fu_919_p3();
    void thread_acc_9_m_cr_V_22_fu_927_p3();
    void thread_acc_9_m_cr_V_5_fu_751_p3();
    void thread_acc_9_m_cr_V_6_fu_767_p3();
    void thread_acc_9_m_cr_V_8_fu_799_p3();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_01001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp1_stage0_iter2();
    void thread_ap_block_state11_pp1_stage0_iter3();
    void thread_ap_block_state12_pp1_stage0_iter4();
    void thread_ap_block_state13_pp1_stage0_iter5();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_pp0_stage1_iter1();
    void thread_ap_block_state6_pp0_stage0_iter2();
    void thread_ap_block_state8_pp1_stage0_iter0();
    void thread_ap_block_state9_pp1_stage0_iter1();
    void thread_ap_condition_761();
    void thread_ap_condition_765();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_condition_pp1_exit_iter0_state8();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_acc_0_m_cr_V_phi_fu_293_p4();
    void thread_ap_phi_mux_acc_1_m_cr_V_phi_fu_281_p4();
    void thread_ap_phi_mux_acc_2_m_cr_V_phi_fu_269_p4();
    void thread_ap_phi_mux_acc_3_m_cr_V_phi_fu_257_p4();
    void thread_ap_phi_mux_acc_4_m_cr_V_phi_fu_245_p4();
    void thread_ap_phi_mux_acc_8_m_cr_V_1_phi_fu_326_p4();
    void thread_ap_phi_mux_acc_9_m_cr_V_11_phi_fu_392_p4();
    void thread_ap_phi_mux_acc_9_m_cr_V_13_phi_fu_403_p4();
    void thread_ap_phi_mux_acc_9_m_cr_V_15_phi_fu_414_p4();
    void thread_ap_phi_mux_acc_9_m_cr_V_18_phi_fu_359_p4();
    void thread_ap_phi_mux_acc_9_m_cr_V_1_phi_fu_315_p4();
    void thread_ap_phi_mux_acc_9_m_cr_V_3_phi_fu_370_p4();
    void thread_ap_phi_mux_acc_9_m_cr_V_4_phi_fu_381_p4();
    void thread_ap_phi_mux_acc_9_m_cr_V_7_phi_fu_337_p4();
    void thread_ap_phi_mux_acc_9_m_cr_V_9_phi_fu_348_p4();
    void thread_ap_phi_mux_ii_phi_fu_305_p4();
    void thread_ap_phi_mux_ires_phi_fu_426_p4();
    void thread_ap_ready();
    void thread_data_in_V_V_blk_n();
    void thread_data_in_V_V_read();
    void thread_data_out_V_V_blk_n();
    void thread_data_out_V_V_din();
    void thread_data_out_V_V_write();
    void thread_exitcond5_fu_492_p2();
    void thread_exitcond_fu_603_p2();
    void thread_grp_get_result_fu_434_ap_ce();
    void thread_grp_multiply_accumulate_fu_440_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read();
    void thread_grp_multiply_accumulate_fu_440_ap_ce();
    void thread_grp_multiply_accumulate_fu_440_in1_V();
    void thread_grp_multiply_accumulate_fu_440_in2_V();
    void thread_grp_multiply_accumulate_fu_448_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read();
    void thread_grp_multiply_accumulate_fu_448_ap_ce();
    void thread_grp_multiply_accumulate_fu_448_in2_V();
    void thread_grp_multiply_accumulate_fu_456_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read();
    void thread_grp_multiply_accumulate_fu_456_ap_ce();
    void thread_grp_multiply_accumulate_fu_456_in2_V();
    void thread_grp_multiply_accumulate_fu_464_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read();
    void thread_grp_multiply_accumulate_fu_464_ap_ce();
    void thread_grp_multiply_accumulate_fu_464_in2_V();
    void thread_grp_multiply_accumulate_fu_472_CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read();
    void thread_grp_multiply_accumulate_fu_472_ap_ce();
    void thread_grp_multiply_accumulate_fu_472_in2_V();
    void thread_ii_2_fu_498_p2();
    void thread_internal_ap_ready();
    void thread_ires_1_fu_609_p2();
    void thread_newSel10_fu_871_p3();
    void thread_newSel11_fu_879_p3();
    void thread_newSel12_fu_895_p3();
    void thread_newSel1_fu_831_p3();
    void thread_newSel2_fu_759_p3();
    void thread_newSel3_fu_839_p3();
    void thread_newSel4_fu_775_p3();
    void thread_newSel5_fu_783_p3();
    void thread_newSel6_fu_791_p3();
    void thread_newSel7_fu_855_p3();
    void thread_newSel8_fu_807_p3();
    void thread_newSel9_fu_815_p3();
    void thread_newSel_fu_725_p3();
    void thread_or_cond1_fu_707_p2();
    void thread_or_cond2_fu_713_p2();
    void thread_or_cond3_fu_719_p2();
    void thread_or_cond4_fu_733_p2();
    void thread_or_cond5_fu_739_p2();
    void thread_or_cond6_fu_745_p2();
    void thread_or_cond_fu_701_p2();
    void thread_real_start();
    void thread_sel_tmp1_fu_677_p2();
    void thread_sel_tmp2_fu_653_p2();
    void thread_sel_tmp3_fu_683_p2();
    void thread_sel_tmp4_fu_659_p2();
    void thread_sel_tmp5_fu_689_p2();
    void thread_sel_tmp6_fu_665_p2();
    void thread_sel_tmp7_fu_695_p2();
    void thread_sel_tmp8_fu_671_p2();
    void thread_sel_tmp_fu_647_p2();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_14_fu_509_p1();
    void thread_tmp_1_fu_504_p1();
    void thread_tmp_2_fu_615_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif