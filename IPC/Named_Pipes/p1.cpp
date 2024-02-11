#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<cstring>

#define FIFO_FILE "MYFIFO"

using namespace std;
int main(){
    int fd, to_end, read_bytes;
    char readbuf[80],end_str[10];

    mknod(FIFO_FILE, S_IFIFO | 0640 , 0);
    strcpy(end_str,"end");

    while(1){
        fd=open(FIFO_FILE,O_RDONLY);

        read_bytes=read(fd,readbuf,sizeof(readbuf));
        readbuf[read_bytes]='\0';
        cout<<"Msg read is : "<<readbuf<<endl;

        to_end=strcmp(readbuf,end_str);
        if(to_end==0){
            close(fd);
            break;
        } 

    }
    return 0;
}


