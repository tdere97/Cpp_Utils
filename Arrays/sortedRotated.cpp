#include<iostream>
#include<vector>
using namespace std;
bool sortedRotatedArray(vector<int> &arr){
    int n=arr.size(),count=0;

    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    return count<=1;
}
int main(){
    vector<int> arr={3,4,5,1,2};
    cout<<"Is rotated and sorted : "<<sortedRotatedArray(arr)<<endl;
    return 0;
}