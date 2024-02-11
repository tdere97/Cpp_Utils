#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
    int pipefd[2],ret;
    char writeMessage[2][10]={"Hi","Hello"};
    char readMessages[10];

    ret=pipe(pipefd);
    if(ret==-1){
        cout<<"Creation of Pipe Failed"<<endl;
        return -1;
    }
    cout<<"Writing msg1 to pipe : "<<writeMessage[0]<<endl;
    ret=write(pipefd[1],writeMessage[0],sizeof(writeMessage[0]));
    if(ret==-1){
        cout<<"Failed to write"<<endl;
        return -1;
    }
    ret=read(pipefd[0],readMessages,sizeof(readMessages));
    if(ret==-1){
        cout<<"Failed to read"<<endl;
        return -1;
    }
    cout<<"Reading msg1 from pipe : "<<readMessages<<endl;

    cout<<"Writing msg2 to pipe : "<<writeMessage[1]<<endl;
    ret=write(pipefd[1],writeMessage[1],4);
    if(ret==-1){
        cout<<"Failed to write"<<endl;
        return -1;
    }
    ret=read(pipefd[0],readMessages,sizeof(readMessages));
    if(ret==-1){
        cout<<"Failed to read"<<endl;
        return -1;
    }
    cout<<"Reading msg2 from pipe : "<<readMessages<<endl;

    return 0;
}