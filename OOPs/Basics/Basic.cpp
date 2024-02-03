#include<iostream>
using namespace std;

class A{
    int x,y;
    public:
    A(){
        cout<<"constructor called"<<endl;
        int x=1,y=2;
        this->x=100;
        this->y=200;
        cout<<x+y<<endl;
        cout<<this->x+this->y<<endl;
    }
    void print(){
        cout<<"X :"<<x<<endl;
        cout<<"Y :"<<y<<endl;
    }
};
int main(){
    A test;
    test.print();
}