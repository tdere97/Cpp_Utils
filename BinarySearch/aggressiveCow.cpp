#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPosibleSolution(vector<int> &arr,int cows,int mid){
    int cowCount=1;
    int lastPos=arr[0];

    for(int i=0; i<arr.size();i++){
        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==cows)
            {
                return true;
            }
            lastPos=arr[i];
        }
    }
    return false;
}
int binSearch(vector<int> &arr,int cows){

    sort(arr.begin(),arr.end());
    int start=0,mid,end,answer=-1,max1=-1;
    for(int i=0; i<arr.size();i++){
        max1=max(max1,arr[i]);
    }
    end=max1;
    mid=start+(end-start)/2;

    while(start<=end){
        if(isPosibleSolution(arr,cows,mid)){
            answer=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return answer;
}
int main(){
    vector <int> arr={4,2,1,3,6};
    vector <int> arr1={1,2,3};
    int cows=2;
    cout<<"Stall Position Max Distance is : "<< binSearch(arr1,cows)<<endl;
    return 0;
}