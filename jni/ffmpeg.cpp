#include "ffmpeg.h"
FFmpeg::FFmpeg(){
	av_register_all();
	format=avformat_alloc_context();
}
