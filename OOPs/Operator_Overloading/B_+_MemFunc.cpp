#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    void getdata(){
        cout<<"Enter real part : ";
        cin>>real;
        cout<<"Enter img part : ";
        cin>>img;
    }
    Complex operator +(Complex obj){
        Complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
    void display(){
        cout<<"Complex Number addition is : "<<real<<" + "<<img<<"j"<<endl;
    }

};
int main(){
    Complex c1,c2,res;
    c1.getdata();
    c2.getdata();
    res=c1+c2;
    res.display();
    return 0;
}