#include<iostream>
using namespace std;
int main(){
    int sum=0,product=1,num,diff;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<endl;

    int n=num;
    while(n){
        sum=sum+(n%10);
        product=product*(n%10);
        n=n/10;
    }
    diff=product-sum;
    cout<<"Difference is :"<<diff<<endl;
    return 0;
}