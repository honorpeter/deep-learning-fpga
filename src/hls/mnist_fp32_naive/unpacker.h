#include "hls_stream.h"
#include "ap_axi_sdata.h"
#include "hls_half.h"
#include "hls/utils/x_hls_utils.h"

template<class out_stream_T, int IN_DATA_WIDTH, int LENGTH>
void unpacker(hls::stream<ap_axiu<IN_DATA_WIDTH,1,1,1> > &stream_in, hls::stream<out_stream_T> &stream_out)
{
	ap_axiu<IN_DATA_WIDTH,1,1,1> packet[LENGTH];
	out_stream_T data[LENGTH];

	Unpack: for (int i = 0; i < LENGTH; i++) {
	#pragma HLS PIPELINE
		packet[i] = stream_in.read();
		data[i] = fp_struct<out_stream_T>(packet[i].data).to_float();
		stream_out << data[i];
	}
}