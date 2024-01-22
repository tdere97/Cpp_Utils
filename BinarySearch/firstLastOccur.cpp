#include<iostream>
using namespace std;


int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int firstOccurence(int arr[], int size, int key){

    int start=0, end=size-1;
    int mid=start+(end-start)/2;
    int answer=-1;

    while(start<=end){
        if(arr[mid]==key){
            answer=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }    
    return answer;
}
int main(){
    int arr[]={0,1,2,3,3,3,3,3,7,8,9},index;
    cout<<"First occurence is "<< firstOccurence(arr,11,3)<<endl;

    //cout<<"Last occurence is "<< lastOccurence(arr,11,3)<<endl;
    return 0;
}