#include<iostream>
using namespace std;

class A{
    int x,y;
    public:
    A(): x(12), y(23){
        cout<<"default constructor called"<<endl;
        
    }
    A(A &temp):x(temp.x),y(temp.y){
        cout<<"copy constructor called"<<endl;
    }
    void print(){
        cout<<"X :"<<x<<endl;
        cout<<"Y :"<<y<<endl;
    }
};
int main(){
    A a1;
    a1.x++;
    A a2(a1);
    a1.print();
    a2.print();
}