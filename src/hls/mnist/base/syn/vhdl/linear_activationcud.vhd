-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.4
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity linear_activationcud_rom is 
    generic(
             dwidth     : integer := 8; 
             awidth     : integer := 6; 
             mem_size    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of linear_activationcud_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "00000000", 2 => "00100000", 3 => "01000010", 4 to 5=> "00000000", 
    6 => "01000000", 7 => "01000001", 8 to 9=> "00000000", 10 => "10000000", 
    11 => "00111111", 12 to 13=> "00000000", 14 => "01011000", 15 => "01000010", 
    16 to 18=> "00000000", 19 => "01000001", 20 to 21=> "00000000", 22 => "01010000", 
    23 => "11000001", 24 to 25=> "00000000", 26 => "00110100", 27 => "11000010", 
    28 to 29=> "00000000", 30 => "00000100", 31 => "01000010", 32 to 33=> "00000000", 
    34 => "11100000", 35 => "11000001", 36 to 37=> "00000000", 38 => "11000000", 
    39 => "11000001", 40 to 41=> "00000000", 42 => "10100000", 43 => "01000010", 
    44 to 45=> "00000000", 46 => "00100000", 47 => "11000010", 48 to 49=> "00000000", 
    50 => "11110000", 51 => "01000001", 52 to 53=> "00000000", 54 => "10100100", 
    55 => "01000010", 56 to 57=> "00000000", 58 => "01100100", 59 => "01000010", 
    60 to 61=> "00000000", 62 => "00111100", 63 => "11000010" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity linear_activationcud is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of linear_activationcud is
    component linear_activationcud_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    linear_activationcud_rom_U :  component linear_activationcud_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


