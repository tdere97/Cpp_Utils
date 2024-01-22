#include<iostream>
using namespace std;
int main(){
    int series,num;
    cout <<"Enter the number"<<endl;
    cin>>series;
    for(int num=1;num<series; num++){
        for(int i=2; i<num; i++){
            if(num%i!=0){
                cout<<num<<"\t";
                break;
            }else{
                break;            
            }
        }
    }
    cout<<endl;
    return 0;
}