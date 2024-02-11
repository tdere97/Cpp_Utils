#include<iostream>
using namespace std;
class A{
    public:
    A(){
        //cout<<"A"<<endl;
    }
    void afunc(){
        cout<<"A"<<endl;
    }
};
class B : public virtual A{
    public:
    B(){
        //cout<<"B"<<endl;
    }
    void bfunc(){
        cout<<"B"<<endl;
    }
};
class C : public virtual A{
    public:
    C(){
        //cout<<"C"<<endl;
    }
    void cfunc(){
        cout<<"C"<<endl;
    }
};
class D : public B, public C{
    public:
    D(){
        //cout<<"D"<<endl;
    }
    void dfunc(){
        cout<<"D"<<endl;
    }
};
int main(){
    D d;
    d.afunc();
    d.bfunc();
    d.cfunc();
    d.dfunc();

    return 0;
}