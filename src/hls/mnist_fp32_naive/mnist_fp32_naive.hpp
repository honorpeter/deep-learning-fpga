#include "ap_int.h"
#include "ap_utils.h"
#include "ap_axi_sdata.h"
#include "hls_stream.h"

#include "linear_activation.hpp"
#include "relu_activation.hpp"
#include "packer.h"
#include "unpacker.h"

typedef ap_axiu<32,1,1,1> sdata_in_t;
typedef ap_axiu<32,1,1,1> sdata_out_t;

typedef float data_t;
typedef float result_data_t;

void mnist_fp32_naive(
	hls::stream<sdata_in_t> &data_in,
	hls::stream<sdata_out_t> &data_out
);
