#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<cstring>

#define FIFO_FILE "t.txt"

using namespace std;
void revString(char* );
int main(){
    int fd,read_bytes,ret,to_end;
    char readBuff[80],end_str[10];
    char *rstr;
    ret=mkfifo(FIFO_FILE, 0640);
    perror("mkfifo");
    fd=open(FIFO_FILE,O_RDWR);
    perror("open");
    strcpy(end_str,"end");
    while(1){
        read_bytes=read(fd,readBuff,sizeof(readBuff));
        perror("read");
        cout<<"Msg Recieved is : "<<readBuff<<endl;
        readBuff[read_bytes]='\0';
        to_end=strcmp(readBuff,end_str);
        if(to_end==0){
            close(fd);
            break;
        }
        revString(readBuff);
        write(fd,readBuff,sizeof(readBuff));
        perror("write");
        sleep(1);
    }
    return 0;
}
void revString(char* str){
    int start=0,end=strlen(str)-1;
    char temp;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}



