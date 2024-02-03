#include<iostream>
using namespace std;
 int pivot(int arr[], int size)
{
    int start=0, end=size-1, mid;
    mid = start+ (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else{
            end =mid;
        }
        mid = start+ (end-start)/2;
    }
    return start;
}
int main(){
    int arr[]={3,8,10,17,1};

    cout<<"pivot occurence is " <<  pivot(arr,5) <<endl;

    return 0;
}