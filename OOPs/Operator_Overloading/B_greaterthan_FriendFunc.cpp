#include<iostream>
using namespace std;
class test2;
class test1{
    int a;
    public:
    void  geta(){
        cout<<"Enter a : ";
        cin>>a;
    }
    friend void operator >(test1,test2);
};
class test2{
    int b;
    public:
    void  getb(){
        cout<<"Enter b : ";
        cin>>b;
    }
    friend void operator >(test1,test2); 
};
void operator >(test1 t1, test2 t2){
    t1.a > t2.b ? cout<<"test1 is greater\n" : cout<<"test2 is greater\n"; 
}
int main(){
    test1 t1;
    test2 t2;
    t1.geta();
    t2.getb();
    t1>t2;

    return 0;
}