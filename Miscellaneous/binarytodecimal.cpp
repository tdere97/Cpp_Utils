#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<endl;

    cout<<"The binary format is :";
    for(int i=31;i>=0;i--){
        int temp=num>>i;
        if(temp&1){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    
cout<<endl;
    return 0;
}