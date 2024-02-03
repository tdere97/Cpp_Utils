#include<iostream>
using namespace std;
int MountainPeak(int arr[], int size)
{
    cout<< "Inside the Function" <<endl;
    int start=0, end=size-1, mid;
    mid = start+ (end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1])
        {
            start =mid+1;
        }
        else{
            end=mid;
        }
        mid = start+ (end-start)/2;
    }
    return start;
}
int main(){
    int arr[]={0,1,3,0};
    cout<<"MountainPeak occurence is "<< MountainPeak(arr,4)<<endl;

    //cout<<"Last occurence is "<< lastOccurence(arr,11,3)<<endl;
    return 0;
}