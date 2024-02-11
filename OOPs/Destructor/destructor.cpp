#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A"<<endl;
    }
    ~A(){
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
class C : public virtual A{
    public:
    C(){
        cout<<"C"<<endl;
    }
    ~C(){
        cout<<"~C"<<endl;
    }
};
class D : public B, public C{
    public:
    D(){
        cout<<"D"<<endl;
    }
    ~D(){
        cout<<"~D"<<endl;
    }
};
int main(){
  A* a=new B;
  delete a;
    return 0;
}