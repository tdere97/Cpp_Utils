#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}

int mul(int a, int b){
    return a*b;
}

int sub(int a, int b){
    return a-b;
}

int divi(int a, int b){
    return a/b;
}

int main(){
    int a=20,b=10,result;
    //function pointer
    int (*ptr)(int,int);

    ptr=sum;
    //i.e sum(a,b)
    result=(*ptr)(a,b);
    cout<<"Sum:"<<result<<endl;

    ptr=sub;
    //i.e sub(a,b)
    result=(*ptr)(a,b);
    cout<<"Sub:"<<result<<endl;

    ptr=mul;
    //i.e mul(a,b)
    result=(*ptr)(a,b);
    cout<<"Mul:"<<result<<endl;

    ptr=divi;
    //i.e divi(a,b)
    result=(*ptr)(a,b);
    cout<<"Div:"<<result<<endl;

    return 0;
}