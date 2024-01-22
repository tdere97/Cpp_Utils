#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout <<"Enter the n Values"<<endl;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        sum+=i;
    }
    cout<< "sum of n: "<< n <<"number is : "<< sum<<endl; 
    return 0;
}