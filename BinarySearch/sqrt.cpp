#include<iostream>
using namespace std;

int sqrt(int num){
    int start=0,end=num,mid,answer;
    mid=start+(end-start)/2;
    while(start<=end){
        int square= mid*mid;
        if( square == num){
            return mid;
        }else if(square > num){
            end=mid-1;
        }else if(square < num){
            answer=mid;
            start=mid+1;
        }
            mid=start+(end-start)/2;

    }
    return answer;
}
int main(){
    int num=28;
    cout<<"Sqrt is : "<< sqrt(num)<<endl;
    return 0;
}