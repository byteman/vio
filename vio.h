#ifndef VIO_H
#define VIO_H
#ifdef __cplusplus
extern "C"{
#endif


typedef int (*vio_callback)(int type,void* frame, int size,void* arg);
typedef struct _vio_para{
    int width;
    int height;
    int fps;
	vio_callback cb;
	void* user_arg;
    int debug;
}vio_para;

int vio_open(int chan,vio_para* para);
int vio_close(int chan);
int vio_set_param(int chan,vio_para* para);
int vio_get_param(int chan,vio_para* para);
#ifdef __cplusplus
}
#endif

#endif // VIO_H
