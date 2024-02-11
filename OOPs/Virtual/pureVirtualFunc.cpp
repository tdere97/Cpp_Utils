#include<iostream>
using namespace std;
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
class C : public virtual A{
    public:
    void funcvir(){
        cout<<"C"<<endl;
    }
};
class D : public B, public C{
    public:
    void funcvir(){
        cout<<"D"<<endl;
    }
};
int main(){
    B d;
    d.funcvir();
    return 0;
}