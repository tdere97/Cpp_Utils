#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=20;
    int &rv=x;
    rv=y;

    cout<<"x: "<< x <<endl;
    cout<<"rv: "<< rv <<endl;

    cout<<"Address x: "<< &x <<endl;
    cout<<"Address rv: "<< &rv <<endl;

    const int &rv1=100;
    cout<<"rv1: "<< rv1 <<endl;
    cout<<"Address rv1: "<< &rv1 <<endl;
}