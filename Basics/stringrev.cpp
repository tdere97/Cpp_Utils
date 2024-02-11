#include<iostream>
using namespace std;
int main(){
    char str[80], temp[80];
    int j=0,size=0;
    cout<<"Enter the string :";
    cin.getline(str,80);

    for(size=0;str[size]!='\0';size++);

    cout<<"strlen is : "<<size<<endl;
    for(int i=size-1; i>=0; i--){
        temp[j]=str[i];
        j++;
    }
    temp[j]='\0';
    cout<<"rev is : "<<temp<<endl;
    return 0;
}