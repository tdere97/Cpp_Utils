#include<iostream>
using namespace std;
class Increase{
    int val;
    public:
    Increase():val(10){}
    void operator ++ (){
        val=val+5;
    }
    void display(){
        cout<<"Value is : "<<val<<endl;
    }
};
int main(){
    Increase inc;
    ++inc;
    inc.display();
    return 0;
}