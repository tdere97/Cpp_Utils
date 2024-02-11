#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<cstring>

#define FIFO_FILE "t.txt"

using namespace std;
int main(){
    int fd, read_bytes,to_end;
    char writeMessage[80],readMessage[80],end_str[5];

    fd=open(FIFO_FILE,O_RDWR);
    perror("open");
    strcpy(end_str,"end");
    while(1){
        cout<<"Enter the Msg : ";
        cin>>writeMessage;
        to_end=strcmp(writeMessage,end_str);
        
        if(to_end!=0){
        write(fd,writeMessage,sizeof(writeMessage));
        perror("write");
        read_bytes=read(fd,readMessage,sizeof(readMessage));
        perror("read");
        readMessage[read_bytes]='\0';
        cout<<"Read Msg: "<<readMessage<<endl;
        }else{
            write(fd,writeMessage,sizeof(writeMessage));
            close(fd);
            break;
        }
    }




    return 0;
}