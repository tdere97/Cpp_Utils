#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A"<<endl;
    }
    virtual ~A(){
        cout<<"~A"<<endl;
    }
};
class B : public virtual A{
    public:
    B(){
        cout<<"B"<<endl;
    }
    ~B(){
        cout<<"~B"<<endl;
    }
};

int main(){
  A* a=new B;
  delete a;
    return 0;
}