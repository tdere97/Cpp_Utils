#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
    int pipedes1[2],pipedes2[2],ret;
    char writeMessage[2][10]={"Hi","Hello"},readMessages[10];

    ret=pipe(pipedes1);
    if(ret==-1){
        cout<<"Failed to create pipe 1"<<endl;
    }

    ret=pipe(pipedes2);
    if(ret==-1){
        cout<<"Failed to create pipe 1"<<endl;
    }

    if(fork()==0){
        //child
        //closing unwanted ends
        close(pipedes1[1]);
        close(pipedes2[0]);
        read(pipedes1[0],readMessages,sizeof(readMessages));
        cout<<"Reading msg 1 : "<<readMessages<<endl;

        cout<<"Writing msg 2 : "<<writeMessage[1]<<endl;
        write(pipedes2[1],writeMessage[1],sizeof(writeMessage[1]));
    }
    else{
        //parent
        //closing unwanted ends
        close(pipedes1[0]);
        close(pipedes2[1]);

        cout<<"Writing msg 1 : "<<writeMessage[0]<<endl;
        write(pipedes1[1],writeMessage[0],sizeof(writeMessage[0]));

        read(pipedes2[0],readMessages,sizeof(readMessages));  
        cout<<"Reading msg 2 : "<<writeMessage[1]<<endl;  
    }


    return 0;
}