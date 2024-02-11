#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
    int pipedes[2],ret;
    char writeMessage[2][10]={"Hi","Hello"},readMessages[10];

    ret=pipe(pipedes);
    if(ret==-1){
        cout<<"Failed to create pipe"<<endl;
    }
    if(fork()==0){
        //child
        read(pipedes[0],readMessages,sizeof(readMessages));
        cout<<"Reading msg 1 : "<<readMessages<<endl;

        read(pipedes[0],readMessages,sizeof(readMessages));
        cout<<"Reading msg 2 : "<<readMessages<<endl;
    }
    else{
        //Parent
        cout<<"Writing msg 1 : "<<writeMessage[0]<<endl;
        write(pipedes[1],writeMessage[0],sizeof(writeMessage[0]));

        cout<<"Writing msg 1 : "<<writeMessage[1]<<endl;
        write(pipedes[1],writeMessage[1],4);
    }

    return 0;
}