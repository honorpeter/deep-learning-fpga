// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __linear_activationcud_H__
#define __linear_activationcud_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct linear_activationcud_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(linear_activationcud_ram) {
        ram[0] = "0b00000000";
        ram[1] = "0b00000000";
        ram[2] = "0b00100000";
        ram[3] = "0b01000010";
        ram[4] = "0b00000000";
        ram[5] = "0b00000000";
        ram[6] = "0b01000000";
        ram[7] = "0b01000001";
        ram[8] = "0b00000000";
        ram[9] = "0b00000000";
        ram[10] = "0b10000000";
        ram[11] = "0b00111111";
        ram[12] = "0b00000000";
        ram[13] = "0b00000000";
        ram[14] = "0b01011000";
        ram[15] = "0b01000010";
        ram[16] = "0b00000000";
        ram[17] = "0b00000000";
        ram[18] = "0b00000000";
        ram[19] = "0b01000001";
        ram[20] = "0b00000000";
        ram[21] = "0b00000000";
        ram[22] = "0b01010000";
        ram[23] = "0b11000001";
        ram[24] = "0b00000000";
        ram[25] = "0b00000000";
        ram[26] = "0b00110100";
        ram[27] = "0b11000010";
        ram[28] = "0b00000000";
        ram[29] = "0b00000000";
        ram[30] = "0b00000100";
        ram[31] = "0b01000010";
        ram[32] = "0b00000000";
        ram[33] = "0b00000000";
        ram[34] = "0b11100000";
        ram[35] = "0b11000001";
        ram[36] = "0b00000000";
        ram[37] = "0b00000000";
        ram[38] = "0b11000000";
        ram[39] = "0b11000001";
        ram[40] = "0b00000000";
        ram[41] = "0b00000000";
        ram[42] = "0b10100000";
        ram[43] = "0b01000010";
        ram[44] = "0b00000000";
        ram[45] = "0b00000000";
        ram[46] = "0b00100000";
        ram[47] = "0b11000010";
        ram[48] = "0b00000000";
        ram[49] = "0b00000000";
        ram[50] = "0b11110000";
        ram[51] = "0b01000001";
        ram[52] = "0b00000000";
        ram[53] = "0b00000000";
        ram[54] = "0b10100100";
        ram[55] = "0b01000010";
        ram[56] = "0b00000000";
        ram[57] = "0b00000000";
        ram[58] = "0b01100100";
        ram[59] = "0b01000010";
        ram[60] = "0b00000000";
        ram[61] = "0b00000000";
        ram[62] = "0b00111100";
        ram[63] = "0b11000010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(linear_activationcud) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


linear_activationcud_ram* meminst;


SC_CTOR(linear_activationcud) {
meminst = new linear_activationcud_ram("linear_activationcud_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~linear_activationcud() {
    delete meminst;
}


};//endmodule
#endif
