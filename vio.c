#include "vio.h"

int vio_open(int chan, vio_para *para)
{
	return SAMPLE_VENC_LOW_DELAY(para);
}

int vio_close(int chan)
{
	return SAMPLE_COMM_VENC_StopGetStream();
}

int vio_set_param(int chan, vio_para *para)
{
    return 0;
}

int vio_get_param(int chan, vio_para *para)
{
    return 0;
}
