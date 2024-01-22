#include<iostream>
using namespace std;
int main(){
    int num1=0, num2=1, n, fibnum;
    cout <<"Enter the number of elemets need to be printed from series"<<endl;
    cin>>n;
    cout<<num1<<"\t"<<num2<<"\t";
    for(int i=1;i<n;i++)
    {
        fibnum=num1+num2;
        num1=num2;
        num2=fibnum;
        cout<<fibnum<<"\t";
    }
    cout<<endl;
return 0;

}