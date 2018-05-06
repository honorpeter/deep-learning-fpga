############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project mnist
set_top mnist
add_files mnist/l1_b_data.h
add_files mnist/l1_w_data.h
add_files mnist/l2_b_data.h
add_files mnist/l2_w_data.h
add_files mnist/mnist.cpp
add_files -tb mnist/mnist_test.cpp
open_solution "base"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./mnist/base/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
