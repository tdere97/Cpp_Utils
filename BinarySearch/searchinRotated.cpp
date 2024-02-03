#include<iostream>
using namespace std;
 int getPivot(int arr[], int size)
{
    int start=0,end=size-1,mid;
    mid= start+ (end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid= start+ (end-start)/2;
    }
return start;
}
int binSearch(int arr[], int start, int end, int key){
    int mid= start+ (end-start)/2, start1=start, end1=end;
    while(start1<=end1){
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            start1=mid+1;

        }
        else if(key<arr[mid]){
            end1=mid-1;
        }
        mid= start1+ (end1-start1)/2;
    }
    return -1;
}
int searchInRotated(int arr[],int size, int key){
    int start=0,end=size-1,mid;
    mid= start+ (end-start)/2;
    int finalindex;
    int pivot = getPivot(arr,5);
    while(start<end){
        if(key>=arr[pivot] && key<= arr[end]){
            finalindex=binSearch(arr,pivot,end,key);
            return finalindex;
        }
        else{
            finalindex=binSearch(arr,start,pivot-1,key);
            return finalindex;
        }
        mid= start+ (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[]={7,9,1,2,3}, index;


    cout<<"Element is present at :" << searchInRotated(arr,5,2)<<endl;
    return 0;
}