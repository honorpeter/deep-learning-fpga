-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity multiply_accumulate is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read : IN STD_LOGIC_VECTOR (79 downto 0);
    in1_V : IN STD_LOGIC_VECTOR (15 downto 0);
    in2_V : IN STD_LOGIC_VECTOR (15 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (79 downto 0);
    ap_ce : IN STD_LOGIC );
end;


architecture behav of multiply_accumulate is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv23_0 : STD_LOGIC_VECTOR (22 downto 0) := "00000000000000000000000";
    constant ap_const_lv7_74 : STD_LOGIC_VECTOR (6 downto 0) := "1110100";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv7_C : STD_LOGIC_VECTOR (6 downto 0) := "0001100";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal CompleteRegister_m_c_1_reg_234 : STD_LOGIC_VECTOR (79 downto 0);
    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal r_V_1_fu_134_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal r_V_1_reg_239 : STD_LOGIC_VECTOR (5 downto 0);
    signal result_V_2_fu_149_p3 : STD_LOGIC_VECTOR (22 downto 0);
    signal result_V_2_reg_244 : STD_LOGIC_VECTOR (22 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal tmp_fu_60_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_2_fu_90_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal sign_fu_52_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal sign_1_fu_82_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Result_s_fu_64_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal p_Result_1_fu_94_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal e1_V_fu_72_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal e2_V_fu_102_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal lhs_V_1_fu_126_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal rhs_V_1_fu_130_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal r_V_fu_227_p2 : STD_LOGIC_VECTOR (21 downto 0);
    signal result_V_fu_140_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal exact_s_fu_112_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal agg_result_V_assign_s_fu_143_p2 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_cast_fu_157_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal op2_assign_fu_163_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal op2_assign_cast_fu_169_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal shifted_V_cast_fu_160_p1 : STD_LOGIC_VECTOR (72 downto 0);
    signal tmp_3_cast_fu_181_p1 : STD_LOGIC_VECTOR (72 downto 0);
    signal tmp_5_fu_191_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_5_cast_cast_fu_197_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_7_fu_201_p2 : STD_LOGIC_VECTOR (22 downto 0);
    signal tmp_3_fu_173_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_7_cast_fu_206_p1 : STD_LOGIC_VECTOR (72 downto 0);
    signal tmp_4_fu_185_p2 : STD_LOGIC_VECTOR (72 downto 0);
    signal r_V_2_fu_210_p3 : STD_LOGIC_VECTOR (72 downto 0);
    signal r_V_cast_fu_218_p1 : STD_LOGIC_VECTOR (79 downto 0);
    signal r_V_fu_227_p0 : STD_LOGIC_VECTOR (10 downto 0);
    signal r_V_fu_227_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal r_V_fu_227_p00 : STD_LOGIC_VECTOR (21 downto 0);
    signal r_V_fu_227_p10 : STD_LOGIC_VECTOR (21 downto 0);

    component mnist_edp_mul_mulbkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (10 downto 0);
        din1 : IN STD_LOGIC_VECTOR (10 downto 0);
        dout : OUT STD_LOGIC_VECTOR (21 downto 0) );
    end component;



begin
    mnist_edp_mul_mulbkb_U9 : component mnist_edp_mul_mulbkb
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 11,
        din1_WIDTH => 11,
        dout_WIDTH => 22)
    port map (
        din0 => r_V_fu_227_p0,
        din1 => r_V_fu_227_p1,
        dout => r_V_fu_227_p2);




    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_ce))) then
                CompleteRegister_m_c_1_reg_234 <= CompleteRegister_ap_uint_16_ap_uint_16_m_cr_V_read;
                r_V_1_reg_239 <= r_V_1_fu_134_p2;
                result_V_2_reg_244 <= result_V_2_fu_149_p3;
            end if;
        end if;
    end process;
    agg_result_V_assign_s_fu_143_p2 <= std_logic_vector(unsigned(ap_const_lv23_0) - unsigned(result_V_fu_140_p1));
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state1_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
    ap_return <= std_logic_vector(unsigned(CompleteRegister_m_c_1_reg_234) + unsigned(r_V_cast_fu_218_p1));
    e1_V_fu_72_p4 <= in1_V(14 downto 10);
    e2_V_fu_102_p4 <= in2_V(14 downto 10);
    exact_s_fu_112_p2 <= (sign_fu_52_p3 xor sign_1_fu_82_p3);
    lhs_V_1_fu_126_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(e1_V_fu_72_p4),6));
        op2_assign_cast_fu_169_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(op2_assign_fu_163_p2),32));

    op2_assign_fu_163_p2 <= std_logic_vector(signed(ap_const_lv7_74) + signed(tmp_cast_fu_157_p1));
    p_Result_1_fu_94_p3 <= (ap_const_lv1_1 & tmp_2_fu_90_p1);
    p_Result_s_fu_64_p3 <= (ap_const_lv1_1 & tmp_fu_60_p1);
    r_V_1_fu_134_p2 <= std_logic_vector(unsigned(lhs_V_1_fu_126_p1) + unsigned(rhs_V_1_fu_130_p1));
    r_V_2_fu_210_p3 <= 
        tmp_7_cast_fu_206_p1 when (tmp_3_fu_173_p3(0) = '1') else 
        tmp_4_fu_185_p2;
        r_V_cast_fu_218_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(r_V_2_fu_210_p3),80));

    r_V_fu_227_p0 <= r_V_fu_227_p00(11 - 1 downto 0);
    r_V_fu_227_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Result_s_fu_64_p3),22));
    r_V_fu_227_p1 <= r_V_fu_227_p10(11 - 1 downto 0);
    r_V_fu_227_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_Result_1_fu_94_p3),22));
    result_V_2_fu_149_p3 <= 
        agg_result_V_assign_s_fu_143_p2 when (exact_s_fu_112_p2(0) = '1') else 
        result_V_fu_140_p1;
    result_V_fu_140_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r_V_fu_227_p2),23));
    rhs_V_1_fu_130_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(e2_V_fu_102_p4),6));
        shifted_V_cast_fu_160_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(result_V_2_reg_244),73));

    sign_1_fu_82_p3 <= in2_V(15 downto 15);
    sign_fu_52_p3 <= in1_V(15 downto 15);
    tmp_2_fu_90_p1 <= in2_V(10 - 1 downto 0);
    tmp_3_cast_fu_181_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(op2_assign_cast_fu_169_p1),73));
    tmp_3_fu_173_p3 <= op2_assign_fu_163_p2(6 downto 6);
    tmp_4_fu_185_p2 <= std_logic_vector(shift_left(unsigned(shifted_V_cast_fu_160_p1),to_integer(unsigned('0' & tmp_3_cast_fu_181_p1(31-1 downto 0)))));
        tmp_5_cast_cast_fu_197_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_5_fu_191_p2),23));

    tmp_5_fu_191_p2 <= std_logic_vector(unsigned(ap_const_lv7_C) - unsigned(tmp_cast_fu_157_p1));
        tmp_7_cast_fu_206_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_7_fu_201_p2),73));

    tmp_7_fu_201_p2 <= std_logic_vector(shift_right(signed(result_V_2_reg_244),to_integer(unsigned('0' & tmp_5_cast_cast_fu_197_p1(23-1 downto 0)))));
    tmp_cast_fu_157_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(r_V_1_reg_239),7));
    tmp_fu_60_p1 <= in1_V(10 - 1 downto 0);
end behav;