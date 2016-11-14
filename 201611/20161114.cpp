#include <cstdio>
#include <zlib.h>
using namespace std;
char buff[10240];
char dest[10240];
char kbuff[10240];
int main()
{
    FILE* fp=fopen("1.txt","rb");
    int ret=fread(buff,1,10240,fp);
    printf("fread returns %d\n",ret);
    fclose(fp);
    printf("Compress Bound is %u\n",compressBound(ret));
    long unsigned int tlen=10240;
    ret=compress2((unsigned char*)dest,&tlen,(unsigned char*)buff,ret,9);
    printf("Compress Return %d\n",ret);
    printf("TLEN is %u\n",tlen);
    fp=fopen("2.zbin","wb");
    fwrite(dest,1,tlen,fp);
    fclose(fp);
    printf("Done\n");

    long unsigned int xlen=10240;
    ret=uncompress((unsigned char*)kbuff,&xlen,(unsigned char*)dest,tlen);
    printf("Decompress Return %d\n",ret);
    printf("XLEN is %u\n",xlen);

    fp=fopen("3.txt","wb");
    fwrite(kbuff,1,xlen,fp);
    fclose(fp);

    printf("Done\n");
    return 0;
}
