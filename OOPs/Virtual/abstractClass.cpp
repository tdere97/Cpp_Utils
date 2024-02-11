#include<iostream>
using namespace std;
//abstract class containign atleast 1 puer virtual function
class A{
    public:
    //pure virtual function
    virtual void funcvir()=0;
};
class B : public virtual A{
    public:
    void funcvir(){
        cout<<"B"<<endl;
    }
};
int main(){
    A a;
    return 0;
}