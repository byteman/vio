#include <stdio.h>
#include "vio.h"
#include "h5liveserver.h"
static std::string stream="12345";
static int my_callback(int type,void* frame, int size,void* arg)
{
    if(type == 0)
    {
        printf("frame size=%d\n",size);
        H5liveServer::get().push264(stream, (unsigned char*)frame,size);
    }

}
int main(int argc, char *argv[])
{
    vio_para para;
    para.cb = my_callback;
    para.user_arg = NULL;
    para.debug = 0;

    int result = vio_open(0,&para);
    if(result != 0){
        fprintf(stderr,"vio_open failed = %d\n",result);
        return result;
    }

    H5liveServer::get().start("web",8000);
    H5liveServer::get().addStream(stream);
    getchar();
    getchar();
    return 0;
}
