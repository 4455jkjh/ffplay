extern "C"{
	#include <libavutil/avutil.h>
	#include <libavcodec/avcodec.h>
	#include <libavformat/avformat.h>
	#include <libswresample/swresample.h>
	#include <libswscale/swscale.h>
}
#include "index.h"
class FFmpeg{
private:
	Index audio_index;
	Index video_index;
	AVFormatContext *format;
	AVCodecContext *Codec;
	AVFrame *frame;
	AVPacket *packet;
public:
	bool setData(const char *);
	FFmpeg();
};
