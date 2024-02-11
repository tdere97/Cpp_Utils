#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<cstring>

#define FIFO_FILE "MYFIFO"

using namespace std;
int main(){
    int fd, to_end, stringlen, end_process;
    char writeMessage[80],end_str[10];

    fd=open(FIFO_FILE,O_CREAT | O_WRONLY);
    strcpy(end_str,"end");

    while(1){
        cout<<"Enter the msg : ";
        cin>>writeMessage;
        to_end=strcmp(writeMessage,end_str);
        if(to_end!=0){
        write(fd,writeMessage,sizeof(writeMessage));
        writeMessage[strlen(writeMessage)-1]='\0';
        }
        else{
            write(fd,writeMessage,sizeof(writeMessage));
            close(fd);
            break; 
        }
    }
    return 0;
}


