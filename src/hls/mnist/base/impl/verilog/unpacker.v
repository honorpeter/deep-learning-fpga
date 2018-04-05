// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module unpacker (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        sdata_in_TDATA,
        sdata_in_TVALID,
        sdata_in_TREADY,
        sdata_in_TKEEP,
        sdata_in_TSTRB,
        sdata_in_TUSER,
        sdata_in_TLAST,
        sdata_in_TID,
        sdata_in_TDEST,
        stream_out_V_V_din,
        stream_out_V_V_full_n,
        stream_out_V_V_write
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state4 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [7:0] sdata_in_TDATA;
input   sdata_in_TVALID;
output   sdata_in_TREADY;
input  [0:0] sdata_in_TKEEP;
input  [0:0] sdata_in_TSTRB;
input  [0:0] sdata_in_TUSER;
input  [0:0] sdata_in_TLAST;
input  [0:0] sdata_in_TID;
input  [0:0] sdata_in_TDEST;
output  [7:0] stream_out_V_V_din;
input   stream_out_V_V_full_n;
output   stream_out_V_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg stream_out_V_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg   [7:0] stream_in_V_data_V_0_data_out;
wire    stream_in_V_data_V_0_vld_in;
wire    stream_in_V_data_V_0_vld_out;
wire    stream_in_V_data_V_0_ack_in;
reg    stream_in_V_data_V_0_ack_out;
reg   [7:0] stream_in_V_data_V_0_payload_A;
reg   [7:0] stream_in_V_data_V_0_payload_B;
reg    stream_in_V_data_V_0_sel_rd;
reg    stream_in_V_data_V_0_sel_wr;
wire    stream_in_V_data_V_0_sel;
wire    stream_in_V_data_V_0_load_A;
wire    stream_in_V_data_V_0_load_B;
reg   [1:0] stream_in_V_data_V_0_state;
wire    stream_in_V_data_V_0_state_cmp_full;
wire    stream_in_V_dest_V_0_vld_in;
reg    stream_in_V_dest_V_0_ack_out;
reg   [1:0] stream_in_V_dest_V_0_state;
reg    sdata_in_TDATA_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage0;
reg   [0:0] exitcond_reg_125;
reg    stream_out_V_V_blk_n;
reg   [9:0] i_reg_97;
wire   [0:0] exitcond_fu_108_p2;
wire    ap_block_state2_pp0_stage0_iter0;
reg    ap_block_state3_pp0_stage0_iter1;
reg    ap_block_pp0_stage0_11001;
wire   [9:0] i_1_fu_114_p2;
reg    ap_enable_reg_pp0_iter0;
reg    ap_block_state1;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_block_pp0_stage0_01001;
wire    ap_CS_fsm_state4;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
#0 stream_in_V_data_V_0_sel_rd = 1'b0;
#0 stream_in_V_data_V_0_sel_wr = 1'b0;
#0 stream_in_V_data_V_0_state = 2'd0;
#0 stream_in_V_dest_V_0_state = 2'd0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state4)) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state2))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        stream_in_V_data_V_0_sel_rd <= 1'b0;
    end else begin
        if (((stream_in_V_data_V_0_ack_out == 1'b1) & (stream_in_V_data_V_0_vld_out == 1'b1))) begin
            stream_in_V_data_V_0_sel_rd <= ~stream_in_V_data_V_0_sel_rd;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        stream_in_V_data_V_0_sel_wr <= 1'b0;
    end else begin
        if (((stream_in_V_data_V_0_ack_in == 1'b1) & (stream_in_V_data_V_0_vld_in == 1'b1))) begin
            stream_in_V_data_V_0_sel_wr <= ~stream_in_V_data_V_0_sel_wr;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        stream_in_V_data_V_0_state <= 2'd0;
    end else begin
        if ((((stream_in_V_data_V_0_state == 2'd2) & (stream_in_V_data_V_0_vld_in == 1'b0)) | ((stream_in_V_data_V_0_state == 2'd3) & (stream_in_V_data_V_0_vld_in == 1'b0) & (stream_in_V_data_V_0_ack_out == 1'b1)))) begin
            stream_in_V_data_V_0_state <= 2'd2;
        end else if ((((stream_in_V_data_V_0_state == 2'd1) & (stream_in_V_data_V_0_ack_out == 1'b0)) | ((stream_in_V_data_V_0_state == 2'd3) & (stream_in_V_data_V_0_ack_out == 1'b0) & (stream_in_V_data_V_0_vld_in == 1'b1)))) begin
            stream_in_V_data_V_0_state <= 2'd1;
        end else if (((~((stream_in_V_data_V_0_vld_in == 1'b0) & (stream_in_V_data_V_0_ack_out == 1'b1)) & ~((stream_in_V_data_V_0_ack_out == 1'b0) & (stream_in_V_data_V_0_vld_in == 1'b1)) & (stream_in_V_data_V_0_state == 2'd3)) | ((stream_in_V_data_V_0_state == 2'd1) & (stream_in_V_data_V_0_ack_out == 1'b1)) | ((stream_in_V_data_V_0_state == 2'd2) & (stream_in_V_data_V_0_vld_in == 1'b1)))) begin
            stream_in_V_data_V_0_state <= 2'd3;
        end else begin
            stream_in_V_data_V_0_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        stream_in_V_dest_V_0_state <= 2'd0;
    end else begin
        if ((((stream_in_V_dest_V_0_state == 2'd2) & (stream_in_V_dest_V_0_vld_in == 1'b0)) | ((stream_in_V_dest_V_0_state == 2'd3) & (stream_in_V_dest_V_0_vld_in == 1'b0) & (stream_in_V_dest_V_0_ack_out == 1'b1)))) begin
            stream_in_V_dest_V_0_state <= 2'd2;
        end else if ((((stream_in_V_dest_V_0_state == 2'd1) & (stream_in_V_dest_V_0_ack_out == 1'b0)) | ((stream_in_V_dest_V_0_state == 2'd3) & (stream_in_V_dest_V_0_ack_out == 1'b0) & (stream_in_V_dest_V_0_vld_in == 1'b1)))) begin
            stream_in_V_dest_V_0_state <= 2'd1;
        end else if (((~((stream_in_V_dest_V_0_vld_in == 1'b0) & (stream_in_V_dest_V_0_ack_out == 1'b1)) & ~((stream_in_V_dest_V_0_ack_out == 1'b0) & (stream_in_V_dest_V_0_vld_in == 1'b1)) & (stream_in_V_dest_V_0_state == 2'd3)) | ((stream_in_V_dest_V_0_state == 2'd1) & (stream_in_V_dest_V_0_ack_out == 1'b1)) | ((stream_in_V_dest_V_0_state == 2'd2) & (stream_in_V_dest_V_0_vld_in == 1'b1)))) begin
            stream_in_V_dest_V_0_state <= 2'd3;
        end else begin
            stream_in_V_dest_V_0_state <= 2'd2;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_97 <= 10'd0;
    end else if (((exitcond_fu_108_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        i_reg_97 <= i_1_fu_114_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exitcond_reg_125 <= exitcond_fu_108_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((stream_in_V_data_V_0_load_A == 1'b1)) begin
        stream_in_V_data_V_0_payload_A <= sdata_in_TDATA;
    end
end

always @ (posedge ap_clk) begin
    if ((stream_in_V_data_V_0_load_B == 1'b1)) begin
        stream_in_V_data_V_0_payload_B <= sdata_in_TDATA;
    end
end

always @ (*) begin
    if ((exitcond_fu_108_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((exitcond_reg_125 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        sdata_in_TDATA_blk_n = stream_in_V_data_V_0_state[1'd0];
    end else begin
        sdata_in_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_reg_125 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        stream_in_V_data_V_0_ack_out = 1'b1;
    end else begin
        stream_in_V_data_V_0_ack_out = 1'b0;
    end
end

always @ (*) begin
    if ((stream_in_V_data_V_0_sel == 1'b1)) begin
        stream_in_V_data_V_0_data_out = stream_in_V_data_V_0_payload_B;
    end else begin
        stream_in_V_data_V_0_data_out = stream_in_V_data_V_0_payload_A;
    end
end

always @ (*) begin
    if (((exitcond_reg_125 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        stream_in_V_dest_V_0_ack_out = 1'b1;
    end else begin
        stream_in_V_dest_V_0_ack_out = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_reg_125 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        stream_out_V_V_blk_n = stream_out_V_V_full_n;
    end else begin
        stream_out_V_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((exitcond_reg_125 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        stream_out_V_V_write = 1'b1;
    end else begin
        stream_out_V_V_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((exitcond_fu_108_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((exitcond_fu_108_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((ap_enable_reg_pp0_iter1 == 1'b1) & (((exitcond_reg_125 == 1'd0) & (stream_out_V_V_full_n == 1'b0)) | ((exitcond_reg_125 == 1'd0) & (stream_in_V_data_V_0_vld_out == 1'b0))));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_enable_reg_pp0_iter1 == 1'b1) & (((exitcond_reg_125 == 1'd0) & (stream_out_V_V_full_n == 1'b0)) | ((exitcond_reg_125 == 1'd0) & (stream_in_V_data_V_0_vld_out == 1'b0))));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((ap_enable_reg_pp0_iter1 == 1'b1) & (((exitcond_reg_125 == 1'd0) & (stream_out_V_V_full_n == 1'b0)) | ((exitcond_reg_125 == 1'd0) & (stream_in_V_data_V_0_vld_out == 1'b0))));
end

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state3_pp0_stage0_iter1 = (((exitcond_reg_125 == 1'd0) & (stream_out_V_V_full_n == 1'b0)) | ((exitcond_reg_125 == 1'd0) & (stream_in_V_data_V_0_vld_out == 1'b0)));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_ready = internal_ap_ready;

assign exitcond_fu_108_p2 = ((i_reg_97 == 10'd784) ? 1'b1 : 1'b0);

assign i_1_fu_114_p2 = (i_reg_97 + 10'd1);

assign sdata_in_TREADY = stream_in_V_dest_V_0_state[1'd1];

assign start_out = real_start;

assign stream_in_V_data_V_0_ack_in = stream_in_V_data_V_0_state[1'd1];

assign stream_in_V_data_V_0_load_A = (stream_in_V_data_V_0_state_cmp_full & ~stream_in_V_data_V_0_sel_wr);

assign stream_in_V_data_V_0_load_B = (stream_in_V_data_V_0_state_cmp_full & stream_in_V_data_V_0_sel_wr);

assign stream_in_V_data_V_0_sel = stream_in_V_data_V_0_sel_rd;

assign stream_in_V_data_V_0_state_cmp_full = ((stream_in_V_data_V_0_state != 2'd1) ? 1'b1 : 1'b0);

assign stream_in_V_data_V_0_vld_in = sdata_in_TVALID;

assign stream_in_V_data_V_0_vld_out = stream_in_V_data_V_0_state[1'd0];

assign stream_in_V_dest_V_0_vld_in = sdata_in_TVALID;

assign stream_out_V_V_din = stream_in_V_data_V_0_data_out;

endmodule //unpacker